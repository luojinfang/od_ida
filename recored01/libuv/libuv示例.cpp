/*
loginlogic/Base=05840000    [改]
GF/Base=53150000
AppFramework/Base=0BC80000	[改]
 
PreloginLogic/Base=56DE0000
 

https://www.cnblogs.com/lsgxeva/p/9999135.html



https://www.codedump.info/post/20190123-libuv/
uv_req_t 及其子类
	handler 主要应对一定与某个文件 fd 相关联的事件，除了这些以外，libuv 希望把所有可能导致阻塞的操作全部异步化，
			包括：文件操作、查询域名操作等。这部分需要异步化的流程，全部封装到了 uv_req_t 结构体中。

	每个 uv_req_t 子类中，都有一个类型为struct uv__work的成员：
	 
	struct uv__work {
	  // 工作时回调函数
	  void (*work)(struct uv__work *w);
	  // 工作结束时回调函数
	  void (*done)(struct uv__work *w, int status);
	  // 对应的loop指针
	  struct uv_loop_s* loop;
	  // 工作队列指针
	  void* wq[2];
	};
	最终，每一个 uv_req_t 都会被放到一个线程中进行处理，处理完毕了才回调对应的函数。后面会展开讨论这个流程。

	uv_req_t 有以下子类：

		uv_getaddrinfo_t：用于 getaddrinfo 调用。
		uv_getnameinfo_t：用于 getnameinfo 调用。
		uv_shutdown_t：用于 shutdown 操作。
		uv_write_t：用于写操作。
		uv_connect_t：用于TCP连接。
		uv_udp_send_t ：
		uv_fs_t：用于文件的IO读写请求。
		uv_worker_t：用于向线程提交一个任务。
	除了 uv_worker_t 之外，其它几个操作都有以下的特点：可能会阻塞线程，所以就单独拿出来处理了

//libuv udp  server
//libuv udp  client
//libuv timer 
//libuv async 

//创建 loop实例
//uv_async_init 初始化 async 回调
//创建内存

*/

//------------------------------------------------------------------------------------------
/* Handle types. */
typedef struct uv_loop_s uv_loop_t;
typedef struct uv_handle_s uv_handle_t;
typedef struct uv_stream_s uv_stream_t;
typedef struct uv_tcp_s uv_tcp_t;
typedef struct uv_udp_s uv_udp_t;
typedef struct uv_pipe_s uv_pipe_t;
typedef struct uv_tty_s uv_tty_t;
typedef struct uv_poll_s uv_poll_t;
typedef struct uv_timer_s uv_timer_t;
typedef struct uv_prepare_s uv_prepare_t;
typedef struct uv_check_s uv_check_t;
typedef struct uv_idle_s uv_idle_t;
typedef struct uv_async_s uv_async_t;
typedef struct uv_process_s uv_process_t;
typedef struct uv_fs_event_s uv_fs_event_t;
typedef struct uv_fs_poll_s uv_fs_poll_t;
typedef struct uv_signal_s uv_signal_t;
//------------------
/* The abstract base class of all handles. */
struct uv_handle_s {
  UV_HANDLE_FIELDS
};

//------------------
/* uv_udp_t is a subclass of uv_handle_t. */
struct uv_udp_s {
  UV_HANDLE_FIELDS
  /* read-only */
  /*
   * Number of bytes queued for sending. This field strictly shows how much
   * information is currently queued.
   */
  size_t send_queue_size;
  /*
   * Number of send requests currently in the queue awaiting to be processed.
   */
  size_t send_queue_count;
  UV_UDP_PRIVATE_FIELDS
};

#define UV_HANDLE_FIELDS                                                      \
  /* public */                                                                \
  void* data;                                                                 \
  /* read-only */                                                             \
  uv_loop_t* loop;                                                            \
  uv_handle_type type;                                                        \
  /* private */                                                               \
  uv_close_cb close_cb;                                                       \
  void* handle_queue[2];                                                      \
  union {                                                                     \
    int fd;                                                                   \
    void* reserved[4];                                                        \
  } u;                                                                        \
  UV_HANDLE_PRIVATE_FIELDS                                                    \


#define UV_HANDLE_PRIVATE_FIELDS                                              \
  uv_handle_t* endgame_next;                                                  \
  unsigned int flags;


#define UV_UDP_PRIVATE_FIELDS                                                 \
  SOCKET socket;                                                              \
  unsigned int reqs_pending;                                                  \
  int activecnt;                                                              \
  uv_req_t recv_req;                                                          \
  uv_buf_t recv_buffer;                                                       \
  struct sockaddr_storage recv_from;                                          \
  int recv_from_len;                                                          \
  uv_udp_recv_cb recv_cb;                                                     \
  uv_alloc_cb alloc_cb;                                                       \
  LPFN_WSARECV func_wsarecv;                                                  \
  LPFN_WSARECVFROM func_wsarecvfrom;



//------------------

struct uv_async_s {
  UV_HANDLE_FIELDS
  UV_ASYNC_PRIVATE_FIELDS
};

#define UV_ASYNC_PRIVATE_FIELDS                                               \
  struct uv_req_s async_req;                                                  \
  uv_async_cb async_cb;                                                       \
  /* char to avoid alignment issues */                                        \
  char volatile async_sent;


//------------------



//------------------------------------------------------
/* Request types. */
typedef struct uv_req_s uv_req_t;
typedef struct uv_getaddrinfo_s uv_getaddrinfo_t;
typedef struct uv_getnameinfo_s uv_getnameinfo_t;
typedef struct uv_shutdown_s uv_shutdown_t;
typedef struct uv_write_s uv_write_t;
typedef struct uv_connect_s uv_connect_t;
typedef struct uv_udp_send_s uv_udp_send_t;
typedef struct uv_fs_s uv_fs_t;
typedef struct uv_work_s uv_work_t;
//------------------
/* Abstract base class of all requests. */
struct uv_req_s {
  UV_REQ_FIELDS
};
//------------------
/* uv_udp_send_t is a subclass of uv_req_t. */
struct uv_udp_send_s {
  UV_REQ_FIELDS
  uv_udp_t* handle;
  uv_udp_send_cb cb;
  UV_UDP_SEND_PRIVATE_FIELDS
};
//------------------
#define UV_REQ_FIELDS                                                         \
  /* public */                                                                \
  void* data;                                                                 \
  /* read-only */                                                             \
  uv_req_type type;                                                           \
  /* private */                                                               \
  void* reserved[6];                                                          \
  UV_REQ_PRIVATE_FIELDS                                                       \
  
 //------------------ 
  #define UV_UDP_SEND_PRIVATE_FIELDS                                            \
  /* empty */
  
//------------------

#define UV_REQ_PRIVATE_FIELDS                                                 \
  union {                                                                     \
    /* Used by I/O operations */                                              \
    struct {                                                                  \
      OVERLAPPED overlapped;                                                  \
      size_t queued_bytes;                                                    \
    } io;                                                                     \
  } u;                                                                        \
  struct uv_req_s* next_req;
//------------------





//------------------------------------------------------------------------------------------------------------







//==================================================================================================================================
//libuv udp  server

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#include "uv.h"
 
static uv_loop_t* event_loop = NULL;
static uv_udp_t server;
 
static void
uv_alloc_buf(uv_handle_t* handle,
				size_t suggested_size,
				uv_buf_t* buf) {
	if (handle->data != NULL) {
		free(handle->data);
		handle->data = NULL;
	}
 
	handle->data = malloc(suggested_size + 1);
	buf->base = handle->data;
	buf->len = suggested_size;
}
 
static void 
on_uv_udp_send_end(uv_udp_send_t* req, int status) {
	if (status == 0) {
		printf("send success\n");
	}
	free(req);
}
 
static void
after_uv_udp_recv(uv_udp_t* handle,
					ssize_t nread,
					const uv_buf_t* buf,
					const struct sockaddr* addr,
					unsigned flags) {
 
	// 收数据
	char ip_addr[128];
	uv_ip4_name((struct sockaddr_in*)addr, ip_addr, 128);
	int port = ntohs(((struct sockaddr_in*)addr)->sin_port);
	printf("ip: %s:%d nread = %d\n", ip_addr, port, nread);
 
	char* str_buf = handle->data;
	str_buf[nread] = 0;
	printf("recv %s\n", str_buf);
 
	// 写数据
	uv_buf_t w_buf = uv_buf_init("PING", 4);
	uv_udp_send_t* req = malloc(sizeof(uv_udp_send_t));
	uv_udp_send(req, handle, &w_buf,1, addr, on_uv_udp_send_end);
}
 
int main(int argc, char** argv) {
	event_loop = uv_default_loop();
	memset(&server, 0, sizeof(uv_udp_t));
 
	uv_udp_init(event_loop, &server);
 
	struct sockaddr_in addr;
	uv_ip4_addr("0.0.0.0", 6080, &addr);
	uv_udp_bind(&server, (const struct sockaddr*)&addr, 0);
 
	// 告诉事件循环，要帮我管理recv事件
	uv_udp_recv_start(&server, uv_alloc_buf, after_uv_udp_recv);
	uv_run(event_loop, UV_RUN_DEFAULT);
 
	system("pause");
	return 0;
}
 
 
 
 
 
 
//==================================================================================================================================
//libuv udp  client
 

 #include "uv.h"
 #include "task.h"
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 static uv_udp_t client;
 
 static uv_loop_t *loop;
 
 static void alloc_cb(uv_handle_t* handle,
     size_t suggested_size,
     uv_buf_t* buf) 
 {
     static char slab[65536];
     buf->base = slab;
     buf->len = sizeof(slab);
 }
 
 static void close_cb(uv_handle_t* handle) 
 {
     uv_is_closing(handle);
 }
 
 static void cl_recv_cb(uv_udp_t* handle,
     ssize_t nread,
     const uv_buf_t* buf,
     const struct sockaddr* addr,
     unsigned flags) 
 {
     if (nread < 0) 
     {
 
     }
 
     if (nread == 0) 
     {
         return;
     }
 
     printf("I receive the message from server:%s\n", buf->base);
     
     uv_close((uv_handle_t*) handle, close_cb);
 }
 
 
 static void cl_send_cb(uv_udp_send_t* req, int status) 
 {   
     uv_udp_recv_start(req->handle, alloc_cb, cl_recv_cb);
 }
 
 int main(void) 
 {
     struct sockaddr_in addr;    
     uv_udp_send_t req;
     uv_buf_t buf;
     int r;
     
     loop = uv_default_loop();
        
     r = uv_ip4_addr("0.0.0.0", 0, &addr);  
     r = uv_udp_init(loop, &client);   
     r = uv_udp_bind(&client, (const struct sockaddr*) &addr, 0);  
     r = uv_udp_set_broadcast(&client, 1);
     uv_ip4_addr("255.255.255.255", 8899, &addr); 
     buf = uv_buf_init("PING", 4);
     printf("I am sending message to server:%s.\n", buf.base);         
     uv_udp_send(&req,
         &client,
         &buf,
         1,
         (const struct sockaddr*) &addr,
         cl_send_cb);    
 
     uv_run(loop, UV_RUN_DEFAULT);
 
     return 0;
 }
 


//==================================================================================================================================
//libuv timer 
 

#ifdef _WIN32 
#include <vld.h>
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"Iphlpapi.lib")
#pragma comment(lib,"Psapi.lib")
#endif
 
#include <stdio.h>
#include <iostream>
#include <uv.h>
 
using namespace std;
 
int repeat = 0;
static int repeatCount = 10;
 
static void callback(uv_timer_t *handle) {
	repeat = repeat + 1;
	if (repeatCount == repeat) {
		uv_timer_stop(handle);
		//用完一定要调用uv_close,不然会内存泄露
		uv_close((uv_handle_t*)handle, NULL);
	}
}
 
 
int main() {
	uv_loop_t *loop = uv_default_loop();
 
	uv_timer_t timer_req;
 
	uv_timer_init(loop, &timer_req);
 
	uv_timer_start(&timer_req, callback, 1000, repeatCount);
 
	return uv_run(loop, UV_RUN_DEFAULT);
}
 
//==================================================================================================================================
//INLINE static void uv_insert_pending_req(uv_loop_t* loop, uv_req_t* req)   // pending_reqs_tail 添加 
//libuv


//init handle
int uv_udp_init(uv_loop_t* loop, uv_udp_t* handle) {
  return uv_udp_init_ex(loop, handle, AF_UNSPEC);
}


int uv_udp_init_ex(uv_loop_t* loop, uv_udp_t* handle, unsigned int flags) {
  int domain;

  /* Use the lower 8 bits for the domain */
  domain = flags & 0xFF;
  if (domain != AF_INET && domain != AF_INET6 && domain != AF_UNSPEC)
    return UV_EINVAL;

  if (flags & ~0xFF)
    return UV_EINVAL;

  uv__handle_init(loop, (uv_handle_t*) handle, UV_UDP);
  handle->socket = INVALID_SOCKET;
  handle->reqs_pending = 0;
  handle->activecnt = 0;
  handle->func_wsarecv = WSARecv;
  handle->func_wsarecvfrom = WSARecvFrom;
  handle->send_queue_size = 0;
  handle->send_queue_count = 0;
  UV_REQ_INIT(&handle->recv_req, UV_UDP_RECV);
  handle->recv_req.data = handle;

  /* If anything fails beyond this point we need to remove the handle from
   * the handle queue, since it was added by uv__handle_init.
   */

  if (domain != AF_UNSPEC) {
    SOCKET sock;
    DWORD err;

    sock = socket(domain, SOCK_DGRAM, 0);
    if (sock == INVALID_SOCKET) {
      err = WSAGetLastError();
      QUEUE_REMOVE(&handle->handle_queue);
      return uv_translate_sys_error(err);
    }

    err = uv_udp_set_socket(handle->loop, handle, sock, domain);
    if (err) {
      closesocket(sock);
      QUEUE_REMOVE(&handle->handle_queue);
      return uv_translate_sys_error(err);
    }
  }

  return 0;
}


//----------------
int uv_udp_send(uv_udp_send_t* req,
                uv_udp_t* handle,
                const uv_buf_t bufs[],
                unsigned int nbufs,
                const struct sockaddr* addr,
                uv_udp_send_cb send_cb) {
  unsigned int addrlen;

  if (handle->type != UV_UDP)
    return UV_EINVAL;

  if (addr->sa_family == AF_INET)
    addrlen = sizeof(struct sockaddr_in);
  else if (addr->sa_family == AF_INET6)
    addrlen = sizeof(struct sockaddr_in6);
  else
    return UV_EINVAL;

  return uv__udp_send(req, handle, bufs, nbufs, addr, addrlen, send_cb);
}


/* This function is an egress point, i.e. it returns libuv errors rather than
 * system errors.
 */
int uv__udp_send(uv_udp_send_t* req,
                 uv_udp_t* handle,
                 const uv_buf_t bufs[],
                 unsigned int nbufs,
                 const struct sockaddr* addr,
                 unsigned int addrlen,
                 uv_udp_send_cb send_cb) {
  const struct sockaddr* bind_addr;
  int err;

  if (!(handle->flags & UV_HANDLE_BOUND)) {
    if (addrlen == sizeof(uv_addr_ip4_any_))
      bind_addr = (const struct sockaddr*) &uv_addr_ip4_any_;
    else if (addrlen == sizeof(uv_addr_ip6_any_))
      bind_addr = (const struct sockaddr*) &uv_addr_ip6_any_;
    else
      return UV_EINVAL;
    err = uv_udp_maybe_bind(handle, bind_addr, addrlen, 0);
    if (err)
      return uv_translate_sys_error(err);
  }

  err = uv__send(req, handle, bufs, nbufs, addr, addrlen, send_cb);
  if (err)
    return uv_translate_sys_error(err);

  return 0;
}

static int uv__send(uv_udp_send_t* req,
                    uv_udp_t* handle,
                    const uv_buf_t bufs[],
                    unsigned int nbufs,
                    const struct sockaddr* addr,
                    unsigned int addrlen,
                    uv_udp_send_cb cb) {
  uv_loop_t* loop = handle->loop;
  DWORD result, bytes;

  UV_REQ_INIT(req, UV_UDP_SEND);  //----->
  req->handle = handle;
  req->cb = cb;
  memset(&req->u.io.overlapped, 0, sizeof(req->u.io.overlapped));

  result = WSASendTo(handle->socket,
                     (WSABUF*)bufs,
                     nbufs,
                     &bytes,
                     0,
                     addr,
                     addrlen,
                     &req->u.io.overlapped,
                     NULL);

  if (UV_SUCCEEDED_WITHOUT_IOCP(result == 0)) {
    /* Request completed immediately. */
    req->u.io.queued_bytes = 0;
    handle->reqs_pending++;
    handle->send_queue_size += req->u.io.queued_bytes;
    handle->send_queue_count++;
    REGISTER_HANDLE_REQ(loop, handle, req);
    uv_insert_pending_req(loop, (uv_req_t*)req);
  } else if (UV_SUCCEEDED_WITH_IOCP(result == 0)) {
    /* Request queued by the kernel. */
    req->u.io.queued_bytes = uv__count_bufs(bufs, nbufs);
    handle->reqs_pending++;
    handle->send_queue_size += req->u.io.queued_bytes;
    handle->send_queue_count++;
    REGISTER_HANDLE_REQ(loop, handle, req);
  } else {
    /* Send failed due to an error. */
    return WSAGetLastError();
  }

  return 0;
}

//设置 req 状态状标识?
# define UV_REQ_INIT(req, typ)                                                \
  do {                                                                        \
    (req)->type = (typ);                                                      \
    (req)->u.io.overlapped.Internal = 0;  /* SET_REQ_SUCCESS() */             \
  }                                                                           \


#define REGISTER_HANDLE_REQ(loop, handle, req)                          \
  do {                                                                  \
    INCREASE_ACTIVE_COUNT((loop), (handle));                            \
    uv__req_register((loop), (req));                                    \
  } while (0)


#define INCREASE_ACTIVE_COUNT(loop, handle)                             \
  do {                                                                  \
    if ((handle)->activecnt++ == 0) {                                   \
      uv__handle_start((handle));                                       \
    }                                                                   \
    assert((handle)->activecnt > 0);                                    \
  } while (0)

#define uv__req_register(loop, req)                                           \
  do {                                                                        \
    (loop)->active_reqs.count++;                                              \
  }                                                                           \
  while (0)


//----------------


//==================================================================================================================================
//libuv async 
//https://blog.csdn.net/paohui0134/article/details/51647648
//https://blog.csdn.net/qq_35886593/article/details/88898432
//PostQueuedCompletionStatus / GetQueuedCompletionStatus
//uv_async_init
//uv_async_send


//----------------
OVERLAPPED 是一个包含了用于异步输入输出的信息的结构体
第一种声明
	typedef struct _OVERLAPPED {
		　　DWORD Internal;
		　　DWORD InternalHigh;
		　　DWORD Offset;
		　　DWORD OffsetHigh;
		　　HANDLE hEvent;
	　　} OVERLAPPED
参数说明
	Internal: 预留给操作系统使用。它指定一个独立于系统的状态,当GetOverlappedResult函数返回时没有设置扩展错误信息ERROR_IO_PENDING时有效。
	InternalHigh: 预留给操作系统使用。它指定长度的数据转移,当GetOverlappedResult函数返回TRUE时有效。
	Offset: 该文件的位置是从文件起始处的字节偏移量。调用进程设置这个成员之前调用ReadFile或WriteFile函数。当读取或写入命名管道和通信设备时这个成员被忽略设为零。
	OffsetHigh: 指定文件传送的字节偏移量的高位字。当读取或写入命名管道和通信设备时这个成员被忽略设为零。
	hEvent: 在转移完成时处理一个事件设置为有信号状态。调用进程集这个成员在调用ReadFile、 WriteFile、TransactNamedPipe、 ConnectNamedPipe函数之前。
第二种声明
	typedef struct _OVERLAPPED {
		ULONG_PTR Internal; //操作系统保留，指出一个和系统相关的状态
		ULONG_PTR InternalHigh; //指出发送或接收的数据长度
		union {
			struct {
				DWORD Offset; //文件传送的字节偏移量的低位字
				DWORD OffsetHigh; //文件传送的字节偏移量的高位字
			};
			PVOID Pointer; //指针，指向文件传送位置
		};
		HANDLE hEvent; //指定一个I/O操作完成后触发的事件
	} OVERLAPPED, *LPOVERLAPPED;
	
	
//----------------
	typedef struct _OVERLAPPEDPLUS
	{
		OVERLAPPED ol;
		SOCKET s, sclient;
		int OpCode;
		WSABUF wbuf;
		DWORD dwBytes, dwFlags;
	} OVERLAPPEDPLUS;
	调用函数， GetQueuedCompletionStatus(hIocp, &dwBytesXfered,(PULONG_PTR)&PerHandleKey, &Overlap, INFINITE); 最后一个参数为等待时间，为INFINITE时直至有信号返回。
	函数返回后，一般使用 OverlapPlus = CONTAINING_RECORD(Overlap, OVERLAPPEDPLUS, ol) 得到一些信息。这是一个宏，查找Overlap在哪个OVERLAPPEDPLUS结构体的ol元素中，并返回这个结构体的指针。我们在设计结构体的时候，一般加入重叠结构，操作类型，这样就可以判断这个重叠结构对应的是哪一个操作。
Overlap->OpCode,操作类型是在投递WSASend,WSARecv的时候，由你自己指定填充这个字段。
因为是非堵塞的，等于投递到与套接字相关联的完成端口上，系统会把把WSASend对应的缓冲区提交到底层缓冲，也可以把WSARecv投递的缓冲区，用接收到的数据填充，每一个WSASend，WSARecv，都应有新申请一个overlaspped plus结构提交，以存放本次投递的IO操作的相关数据，——单IO操作数据所以工作器线程中，从完成端口队列中get得到一个完成包的时候，可以根据单句柄数据知道在这个完成端口上是哪一个套接字投递的IO操作完成了，从get到的overlapped中得到相关的已经完成IO数据和信息，并作相应的处理。比如投递了1M，完成包却告知只完成512K，那么你就知道要把余下的512K继续投递WSASend,当然上一个WSASend的Overlapped这个时候可以重用到下一个WSASend中，这个是允许的，可以用一个字段存放全部1M，把余下未Send成功512k放到wbuf中，继续投递或者投递WSARecv1M数据，却收到一个512K的完成通知，那么你要继续投递WSARecv，当然前一个WSARecv的overlapped也可以重用，不过需要一些处理，把已经接收到的512K保存到某个字段中，再投递一个512K的请求去接收完成端口内部，对投递的Overlapped的填充，好像只有WSARecv的时候填充WSABUF,其他都是投递IO前，代码中显式填充，并投递的。至于完成了多少个字节，是在lpNumberOfBytes中得到。
对GetQueuedCompletionStatus函数解释：
实现从指定的IOCP获取CP。当CP队列为空时，对此函数的调用将被阻塞，而不是一直等待I/O的完成。当CP队列不为空时，被阻塞的线程将以后进先出（LIFO）顺序被释放。对于IOCP机制，它允许多线程并发调用GetQueuedCompletionStatus函数，最大并发数是在调用CreateIoCompletionPort函数时指定的，超出最大并发数的调用线程，将被阻塞


INLINE static uv_req_t* uv_overlapped_to_req(OVERLAPPED* overlapped) {
  return CONTAINING_RECORD(overlapped, uv_req_t, u.io.overlapped);
}


uv__poll() => {
	
	success = GetQueuedCompletionStatusEx(loop->iocp,
                                          overlappeds,
                                          ARRAY_SIZE(overlappeds),
                                          &count,
                                          timeout,
                                          FALSE);

    if (success) {
      for (i = 0; i < count; i++) {
        /* Package was dequeued, but see if it is not a empty package
         * meant only to wake us up.
         */
        if (overlappeds[i].lpOverlapped) {
          req = uv_overlapped_to_req(overlappeds[i].lpOverlapped); //-----------------> 通过 lpOverlapped 找到对应的 req; (此时的 req 就相当于 libuv 定义的 OVERLAPPEDPLUS )
          uv_insert_pending_req(loop, req);
        }
      }
	}
}

INLINE static void uv_insert_pending_req(uv_loop_t* loop, uv_req_t* req) {
  req->next_req = NULL;
  if (loop->pending_reqs_tail) {
#ifdef _DEBUG
    /* Ensure the request is not already in the queue, or the queue
     * will get corrupted.
     */
    uv_req_t* current = loop->pending_reqs_tail;
    do {
      assert(req != current);
      current = current->next_req;
    } while(current != loop->pending_reqs_tail);
#endif

    req->next_req = loop->pending_reqs_tail->next_req;
    loop->pending_reqs_tail->next_req = req;
    loop->pending_reqs_tail = req;
  } else {
    req->next_req = req;
    loop->pending_reqs_tail = req;
  }
}
 
//----------------
int uv_async_init(uv_loop_t* loop, uv_async_t* handle, uv_async_cb async_cb) 
{
  uv_req_t* req;
  //初始化handle,将handle与传入的loop联系起来，并添加到 loop 的handle队列中
  uv__handle_init(loop, (uv_handle_t*) handle, UV_ASYNC);

  handle->async_sent = 0;//初始化为0
  handle->async_cb = async_cb;

  req = &handle->async_req;
  uv_req_init(loop, req);//初始化请求
  req->type = UV_WAKEUP;//类型为wakeup
  req->data = handle;
  //激活handle，状态变为UV__HANDLE_ACTIVE，loop活动handle计数加一
  uv__handle_start(handle);

  return 0;
}



// uv_async_t 是我们要用的 handle，这个 handle 用来在线程间通信的。
// 也就是说配合 uv_async_send，可以唤醒持有async的消息队列，并调用async的回调，而且这个是可以跨线程的
// 只保证 uv_async_send 调用一次之后，callback 也必然至少调用一次，但是因为是很多线程可以同时发送唤醒消息，所以，也可能被多次调用 
int uv_async_send(uv_async_t* handle) 
{
  uv_loop_t* loop = handle->loop;

  if (handle->type != UV_ASYNC) {
    /* Can't set errno because that's not thread-safe. */
    return -1;
  }

  //用户必须保证发送的uv_async_t不是关闭或正在关闭状态
  assert(!(handle->flags & UV__HANDLE_CLOSING));

  //原子方式改变async_sent，这样就实现了多次调用 send 发送同一个 uv_async_t，在回调调用一次之前，不会多次调用
  if (!uv__atomic_exchange_set(&handle->async_sent)) //函数返回async_sent原来的值，并将其
                                                     //设置为1
  {
    //POST_COMPLETION_FOR_REQ(loop, &handle->async_req);展开：
    //向iocp端口发送事件
    if (!PostQueuedCompletionStatus((loop)->iocp,                        
                                  0,                                   
                                  0,                                   
                                  &((req)->u.io.overlapped))) 
    {         
      uv_fatal_error(GetLastError(), "PostQueuedCompletionStatus");       
    }
  }

  return 0;
}


uv_run 对于 wakeup 类型请求的处理（通过 uv_process_reqs 函数）
uv_run 在i/o轮询是会获取到 send 发送的事件，并将 uv_async_t 内部的请求添加到 loop 的 pending_reqs_tail 列表。

//遍历每一个请求做处理
...
switch (req->type) {
  ...
  case UV_WAKEUP:
        uv_process_async_wakeup_req(loop, (uv_async_t*) req->data, req);
        break;
...
 
void uv_process_async_wakeup_req(uv_loop_t* loop, uv_async_t* handle,
    uv_req_t* req) 
{
  assert(handle->type == UV_ASYNC);
  assert(req->type == UV_WAKEUP);
  //还原标记为0
  handle->async_sent = 0;

  //如果handle正在关闭（调用了uv_close），将handle加入关闭handle队列，不再调用回调函数
  if (handle->flags & UV__HANDLE_CLOSING) {
    uv_want_endgame(loop, (uv_handle_t*)handle);
  } else if (handle->async_cb != NULL) {
    handle->async_cb(handle);//调用回调
  }
}
//----------------
 




//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

