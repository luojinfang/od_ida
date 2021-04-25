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
 


//----------------

//[1]
Address  To       From     Siz Comment                Party 
0019EF48 52AF5A66 55EDA5C0 30  libuv.55EDA5C0         User //uv_async_send
0019EF78 52AF50D7 52AF5A66 3C  arksocket.52AF5A66     User
0019EFB4 52AF14A7 52AF50D7 20  arksocket.52AF50D7     User
0019EFD4 52AF162F 52AF14A7 38  arksocket.52AF14A7     User
0019F00C 56DF6DC8 52AF162F 50  arksocket.52AF162F     User
0019F05C 56E59CCC 56DF6DC8 38  preloginlogic.56DF6DC8 User
0019F094 54D60C1C 56E59CCC 40  preloginlogic.56E59CCC User
0019F0D4 54D5C69D 54D60C1C 28  im.54D60C1C            User
0019F0FC 54C98AC4 54D5C69D C4  im.54D5C69D            User
0019F1C0 54C99727 54C98AC4 8C  im.54C98AC4            User
0019F24C 54B196FC 54C99727 20  im.54C99727            User
0019F26C 54B22591 54B196FC 40  im.54B196FC            User
0019F2AC 51B224EE 54B22591 28  im.54B22591            User
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE     User
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591     User
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF     User //AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
0019F340 51B2207A 51B24321 24  asynctask.51B24321     User //AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User //AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 759F6359 00403365 10  qq.00403365            System
0019FF84 77808944 759F6359 5C  kernel32.759F6359      System
0019FFE0 77808914 77808944 10  ntdll.77808944         System
0019FFF0 00000000 77808914     ntdll.77808914         User


//[2]
Address  To       From     Siz Comment                Party 
0019EE9C 52AF5A66 55EDA5C0 30  libuv.55EDA5C0         User //uv_async_send
0019EECC 52AF50D7 52AF5A66 3C  arksocket.52AF5A66     User
0019EF08 52AF14A7 52AF50D7 20  arksocket.52AF50D7     User
0019EF28 52AF162F 52AF14A7 38  arksocket.52AF14A7     User
0019EF60 56DF6DC8 52AF162F 50  arksocket.52AF162F     User
0019EFB0 56E59CCC 56DF6DC8 38  preloginlogic.56DF6DC8 User
0019EFE8 56E5444A 56E59CCC 28  preloginlogic.56E59CCC User
0019F010 56E55DFF 56E5444A 14  preloginlogic.56E5444A User
0019F024 56DE26C6 56E55DFF 10  preloginlogic.56E55DFF User
0019F034 523E11D8 56DE26C6 98  preloginlogic.56DE26C6 User
0019F0CC 523DEDFD 523E11D8 28  common.523E11D8        User
0019F0F4 771847AB 523DEDFD 2C  common.523DEDFD        System
0019F120 771652AC 771847AB E4  user32.771847AB        System
0019F204 771643FE 771652AC 74  user32.771652AC        System
0019F278 771641E0 771643FE C   user32.771643FE        System
0019F284 51B24578 771641E0 18  user32.771641E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User	//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User //AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User //AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 759F6359 00403365 10  qq.00403365            System
0019FF84 77808944 759F6359 5C  kernel32.759F6359      System
0019FFE0 77808914 77808944 10  ntdll.77808944         System
0019FFF0 00000000 77808914     ntdll.77808914         User







//==================================================================================================================================
//调用uv_async_init
 线程 ID  地址       返回到      返回自      大小  注释                        方   
9356                                                            
       0019E54C 55EDACC8 55EDA4E0 24  libuv._uv_async_init      用户模块
       0019E570 52AF5502 55EDACC8 38  libuv.uv_loop_init+1F8    用户模块
       0019E5A8 56E2E16F 52AF5502 48C arksocket.52AF5502        用户模块
       0019EA34 0C210B00 56E2E16F 44  preloginlogic.56E2E16F    用户模块
       0019EA78 0C210C5F 0C210B00 64  appframework.0C210B00     用户模块
       0019EADC 0C210F7E 0C210C5F 18  appframework.0C210C5F     用户模块
       0019EAF4 0C12D830 0C210F7E 18  appframework.0C210F7E     用户模块
       0019EB0C 532A9720 0C12D830 84  appframework.0C12D830     用户模块
       0019EB90 5319C864 532A9720 10  gf.532A9720               用户模块
       0019EBA0 05763518 5319C864 18  gf.5319C864               用户模块
       0019EBB8 0576138B 05763518 20  loginlogic.05763518       用户模块
       0019EBD8 0576B191 0576138B 4C8 loginlogic.0576138B       用户模块
       0019F0A0 0576D6D1 0576B191 24  loginlogic.0576B191       用户模块
       0019F0C4 0576D0A9 0576D6D1 10  loginlogic.0576D6D1       用户模块
       0019F0D4 0576D3FD 0576D0A9 28  loginlogic.0576D0A9       用户模块
       0019F0FC 0576EC6A 0576D3FD 20  loginlogic.0576D3FD       用户模块
       0019F11C 0576EB3E 0576EC6A 20  loginlogic.0576EC6A       用户模块
       0019F13C 767C5CAB 0576EB3E 2C  loginlogic.0576EB3E       系统模块
       0019F168 767B67BC 767C5CAB E4  user32.767C5CAB           系统模块
       0019F24C 767B58FB 767B67BC 74  user32.767B67BC           系统模块
       0019F2C0 767B56D0 767B58FB C   user32.767B58FB           系统模块
       0019F2CC 51B24578 767B56D0 18  user32.767B56D0           用户模块
       0019F2E4 51B244FB 51B24578 30  asynctask.51B24578        用户模块
       0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB        用户模块
       0019F340 51B2207A 51B2437C 24  asynctask.51B2437C        用户模块
       0019F364 53920B86 51B2207A 69C asynctask.51B2207A        用户模块
       0019FA00 53927E8B 53920B86 80  hummerengine.53920B86     用户模块
       0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B     用户模块
       0019FF1C 004012C6 0040289B C   qq.0040289B               用户模块
       0019FF28 00403365 004012C6 4C  qq.004012C6               用户模块
       0019FF74 758B0419 00403365 10  qq.00403365               系统模块
       0019FF84 778866DD 758B0419 5C  kernel32.758B0419         系统模块
       0019FFE0 778866AD 778866DD 10  ntdll.778866DD            系统模块
       0019FFF0 00000000 778866AD     ntdll.778866AD            用户模块

线程 ID  地址       返回到      返回自      大小  注释                        方   
110508                                                          
       0DA4FECC 52AF55D3 55EDA4E0 38  libuv._uv_async_init      用户模块
       0DA4FF04 55EF3370 52AF55D3 28  arksocket.52AF55D3        用户模块
       0DA4FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70 系统模块
       0DA4FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2        系统模块
       0DA4FF84 778866DD 758B0419 5C  kernel32.758B0419         系统模块
       0DA4FFE0 778866AD 778866DD 10  ntdll.778866DD            系统模块
       0DA4FFF0 00000000 778866AD     ntdll.778866AD            用户模块
	   
	   
线程 ID  地址       返回到      返回自      大小  注释                        方   
110508                                                          
       0DA4FEB8 52AF55EB 55EDA4E0 4C  libuv._uv_async_init      用户模块
       0DA4FF04 55EF3370 52AF55EB 28  arksocket.52AF55EB        用户模块
       0DA4FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70 系统模块
       0DA4FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2        系统模块
       0DA4FF84 778866DD 758B0419 5C  kernel32.758B0419         系统模块
       0DA4FFE0 778866AD 778866DD 10  ntdll.778866DD            系统模块
       0DA4FFF0 00000000 778866AD     ntdll.778866AD            用户模块
	   
线程 ID  地址       返回到      返回自      大小  注释                        方   
110508                                                          
       0DA4FECC 52AF5633 55EDA4E0 38  libuv._uv_async_init      用户模块
       0DA4FF04 55EF3370 52AF5633 28  arksocket.52AF5633        用户模块
       0DA4FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70 系统模块
       0DA4FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2        系统模块
       0DA4FF84 778866DD 758B0419 5C  kernel32.758B0419         系统模块
       0DA4FFE0 778866AD 778866DD 10  ntdll.778866DD            系统模块
       0DA4FFF0 00000000 778866AD     ntdll.778866AD            用户模块






//--------------------------------------------------

线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FDF4 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FE18 51A90B52 51A8C3ED 18  arkhttpclient.51A8C3ED               用户模块
       0509FE30 51A910D9 51A90B52 1C  arkhttpclient.51A90B52               用户模块
       0509FE4C 51A8C563 51A910D9 1C  arkhttpclient.51A910D9               用户模块
       0509FE68 55EDA90D 51A8C563 10  arkhttpclient.51A8C563               用户模块
       0509FE78 55EDBD7B 55EDA90D 3C  libuv.uv_process_async_wakeup_req+8D 用户模块
       0509FEB4 55EDAEB4 55EDBD7B 18  libuv.$LN50+13                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块	   
	   
线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FDE0 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FE04 51A887E5 51A8C3ED 18  arkhttpclient.51A8C3ED               用户模块
       0509FE1C 51A907AF 51A887E5 10  arkhttpclient.51A887E5               用户模块
       0509FE2C 51A90D24 51A907AF 2C  arkhttpclient.51A907AF               用户模块
       0509FE58 51A8C427 51A90D24 10  arkhttpclient.51A90D24               用户模块
       0509FE68 55EDA90D 51A8C427 10  arkhttpclient.51A8C427               用户模块
       0509FE78 55EDBD7B 55EDA90D 3C  libuv.uv_process_async_wakeup_req+8D 用户模块
       0509FEB4 55EDAEB4 55EDBD7B 18  libuv.$LN50+13                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块	   
	   
线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FD94 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FDB8 51A82EC2 51A8C3ED 30  arkhttpclient.51A8C3ED               用户模块
       0509FDE8 51A88B2B 51A82EC2 28  arkhttpclient.51A82EC2               用户模块
       0509FE10 55ED4D18 51A88B2B 18  arkhttpclient.51A88B2B               用户模块
       0509FE28 55ED4544 55ED4D18 40  libuv.uv__queue_done+78              用户模块
       0509FE68 55EDA90D 55ED4544 10  libuv.uv__work_done+1E4              用户模块
       0509FE78 55EDBD7B 55EDA90D 3C  libuv.uv_process_async_wakeup_req+8D 用户模块
       0509FEB4 55EDAEB4 55EDBD7B 18  libuv.$LN50+13                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块	  


线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FDF8 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FE1C 51A92DEC 51A8C3ED 14  arkhttpclient.51A8C3ED               用户模块
       0509FE30 51A83122 51A92DEC 28  arkhttpclient.51A92DEC               用户模块
       0509FE58 51A8C427 51A83122 10  arkhttpclient.51A83122               用户模块
       0509FE68 55EDA90D 51A8C427 10  arkhttpclient.51A8C427               用户模块
       0509FE78 55EDBD7B 55EDA90D 3C  libuv.uv_process_async_wakeup_req+8D 用户模块
       0509FEB4 55EDAEB4 55EDBD7B 18  libuv.$LN50+13                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块
	   
	   
线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FCC4 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FCE8 51A8E6CD 51A8C3ED 14  arkhttpclient.51A8C3ED               用户模块
       0509FCFC 51A833BF 51A8E6CD 18  arkhttpclient.51A8E6CD               用户模块
       0509FD14 51A83391 51A833BF 18  arkhttpclient.51A833BF               用户模块
       0509FD2C 51A92CFA 51A83391 B0  arkhttpclient.51A83391               用户模块
       0509FDDC 51A93849 51A92CFA 80  arkhttpclient.51A92CFA               用户模块
       0509FE5C 55EFEB92 51A93849 1C  arkhttpclient.51A93849               用户模块
       0509FE78 55EDBC7F 55EFEB92 3C  libuv.uv_process_tcp_connect_req+1E2 用户模块
       0509FEB4 55EDAEB4 55EDBC7F 18  libuv.$LN23+34                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块	   


线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FD94 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FDB8 51A8EABE 51A8C3ED 14  arkhttpclient.51A8C3ED               用户模块
       0509FDCC 51A85716 51A8EABE 2C  arkhttpclient.51A8EABE               用户模块
       0509FDF8 51A85CC5 51A85716 18  arkhttpclient.51A85716               用户模块
       0509FE10 55ED4D18 51A85CC5 18  arkhttpclient.51A85CC5               用户模块
       0509FE28 55ED4544 55ED4D18 40  libuv.uv__queue_done+78              用户模块
       0509FE68 55EDA90D 55ED4544 10  libuv.uv__work_done+1E4              用户模块
       0509FE78 55EDBD7B 55EDA90D 3C  libuv.uv_process_async_wakeup_req+8D 用户模块
       0509FEB4 55EDAEB4 55EDBD7B 18  libuv.$LN50+13                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块
	   
	   
	   
	   
线程 ID  地址       返回到      返回自      大小  注释                                   方   
108488                                                                     
       0509FDF4 51A8C3ED 55EDA4E0 24  libuv._uv_async_init                 用户模块
       0509FE18 51A90B52 51A8C3ED 18  arkhttpclient.51A8C3ED               用户模块
       0509FE30 51A910D9 51A90B52 1C  arkhttpclient.51A90B52               用户模块
       0509FE4C 51A8C563 51A910D9 1C  arkhttpclient.51A910D9               用户模块
       0509FE68 55EDA90D 51A8C563 10  arkhttpclient.51A8C563               用户模块
       0509FE78 55EDBD7B 55EDA90D 3C  libuv.uv_process_async_wakeup_req+8D 用户模块
       0509FEB4 55EDAEB4 55EDBD7B 18  libuv.$LN50+13                       用户模块
       0509FECC 51A8BEFC 55EDAEB4 38  libuv.uv_run+74                      用户模块
       0509FF04 55EF3370 51A8BEFC 28  arkhttpclient.51A8BEFC               用户模块
       0509FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70            系统模块
       0509FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2                   系统模块
       0509FF84 778866DD 758B0419 5C  kernel32.758B0419                    系统模块
       0509FFE0 778866AD 778866DD 10  ntdll.778866DD                       系统模块
       0509FFF0 00000000 778866AD     ntdll.778866AD                       用户模块	  
	   
//==================================================================================================================================
//arksocket::CreateUdp
线程 ID  地址       返回到      返回自      大小  注释                        方   
110508                                                          
       0DA4FD44 52AF95C5 52AF9575 18  arksocket.52AF9575        用户模块
       0DA4FD5C 52AF9C88 52AF95C5 38  arksocket.52AF95C5        用户模块
       0DA4FD94 52AF4449 52AF9C88 18  arksocket.52AF9C88        用户模块
       0DA4FDAC 52AF4832 52AF4449 1C  arksocket.52AF4449        用户模块
       0DA4FDC8 52AF40DE 52AF4832 98  arksocket.52AF4832        用户模块
       0DA4FE60 52AF47FF 52AF40DE 30  arksocket.52AF40DE        用户模块
       0DA4FE90 55EDBD7B 52AF47FF 3C  arksocket.52AF47FF        用户模块
       0DA4FECC 55EDAEB4 55EDBD7B 18  libuv.$LN50+13            用户模块
       0DA4FEE4 52AF5696 55EDAEB4 20  libuv.uv_run+74           用户模块
       0DA4FF04 55EF3370 52AF5696 28  arksocket.52AF5696        用户模块
       0DA4FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70 系统模块
       0DA4FF74 758B0419 5E4C6CF2 10  ucrtbased.5E4C6CF2        系统模块
       0DA4FF84 778866DD 758B0419 5C  kernel32.758B0419         系统模块
       0DA4FFE0 778866AD 778866DD 10  ntdll.778866DD            系统模块
       0DA4FFF0 00000000 778866AD     ntdll.778866AD            用户模块

//==================================================================================================================================
      

//----------------------
0DA4FECC 52AF5633 55EDA4E0 38  libuv._uv_async_init      用户模块

int uv_async_init(uv_loop_t* loop, uv_async_t* handle, uv_async_cb async_cb) 
 
//----------------------  
//uv_async_init 初始化 async 回调
0DA4FF04 55EF3370 52AF5633 28  arksocket.52AF5633        用户模块
int __thiscall sub_52AF55A1(int this)
{
  int v1; // ebx@1
  _DWORD *v2; // eax@1
  _DWORD *v3; // eax@1
  _DWORD *v4; // eax@1
  _DWORD *v5; // eax@1

  v1 = this;
  *(_DWORD *)(this + 12) = uv_thread_self();
  v2 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 20) = v2;
  *v2 = v1;
  uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 20), sub_52AF569E);   //===========> uv_close()
  v3 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 28) = v3;
  *v3 = v1;
  uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 28), sub_52AF583D);   //===========> preloginlogic.56DF75F0 => ...
  v4 = calloc(1u, 0x60u);
  *(_DWORD *)(v1 + 64) = v4;
  *v4 = v1;
  uv_timer_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 64));
  uv_timer_start(*(_DWORD *)(v1 + 64), sub_52AF58D7, 50, 0, 50, 0);
  v5 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 108) = v5;
  *v5 = v1;
  return uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 108), sub_52AF5BC0);   //===========> sub_52AF5BC0 => uv_queue_work()
}
//------

//------

//------
//https://blog.csdn.net/lc250123/article/details/52619314 
uv_queue_work() 是一个辅助函数, 它可以使得应用程序在单独的线程中运行某一任务, 并在任务完成后触发回调函数. 
uv_queue_work 看似简单, 但是在某些情况下却很实用, 因为该函数使得第三方库可以以事件循环的方式在你的程序中被使用.
当你使用事件循环时, 应该 确保在事件循环中运行的函数执行 I/O 任务时不被阻塞, 或者事件循环的回调函数不会占用太多 
CPU 的计算能力. 因为一旦发生了上述情况, 则意味着事件循环的执行速度会减慢, 事件得不到及时的处理.

但是也有一些代码在线程的事件循环的回调中使用了阻塞函数(例如执行 I/O 任务), (典型的 ‘one thread per client’ 服务器模型), 
并在单独的线程中运行某一任务. libuv 只是提供了一层抽象而已.

int uv_queue_work(uv_loop_t* loop,
                  uv_work_t* req,
                  uv_work_cb work_cb,
                  uv_after_work_cb after_work_cb) {
  if (work_cb == NULL)
    return UV_EINVAL;

  uv__req_init(loop, req, UV_WORK);
  req->loop = loop;
  req->work_cb = work_cb;
  req->after_work_cb = after_work_cb;
  uv__work_submit(loop, &req->work_req, uv__queue_work, uv__queue_done);
  return 0;
}


 
 
//----------------------  
0DA4FF2C 5E4C6CF2 55EF3370 48  libuv.uv__thread_start+70 系统模块
	   
static UINT __stdcall uv__thread_start(void* arg) {
  struct thread_ctx *ctx_p;
  struct thread_ctx ctx;

  ctx_p = arg;
  ctx = *ctx_p;
  uv__free(ctx_p);

  uv_once(&uv__current_thread_init_guard, uv__init_current_thread_key);
  uv_key_set(&uv__current_thread_key, (void*) ctx.self);

  ctx.entry(ctx.arg);

  return 0;
}

int uv_thread_create(uv_thread_t *tid, void (*entry)(void *arg), void *arg) {
  struct thread_ctx* ctx;
  int err;
  HANDLE thread;

  ctx = uv__malloc(sizeof(*ctx));
  if (ctx == NULL)
    return UV_ENOMEM;

  ctx->entry = entry;
  ctx->arg = arg;

  /* Create the thread in suspended state so we have a chance to pass
   * its own creation handle to it */   
  thread = (HANDLE) _beginthreadex(NULL,
                                   0,
                                   uv__thread_start,
                                   ctx,
                                   CREATE_SUSPENDED,
                                   NULL);
  if (thread == NULL) {
    err = errno;
    uv__free(ctx);
  } else {
    err = 0;
    *tid = thread;
    ctx->self = thread;
    ResumeThread(thread);
  }

  switch (err) {
    case 0:
      return 0;
    case EACCES:
      return UV_EACCES;
    case EAGAIN:
      return UV_EAGAIN;
    case EINVAL:
      return UV_EINVAL;
  }

  return UV_EIO;
}
	   
 
//----------------------  
//createProcess
Address  To       From     Siz Comment               Party 
0019EF04 08E53CC1 76D18980 17C kernelbase.76D18980   User
0019F080 08E539F9 08E53CC1 128 loginui.08E53CC1      User
0019F1A8 08E537C8 08E539F9 5C  loginui.08E539F9      User
0019F204 08E53045 08E537C8 10  loginui.08E537C8      User
0019F214 08E50C19 08E53045 58  loginui.08E53045      User
0019F26C 522BCF06 08E50C19 20  loginui.08E50C19      User
0019F28C 522D3707 522BCF06 2C  common.522BCF06       User
0019F2B8 522C6BB1 522D3707 5C  common.522D3707       User
0019F314 522C8407 522C6BB1 14  common.522C6BB1       User
0019F328 522CE80E 522C8407 18  common.522C8407       User
0019F340 53911DED 522CE80E 24  common.522CE80E       User
0019F364 5391FF61 53911DED 69C hummerengine.53911DED User
0019FA00 53927E8B 5391FF61 80  hummerengine.5391FF61 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944 10  ntdll.77808944        System
0019FFF0 00000000 77808914     ntdll.77808914        User
	   
	   
	   	   
//----------------------  
//调用 uv_thread_create   
Address  To       From     Siz Comment                Party 
0019E568 52AF5531 55EF2FA0 40  libuv.55EF2FA0         User
0019E5A8 56E2E16F 52AF5531 48C arksocket.52AF5531     User //sub_52AF54CA => uv_thread_create(v1 + 8, sub_52AF563A, v1)
0019EA34 0BD70B00 56E2E16F 44  preloginlogic.56E2E16F User
0019EA78 0BD70C5F 0BD70B00 64  appframework.0BD70B00  User
0019EADC 0BD70F7E 0BD70C5F 18  appframework.0BD70C5F  User
0019EAF4 0BC8D830 0BD70F7E 18  appframework.0BD70F7E  User
0019EB0C 532A9720 0BC8D830 84  appframework.0BC8D830  User
0019EB90 5319C864 532A9720 10  gf.532A9720            User
0019EBA0 05843518 5319C864 18  gf.5319C864            User
0019EBB8 0584138B 05843518 20  loginlogic.05843518    User
0019EBD8 0584B191 0584138B 4C8 loginlogic.0584138B    User
0019F0A0 0584D6D1 0584B191 24  loginlogic.0584B191    User
0019F0C4 0584D0A9 0584D6D1 10  loginlogic.0584D6D1    User
0019F0D4 0584D3FD 0584D0A9 28  loginlogic.0584D0A9    User
0019F0FC 0584EC6A 0584D3FD 20  loginlogic.0584D3FD    User
0019F11C 0584EB3E 0584EC6A 20  loginlogic.0584EC6A    User
0019F13C 771847AB 0584EB3E 2C  loginlogic.0584EB3E    System
0019F168 771652AC 771847AB E4  user32.771847AB        System
0019F24C 771643FE 771652AC 74  user32.771652AC        System
0019F2C0 771641E0 771643FE C   user32.771643FE        System
0019F2CC 51B24578 771641E0 18  user32.771641E0        User
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 759F6359 00403365 10  qq.00403365            System
0019FF84 77808944 759F6359 5C  kernel32.759F6359      System
0019FFE0 77808914 77808944 10  ntdll.77808944         System
0019FFF0 00000000 77808914     ntdll.77808914         User
	


//libuv  init_threads()	
Address  To       From     Si Comment                Party 
0512FDA8 55ED49B1 55EF2FA0 2C libuv.55EF2FA0         User
0512FDD4 55ED4A48 55ED49B1 8  libuv.55ED49B1         User
0512FDDC 55EF3229 55ED4A48 18 libuv.55ED4A48         User
0512FDF4 55EF2E6C 55EF3229 10 libuv.55EF3229         User
0512FE04 55ED42D2 55EF2E6C 10 libuv.55EF2E6C         User
0512FE14 55ED41D4 55ED42D2 18 libuv.55ED42D2         User
0512FE2C 51A88A58 55ED41D4 2C libuv.55ED41D4         User
0512FE58 51A8C427 51A88A58 10 arkhttpclient.51A88A58 User
0512FE68 55EDA8BD 51A8C427 10 arkhttpclient.51A8C427 User
0512FE78 55EDBD3B 55EDA8BD 3C libuv.55EDA8BD         User
0512FEB4 55EDAE74 55EDBD3B 18 libuv.55EDBD3B         User
0512FECC 51A8BEFC 55EDAE74 38 libuv.55EDAE74         User
0512FF04 55EF3370 51A8BEFC 28 arkhttpclient.51A8BEFC User
0512FF2C 6B7E6CF2 55EF3370 48 libuv.55EF3370         System
0512FF74 759F6359 6B7E6CF2 10 ucrtbased.6B7E6CF2     System
0512FF84 77808944 759F6359 5C kernel32.759F6359      System
0512FFE0 77808914 77808944 10 ntdll.77808944         System
0512FFF0 00000000 77808914    ntdll.77808914         User
	   
 

//==================================================================================================================================

0019E5A8 56E2E16F 52AF5531 48C arksocket.52AF5531     User //sub_52AF54CA => uv_thread_create(v1 + 8, sub_52AF563A, v1)
//创建 loop实例
signed int __thiscall sub_52AF54CA(int this)
{
  int v1; // esi@1
  void *v2; // eax@3
  arksocket::Semaphore *v3; // eax@5
  int v4; // eax@5
  int v6; // ST08_4@8

  v1 = this; //[loop实例]
  if ( !*(_DWORD *)(this + 4) && !(*(_DWORD *)(this + 16) & 1) )
  {
    v2 = calloc(1u, 0x100u);
    *(_DWORD *)(v1 + 4) = v2;
    if ( !v2 || uv_loop_init(v2) )
    {
      v6 = *(_DWORD *)(v1 + 4);
      sub_52AF4EEB("Loop", "uv_loop_init fail, loop=0x%p");
    }
    else
    {
      v3 = (arksocket::Semaphore *)sub_52AFCBDF(4u);
      v4 = arksocket::Semaphore::Semaphore(v3);
      sub_52AF5D62(v4);
      if ( !uv_thread_create(v1 + 8, sub_52AF563A, v1) )
      {
        uv_sem_wait(*(_DWORD *)(v1 + 24));
        return 0;
      }
      sub_52AF4EEB("Loop", "uv_thread_create fail");
    }
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)(v1 + 12) = 0;
    sub_52AF5D62(0);
    if ( *(_DWORD *)(v1 + 4) )
    {
      uv_loop_close(*(_DWORD *)(v1 + 4));
      free(*(void **)(v1 + 4));
      *(_DWORD *)(v1 + 4) = 0;
    }
  }
  return -1;
}

int __cdecl sub_52AF563A(LPVOID lpTlsValue)
{
  _DWORD *v1; // esi@1
  int v2; // edi@1
  DWORD v3; // ebx@1
  void *lpTlsValuea; // [sp+14h] [bp+8h]@1

  v1 = lpTlsValue;
  sub_52AF55A1((int)lpTlsValue);
  lpTlsValuea = *(void **)lpTlsValue;
  v2 = sub_52AF77F3();
  v3 = 0;
  uv_rwlock_wrlock(v2);
  if ( !*(_DWORD *)(v2 + 56) )
  {
    v3 = TlsAlloc();
    *(_DWORD *)(v2 + 56) = v3;
  }
  uv_rwlock_wrunlock(v2);
  TlsSetValue(v3, lpTlsValuea);
  uv_sem_post(v1[6]);
  return uv_run(v1[1], 0);
}
	   

//==================================================================================================================================
0019EA34 0BD70B00 56E2E16F 44  preloginlogic.56E2E16F User

int __stdcall sub_56E2DCEB(int a1, wchar_t *a2, int a3, int a4, int a5, Util::Misc *a6, void *a7, int a8, int a9)
{
  bool v9; // zf@1
  void *v10; // edi@1
  int v12; // ST1C_4@3
  __int16 v13; // si@7
  int v14; // esi@19
  int (__stdcall *v15)(int, int, HKEY *); // edi@19
  int v16; // eax@19
  int v17; // eax@19
  int v18; // esi@19
  int v19; // eax@22
  int v20; // ecx@24
  int v21; // eax@24
  signed int v22; // edx@24
  HMODULE v23; // eax@28
  int v24; // esi@37
  unsigned __int8 v25; // al@37
  signed int v26; // edx@40
  unsigned int v27; // ecx@40
  const wchar_t *v28; // esi@40
  unsigned int v29; // ecx@43
  void *v30; // edi@44
  int i; // esi@44
  void *Memory; // [sp+Ch] [bp-474h]@44
  int v33; // [sp+10h] [bp-470h]@1
  int v34; // [sp+14h] [bp-46Ch]@1
  int v35; // [sp+18h] [bp-468h]@18
  int v36; // [sp+1Ch] [bp-464h]@1
  int v37; // [sp+20h] [bp-460h]@19
  BYTE Data[4]; // [sp+24h] [bp-45Ch]@30
  BYTE v39[4]; // [sp+28h] [bp-458h]@1
  HKEY phkResult; // [sp+2Ch] [bp-454h]@4
  __int16 v41[512]; // [sp+30h] [bp-450h]@42
  WCHAR SubKey; // [sp+430h] [bp-50h]@33

  v9 = *(_DWORD *)(a1 + 812) == 0;
  v10 = a7;
  v34 = a3;
  v36 = (int)a2;
  *(_DWORD *)v39 = a7;
  v33 = a9;
  if ( !v9 )
    return -2147418113;
  FS::PerfLogEnable((FS *)L"LoginIM", (const wchar_t *)1);
  FS::RecordCommandEnable((FS *)L"LoginIM", (const wchar_t *)1, v12);
  if ( *(_DWORD *)(a1 + 816) )
  {
    CTXStringW::CTXStringW((CTXStringW *)&phkResult, a2);
    CTXStringW::Trim((CTXStringW *)&phkResult);
    if ( (unsigned __int8)operator!=(&phkResult, a1 + 848) )
    {
      CTXStringW::~CTXStringW((CTXStringW *)&phkResult);
      return -2147467259;
    }
    CTXStringW::~CTXStringW((CTXStringW *)&phkResult);
  }
  v13 = (signed __int16)a6;
  if ( !Util::Misc::IsStatusLegal(a6) )
  {
    v13 = 10;
    a6 = (Util::Misc *)10;
    v10 = &unk_56EB58E4;
    *(_DWORD *)v39 = &unk_56EB58E4;
  }
  if ( v13 == 20 )
  {
    v13 = 10;
    v10 = &unk_56EB58E4;
    a6 = (Util::Misc *)10;
    *(_DWORD *)v39 = &unk_56EB58E4;
  }
  switch ( v13 )
  {
    case 30:
      Util::Misc::OnlineStatusDataReport::SetBit(0, 1u);
      break;
    case 40:
      Util::Misc::OnlineStatusDataReport::SetBit((Util::Misc::OnlineStatusDataReport *)1, 1u);
      break;
    case 50:
      Util::Misc::OnlineStatusDataReport::SetBit((Util::Misc::OnlineStatusDataReport *)3, 1u);
      break;
    default:
      Util::Misc::OnlineStatusDataReport::SetBit((Util::Misc::OnlineStatusDataReport *)2, 1u);
      break;
  }
  v35 = 0;
  *(_DWORD *)(a1 + 856) = GetTickCount();
  if ( sub_56DE439C(&v35) == 1 )
  {
    v14 = v35;
    phkResult = 0;
    v15 = *(int (__stdcall **)(int, int, HKEY *))(*(_DWORD *)v35 + 20);
    v16 = CTXBSTR::CTXBSTR((CTXBSTR *)&v37, (const struct CTXStringW *)(a1 + 848));
    v17 = CTXBSTR::operator wchar_t *(v16);
    v18 = v15(v14, v17, &phkResult);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v37);
    if ( v18 >= 0 )
      *(_DWORD *)(a1 + 864) = 0;
    sub_56DE1E2F(&phkResult);
    v13 = (signed __int16)a6;
    v10 = *(void **)v39;
  }
  *(_DWORD *)(a1 + 944) = a8;
  sub_56E58BC2(v13, v10);
  CTXStringW::operator=(a1 + 784, v36);
  sub_56DE2171(v34);
  *(_DWORD *)(a1 + 792) = a4;
  v19 = *(_DWORD *)(a1 + 828);
  *(_DWORD *)(a1 + 796) = a5;
  *(_WORD *)(a1 + 800) = v13;
  if ( *(_DWORD *)(a1 + 804) != v19 )
    sub_56DE28C4(a1 + 804, v19);
  v20 = *(_DWORD *)(a1 + 816);
  v21 = 0;
  *(_DWORD *)(a1 + 808) = 1;
  v22 = 2;
  if ( v20 )
    v22 = 0;
  LOBYTE(v21) = a5 != 0;
  v37 = v21 | v22;
  if ( !v20 )
    *(_WORD *)(a1 + 906) = 1;
  v23 = GetModuleHandleW(L"HummerEngine.dll");
  if ( v23 )
    dword_56EF05AC = (int (__cdecl *)(_DWORD, _DWORD))GetProcAddress(v23, "SetDmpUin");
  *(_DWORD *)Data = 0;
  Common_34(v36, Data);
  if ( *(_DWORD *)Data )
  {
    SetBugReportUin(*(_DWORD *)Data, 0);
    if ( dword_56EF05AC )
      dword_56EF05AC(*(_DWORD *)Data, 0);
    phkResult = 0;
    qmemcpy(&SubKey, L"SOFTWARE\\Tencent\\bugReport\\QQExternal", 0x4Cu);
    if ( (!RegOpenKeyExW(HKEY_CURRENT_USER, &SubKey, 0, 0xF003Fu, &phkResult)
       || !RegCreateKeyExW(HKEY_CURRENT_USER, &SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0))
      && phkResult )
    {
      *(_DWORD *)v39 = 0;
      *(_DWORD *)v39 = Version::GetPubNo();
      RegSetValueExW(phkResult, L"uin", 0, 4u, Data, 4u);
      RegSetValueExW(phkResult, L"version", 0, 4u, v39, 4u);
      RegCloseKey(phkResult);
    }
  }
  sub_56E3488C(a1 + 116);
  v24 = Version::GetMinorVer();
  v25 = Version::GetMajorVer();
  sub_56DE1C37(L"file", 358, L"func", 1, L"Version", L"Client Version: %d.%d", v25);
  v37 = sub_56E39199(
          v36,
          v34,
          a4,
          v37,
          (__int16)a6,
          *(_BYTE *)(a1 + 904),
          *(_WORD *)(a1 + 906),
          0,
          *(_DWORD *)(a1 + 828));
  if ( v37 >= 0 )
  {
    PerfScene::EnterScene(1);
    if ( *(_DWORD *)(a1 + 852) != v33 )
      sub_56DE28C4(a1 + 852, v33);
    v26 = 79;
    *(_DWORD *)(a1 + 812) = 1;
    v27 = 0;
    v28 = L"OnLoginStart()";
    do
    {
      if ( (_WORD)v26 == 40 )
        break;
      ++v28;
      v41[v27++] = v26;
      v26 = *v28;
    }
    while ( (_WORD)v26 );
    v29 = v27;
    if ( v29 >= 512 )
    {
      sub_56EAA689(v29 * 2, v26);
      __debugbreak();
      JUMPOUT(*(_DWORD *)sub_56E2E1B7);
    }
    v41[v29] = 0; //v41 字符串
    sub_56E2F41C((int)v28, (int)&Memory, 0, (int)v41);//----------->
    v30 = Memory;//链表
	//[loop实例]  **(_DWORD **)(i + 8)
    for ( i = *(_DWORD *)Memory; (void *)i != v30; i = *(_DWORD *)i )
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(i + 8) + 20))(*(_DWORD *)(i + 8)); //===========================>52AF5531/sub_52AF54CA => uv_thread_create(v1 + 8, sub_52AF563A, v1)
    sub_56DFD4F0(&Memory);//释放内存？
    sub_56DE4405(Memory, 12);
  }
  sub_56DE1E2F(&v35);
  return v37;
} 
	
//------------
int __usercall sub_56E2F41C@<eax>(int a1@<esi>, int a2, int a3, int a4)
{
  int v4; // ebp@0
  _DWORD *v5; // eax@3
  int i; // esi@3
  int v7; // edi@4
  _DWORD *v8; // esi@12
  void *v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  void *Memory; // [sp+Ch] [bp-14h]@3
  int v13; // [sp+10h] [bp-10h]@3
  int v14; // [sp+14h] [bp-Ch]@10
  int v15; // [sp+18h] [bp-8h]@8
  int v16; // [sp+1Ch] [bp-4h]@1

  v11 = 0;
  
  v10 = (void *)sub_56DF18D2(v4, 0, 0); //以v4传入方法,在方法里以v4为基准,访问当前栈的数据
  v16 = 0;
  if ( sub_56DEDAC4(&unk_56EBDE30, &v16) && v16 ) //-------------->什么基址?
  {
    v13 = 0;
    Memory = (void *)sub_56DF18D2(v4, 0, 0);
    (*(void (__stdcall **)(int, void **, int))(*(_DWORD *)v16 + 48))(v16, &Memory, a1);///////////////////----try
    v5 = Memory; //链表
    for ( i = *(_DWORD *)Memory; (void *)i != Memory; v5 = Memory )
    {
      v7 = *(_DWORD *)(i + 8);
      i = *(_DWORD *)i;
      if ( (!a4 || (*(int (__stdcall **)(int, int))(*(_DWORD *)v7 + 60))(v7, a4))
        && (!a3 || !(*(int (__stdcall **)(int, int))(*(_DWORD *)a3 + 28))(a3, v7)) )
      {
        v15 = 0;
        if ( (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v7 + 44))(v7, &unk_56EBDE30, &v15) >= 0 )
        {
          if ( v15 )
          {
            v14 = v15;
            (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 4))(v15);
            sub_56DF7B50(v10, &v14);
            sub_56DE1E2F(&v14);
            (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          }
        }
      }
    }
    v8 = (_DWORD *)*v5;
    if ( (_DWORD *)*v5 != v5 )
    {
      do
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8[2] + 8))(v8[2]);
        v8 = (_DWORD *)*v8; //链表
      }
      while ( v8 != Memory );
    }
    (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 8))(v16);
    sub_56DF1A14(&Memory);
    sub_56DE4405(Memory, 12);
  }
  sub_56DF7FF0(&v10);
  sub_56DFD4F0(&v10);
  sub_56DE4405(v10, 12);
  return a2;
}

int __userpurge sub_56DF18D2@<eax>(int a1@<ebp>, int a2, int a3)
{
  int v3; // ecx@1
  int v4; // eax@1
  int v5; // ecx@1
  int v6; // edx@2

  sub_56EAA1A3((int)sub_56EAB845, 12);
  *(_DWORD *)(a1 - 0x18) = v3;
  v4 = sub_56DE43B0(0xCu);
  *(_DWORD *)(a1 - 0x14) = v4;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 0xC);
  }
  else
  {
    v5 = v4;
    v6 = v4;
  }
  *(_DWORD *)(a1 - 4) = 0;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(a1 - 4) = -1;
  return sub_56EAA17D();
}

//@a1 unk_56EBDE30
int __cdecl sub_56DEDAC4(int a1, int a2)
{
  int v2; // ebx@1
  int v4; // [sp+4h] [bp-4h]@1

  v2 = 0;
  v4 = 0;
  Util::Core::GetPlatformCore((Util::Core *)&v4);
  if ( v4 )
    LOBYTE(v2) = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v4 + 40))(v4, a1, a2) >= 0;
  sub_56DE1E2F((unsigned int *)&v4);
  return v2;
}


//==================================================================================================================================
0019EA78 0BD70C5F 0BD70B00 64  appframework.0BD70B00  User
int __cdecl sub_BD70A56(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx@1
  int v9; // esi@3
  int v10; // esi@4
  int (__stdcall *v11)(int, int, int, int, int, int, int, int, int); // edi@5
  int v12; // eax@5
  int v13; // eax@5
  char v15; // [sp+8h] [bp-Ch]@5
  char v16; // [sp+Ch] [bp-8h]@3
  int v17; // [sp+10h] [bp-4h]@1

  v8 = a2;
  v17 = 0;
  if ( a2 )
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)a2 + 52))(a2, &v17);
  a4 = (unsigned __int8)a4;
  sub_BC8B1E3(L"file", 36, L"func", 2, L"SavePwd", &unk_BE62078, a1);
  CTXStringW::CTXStringW(&v16, a1);
  a2 = 0;
  sub_BD01F4B(&a2);
  v9 = a2;
  if ( a2 )
  {
    v11 = *(int (__stdcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 12);
    v12 = CTXBSTR::CTXBSTR(&v15, &v16);
    v13 = CTXBSTR::operator wchar_t *(v12);
    v10 = v11(v9, v13, v8, a3, a4, a5, a6, a7, a8);  //===========================>56E2E16F
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v15);
  }
  else
  {
    v10 = -2147467259;
  }
  sub_BC86E7B(&a2);
  CTXStringW::~CTXStringW((CTXStringW *)&v16);
  return v10;
}	   
	   


//==================================================================================================================================
0019EADC 0BD70F7E 0BD70C5F 18  appframework.0BD70C5F  User
int __thiscall sub_BD70B23(Util::MultiLogin *this)
{
  int v1; // ebx@1
  int v2; // edi@1
  int v3; // ecx@1
  int v4; // edi@2
  void (__stdcall *v5)(int, const char *, int); // esi@2
  int v6; // eax@2
  int v7; // edi@2
  int v8; // edi@2
  void (__stdcall *v9)(int, const char *, int); // esi@2
  int v10; // eax@2
  int v11; // esi@2
  void (__stdcall *v12)(int, const char *, int *); // edi@2
  int v13; // eax@5
  int v14; // esi@5
  int v15; // eax@7
  unsigned __int8 v16; // ST14_1@9
  const wchar_t *v18; // [sp+Ch] [bp-30h]@5
  int v19; // [sp+10h] [bp-2Ch]@5
  int v20; // [sp+14h] [bp-28h]@5
  int v21; // [sp+18h] [bp-24h]@5
  const wchar_t *v22; // [sp+1Ch] [bp-20h]@1
  int v23; // [sp+20h] [bp-1Ch]@1
  int v24; // [sp+24h] [bp-18h]@1
  int v25; // [sp+28h] [bp-14h]@1
  Util::MultiLogin *v26; // [sp+2Ch] [bp-10h]@1
  char v27; // [sp+30h] [bp-Ch]@1
  char v28; // [sp+34h] [bp-8h]@1
  int v29; // [sp+38h] [bp-4h]@1

  v1 = (int)this;
  v2 = 0;
  v26 = this;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  CTXBSTR::CTXBSTR(&v27);
  CTXBSTR::CTXBSTR(&v28);
  v29 = 0;
  v3 = *(_DWORD *)(v1 + 84);
  v25 = 0;
  if ( v3 )
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v3 + 80))(v3, "nPwdType", (int *)&v22);
    (*(void (__stdcall **)(_DWORD, const char *, int *))(**(_DWORD **)(v1 + 84) + 32))(
      *(_DWORD *)(v1 + 84),
      "bRememberPwd",
      &v23);
    v4 = *(_DWORD *)(v1 + 84);
    v5 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v4 + 112);
    v6 = CTXBSTR::operator&(&v27);
    v5(v4, "strAccount", v6);
    v7 = (int)v26;
    (*(void (__stdcall **)(_DWORD *, const char *, int *))(**((_DWORD **)v26 + 21) + 56))(
      *((_DWORD **)v26 + 21),
      "wStatus",
      &v24);
    v8 = *(_DWORD *)(v7 + 84);
    v9 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v8 + 112);
    v10 = CTXBSTR::operator&(&v28);
    v9(v8, "bsStatusDetail", v10);
    v1 = (int)v26;
    (*(void (__stdcall **)(_DWORD *, const char *, int *))(**((_DWORD **)v26 + 21) + 32))(
      *((_DWORD **)v26 + 21),
      "bStatusIsManual",
      &v25);
    v11 = *(_DWORD *)(v1 + 84);
    v12 = *(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v11 + 120);
    if ( v29 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29);
    v12(v11, "bufPwd", &v29);
    v2 = v25;
  }
  v21 = *(_DWORD *)(v1 + 244);
  v13 = CTXBSTR::operator wchar_t *(&v28);
  v14 = v29;
  v26 = (Util::MultiLogin *)v13;
  v20 = (unsigned __int16)v24;
  LOBYTE(v19) = v23 != 0;
  v18 = v22;
  if ( !v29 )
  {
    Util::Data::CreateTXBuffer((Util::Data *)&v29);
    v14 = v29;
  }
  v15 = CTXBSTR::operator wchar_t *(&v27);
  if ( sub_BD70A56(v15, v14, v18, v19, v20, v26, v2, v21) < 0 )
  {
    if ( *(_DWORD *)(v1 + 92) )  //==============================>0BD70B00
    {
      CTXStringW::CTXStringW((CTXStringW *)&v21);
      v18 = 0;
      v26 = 0;
      Util::MultiLogin::GetMultiLoginInfo((Util::MultiLogin *)&v21, (struct CTXStringW *)&v18, (unsigned __int32 *)&v26);
      Util::MultiLogin::MarkLoginState(v26, 4, v16);
      (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(**(_DWORD **)(v1 + 92) + 20))(*(_DWORD *)(v1 + 92), -1986, 0);
      CTXStringW::~CTXStringW((CTXStringW *)&v21);
    }
    v18 = L"LoginAssistant::Login failed.";
    sub_BC8FBAD(L"file", 729, L"func", 2, L"Login", (const char *)L"%s", &v18);
  }
  if ( v29 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29);
    v29 = 0;
  }
  CTXBSTR::~CTXBSTR((CTXBSTR *)&v28);
  return CTXBSTR::~CTXBSTR((CTXBSTR *)&v27);
}	   
	   


//==================================================================================================================================
0019EAF4 0BC8D830 0BD70F7E 18  appframework.0BD70F7E  User
int __thiscall sub_BD70F15(int this, int a2, int a3, int a4)
{
  int v4; // esi@1
  int v5; // ecx@4
  bool v6; // zf@8
  unsigned int v7; // ST0C_4@9
  int v9; // [sp+8h] [bp-8h]@2

  v4 = this;
  if ( a2 == 1 )
  {
    sub_BD6D03D(&v9);
    sub_BD6D5ED(0, &v9);
    sub_BD6CEF4(v9);
    if ( a2 )
      (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 1312))(a2, v4 + 20);
    v5 = a4;
    *(_DWORD *)(v4 + 16) = 1;
    *(_DWORD *)(v4 + 40) = 1;
    if ( *(_DWORD *)(v4 + 84) != v5 )
      sub_BC88649(v4 + 84, v5);
    sub_BD70B23(v4); //==================================>0BD70C5F
    sub_BC86E7B(&a2);
    sub_BC86E7B(&v9);
  }
  else if ( a2 == 2 )
  {
    v6 = *(_DWORD *)(this + 32) == 0;
    *(_DWORD *)(this + 48) = 1;
    if ( v6 )
    {
      sub_BC8B1E3(
        L"file",
        677,
        L"func",
        2,
        L"QQLogin",
        L"CAFMainFrameController::OnLoginPanelEvent ShowMainFrame \u6536\u5230\u534f\u8bae\u901a\u77e5\uff0c\u663e\u793a\u"
         "4e3b\u9762\u677f m_bInitPlugin:%d",
        *(_DWORD *)(this + 44));
      TXTimer::SetTimeout((TXTimer *)0x3E8, *(_DWORD *)(v4 + 260), (struct ITXTimerCallback *)0x458, v7);
    }
  }
  return 0;
}	   
	   


//==================================================================================================================================
0019EB0C 532A9720 0BC8D830 84  appframework.0BC8D830  User
signed int __stdcall sub_BC8D7E6(int a1, int a2, int a3, int a4)
{
  int v4; // esi@1
  int v5; // ecx@2
  int v6; // ecx@4
  signed int v8; // edx@8
  int *v9; // ecx@9
  int v10; // eax@10
  signed int v11; // eax@11
  int v12; // ecx@12
  int v13; // esi@14
  int *v14; // esi@17
  int v15; // esi@19

  v4 = *(_DWORD *)(a1 + 12);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 && *(_DWORD *)(v5 + 4) )
      v6 = *(_DWORD *)(a1 + 20);
    else
      v6 = 0;
    if ( !v6 )
      return -2147418113;
  }
  v8 = 0x80004001;
  if ( v4 )
  {
    v9 = *(int **)(a1 + 24);
    if ( v9 )
    {
      v10 = *v9;
      return (*(int (__fastcall **)(int *, signed int, int, int, int))(v10 + 4))(v9, 0x80004001, a2, a3, a4); //======================>
    }
  }
  v12 = *(_DWORD *)(a1 + 16);
  if ( v12 && *(_DWORD *)(v12 + 4) )
    v13 = *(_DWORD *)(a1 + 20);
  else
    v13 = 0;
  if ( v13 )
  {
    v14 = *(int **)(a1 + 24);
    if ( v14 )
    {
      v10 = *v14;
      v9 = *(int **)(a1 + 24);
      return (*(int (__fastcall **)(int *, signed int, int, int, int))(v10 + 4))(v9, 0x80004001, a2, a3, a4);
    }
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( v15 )
  {
    if ( !v12 || !*(_DWORD *)(v12 + 4) )
      v15 = 0;
    v11 = -2147418113;
    if ( v15 )
      v11 = 0x80004001;
    return v11;
  }
  return v8;
}	   
	   


//==================================================================================================================================
0019EB90 5319C864 532A9720 10  gf.532A9720            User
int __thiscall sub_532A9460(int (***this)(void), int a2, int a3)
{
  int (***v3)(void); // ebx@1
  _DWORD *v4; // edi@1
  int (**v5)(void); // eax@1
  void (__stdcall ***v6)(_DWORD, _DWORD, _DWORD); // eax@1
  int v7; // esi@3
  char *v8; // edx@3
  int v9; // ebx@3
  int v10; // ecx@3
  int v11; // eax@3
  int v12; // edi@20
  int v13; // eax@21
  int v14; // eax@24
  int i; // eax@25
  int j; // ecx@29
  char *v17; // esi@32
  int (__stdcall *v18)(HDC, int); // ebx@34
  unsigned int v19; // eax@34
  bool v20; // zf@36
  int v21; // eax@36
  int v22; // ecx@37
  int v23; // edx@37
  int v24; // ebx@38
  HDC v25; // eax@40
  HDC v26; // ebx@40
  int v27; // eax@41
  char v28; // cl@42
  __m128d v29; // xmm0@44
  HDC v30; // eax@50
  HDC v31; // ebx@50
  int v32; // eax@51
  char v33; // cl@52
  __m128d v34; // xmm0@54
  HDC v35; // eax@65
  HDC v36; // esi@65
  int v37; // eax@66
  char v38; // cl@67
  __m128d v39; // xmm0@69
  int v40; // ebx@72
  HDC v41; // eax@75
  HDC v42; // esi@75
  int v43; // eax@76
  char v44; // cl@77
  __m128d v45; // xmm0@79
  _BYTE *v46; // edx@84
  unsigned int v47; // ecx@85
  int v48; // ecx@86
  unsigned int v49; // eax@90
  unsigned __int32 *v51; // [sp+2Ch] [bp-68h]@48
  unsigned int v52; // [sp+3Ch] [bp-58h]@1
  int v53; // [sp+40h] [bp-54h]@36
  __int64 v54; // [sp+44h] [bp-50h]@34
  void *Memory; // [sp+4Ch] [bp-48h]@3
  __int64 v56; // [sp+50h] [bp-44h]@3
  int (***v57)(void); // [sp+58h] [bp-3Ch]@1
  char v58; // [sp+5Ch] [bp-38h]@48
  char v59; // [sp+60h] [bp-34h]@48
  char v60; // [sp+64h] [bp-30h]@57
  int v61; // [sp+68h] [bp-2Ch]@57
  double v62; // [sp+6Ch] [bp-28h]@34
  int v63; // [sp+74h] [bp-20h]@19
  char *v64; // [sp+7Ch] [bp-18h]@3
  char *v65; // [sp+80h] [bp-14h]@3
  int v66; // [sp+84h] [bp-10h]@3
  _DWORD *v67; // [sp+88h] [bp-Ch]@1
  _DWORD *v68; // [sp+8Ch] [bp-8h]@1
  int v69; // [sp+90h] [bp-4h]@1

  v3 = this;
  v4 = 0;
  v57 = this;
  v5 = *this;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v6 = (void (__stdcall ***)(_DWORD, _DWORD, _DWORD))(*v5)();
  v52 = 0;
  if ( v6 )
    (**v6)(v6, &unk_53300C5C, &v52);
  v7 = (int)v3[1];
  Memory = 0;
  v8 = 0;
  v64 = 0;
  v9 = v7;
  LODWORD(v56) = 0;
  v10 = *(_DWORD *)(v7 + 4);
  v66 = 0;
  v11 = v10;
  v65 = 0;
  if ( !*(_BYTE *)(v10 + 13) )
  {
    do
    {
      if ( *(_DWORD *)(v11 + 16) >= a2 )
      {
        if ( *(_BYTE *)(v9 + 13) && a2 < *(_DWORD *)(v11 + 16) )
          v9 = v11;
        v7 = v11;
        v11 = *(_DWORD *)v11;
      }
      else
      {
        v11 = *(_DWORD *)(v11 + 8);
      }
    }
    while ( !*(_BYTE *)(v11 + 13) );
    v4 = 0;
  }
  if ( !*(_BYTE *)(v9 + 13) )
    v10 = *(_DWORD *)v9;
  while ( !*(_BYTE *)(v10 + 13) )
  {
    if ( a2 >= *(_DWORD *)(v10 + 16) )
    {
      v10 = *(_DWORD *)(v10 + 8);
    }
    else
    {
      v9 = v10;
      v10 = *(_DWORD *)v10;
    }
  }
  v63 = v7;
  if ( v7 == v9 )
  {
    v17 = 0;
  }
  else
  {
    v12 = 0;
    do
    {
      v13 = *(_DWORD *)(v7 + 20);
      HIDWORD(v56) = *(_DWORD *)(v7 + 20);
      if ( (char *)v12 == v8 )
      {
        ((void (__thiscall *)(char **, char *, char *))sub_531573B0)(&v64, v8, (char *)&v56 + 4);
        v12 = v66;
        v8 = v65;
      }
      else
      {
        *(_DWORD *)v8 = v13;
        v8 += 4;
        v65 = v8;
      }
      v14 = *(_DWORD *)(v7 + 8);
      if ( *(_BYTE *)(v14 + 13) )
      {
        for ( i = *(_DWORD *)(v7 + 4); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
        {
          if ( v7 != *(_DWORD *)(i + 8) )
            break;
          v7 = i;
        }
        v7 = i;
      }
      else
      {
        v7 = *(_DWORD *)(v7 + 8);
        for ( j = *(_DWORD *)v14; !*(_BYTE *)(j + 13); j = *(_DWORD *)j )
          v7 = j;
      }
    }
    while ( v7 != v9 );
    v17 = v64;
    LODWORD(v56) = v12;
    v4 = 0;
    Memory = v64;
  }
  v18 = GetDeviceCaps;
  LODWORD(v54) = 0;
  v19 = (unsigned int)(v8 - v17 + 3) >> 2;
  v62 = *(double *)&qword_533341A0;
  if ( v17 > v8 )
    v19 = 0;
  v53 = v19;
  v20 = v19 == 0;
  v21 = dword_533479AC;
  if ( !v20 )
  {
    v22 = v53;
    v23 = 0;
    do
    {
      v24 = *(_DWORD *)v17;
      HIDWORD(v54) = v24;
      if ( v24 )
      {
        if ( !(v21 & 1) )
        {
          byte_53347994 = 0;
          dword_533479AC = v21 | 1;
          dword_53347998 = 96;
          dword_5334799C = 96;
          dword_533479A0 = 96;
          dword_533479A8 = 0;
          v25 = GetDC(0);
          v26 = v25;
          if ( v25 )
          {
            dword_5334799C = GetDeviceCaps(v25, 88);
            v27 = GetDeviceCaps(v26, 90);
            dword_533479A0 = v27;
            if ( dword_533440A8 )
            {
              v28 = dword_5334799C;
              nNumerator = dword_5334799C;
              dword_53347998 = v27;
            }
            else
            {
              v28 = nNumerator;
            }
            sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v28);
            v29 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
            v29.m128d_f64[0] = v29.m128d_f64[0] / v62;
            dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v29);
            ReleaseDC(0, v26);
          }
          v24 = HIDWORD(v54);
          byte_53347994 = 1;
        }
        if ( nNumerator == 96 )
        {
          HIDWORD(v54) = 0;
        }
        else
        {
          Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v59, (unsigned __int32 *)&v58, v51);
          GetCurrentThreadId();
          HIDWORD(v54) = dword_533479A8;
          dword_533479A8 = 0;
        }
        (*(void (__fastcall **)(int, int, int, int, unsigned int, int))(*(_DWORD *)v24 + 28))(     //===================>0BC8D830
          v22,
          v23,
          v24,
          a2,
          v52,
          a3);
        v21 = dword_533479AC;
        if ( !(dword_533479AC & 1) )
        {
          byte_53347994 = 0;
          dword_533479AC |= 1u;
          dword_53347998 = 96;
          dword_5334799C = 96;
          dword_533479A0 = 96;
          dword_533479A8 = 0;
          v30 = GetDC(0);
          v31 = v30;
          if ( v30 )
          {
            dword_5334799C = GetDeviceCaps(v30, 88);
            v32 = GetDeviceCaps(v31, 90);
            dword_533479A0 = v32;
            if ( dword_533440A8 )
            {
              v33 = dword_5334799C;
              nNumerator = dword_5334799C;
              dword_53347998 = v32;
            }
            else
            {
              v33 = nNumerator;
            }
            sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v33);
            v34 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
            v34.m128d_f64[0] = v34.m128d_f64[0] / v62;
            dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v34);
            ReleaseDC(0, v31);
          }
          v21 = dword_533479AC;
          byte_53347994 = 1;
        }
        if ( nNumerator != 96 )
        {
          Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v61, (unsigned __int32 *)&v60, v51);
          GetCurrentThreadId();
          dword_533479A8 += HIDWORD(v54);
          v21 = dword_533479AC;
        }
        v22 = v53;
        v23 = v54;
      }
      ++v23;
      v17 += 4;
      LODWORD(v54) = v23;
    }
    while ( v23 != v22 );
    v18 = GetDeviceCaps;
    v4 = 0;
  }
  if ( &v67 != v57 + 5 )
  {
    ((void (__thiscall *)(_DWORD **, int (**)(void), int (**)(void), int))loc_532AAAE0)(&v67, v57[5], v57[6], v61);
    v4 = v67;
    v21 = dword_533479AC;
  }
  for ( ; v4 != v68; ++v4 )
  {
    if ( !(v21 & 1) )
    {
      byte_53347994 = 0;
      dword_533479AC = v21 | 1;
      dword_53347998 = 96;
      dword_5334799C = 96;
      dword_533479A0 = 96;
      dword_533479A8 = 0;
      v35 = GetDC(0);
      v36 = v35;
      if ( v35 )
      {
        dword_5334799C = v18(v35, 88);
        v37 = v18(v36, 90);
        dword_533479A0 = v37;
        if ( dword_533440A8 )
        {
          v38 = dword_5334799C;
          nNumerator = dword_5334799C;
          dword_53347998 = v37;
        }
        else
        {
          v38 = nNumerator;
        }
        sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v38);
        v39 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
        v39.m128d_f64[0] = v39.m128d_f64[0] / v62;
        dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v39);
        ReleaseDC(0, v36);
      }
      byte_53347994 = 1;
    }
    if ( nNumerator == 96 )
    {
      v40 = 0;
    }
    else
    {
      Util::Misc::GetMainAndLogicThreadId((Util::Misc *)((char *)&v54 + 4), (unsigned __int32 *)&v57, v51);
      GetCurrentThreadId();
      v40 = dword_533479A8;
      dword_533479A8 = 0;
    }
    (*(void (__stdcall **)(_DWORD, int, unsigned int, int))(*(_DWORD *)*v4 + 28))(*v4, a2, v52, a3);
    v21 = dword_533479AC;
    if ( !(dword_533479AC & 1) )
    {
      byte_53347994 = 0;
      dword_533479AC |= 1u;
      dword_53347998 = 96;
      dword_5334799C = 96;
      dword_533479A0 = 96;
      dword_533479A8 = 0;
      v41 = GetDC(0);
      v42 = v41;
      if ( v41 )
      {
        dword_5334799C = GetDeviceCaps(v41, 88);
        v43 = GetDeviceCaps(v42, 90);
        dword_533479A0 = v43;
        if ( dword_533440A8 )
        {
          v44 = dword_5334799C;
          nNumerator = dword_5334799C;
          dword_53347998 = v43;
        }
        else
        {
          v44 = nNumerator;
        }
        sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v44);
        v45 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
        v45.m128d_f64[0] = v45.m128d_f64[0] / v62;
        dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v45);
        ReleaseDC(0, v42);
      }
      v21 = dword_533479AC;
      byte_53347994 = 1;
    }
    if ( nNumerator != 96 )
    {
      Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v53, (unsigned __int32 *)&v54, v51);
      GetCurrentThreadId();
      dword_533479A8 += v40;
      v21 = dword_533479AC;
    }
    v18 = GetDeviceCaps;
  }
  v46 = Memory;
  if ( Memory )
  {
    v47 = (v56 - (_DWORD)Memory) & 0xFFFFFFFC;
    if ( v47 >= 0x1000 )
    {
      v46 = (_BYTE *)*((_DWORD *)Memory - 1);
      v48 = v47 + 35;
      if ( (unsigned int)((_BYTE *)Memory - v46 - 4) > 0x1F )
        invalid_parameter_noinfo_noreturn(v48);
    }
    sub_532EFC66(v46);
    v64 = 0;
    v65 = 0;
    v66 = 0;
  }
  LODWORD(v56) = &v51;
  if ( &v51 )
  {
    v49 = v52;
    if ( v52 )
    {
      (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v52 + 8))(v52);
      v49 = v52;
    }
    if ( v49 < 0x80000000 )
      v52 = v49 + 2147483648;
  }
  sub_53225B80(&v67);
  return 0;
}	   
	   


//==================================================================================================================================
0019EBA0 05843518 5319C864 18  gf.5319C864            User
int __stdcall sub_5319C850(int a1, int a2, int a3)
{
  return sub_532A9460(a2, a3);
}	   
	   


//==================================================================================================================================
0019EBB8 0584138B 05843518 20  loginlogic.05843518    User
int __stdcall sub_58434EC(int a1, int a2, int a3)
{
  int v3; // esi@2

  sub_5843DCE(*(_DWORD *)(a1 - 16));
  if ( a1 )
    v3 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a1 + 60))(a1, a2, a3);//=====================>5319C864/sub_5319C850
  else
    v3 = -2147467259;
  sub_5841444(&a1);
  return v3;
}	   
	   


//==================================================================================================================================
0019EBD8 0584B191 0584138B 4C8 loginlogic.0584138B    User
int __stdcall sub_58412AF(int a1, char a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi@1
  void (__stdcall *v8)(int, const char *, int); // edi@2
  int v9; // eax@2
  int v10; // eax@2
  int v11; // esi@2
  void (__stdcall *v12)(int, const char *); // edi@2
  char v14; // [sp+4h] [bp-8h]@2
  int v15; // [sp+8h] [bp-4h]@1

  v15 = 0;
  Util::Data::CreateTXData((Util::Data *)&v15);
  v7 = v15;
  if ( v15 )
  {
    v8 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v15 + 320);
    v9 = CTXBSTR::CTXBSTR(&v14, &a2);
    v10 = CTXBSTR::operator wchar_t *(v9);
    v8(v7, "strAccount", v10);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v14);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v15 + 288))(v15, "nPwdType", a3);
    v11 = v15;
    v12 = *(void (__stdcall **)(int, const char *))(*(_DWORD *)v15 + 328);
    if ( !a4 )
      Util::Data::CreateTXBuffer((Util::Data *)&a4);
    v12(v11, "bufPwd");
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v15 + 264))(v15, "wStatus", a5);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v15 + 240))(v15, "bRememberPwd", a6);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v15 + 240))(v15, "bStatusIsManual", a7);
    v7 = v15;
  }
  (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)(a1 + 24) + 60))(a1 + 24, 1, v7); //=====================>05843518/sub_58434EC
  sub_5841444(&v15);
  CTXStringW::~CTXStringW((CTXStringW *)&a2);
  if ( a4 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a4 + 8))(a4);
  return 0;
}	   
	   


//==================================================================================================================================
0019F0A0 0584D6D1 0584B191 24  loginlogic.0584B191    User
int __thiscall sub_584AB39(_DWORD *this, int a2, int a3)
{
  LONG v3; // eax@1
  LONG v4; // eax@1
  LONG v5; // esi@3
  void (__stdcall *v6)(LONG, const char *, int); // edi@3
  int v7; // eax@3
  LONG v8; // esi@3
  void (__stdcall *v9)(LONG, const char *, int *); // edi@3
  wchar_t *v10; // esi@5
  int v11; // eax@5
  PerfDataReportUtil *v12; // eax@5
  unsigned __int32 v13; // eax@6
  int v14; // ecx@6
  loginstatistics::CTXLoginStatistic *v15; // eax@8
  const wchar_t *v16; // esi@8
  unsigned int v17; // ecx@8
  signed int v18; // edx@8
  unsigned int v19; // ecx@11
  _DWORD *v20; // edi@12
  int i; // esi@12
  wchar_t *v22; // esi@15
  int v23; // eax@15
  PerfDataReportUtil *v24; // eax@15
  loginstatistics::CTXLoginStatistic *v25; // eax@15
  char v26; // al@15
  bool v27; // bl@15
  int v28; // eax@15
  _DWORD *v29; // edi@15
  int v30; // ecx@17
  int v31; // ecx@19
  int v33; // ecx@21
  int v34; // eax@22
  int v35; // ecx@23
  int v36; // eax@27
  unsigned int v37; // esi@28
  _BYTE *v38; // ecx@30
  int v39; // ecx@37
  int v40; // eax@37
  int v41; // eax@39
  signed int v42; // eax@40
  char *v43; // eax@42
  int v44; // eax@42
  int v45; // eax@46
  int v46; // esi@46
  void (__stdcall *v47)(int); // edi@46
  int v48; // ecx@46
  int v49; // [sp+94h] [bp-4B8h]@46
  int v50; // [sp+98h] [bp-4B4h]@46
  int v51; // [sp+9Ch] [bp-4B0h]@46
  int v52; // [sp+A0h] [bp-4ACh]@46
  unsigned __int64 v53; // [sp+A4h] [bp-4A8h]@8
  struct ITXBuffer **v54; // [sp+ACh] [bp-4A0h]@5
  int v55; // [sp+BCh] [bp-490h]@3
  LONG Target; // [sp+C0h] [bp-48Ch]@1
  int *v57; // [sp+C4h] [bp-488h]@8
  char v58; // [sp+C8h] [bp-484h]@8
  wchar_t *v59; // [sp+CCh] [bp-480h]@3
  _DWORD *v60; // [sp+D0h] [bp-47Ch]@15
  _DWORD *v61; // [sp+D4h] [bp-478h]@1
  char v62; // [sp+D8h] [bp-474h]@39
  _DWORD *v63; // [sp+DCh] [bp-470h]@3
  unsigned int v64; // [sp+E0h] [bp-46Ch]@3
  int v65; // [sp+E4h] [bp-468h]@3
  int v66; // [sp+E8h] [bp-464h]@3
  int v67; // [sp+ECh] [bp-460h]@3
  char v68; // [sp+F0h] [bp-45Ch]@3
  unsigned int v69; // [sp+F4h] [bp-458h]@15
  char v70; // [sp+F8h] [bp-454h]@24
  char v71; // [sp+FCh] [bp-450h]@24
  unsigned int v72; // [sp+100h] [bp-44Ch]@3
  __int64 v73; // [sp+104h] [bp-448h]@5
  char v74; // [sp+110h] [bp-43Ch]@5
  char v75; // [sp+114h] [bp-438h]@15
  int v76; // [sp+118h] [bp-434h]@25
  char v77; // [sp+11Ch] [bp-430h]@5
  const WCHAR *v78; // [sp+120h] [bp-42Ch]@15
  char v79; // [sp+124h] [bp-428h]@15
  int *v80; // [sp+128h] [bp-424h]@22
  _DWORD *v81; // [sp+12Ch] [bp-420h]@12
  int v82; // [sp+134h] [bp-418h]@39
  int v83; // [sp+138h] [bp-414h]@39
  int v84; // [sp+13Ch] [bp-410h]@39
  int v85; // [sp+140h] [bp-40Ch]@39
  __int16 v86[514]; // [sp+144h] [bp-408h]@10

  v61 = this;
  Util::Contact::ResetSelfUin();
  Target = 0;
  v3 = IPCBufferConvertor::ConvertToTXData(a2, a3);
  v4 = InterlockedExchange(&Target, v3);
  if ( v4 )
    (*(void (__stdcall **)(LONG))(*(_DWORD *)v4 + 8))(v4);
  v63 = 0;
  v65 = 0;
  v72 = 0;
  v59 = 0;
  v64 = 0;
  CTXBSTR::CTXBSTR((CTXBSTR *)&v68);
  v5 = Target;
  v55 = 0;
  v67 = 0;
  v66 = 0;
  v6 = *(void (__stdcall **)(LONG, const char *, int))(*(_DWORD *)Target + 112);
  v7 = CTXBSTR::operator&(&v68);
  v6(v5, "account", v7);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 80))(Target, "pwdType", (int *)&v63);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 80))(Target, "status", &v65);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 32))(Target, "statusIsManual", (int *)&v72);
  v8 = Target;
  v9 = *(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 120);
  v9(v8, "pwdHash", &v55);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 32))(Target, "autoLogin", (int *)&v59);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 32))(Target, "rememberPwd", (int *)&v64);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 224))(Target, "proxy", &v67);
  (*(void (__stdcall **)(LONG, const char *, int *))(*(_DWORD *)Target + 224))(Target, "specifySvr", &v66);
  v10 = v59;
  v11 = CTXStringW::CTXStringW(&v77, v73, "bAutoLogin", -1);
  CTXBSTR::CTXBSTR(&v74, v11);
  CTXStringW::~CTXStringW((CTXStringW *)&v77);
  v12 = (PerfDataReportUtil *)CTXBSTR::operator wchar_t *(&v74);
  PerfDataReportUtil::SetPerfReportDataForBool(v12, v10, v54);
  CTXBSTR::~CTXBSTR((CTXBSTR *)&v74);
  if ( v59 )
  {
    v13 = 1;
    v14 = 0;
  }
  else
  {
    _mm_storel_pd((double *)&v73, 0i64);
    v14 = HIDWORD(v73);
    v13 = v73;
  }
  HIDWORD(v53) = v14;
  PerfDataReport2DC::SetPerfReportData((PerfDataReport2DC *)6, v13, *(unsigned __int64 *)((char *)&v53 + 4));
  v15 = (loginstatistics::CTXLoginStatistic *)loginstatistics::CTXLoginStatistic::instance();
  loginstatistics::CTXLoginStatistic::setAutoLogin(v15, v59 != 0);
  CTXStringW::CTXStringW(&v58, &v68);
  v57 = 0;
  v16 = L"OnSoonLogin()";
  v17 = 0;
  v18 = 79;
  do
  {
    if ( (_WORD)v18 == 40 )
      break;
    ++v16;
    v86[v17++] = v18;
    v18 = *v16;
  }
  while ( (_WORD)v18 );
  v19 = v17;
  if ( v19 >= 512 )
  {
    sub_5850FBA(v19 * 2, v18);
    __debugbreak();
    JUMPOUT(*(_DWORD *)sub_584B19C);
  }
  v86[v19] = 0;
  sub_584BD6E(v86);
  v20 = v81;
  for ( i = *v81; (_DWORD *)i != v20; i = *(_DWORD *)i )
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(i + 8) + 16))(*(_DWORD *)(i + 8));
  sub_5848935(&v81);
  v78 = &String;
  sub_58455A3(L"func", 2, L"PerfStand.LoginIM.Begin", (const char *)L"%s", &v78);
  v22 = (wchar_t *)GetTickCount();
  v23 = CTXStringW::CTXStringW(&v79, v73, "wLoginInterval", -1);
  CTXBSTR::CTXBSTR(&v75, v23);
  CTXStringW::~CTXStringW((CTXStringW *)&v79);
  v24 = (PerfDataReportUtil *)CTXBSTR::operator wchar_t *(&v75);
  PerfDataReportUtil::SetPerfReportDataForWord(v24, v22, 0, v54);
  CTXBSTR::~CTXBSTR((CTXBSTR *)&v75);
  PerfDataReport2DC::SetPerfReportData((PerfDataReport2DC *)8, (unsigned __int32)v22, 0i64, v54);
  v25 = (loginstatistics::CTXLoginStatistic *)loginstatistics::CTXLoginStatistic::instance();
  loginstatistics::CTXLoginStatistic::setLoginStartTick(v25, (unsigned int)v22);
  v60 = v63;
  v69 = v64;
  v26 = (unsigned int)CTXStringW::GetString((CTXStringW *)&v58);
  sub_584553B(
    L"file",
    252,
    L"func",
    2,
    L"QQLogin_Logic",
    L"[LoginLogic::OnUIProtocol_DoLogin] \u5f00\u59cb\u767b\u5f55 uin=%s, RememberPwd=%d, PwdType=%d, Status=%d,StatusIsMa"
     "nual=%d, AutoLogin=%d",
    v26);
  sub_5845BF3();
  LOBYTE(v60) = v59 != 0;
  v27 = v64 != 0;
  v28 = CTXStringW::operator wchar_t const *(&v58);
  sub_5846504(v28, v65, v27, (char)v60, 0);
  v29 = (_DWORD *)sub_584B739(v61);
  v60 = v29;
  if ( v29 )
  {
    sub_584B8EF(v67, v66);
    if ( v63 == (_DWORD *)3 )
    {
      HIDWORD(v53) = v33;
      CTXStringW::CTXStringW((char *)&v53 + 4, &v58);
      v34 = sub_584B80B(&v80, SBYTE4(v53));
      sub_5845560(v34);
      if ( v80 )
      {
        v35 = *v80;
        HIDWORD(v53) = v80;
        (*(void (__stdcall **)(int *))(v35 + 8))(v80);
      }
      goto LABEL_46;
    }
    CTXStringW::CTXStringW((CTXStringW *)&v71);
    CTXStringW::CTXStringW((CTXStringW *)&v70);
    if ( Util::SSOLogin::GetDirectLoginInfo((Util::SSOLogin *)&v71, (struct CTXStringW *)&v70, (struct CTXStringW *)v54) )
    {
      v41 = CTXStringW::operator wchar_t const *(&v70);
      CTXStringA::CTXStringA(&v62, v73, v41, -1);
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      if ( CTXStringA::GetLength((CTXStringA *)&v62) > 16 )
        v42 = 16;
      else
        v42 = CTXStringA::GetLength((CTXStringA *)&v62);
      HIDWORD(v53) = v42;
      v43 = CTXStringA::GetBuffer((CTXStringA *)&v62);
      Md5HashBuffer((unsigned __int8 *)&v82, v43, HIDWORD(v53));
      CTXStringW::operator=(&v58, &v71);
      v44 = (int)v57;
      if ( !v57 )
      {
        Util::Data::CreateTXBuffer((Util::Data *)&v57, v54);
        v44 = (int)v57;
      }
      (*(void (__stdcall **)(int, int *, signed int))(*(_DWORD *)v44 + 56))(v44, &v82, 16);
      CTXStringA::~CTXStringA((CTXStringA *)&v62);
      v29 = v60;
      goto LABEL_45;
    }
    v76 = 1;
    if ( !v55 || ((*(void (__stdcall **)(int, int *))(*(_DWORD *)v55 + 28))(v55, &v76), v76) )
    {
      HIDWORD(v53) = &v73;
      v39 = v61[5];
      v40 = sub_5845012(&v73);
      sub_5845560(v40);
      if ( (_DWORD)v73 )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v73 + 8))(v73);
      goto LABEL_45;
    }
    sub_5845560(&v55);
    v36 = v55;
    if ( v55 )
    {
      v69 = 0;
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v55 + 52))(v55, (int *)&v69);
      v36 = v55;
      v37 = v69;
      if ( v55 )
      {
        v61 = 0;
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v55 + 48))(v55, (int *)&v61);
        v38 = v61;
        v36 = v55;
        goto LABEL_32;
      }
    }
    else
    {
      v37 = 0;
    }
    v38 = 0;
LABEL_32:
    if ( v37 )
    {
      do
      {
        *v38++ = 0;
        --v37;
      }
      while ( v37 );
      v36 = v55;
    }
    if ( v36 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v36 + 32))(v36);
LABEL_45:
    CTXStringW::~CTXStringW((CTXStringW *)&v70);
    CTXStringW::~CTXStringW((CTXStringW *)&v71);
LABEL_46:
    v45 = *v29;
    v53 = __PAIR__(v72, v64);
    v46 = (int)v63;
    v52 = v65;
    v47 = *(void (__stdcall **)(int))(v45 + 944);
    v51 = 0;
    sub_5845560(&v57);
    v50 = v46;
    v49 = v48;
    CTXStringW::CTXStringW(&v49, &v58);
    v47(v66);  //==================================>sub_58412AF
  }
  if ( v57 )
  {
    v30 = *v57;
    HIDWORD(v53) = v57;
    (*(void (__stdcall **)(int *))(v30 + 8))(v57);
    v57 = 0;
  }
  CTXStringW::~CTXStringW((CTXStringW *)&v58);
  sub_5841444(&v66);
  sub_5841444(&v67);
  if ( v55 )
  {
    v31 = *(_DWORD *)v55;
    HIDWORD(v53) = v55;
    (*(void (__stdcall **)(int))(v31 + 8))(v55);
    v55 = 0;
  }
  CTXBSTR::~CTXBSTR((CTXBSTR *)&v68);
  return sub_5841444(&Target);
}	   
	   


//==================================================================================================================================
0019F0C4 0584D0A9 0584D6D1 10  loginlogic.0584D6D1    User
char __usercall sub_584D699@<al>(int a1@<edx>, int a2@<ecx>, int a3, void (__thiscall *a4)(int, int, int))
{
  int v4; // edi@1
  int v5; // esi@1
  char result; // al@3
  int Dst; // [sp+8h] [bp-Ch]@2
  int v8; // [sp+Ch] [bp-8h]@3
  int v9; // [sp+10h] [bp-4h]@1

  v4 = a2;
  v9 = a1 + 1;
  v5 = sub_5847554((void *)(a1 + 1)) + 1;
  if ( v5 > v4 || (sub_5847578(&Dst, (int)&v9), v5 != v4) )
  {
    result = 0;
  }
  else
  {
    a4(a3, Dst, v8);//==============>0584B191/sub_584AB39
    result = 1;
  }
  return result;
}	   
	   


//==================================================================================================================================
0019F0D4 0584D3FD 0584D0A9 28  loginlogic.0584D0A9    User
int __stdcall sub_584D090(int a1, int a2, int a3, int a4)
{
  sub_5844900();
  return sub_584D699(a3, a4); //==============>
}

//==================================================================================================================================
0019F0FC 0584EC6A 0584D3FD 20  loginlogic.0584D3FD    User
void __thiscall sub_584D34E(_DWORD *this, signed int a2, _BYTE *a3)
{
  signed int v3; // esi@1
  _DWORD *v4; // ebx@1
  unsigned int v5; // edi@2
  signed int v6; // eax@2
  int v7; // eax@5
  void (__thiscall *v8)(_DWORD *, signed int, _BYTE *, _DWORD, _DWORD); // edx@7
  int v9; // eax@8
  int v10; // [sp+Ch] [bp-4h]@4

  v3 = a2;
  v4 = this;
  if ( a2 )
  {
    v5 = *a3;
    v6 = a2;
    if ( a2 > 20 )
      v6 = 20;
    v10 = v6;
    CTXStringW::CTXStringW((CTXStringW *)&a2);
    if ( v10 > 0 )
    {
      v7 = Util::Encode::Encode16(&v10, a3, v10);
      CTXStringW::operator=(&a2, v7);
      CTXStringW::~CTXStringW((CTXStringW *)&v10);
    }
    CTXStringW::GetString((CTXStringW *)&a2);
    sub_584553B(L"file", 35, L"func", 2, L"IPCSession", L"RecvPacket, Protocol=%d, len=%d, buf=%s", v5);
    if ( v3 >= 0 )
    {
      v8 = (void (__thiscall *)(_DWORD *, signed int, _BYTE *, _DWORD, _DWORD))v4[v5];
      if ( v8 )
      {
        v9 = v4[v5 + 52];
        if ( v9 )
        {
          if ( v5 < 0x2A )
            v8(v4, v3, a3, *(_DWORD *)v9, *(_DWORD *)(v9 + 4)); //============================>
        }
      }
    }
    CTXStringW::~CTXStringW((CTXStringW *)&a2);
  }
}


//==================================================================================================================================
0019F11C 0584EB3E 0584EC6A 20  loginlogic.0584EC6A    User
char __thiscall sub_584EC11(int this, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // eax@4
  void (__thiscall ***v5)(_DWORD, _DWORD); // edi@4
  const void *v6; // esi@5
  int v7; // ecx@5
  char result; // al@5
  int Dst; // [sp+Ch] [bp-4h]@5

  v3 = this;
  if ( a2 >= 0
    && a3 >= 0
    && *(_DWORD *)(this + 20)
    && (sub_5848474(), v4 = sub_5850605(a3, a2), (v5 = (void (__thiscall ***)(_DWORD, _DWORD))v4) != 0) )
  {
    v6 = *(const void **)(v4 + 16);
    Dst = 0;
    memcpy(&Dst, v6, 4u);
    v7 = *(_DWORD *)(v3 + 20);
    sub_584D34E(Dst, (char *)v6 + 4); //===============>
    sub_5848474();
    sub_58506EB(v5);
    (**v5)(v5, 1);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
//==================================================================================================================================
0019F13C 771847AB 0584EB3E 2C  loginlogic.0584EB3E    System
LRESULT __stdcall sub_584EA99(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v4; // eax@2
  int v5; // eax@2
  int v6; // eax@6
  int v7; // eax@6
  int v8; // eax@14
  int v9; // eax@14

  if ( Msg == 5684 )
  {
    sub_584553B(L"file", 566, L"func", 2, L"IPCMgr", L"IPCMgr::MsgWndProc, IPC_HEARTTICK_QUIT, hwnd=0x%p", (char)hWnd);
    v4 = sub_584DB9B();
    v5 = sub_584DD80(v4);
    if ( !v5 )
      return DefWindowProcW(hWnd, Msg, wParam, lParam);
    sub_584D453(v5);
  }
  if ( Msg == 2337 || Msg == 3364 )
  {
    v6 = sub_584DB9B();
    v7 = sub_584DD80(v6);
    if ( !v7 )
      return DefWindowProcW(hWnd, Msg, wParam, lParam);
    *(_DWORD *)(v7 + 392) = 0;
    *(_BYTE *)(v7 + 389) = 0;
  }
  if ( Msg == 2337 )
  {
    sub_584DB9B(); 
    sub_584EB93(wParam, lParam);
    goto LABEL_12;
  }
  if ( Msg != 3364 )
  {
LABEL_12:
    if ( Msg != 2337 && Msg != 3364 )
      return DefWindowProcW(hWnd, Msg, wParam, lParam);
    goto LABEL_14;
  }
  sub_584DB9B();
  sub_584EC11(wParam, lParam); //========================>
LABEL_14:
  v8 = sub_584DB9B();
  v9 = sub_584DD80(v8);
  if ( v9 && *(_BYTE *)(v9 + 389) )
    return *(_DWORD *)(v9 + 392);
  return DefWindowProcW(hWnd, Msg, wParam, lParam);
}
//==================================================================================================================================
0019F168 771652AC 771847AB E4  user32.771847AB        System

//==================================================================================================================================
0019F24C 771643FE 771652AC 74  user32.771652AC        System


//==================================================================================================================================
0019F2C0 771641E0 771643FE C   user32.771643FE        System


//==================================================================================================================================
0019F2CC 51B24578 771641E0 18  user32.771641E0        User

//==================================================================================================================================
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578     User


bool __thiscall AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // edi@1
  DWORD v2; // esi@1
  bool result; // al@2
  struct tagMSG Msg; // [sp+8h] [bp-1Ch]@1

  v1 = this;
  v2 = (GetQueueStatus(0x40u) >> 16) & 0x40;
  if ( PeekMessageW(&Msg, 0, 0, 0, 1u) )
    result = AsyncTask::MessagePumpForUI::ProcessMessageHelper(v1, &Msg);
  else
    result = (_WORD)v2 != 0;
  return result;
}

char __thiscall AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg)
{
  AsyncTask::MessagePumpForUI *v2; // edi@1

  v2 = this;
  if ( lpMsg->message == 18 )
  {
    *(_BYTE *)(*((_DWORD *)this + 11) + 4) = 1;
    PostQuitMessage(lpMsg->wParam);
    return 0;
  }
  if ( lpMsg->message == 36863 && lpMsg->hwnd == (HWND)*((_DWORD *)this + 12) )
    return AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(this);
  if ( !CallMsgFilterW(lpMsg, 20481) )
  {
    AsyncTask::MessagePumpWin::WillProcessMessage(v2, lpMsg);
    TranslateMessage(lpMsg);
    if ( lpMsg->message == 36863 && lpMsg->hwnd == (HWND)*((_DWORD *)v2 + 12) )
    {
      this = v2;
      return AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(this);
    }
    DispatchMessageW(lpMsg);  //===================> 771641E0
    AsyncTask::MessagePumpWin::DidProcessMessage(v2, lpMsg);
  }
  return 1;
}

//==================================================================================================================================
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
void __thiscall AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // esi@1
  bool v2; // bl@1
  int i; // eax@1
  char v4; // al@2
  int v5; // ecx@2
  char v6; // bl@2
  char v7; // bl@3
  int v8; // ecx@6
  char v9; // al@8

  v1 = this;
  v2 = AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(this);
  for ( i = *((_DWORD *)v1 + 11); !*(_BYTE *)(i + 4); i = *((_DWORD *)v1 + 11) )
  {
    v4 = (*(int (**)(void))(**(_DWORD **)i + 4))();
    v5 = *((_DWORD *)v1 + 11);
    v6 = v4 | v2;
    if ( *(_BYTE *)(v5 + 4) )
      break;
    v7 = (*(int (__stdcall **)(char *))(**(_DWORD **)v5 + 8))((char *)v1 + 32) | v6;
    if ( v7 && !*((_QWORD *)v1 + 4) )
      KillTimer(*((HWND *)v1 + 12), (UINT_PTR)v1);
    v8 = *((_DWORD *)v1 + 11);
    if ( *(_BYTE *)(v8 + 4) )
      break;
    if ( !v7 )
    {
      v9 = (*(int (**)(void))(**(_DWORD **)v8 + 12))();
      if ( *(_BYTE *)(*((_DWORD *)v1 + 11) + 4) )
        return;
      if ( !v9 )
        AsyncTask::MessagePumpForUI::WaitForWork(v1);
    }
    v2 = AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(v1); //============>51B24578
  }
}

//==================================================================================================================================
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User 

//==================================================================================================================================
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User //AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
void __thiscall AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
  JUMPOUT(*((_BYTE *)this + 89), 0, AsyncTask::MessageLoop::RunInternalInSEHFrame);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 4))(this); //============>51B244FB
}


{
	
.text:51B22065                 mov     edx, ecx
.text:51B22067                 cmp     byte ptr [edx+89], 0
.text:51B2206B                 jnz     ?RunInternalInSEHFrame@MessageLoop@AsyncTask@@IAEXXZ ; AsyncTask::MessageLoop::RunInternalInSEHFrame(void)
.text:51B22071                 mov     ecx, [edx+64]
.text:51B22074                 push    edx
.text:51B22075                 mov     eax, [ecx]
.text:51B22077                 call    dword ptr [eax+4]
.text:51B2207A                 retn	
	
}



//==================================================================================================================================
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User

//==================================================================================================================================
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User

//==================================================================================================================================
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 759F6359 00403365 10  qq.00403365            System

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

