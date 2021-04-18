/*
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

//------------------
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

#define UV_REQ_FIELDS                                                         \
  /* public */                                                                \
  void* data;                                                                 \
  /* read-only */                                                             \
  uv_req_type type;                                                           \
  /* private */                                                               \
  void* reserved[6];                                                          \
  UV_REQ_PRIVATE_FIELDS                                                       \
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



















//==================================================================================================================================






//==================================================================================================================================
