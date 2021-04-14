/*  

Libevent、libev、libuv 三个网络库，都是c语言实现的异步事件库
	libevent :名气最大，应用最广泛，历史悠久的跨平台事件库；
	libev :较libevent而言，设计更简练，性能更好，但对Windows支持不够好；
	libuv :开发node的过程中需要一个跨平台的事件库，他们首选了libev，但又要支持Windows，故重新封装了一套，linux下用libev实现，Windows下用IOCP实现
	 
 
//消息发送实例，怎样添加到 uv_loop_t 的?   并没有调用 uv_write, uv_write2  
 
底层sokcet方法
read/write
<ws2_32.dll.recv>
<ws2_32.dll.WSASend>
<ws2_32.dll.WSASendMsg>
<ws2_32.dll.WSARecv>
<ws2_32.dll.recvfrom>
<ws2_32.dll.sendto>
<ws2_32.dll.send>
<ws2_32.dll.WSARecvFrom>
<ws2_32.dll.WSASendTo> 

Windows 平台上有一个 WSASend 函数,可以支持一次发送多个BUFFER的请求,每个被发送的数据被填充到WSABUF结构中,
然后传递给WSASend函数同时提供BUF的数量,这样WSASend就能上面的工作而减少send的调用次数,来提高了性能
#include <winsock2.h>
int WSAAPI WSASendTo (
	SOCKET s,
	LPWSABUF lpBuffers,
	DWORD dwBufferCount,
	LPDWORD lpNumberOfBytesSent,
	int iFlags,
	LPVOID lpTo,
	int iToLen,
	LPWSAOVERLAPPED lpOverlapped,
	LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
s：	用于标识一个已连接的套接口，该套接口以WSA_FLAG_OVERLAPPED标志调用WSASocket()创建。
lpBuffers：	一个指向 WSABUF 结构数组的指针。每个WSABUF结构包含缓冲区的指针和缓冲区的大小。
dwBufferCount：	lpBuffers数组中WSABUF结构的数目。
lpNumberOfBytesSent：	如果发送操作立即完成，则为一个指向所发送数据字节数的指针。
iFlags：	标志位。
lpTo：	（可选）指针，指向目标套接口的地址。
lpTolen：	lpTo中地址的大小。
lpOverlapped：	指向WSAOVERLAPPED结构的指针（对于非重叠套接口则忽略）。
lpCompletionRoutine：	一个指向发送操作完成后调用的完成例程的指针（对于非重叠套接口则忽略）。
 
返回值：
	若无错误发生且发送操作立即完成，则 WSASendTo()函数返回0。
	请注意在这种情况下完成指示（启动指定的完成例程或设置一个事件对象）将早已发生。
	否则的话，将返回SOCKET_ERROR错误，应用程序可通过WSAGetLastError()来获取相应的错误代码。
	错误代码WSA_IO_PENDING表示重叠操作成功启动，过后将有完成指示。任何其他的错误表示重叠操作未能成功地启动，以后也不会有完成指示。
	如果设置了MSG_INTERRUPT标志，则返回值的含义变化。零表示成功，具体含义同上。否则的话，返回值直接包含错误代码。
	
 
 
//消息发送实例，怎样添加到 uv_loop_t 的 
//INLINE static void uv_insert_pending_req(uv_loop_t* loop, uv_req_t* req)   // pending_reqs_tail 添加 

uv_insert_pending_req   .text 55EDB8E0  
uv_insert_pending_req_0 .text 55EE7180  
uv_insert_pending_req_1 .text 55EED760  
uv_insert_pending_req_2 .text 55EF3F70  
uv_insert_pending_req_3 .text 55EFF6D0  
uv_insert_pending_req_4 .text 55F033F0  
uv_insert_pending_req_5 .text 55F0CFE0  





libuv.dll / base=55ED0000
arksocket /base=52AF0000
 

*/





//===============================================================================
arksocket.dll/05140000

dword_5156298


dword_51B06298
51AF0000

.text:51AF563F                 mov     esi, [ebp+lpTlsValue]

.text:51AF568B                 push    0
.text:51AF568D                 push    dword ptr [esi+4]
.text:51AF5690                 call    ds:uv_run




//===============================================================================
//arksocket /base=51AF0000
//dword_51B06298 全局基址 arksocket::IOLoop *, 在 uv_thread_create 创建的线程 sub_51AF563A 中使用
struct arksocket::IOLoop *__cdecl arksocket::IOLoop::DefaultLoop()
{
  arksocket::IOLoop *v0; // esi@1
  arksocket::IOLoop *v1; // eax@2

  v0 = (arksocket::IOLoop *)dword_51B06298;
  if ( !dword_51B06298 )
  {
    v1 = (arksocket::IOLoop *)sub_51AFCBDF(4u);
    v0 = (arksocket::IOLoop *)arksocket::IOLoop::IOLoop(v1); //构造方法
    if ( arksocket::IOLoop::Start(v0) )
    {
      if ( v0 )
      {
        arksocket::IOLoop::~IOLoop(v0);
        sub_51AFCC0F((void *)v0);
      }
      v0 = 0;
    }
    dword_51B06298 = (int)v0;
  }
  return v0;
}




int __thiscall arksocket::IOLoop::Start(arksocket::IOLoop *this)
{
  signed int v1; // esi@1

  v1 = sub_51AF54CA(*(_DWORD *)this);
  sub_51AF4ED2("Loop", "UvLoop.Start, ret=%d", v1);
  return v1;
}
	  
signed int __thiscall sub_51AF54CA(int this)
{
  int v1; // esi@1
  void *v2; // eax@3
  arksocket::Semaphore *v3; // eax@5
  int v4; // eax@5
  int v6; // ST08_4@8

  v1 = this;
  if ( !*(_DWORD *)(this + 4) && !(*(_DWORD *)(this + 16) & 1) )
  {
    v2 = calloc(1u, 0x100u);
    *(_DWORD *)(v1 + 4) = v2; //--------------------------------->
    if ( !v2 || uv_loop_init(v2) )
    {
      v6 = *(_DWORD *)(v1 + 4);
      sub_51AF4EEB("Loop", "uv_loop_init fail, loop=0x%p");
    }
    else
    {
      v3 = (arksocket::Semaphore *)sub_51AFCBDF(4u);
      v4 = arksocket::Semaphore::Semaphore(v3);
      sub_51AF5D62(v4);
      if ( !uv_thread_create(v1 + 8, sub_51AF563A, v1) )
      {
        uv_sem_wait(*(_DWORD *)(v1 + 24));
        return 0;
      }
      sub_51AF4EEB("Loop", "uv_thread_create fail");
    }
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)(v1 + 12) = 0;
    sub_51AF5D62(0);
    if ( *(_DWORD *)(v1 + 4) )
    {
      uv_loop_close(*(_DWORD *)(v1 + 4));
      free(*(void **)(v1 + 4));
      *(_DWORD *)(v1 + 4) = 0;
    }
  }
  return -1;
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

{
	.text:55EF2FA0 _uv_thread_create proc near             ; CODE XREF: uv_thread_createj
.text:55EF2FA0
.text:55EF2FA0 var_10          = dword ptr -10h
.text:55EF2FA0 thread          = dword ptr -0Ch
.text:55EF2FA0 err             = dword ptr -8
.text:55EF2FA0 ptr             = dword ptr -4
.text:55EF2FA0 tid             = dword ptr  8
.text:55EF2FA0 entry           = dword ptr  0Ch
.text:55EF2FA0 arg             = dword ptr  10h
.text:55EF2FA0
.text:55EF2FA0                 push    ebp
.text:55EF2FA1                 mov     ebp, esp
.text:55EF2FA3                 sub     esp, 10h
.text:55EF2FA6                 push    esi
.text:55EF2FA7                 mov     eax, 0CCCCCCCCh
.text:55EF2FAC                 mov     [ebp+var_10], eax
.text:55EF2FAF                 mov     [ebp+thread], eax
.text:55EF2FB2                 mov     [ebp+err], eax
.text:55EF2FB5                 mov     [ebp+ptr], eax
.text:55EF2FB8                 push    0Ch             ; size
.text:55EF2FBA                 call    j__uv__malloc
.text:55EF2FBF                 add     esp, 4
.text:55EF2FC2                 mov     [ebp+ptr], eax
.text:55EF2FC5                 cmp     [ebp+ptr], 0
.text:55EF2FC9                 jnz     short loc_55EF2FD5
.text:55EF2FCB                 mov     eax, 0FFFFF027h
.text:55EF2FD0                 jmp     loc_55EF309A
.text:55EF2FD5 ; ---------------------------------------------------------------------------
.text:55EF2FD5
.text:55EF2FD5 loc_55EF2FD5:                           ; CODE XREF: _uv_thread_create+29j
.text:55EF2FD5                 mov     eax, [ebp+ptr]
.text:55EF2FD8                 mov     ecx, [ebp+entry]
.text:55EF2FDB                 mov     [eax], ecx
.text:55EF2FDD                 mov     edx, [ebp+ptr]
.text:55EF2FE0                 mov     eax, [ebp+arg]
.text:55EF2FE3                 mov     [edx+4], eax
.text:55EF2FE6                 mov     esi, esp
.text:55EF2FE8                 push    0
.text:55EF2FEA                 push    4
.text:55EF2FEC                 mov     ecx, [ebp+ptr]
.text:55EF2FEF                 push    ecx
.text:55EF2FF0                 push    offset uv__thread_start
.text:55EF2FF5                 push    0
.text:55EF2FF7                 push    0
.text:55EF2FF9                 call    ds:__imp___beginthreadex
.text:55EF2FFF                 add     esp, 18h
.text:55EF3002                 cmp     esi, esp
.text:55EF3004                 call    j___RTC_CheckEsp
.text:55EF3009                 mov     [ebp+thread], eax
.text:55EF300C                 cmp     [ebp+thread], 0
.text:55EF3010                 jnz     short loc_55EF3034
.text:55EF3012                 mov     esi, esp
.text:55EF3014                 call    ds:__imp___errno
.text:55EF301A                 cmp     esi, esp
.text:55EF301C                 call    j___RTC_CheckEsp
.text:55EF3021                 mov     edx, [eax]
.text:55EF3023                 mov     [ebp+err], edx
.text:55EF3026                 mov     eax, [ebp+ptr]
.text:55EF3029                 push    eax             ; ptr
.text:55EF302A                 call    j__uv__free
.text:55EF302F                 add     esp, 4
.text:55EF3032                 jmp     short loc_55EF305F
.text:55EF3034 ; ---------------------------------------------------------------------------
.text:55EF3034
.text:55EF3034 loc_55EF3034:                           ; CODE XREF: _uv_thread_create+70j
.text:55EF3034                 mov     [ebp+err], 0
.text:55EF303B                 mov     ecx, [ebp+tid]
.text:55EF303E                 mov     edx, [ebp+thread]
.text:55EF3041                 mov     [ecx], edx
.text:55EF3043                 mov     eax, [ebp+ptr]
.text:55EF3046                 mov     ecx, [ebp+thread]
.text:55EF3049                 mov     [eax+8], ecx
.text:55EF304C                 mov     esi, esp
.text:55EF304E                 mov     edx, [ebp+thread]
.text:55EF3051                 push    edx             ; hThread
.text:55EF3052                 call    ds:__imp__ResumeThread@4 ; ResumeThread(x)
.text:55EF3058                 cmp     esi, esp
.text:55EF305A                 call    j___RTC_CheckEsp
.text:55EF305F
.text:55EF305F loc_55EF305F:                           ; CODE XREF: _uv_thread_create+92j
.text:55EF305F                 mov     eax, [ebp+err]
.text:55EF3062                 mov     [ebp+var_10], eax
.text:55EF3065                 cmp     [ebp+var_10], 16h ; switch 23 cases
.text:55EF3069                 ja      short $LN2_0    ; jumptable 55EF3075 default case
.text:55EF306B                 mov     ecx, [ebp+var_10]
.text:55EF306E                 movzx   edx, ds:byte_55EF30C0[ecx]
.text:55EF3075                 jmp     ds:off_55EF30AC[edx*4] ; switch jump
.text:55EF307C ; ---------------------------------------------------------------------------
.text:55EF307C
.text:55EF307C $LN7_10:                                ; CODE XREF: _uv_thread_create+D5j
.text:55EF307C                                         ; DATA XREF: _uv_thread_create:off_55EF30ACo
.text:55EF307C                 xor     eax, eax        ; jumptable 55EF3075 case 0
.text:55EF307E                 jmp     short loc_55EF309A
.text:55EF3080 ; ---------------------------------------------------------------------------
.text:55EF3080
.text:55EF3080 $LN8_12:                                ; CODE XREF: _uv_thread_create+D5j
.text:55EF3080                                         ; DATA XREF: _uv_thread_create:off_55EF30ACo
.text:55EF3080                 mov     eax, 0FFFFF004h ; jumptable 55EF3075 case 13
.text:55EF3085                 jmp     short loc_55EF309A
.text:55EF3087 ; ---------------------------------------------------------------------------
.text:55EF3087
.text:55EF3087 $LN9_11:                                ; CODE XREF: _uv_thread_create+D5j
.text:55EF3087                                         ; DATA XREF: _uv_thread_create:off_55EF30ACo
.text:55EF3087                 mov     eax, 0FFFFF008h ; jumptable 55EF3075 case 11
.text:55EF308C                 jmp     short loc_55EF309A
.text:55EF308E ; ---------------------------------------------------------------------------
.text:55EF308E
.text:55EF308E $LN10_11:                               ; CODE XREF: _uv_thread_create+D5j
.text:55EF308E                                         ; DATA XREF: _uv_thread_create:off_55EF30ACo
.text:55EF308E                 mov     eax, 0FFFFF019h ; jumptable 55EF3075 case 22
.text:55EF3093                 jmp     short loc_55EF309A
.text:55EF3095 ; ---------------------------------------------------------------------------
.text:55EF3095
.text:55EF3095 $LN2_0:                                 ; CODE XREF: _uv_thread_create+C9j
.text:55EF3095                                         ; _uv_thread_create+D5j
.text:55EF3095                                         ; DATA XREF: ...
.text:55EF3095                 mov     eax, 0FFFFF01Ah ; jumptable 55EF3075 default case
.text:55EF309A
.text:55EF309A loc_55EF309A:                           ; CODE XREF: _uv_thread_create+30j
.text:55EF309A                                         ; _uv_thread_create+DEj ...
.text:55EF309A                 pop     esi
.text:55EF309B                 add     esp, 10h
.text:55EF309E                 cmp     ebp, esp
.text:55EF30A0                 call    j___RTC_CheckEsp
.text:55EF30A5                 mov     esp, ebp
.text:55EF30A7                 pop     ebp
.text:55EF30A8                 retn
.text:55EF30A8 ; ---------------------------------------------------------------------------
.text:55EF30A9                 align 4
.text:55EF30AC off_55EF30AC    dd offset $LN7_10       ; DATA XREF: _uv_thread_create+D5r
.text:55EF30AC                 dd offset $LN9_11       ; jump table for switch statement
.text:55EF30AC                 dd offset $LN8_12
.text:55EF30AC                 dd offset $LN10_11
.text:55EF30AC                 dd offset $LN2_0
.text:55EF30C0 byte_55EF30C0   db      0,     4,     4,     4
.text:55EF30C0                                         ; DATA XREF: _uv_thread_create+CEr
.text:55EF30C0                 db      4,     4,     4,     4 ; indirect table for switch statement
.text:55EF30C0                 db      4,     4,     4,     1
.text:55EF30C0                 db      4,     2,     4,     4
.text:55EF30C0                 db      4,     4,     4,     4
.text:55EF30C0                 db      4,     4,     3
.text:55EF30C0 _uv_thread_create endp
	
}

//dump [ebp+8];dump [ebp+8]+4 ;dump [[ebp+8]+4]  =>dword_51B06298
static UINT __stdcall uv__thread_start(void* arg) {
  struct thread_ctx *ctx_p;
  struct thread_ctx ctx;

  ctx_p = arg;
  ctx = *ctx_p;
  uv__free(ctx_p);

  uv_once(&uv__current_thread_init_guard, uv__init_current_thread_key);
  uv_key_set(&uv__current_thread_key, (void*) ctx.self);

  ctx.entry(ctx.arg); //sub_51AF563A

  return 0;
}
void uv_key_set(uv_key_t* key, void* value) {
  if (TlsSetValue(key->tls_index, value) == FALSE)
    abort();
}
{
.text:55EF3300 uv__thread_start proc near              ; DATA XREF: _uv_thread_create+50o
.text:55EF3300
.text:55EF3300 var_18          = dword ptr -18h
.text:55EF3300 var_14          = dword ptr -14h
.text:55EF3300 var_10          = dword ptr -10h
.text:55EF3300 var_C           = dword ptr -0Ch
.text:55EF3300 var_8           = dword ptr -8
.text:55EF3300 ptr             = dword ptr -4
.text:55EF3300 arg             = dword ptr  8
.text:55EF3300
.text:55EF3300                 push    ebp
.text:55EF3301                 mov     ebp, esp
.text:55EF3303                 sub     esp, 18h
.text:55EF3306                 push    esi
.text:55EF3307                 mov     eax, 0CCCCCCCCh
.text:55EF330C                 mov     [ebp+var_18], eax
.text:55EF330F                 mov     [ebp+var_14], eax
.text:55EF3312                 mov     [ebp+var_10], eax
.text:55EF3315                 mov     [ebp+var_C], eax
.text:55EF3318                 mov     [ebp+var_8], eax
.text:55EF331B                 mov     [ebp+ptr], eax
.text:55EF331E                 mov     eax, [ebp+arg]
.text:55EF3321                 mov     [ebp+ptr], eax
.text:55EF3324                 mov     ecx, [ebp+ptr]
.text:55EF3327                 mov     edx, [ecx]
.text:55EF3329                 mov     [ebp+var_14], edx
.text:55EF332C                 mov     eax, [ecx+4]
.text:55EF332F                 mov     [ebp+var_10], eax
.text:55EF3332                 mov     ecx, [ecx+8]
.text:55EF3335                 mov     [ebp+var_C], ecx
.text:55EF3338                 mov     edx, [ebp+ptr]
.text:55EF333B                 push    edx             ; ptr
.text:55EF333C                 call    j__uv__free
.text:55EF3341                 add     esp, 4
.text:55EF3344                 push    offset uv__init_current_thread_key
.text:55EF3349                 push    offset uv__current_thread_init_guard ; guard
.text:55EF334E                 call    uv_once
.text:55EF3353                 add     esp, 8
.text:55EF3356                 mov     eax, [ebp+var_C]
.text:55EF3359                 push    eax
.text:55EF335A                 push    offset uv__current_thread_key ; key
.text:55EF335F                 call    uv_key_set
.text:55EF3364                 add     esp, 8
.text:55EF3367                 mov     esi, esp
.text:55EF3369                 mov     ecx, [ebp+var_10]
.text:55EF336C                 push    ecx
.text:55EF336D                 call    [ebp+var_14]
.text:55EF3370                 add     esp, 4
.text:55EF3373                 cmp     esi, esp
.text:55EF3375                 call    j___RTC_CheckEsp
.text:55EF337A                 xor     eax, eax
.text:55EF337C                 push    edx
.text:55EF337D                 mov     ecx, ebp        ; frame
.text:55EF337F                 push    eax
.text:55EF3380                 lea     edx, stru_55EF33A0 ; v
.text:55EF3386                 call    j_@_RTC_CheckStackVars@8 ; _RTC_CheckStackVars(x,x)
.text:55EF338B                 pop     eax
.text:55EF338C                 pop     edx
.text:55EF338D                 pop     esi
.text:55EF338E                 add     esp, 18h
.text:55EF3391                 cmp     ebp, esp
.text:55EF3393                 call    j___RTC_CheckEsp
.text:55EF3398                 mov     esp, ebp
.text:55EF339A                 pop     ebp
.text:55EF339B                 retn    4
	
}

struct thread_ctx {
  void (*entry)(void* arg);
  void* arg;
  uv_thread_t self; // 保存 _beginthreadex 返回值
};

//lpTlsValue  dump ecx; dump [ecx]; / dump esi; dump [esi];
int __cdecl sub_51AF563A(LPVOID lpTlsValue)
{
  _DWORD *v1; // esi@1
  int v2; // edi@1
  DWORD v3; // ebx@1
  void *lpTlsValuea; // [sp+14h] [bp+8h]@1

  v1 = lpTlsValue;
  sub_51AF55A1(lpTlsValue);
  lpTlsValuea = *(void **)lpTlsValue;
  v2 = sub_51AF77F3();
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
  
int uv_run(uv_loop_t *loop, uv_run_mode mode) {
  //v1[1] 是 uv_loop_t. 对应上边的 sub_51AF54CA => *(_DWORD *)(v1 + 4) = v2;
  return uv_run(v1[1], 0); // 
}

.text:51AF563F                 mov     esi, [ebp+lpTlsValue]

.text:51AF568B                 push    0
.text:51AF568D                 push    dword ptr [esi+4]
.text:51AF5690                 call    ds:uv_run





//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================

================================================================================
Address  To       From     Si Comment                Party 
07E9FA14 55F0DA6B 775612E0 54 ws2_32.775612E0        User
07E9FA68 55F0C1C5 55F0DA6B 2C libuv.55F0DA6B         User
07E9FA94 55ED87CB 55F0C1C5 28 libuv.55F0C1C5         User
07E9FABC 52AF6A5C 55ED87CB 4C libuv.55ED87CB         User
07E9FB08 52AFB499 52AF6A5C 5C arksocket.52AF6A5C     User
07E9FB64 52AFB413 52AFB499 54 arksocket.52AFB499     User  //sub_52AFB429
07E9FBB8 52AFB124 52AFB413 50 arksocket.52AFB413     User
07E9FC08 52AF2E4B 52AFB124 18 arksocket.52AFB124     User
07E9FC20 52AF2602 52AF2E4B 20 arksocket.52AF2E4B     User //sub_52AF2E27
07E9FC40 52AF25B9 52AF2602 28 arksocket.52AF2602     User
07E9FC68 52AFA17F 52AF25B9 28 arksocket.52AF25B9     User
07E9FC90 52AF9FD2 52AFA17F 70 arksocket.52AFA17F     User
07E9FD00 56DF4302 52AF9FD2 2C arksocket.52AF9FD2     User //sub_52AFA10A
07E9FD2C 56DF9E9A 56DF4302 2C preloginlogic.56DF4302 User
07E9FD58 56DFCB24 56DF9E9A 74 preloginlogic.56DF9E9A User
07E9FDCC 56DF79DF 56DFCB24 24 preloginlogic.56DFCB24 User
07E9FDF0 56DF7DFF 56DF79DF 24 preloginlogic.56DF79DF User
07E9FE14 56DF7A27 56DF7DFF 20 preloginlogic.56DF7DFF User
07E9FE34 56DF75F0 56DF7A27 24 preloginlogic.56DF7A27 User
07E9FE58 52AF159A 56DF75F0 C  preloginlogic.56DF75F0 User
07E9FE64 52AF5297 52AF159A 2C arksocket.52AF159A     User
07E9FE90 55EDBD3B 52AF5297 3C arksocket.52AF5297     User
07E9FECC 55EDAE74 55EDBD3B 18 libuv.55EDBD3B         User
07E9FEE4 52AF5696 55EDAE74 20 libuv.55EDAE74         User
07E9FF04 55EF3370 52AF5696 28 arksocket.52AF5696     User
07E9FF2C 7C2A6CF2 55EF3370 48 libuv.55EF3370         System
07E9FF74 759F6359 7C2A6CF2 10 ucrtbased.7C2A6CF2     System
07E9FF84 77808944 759F6359 5C kernel32.759F6359      System
07E9FFE0 77808914 77808944 10 ntdll.77808944         System
07E9FFF0 00000000 77808914    ntdll.77808914         User



signed int __thiscall sub_52AF9F70(void *this, int a2, int a3, int *a4)
{
  void *v4; // ebx@1
  signed int v5; // esi@4
  int v6; // ST28_4@5
  signed int result; // eax@6
  char v8; // [sp-28h] [bp-78h]@0
  int v9; // [sp-24h] [bp-74h]@0
  int v10; // [sp-20h] [bp-70h]@0
  int v11; // [sp-1Ch] [bp-6Ch]@0
  int v12; // [sp-18h] [bp-68h]@0
  int v13; // [sp-14h] [bp-64h]@0
  int v14; // [sp-10h] [bp-60h]@0
  int v15; // [sp-Ch] [bp-5Ch]@0
  int v16; // [sp-8h] [bp-58h]@0
  int v17; // [sp+Ch] [bp-44h]@3
  int (__thiscall **v18)(void *, char); // [sp+10h] [bp-40h]@5
  int v19; // [sp+14h] [bp-3Ch]@5
  int (__thiscall **v20)(void *, char); // [sp+18h] [bp-38h]@5
  int v21; // [sp+1Ch] [bp-34h]@5
  int (__stdcall *v22)(char, int, char, int, int, int, int); // [sp+20h] [bp-30h]@5
  int v23; // [sp+24h] [bp-2Ch]@5
  int v24; // [sp+28h] [bp-28h]@5
  int v25; // [sp+2Ch] [bp-24h]@5
  int v26; // [sp+30h] [bp-20h]@5
  char v27; // [sp+38h] [bp-18h]@5
  char v28; // [sp+40h] [bp-10h]@5
  void *v29; // [sp+48h] [bp-8h]@5

  v4 = this;
  if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2) )
  {
    *a4 = arksocket::CookieMgr::GetCookie((volatile LONG *)v4 + 45);
    v17 = GetTickCount();
    if ( arksocket::IOLoop::IsLoopThread(*((arksocket::IOLoop **)v4 + 4)) )
    {
      v5 = sub_52AFA10A((int)v4, a2, a3, *a4, v17, 0); //52AF9FD2===============>sub_52AFA10A
    }
    else
    {
      v21 = 0;
      v20 = &off_52AFE370;
      sub_52AF1D01(a3);
      v19 = 0;
      v18 = &off_52AFE370;
      sub_52AF1D01(a2);
      v23 = 0;
      v25 = 0;
      v24 = v17;
      v22 = sub_52AFA0AF;
      v26 = *a4;
      sub_52AF7676(&v20);
      sub_52AF7676(&v18);
      v29 = v4;
      v6 = sub_52AFAADA(&v22);
      sub_52AF1648(&v28);
      sub_52AF1648(&v27);
      v5 = arksocket::Async::AsyncCall(v8, v9, v10, v11, v12, v13, v14, v15, v16, v6);
      sub_52AF1648(&v18);
      sub_52AF1648(&v20);
    }
    result = v5;
  }
  else
  {
    sub_52AF4ED2("udp_channel", "UdpChannelImpl::Send, buffer is NULL.");
    result = -1;
  }
  return result;
}


signed int __thiscall sub_52AFA10A(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi@1
  int v8; // eax@4
  int v9; // esi@6

  v6 = this;
  if ( !a2 )
  {
    sub_52AF4ED2("udp_channel", "UdpChannelImpl::_SendData, buffer is NULL.");
    return -1;
  }
  v8 = a3;
  if ( !a3 )
  {
    v8 = *(_DWORD *)(this + 188);
    if ( !v8 )
    {
      arksocket::ChannelSendOption::ChannelSendOption((arksocket::ChannelSendOption *)&a3);
      v9 = a3;
      (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 20))(a3);
      sub_52AF1D01(v9);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v8 = *(_DWORD *)(v6 + 188);
    }
  }
  if ( !sub_52AF24FC((char *)(v6 + 112), a2, v8, a4, a5, a6) ) //52AFA17F  =====>sub_52AF24FC
  {
    sub_52AF4ED2("udp_channel", "UdpChannelImpl::_SendData, SendPacket fail.");
    return -1;
  }
  return 0;
}

--------------

char __thiscall sub_52AF24FC(char *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // esi@1
  int v7; // eax@3
  int v8; // edi@3
  int v9; // ebx@3
  int v11; // eax@7
  int v12; // ecx@7
  char v13; // [sp+10h] [bp-Ch]@7

  v6 = this;
  if ( !a2 || !a3 )
    return 0;
  v7 = sub_52AFCBDF(0x40u);  //---------------->
  v8 = sub_52AF23DC(v7);	 //---------------->
  sub_52AF1D01(a2);
  v9 = a4;
  *(_DWORD *)v8 = a4;
  arksocket::IPEndPoint::operator=(v6 + 8);
  sub_52AF1D01(a3);
  *(_DWORD *)(v8 + 32) = a5;
  *(_DWORD *)(v8 + 36) = a6;
  a2 = v9;
  if ( *(_DWORD *)sub_52AF2EC3(&a3, &a2) != *((_DWORD *)v6 + 4) )
  {
    sub_52AF4ED2("data_sender", "DataSender::SendPacket, same cookie found, cookie=%u");
    return 0;
  }
  a5 = v9;
  a6 = v8;
  v11 = sub_52AF39E7(&a5);
  sub_52AF3A34(&v13, v12, v11 + 16, v11);
  sub_52AF25C4((int)v6, v8);  //52AF25B9 =============>
  sub_52AF2D3A(v6);
  return 1;
}

--------------
int __thiscall sub_52AF25C4(int this, int a2)
{
  int v2; // esi@1
  int v3; // edi@1
  __time64_t v4; // rax@7
  int v5; // ebx@7
  int v6; // edx@7
  int v7; // eax@7
  __int64 v9; // [sp+Ch] [bp-8h]@7
  _DWORD *v10; // [sp+1Ch] [bp+8h]@7

  v2 = a2;
  v3 = this;
  if ( !*(_BYTE *)(this + 4) && arksocket::IPEndPoint::IsValid((arksocket::IPEndPoint *)(this + 8)) )
  {
    if ( !arksocket::IPEndPoint::IsValid((arksocket::IPEndPoint *)(a2 + 12)) )
      arksocket::IPEndPoint::operator=(v3 + 8);
    if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a2) )  // 52AF2602 ============>sub_52AF2E27
      ++*(_DWORD *)(a2 + 20);
  }
  v4 = time64(0);
  v5 = *(_DWORD *)(a2 + 56);
  v9 = v4;
  v10 = *(_DWORD **)(v5 + 4);
  v6 = sub_52AF387B(v5, *(_DWORD *)(v5 + 4), &v9);
  v7 = *(_DWORD *)(v2 + 60);
  if ( (unsigned int)(268435454 - v7) < 1 )
    std::_Xlength_error("list<T> too long");
  *(_DWORD *)(v2 + 60) = v7 + 1;
  *(_DWORD *)(v5 + 4) = v6;
  *v10 = v6;
  return sub_52AF2663(v2);
}

int __thiscall sub_52AF2E27(int this, int a2)
{
  int v2; // ecx@1
  int result; // eax@2

  v2 = *(_DWORD *)(this + 64);
  if ( v2 )
    result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v2 + 24))(
               *(_DWORD *)(a2 + 8),
               a2 + 12,
               *(_DWORD *)a2);   // 52AF2E4B =====>  sub_52AFB0D7/52AFB124
  else
    result = -1;
  return result;
}


int __thiscall sub_52AFB0D7(int this, int a2, arksocket::IPEndPoint *a3, int a4)
{
  int v4; // ebx@1
  int result; // eax@5
  int v6; // ST28_4@6
  int v7; // esi@6
  char v8; // [sp-28h] [bp-60h]@0
  int v9; // [sp-24h] [bp-5Ch]@0
  int v10; // [sp-20h] [bp-58h]@0
  int v11; // [sp-1Ch] [bp-54h]@0
  int v12; // [sp-18h] [bp-50h]@0
  int v13; // [sp-14h] [bp-4Ch]@0
  int v14; // [sp-10h] [bp-48h]@0
  int v15; // [sp-Ch] [bp-44h]@0
  int v16; // [sp-8h] [bp-40h]@0
  int (__thiscall **v17)(void *, char); // [sp+10h] [bp-28h]@6
  int v18; // [sp+14h] [bp-24h]@6
  int (__stdcall *v19)(char, int, int, int); // [sp+18h] [bp-20h]@6
  int v20; // [sp+1Ch] [bp-1Ch]@6
  int v21; // [sp+20h] [bp-18h]@6
  char v22; // [sp+24h] [bp-14h]@6
  int v23; // [sp+30h] [bp-8h]@6

  v4 = this;
  if ( *(_DWORD *)(this + 12) && a2 && arksocket::IPEndPoint::IsValid(a3) )
  {
    if ( arksocket::IOLoop::IsLoopThread(*(arksocket::IOLoop **)(v4 + 12)) )
    {
      result = sub_52AFB21C((_DWORD *)v4, a2, (int)a3, a4); //52AFB124 =============> sub_52AFB21C
    }
    else
    {
      v18 = 0;
      v17 = &off_52AFE370;
      sub_52AF1D01(a2);
      v20 = 0;
      v19 = sub_52AFB1E6;
      v21 = a4;
      arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v22, a3);
      sub_52AF7676(&v17);
      v23 = v4;
      v6 = sub_52AFC04A(&v19);
      sub_52AFB1CA(&v21);
      v7 = arksocket::Async::AsyncCall(v8, v9, v10, v11, v12, v13, v14, v15, v16, v6);
      sub_52AF1648(&v17);
      if ( v7 )
        sub_52AF4ED2("udp", "UdpImpl::Send, AsyncCall fail, ret=%d");
      result = v7;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}

signed int __thiscall sub_52AFB21C(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // ebx@1
  int v5; // edi@1
  int v6; // eax@1
  const void **v7; // eax@2
  int v8; // esi@4
  int v9; // eax@5
  int v10; // eax@6
  signed int result; // eax@7
  int v12; // eax@10
  int v13; // eax@11
  int v14; // ST08_4@12
  int v15; // eax@13
  int v16; // esi@13
  int v17; // ST0C_4@13
  int v18; // ecx@13
  int v19; // esi@13
  _DWORD *v20; // edi@13
  int v21; // edx@13
  int v22; // eax@13
  void *Memory; // [sp+10h] [bp-38h]@2
  int v24; // [sp+14h] [bp-34h]@13
  void *v25; // [sp+18h] [bp-30h]@2
  char v26; // [sp+1Ch] [bp-2Ch]@2
  int v27; // [sp+20h] [bp-28h]@1
  int v28; // [sp+24h] [bp-24h]@1
  int v29; // [sp+28h] [bp-20h]@1
  char v30; // [sp+2Ch] [bp-1Ch]@5

  v27 = -1;
  v4 = this;
  v29 = a2;
  v5 = a3;
  v6 = *this;
  v28 = a3;
  if ( !(unsigned __int8)(*(int (**)(void))(v6 + 44))() )
  {
    arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v25);
    v26 = 1;
    v7 = (const void **)arksocket::IPEndPoint::IPEndPoint(
                          (arksocket::IPEndPoint *)&Memory,
                          (const struct arksocket::IPAddress *)&arksocket::IPAddress::Any,
                          0);
    if ( (const void **)&v25 != v7 )
    {
      qmemcpy(v25, *v7, 0x80u);
      v5 = v28;
    }
    sub_52AFCC0F(Memory);
    sub_52AFAED3((arksocket::IPEndPoint *)&v25, (int)&v27);
    v8 = v27;
    if ( v27 )
    {
      arksocket::IPEndPoint::GetAddress(v5, &Memory);
      v9 = arksocket::IPAddress::GetString(&v30);
      if ( *(_DWORD *)(v9 + 20) >= 0x10u )
        v10 = *(_DWORD *)v9;
      sub_52AF4ED2("udp", "UvUdpImpl, _Send, Open Fail, ret=%d, dest-addr=%s");
      sub_52AF3015(&v30);
      arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Memory);
      sub_52AFCC0F(v25);
      return v8;
    }
    sub_52AFCC0F(v25);
  }
  if ( v4[19] <= 0x20000 )
  {
    v15 = sub_52AFCBDF(0x10u);
    v16 = v15;
    *(_DWORD *)v15 = 0;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)(v15 + 8) = 0;
    *(_DWORD *)(v15 + 12) = 0;
    arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)(v15 + 4));
    v17 = v29;
    v18 = v16 + 8;
    *(_DWORD *)(v18 + 4) = 0;
    *(_DWORD *)v18 = &off_52AFE370;
    v24 = v16;
    sub_52AF1D01(v17);
    arksocket::IPEndPoint::operator=(v28);
    *(_DWORD *)v24 = a4;
    v19 = v4[17];
    v20 = *(_DWORD **)(v19 + 4);
    v21 = sub_52AF19C1(v4[17], *(_DWORD *)(v19 + 4), &v24);
    v22 = v4[18];
    if ( (unsigned int)(357913940 - v22) < 1 )
      std::_Xlength_error("list<T> too long");
    v4[18] = v22 + 1;
    *(_DWORD *)(v19 + 4) = v21;
    *v20 = v21;
    v4[19] += (*(int (**)(void))(**(_DWORD **)(v24 + 12) + 16))();
    sub_52AFB429((int)v4); // ===============>
    result = 0;
  }
  else
  {
    arksocket::IPEndPoint::GetAddress(v5, &Memory);
    v12 = arksocket::IPAddress::GetString(&v30);
    if ( *(_DWORD *)(v12 + 20) >= 0x10u )
      v13 = *(_DWORD *)v12;
    v14 = v4[19];
    sub_52AF4ED2("udp", "UvUdpImpl, _Send, send queue is full, drop the data, queue-size=%u, dest-addr=%s.");
    sub_52AF3015(&v30);
    arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Memory);
    result = -1;
  }
  return result;
} 




//循环
void __thiscall sub_52AFB429(int this)
{
  int v1; // edi@1
  _DWORD *v2; // ecx@3
  int v3; // esi@3
  int v4; // eax@3
  int v5; // edx@3
  int v6; // ecx@3
  int v7; // eax@4
  int v8; // ecx@4
  int v9; // edi@4
  int v10; // ST28_4@4
  int v11; // ST20_4@4
  int v12; // ST24_4@4
  char v13; // [sp-28h] [bp-68h]@0
  int v14; // [sp-24h] [bp-64h]@0
  int v15; // [sp-20h] [bp-60h]@0
  int v16; // [sp-1Ch] [bp-5Ch]@0
  int v17; // [sp-18h] [bp-58h]@0
  int v18; // [sp-14h] [bp-54h]@3
  int v19; // [sp-10h] [bp-50h]@3
  int (__stdcall *v20)(int, int, int, int); // [sp+10h] [bp-30h]@4
  int v21; // [sp+14h] [bp-2Ch]@4
  int v22; // [sp+18h] [bp-28h]@4
  char v23; // [sp+1Ch] [bp-24h]@4
  int v24; // [sp+28h] [bp-18h]@4
  int v25; // [sp+2Ch] [bp-14h]@4
  char v26; // [sp+30h] [bp-10h]@4
  int v27; // [sp+38h] [bp-8h]@1
  int v28; // [sp+3Ch] [bp-4h]@3

  v1 = this;
  v27 = this;
  if ( *(_DWORD *)(this + 72) && !(*(_BYTE *)(this + 80) & 1) )   //循环 ------------------------>触发变化 /52AFB437
  {
    v2 = **(_DWORD ***)(this + 68);
    v3 = v2[2];
    *(_DWORD *)v2[1] = *v2;
    *(_DWORD *)(*v2 + 4) = v2[1];
    --*(_DWORD *)(v1 + 72);
    sub_52AF194D(v2);
    v4 = (*(int (**)(void))(**(_DWORD **)(v3 + 12) + 16))();
    v5 = *(_DWORD *)(v1 + 56);
    *(_DWORD *)(v1 + 76) -= v4;
    v28 = sub_52AF69A6(
            *(_DWORD **)(v1 + 36),
            *(_DWORD *)(v1 + 16),
            *(_DWORD *)(v3 + 12),
            (arksocket::IPEndPoint *)(v3 + 4),
            v5 != 0 ? v5 + 8 : 0,
            *(_DWORD *)v3);  // 52AFB499 =========================> sub_52AF69A6
    if ( v28 )
    {
      sub_52AF4ED2("udp", "UvUdpImpl::_SendQueueData, Send fail, ret=%d");
      v7 = sub_52AF7676(v3 + 8);
      v8 = *(_DWORD *)v3;
      v21 = 0;
      v9 = v7;
      v22 = v8;
      v20 = sub_52AFB52F;
      arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v23, (const struct arksocket::IPEndPoint *)(v3 + 4));
      sub_52AF7676(v9);
      v1 = v27;
      v24 = v28;
      v25 = v27;
      v10 = sub_52AFC092(&v20);
      sub_52AFB1CA(&v22);
      arksocket::Async::AsyncCall(v13, v14, v15, v16, v17, v18, v19, v11, v12, v10);
      sub_52AF1648(&v26);
    }
    *(_DWORD *)(v1 + 80) |= 1u;
    sub_52AFBACB((void *)v3, v6);
  }
}


int __thiscall sub_52AF69A6(_DWORD *this, int a2, int a3, arksocket::IPEndPoint *a4, int a5, int a6)
{
  _DWORD *v6; // edi@1
  int v7; // eax@7
  int v8; // ebx@7
  int *v9; // esi@7
  int v10; // ecx@7
  _DWORD *v11; // ebx@9
  int v12; // edi@9
  int v13; // eax@9
  int v14; // edx@9
  int v15; // eax@9
  int v16; // edi@9
  int *v17; // ecx@10
  int *v18; // ebx@11
  int v19; // edi@11
  int v21; // [sp+10h] [bp-14h]@9
  int v22; // [sp+14h] [bp-10h]@9
  int v23; // [sp+18h] [bp-Ch]@1

  v6 = this;
  v23 = (int)this;
  if ( !a2 || !a3 || !arksocket::IPEndPoint::IsValid(a4) || !a5 )
  {
    sub_52AF4ED2("op", "UvUdpSend::Send, Invalid Arg");
    return -1;
  }
  if ( v6[3] )
  {
    sub_52AF4ED2("op", "UvUdpSend::Send, sending in progress.");
    return -1;
  }
  v7 = sub_52AFCBDF(0x68u);
  v8 = sub_52AF6916(v7);
  v9 = (int *)v8;
  v10 = *(_DWORD *)(v8 + 84);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 8))();
  *(_DWORD *)(v8 + 84) = v6;
  (*(void (__thiscall **)(void *))(*v6 + 4))(v6);
  v11 = (_DWORD *)(v8 + 4);
  *v11 = v6;
  v12 = (*(int (**)(void))(*(_DWORD *)a3 + 16))();
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);
  v21 = uv_buf_init(v13, v12);
  v22 = v14;
  v15 = uv_udp_send(v11, a2, &v21, 1, *(_DWORD *)a4, sub_52AF6B21);   //52AF6A5C================>uv_udp_send
  v16 = v15;
  if ( v15 )
  {
    uv_strerror(v15);
    sub_52AF4ED2("op", "UvUdpSend, uv_udp_send fail, check=%d, ret=%d, %s");
  }
  else
  {
    v18 = v9;
    *v9 = a2;
    sub_52AF1D01(a5);
    sub_52AF1D01(a3);
    arksocket::IPEndPoint::operator=(a4);
    v19 = v23;
    v9 = 0;
    v18[19] = a6;
    v17 = *(int **)(v19 + 12);
    if ( v18 != v17 && v17 )
      sub_52AF7792(v17, *(_DWORD *)(v19 + 12));
    *(_DWORD *)(v19 + 12) = v18;
    v16 = 0;
  }
  if ( v9 )
    sub_52AF7792(v9, (int)v17);
  return v16;
}





//===============================================================================





//===============================================================================



	  


//===============================================================================



	  


//===============================================================================
//创建 arksocket

0D37FD44 52AF95C5 52AF9575 18  arksocket.52AF9575        用户模块  //arksocket::CreateUdp
0D37FD5C 52AF9C88 52AF95C5 38  arksocket.52AF95C5        用户模块  
0D37FD94 52AF4449 52AF9C88 18  arksocket.52AF9C88        用户模块
0D37FDAC 52AF4832 52AF4449 1C  arksocket.52AF4449        用户模块
0D37FDC8 52AF40DE 52AF4832 98  arksocket.52AF4832        用户模块
0D37FE60 52AF47FF 52AF40DE 30  arksocket.52AF40DE        用户模块
0D37FE90 55EDBD7B 52AF47FF 3C  arksocket.52AF47FF        用户模块
0D37FECC 55EDAEB4 55EDBD7B 18  libuv.$LN50+13            用户模块
0D37FEE4 52AF5696 55EDAEB4 20  libuv.uv_run+74           用户模块
0D37FF04 55EF3370 52AF5696 28  arksocket.52AF5696        用户模块
0D37FF2C 66AB6CF2 55EF3370 48  libuv.uv__thread_start+70 系统模块
0D37FF74 75FE0419 66AB6CF2 10  ucrtbased.66AB6CF2        系统模块
0D37FF84 770566DD 75FE0419 5C  kernel32.75FE0419         系统模块
0D37FFE0 770566AD 770566DD 10  ntdll.770566DD            系统模块
0D37FFF0 00000000 770566AD     ntdll.770566AD            用户模块

Address  To       From     Si Comment            Party 
0CA8FD44 52AF95C5 52AF9575 18 arksocket.52AF9575 User   //arksocket::CreateUdp(arksocket *this, struct arksocket::IUdp **a2)
0CA8FD5C 52AF9C88 52AF95C5 38 arksocket.52AF95C5 User	//arksocket::CreateUdp(int a1)
0CA8FD94 52AF4449 52AF9C88 18 arksocket.52AF9C88 User	//sub_52AF9C24
0CA8FDAC 52AF4832 52AF4449 1C arksocket.52AF4449 User	//sub_52AF4432
0CA8FDC8 52AF40DE 52AF4832 98 arksocket.52AF4832 User	//sub_52AF4819
0CA8FE60 52AF47FF 52AF40DE 30 arksocket.52AF40DE User	//sub_52AF3FBC
0CA8FE90 55EDBD3B 52AF47FF 3C arksocket.52AF47FF User	//sub_52AF3FBC
0CA8FECC 55EDAE74 55EDBD3B 18 libuv.55EDBD3B     User	//libuv.$LN50+13 
0CA8FEE4 52AF5696 55EDAE74 20 libuv.55EDAE74     User	//libuv.uv_run+74 
0CA8FF04 55EF3370 52AF5696 28 arksocket.52AF5696 User 	//sub_52AF563A
0CA8FF2C 7C2A6CF2 55EF3370 48 libuv.55EF3370     System	//libuv.uv__thread_start+70
0CA8FF74 759F6359 7C2A6CF2 10 ucrtbased.7C2A6CF2 System
0CA8FF84 77808944 759F6359 5C kernel32.759F6359  System
0CA8FFE0 77808914 77808944 10 ntdll.77808944     System
0CA8FFF0 00000000 77808914    ntdll.77808914     User

--------------

//libuv.uv__thread_start+70 => sub_52AF563A

--------------
int __cdecl sub_52AF563A(LPVOID lpTlsValue)
{
  _DWORD *v1; // esi@1
  int v2; // edi@1
  DWORD v3; // ebx@1
  void *lpTlsValuea; // [sp+14h] [bp+8h]@1

  v1 = lpTlsValue;
  sub_52AF55A1(lpTlsValue);
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

--------------
//libuv
...

--------------
int __thiscall sub_52AF47F4(int this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD))(this + 4))(*(_DWORD *)(this + 12), *(_DWORD *)(this + 8)); //52AF47FF ===========> sub_52AF3FBC
}
--------------
int __stdcall sub_52AF3FBC(int a1)
{
  int (__stdcall ***v1)(_DWORD); // ecx@2
  _DWORD *v2; // edi@4
  int v3; // edx@4
  int v4; // ecx@6
  int *v6; // esi@9
  int v7; // eax@9
  int (__stdcall ***v8)(_DWORD); // ecx@12
  void *v9; // eax@18
  unsigned __int64 v10; // rax@20
  int (__stdcall ***v11)(_DWORD); // ecx@22
  int (__stdcall ***v12)(_DWORD); // ecx@29
  int v13; // eax@31
  _DWORD *v14; // ebx@35
  int v15; // ecx@35
  bool v16; // cf@35
  int v17; // edi@37
  int v18; // [sp+10h] [bp-70h]@4
  int v19; // [sp+14h] [bp-6Ch]@6
  int v20[3]; // [sp+18h] [bp-68h]@2
  int v21; // [sp+24h] [bp-5Ch]@18
  void *Dst; // [sp+28h] [bp-58h]@9
  _DWORD *v23; // [sp+2Ch] [bp-54h]@6
  int v24; // [sp+30h] [bp-50h]@35
  int v25; // [sp+34h] [bp-4Ch]@35
  int v26; // [sp+38h] [bp-48h]@35
  int v27; // [sp+3Ch] [bp-44h]@35
  char v28; // [sp+50h] [bp-30h]@3
  int v29; // [sp+74h] [bp-Ch]@2

  if ( !*(_DWORD *)(a1 + 20) )
  {
    v29 = 0;
    v1 = *(int (__stdcall ****)(_DWORD))(a1 + 68);
    v20[0] = a1;
    if ( v1 )
      v29 = (**v1)(&v28);
    sub_52AF185B(a1 + 32);
    v2 = (_DWORD *)(a1 + 4);
    v3 = arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v18);
    if ( *(_DWORD *)(a1 + 24) >= 0x10u )
      v2 = (_DWORD *)*v2;
    v19 = -1;
    v4 = v29;
    v23 = v2;
    if ( v29 )
      goto LABEL_8;
    goto LABEL_7;
  }
  arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&Dst);
  v6 = (int *)(a1 + 4);
  v7 = a1 + 4;
  if ( *(_DWORD *)(a1 + 24) >= 0x10u )
    v7 = *v6;
  if ( !(unsigned __int8)sub_52AF486E(Dst, v7) )
  {
    _mm_storel_pd((double *)v20, 0i64);
    arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v21);
    v9 = (void *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 24) >= 0x10u )
      v9 = (void *)*v6;
    sub_52AF3DAD(v9, (int)&v21, (int)v20);
    v10 = time64(0) - *(_QWORD *)v20;
    if ( !HIDWORD(v10) )
    {
      if ( (unsigned int)v10 < 0x4B0 )
      {
        v29 = 0;
        v11 = *(int (__stdcall ****)(_DWORD))(a1 + 68);
        v19 = a1;
        if ( v11 )
          v29 = (**v11)(&v28);
        sub_52AF185B(a1 + 32);
        if ( *(_DWORD *)(a1 + 24) >= 0x10u )
          v6 = (int *)*v6;
        v18 = 0;
        v20[0] = (int)v6;
        if ( !v29 )
          goto LABEL_7;
        (*(void (__stdcall **)(int *, int *, int *))(*(_DWORD *)v29 + 8))(&v18, v20, &v21);
        sub_52AF185B(&v28);
        sub_52AF44D4(&v19);
LABEL_41:
        arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&v21);
        return arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Dst);
      }
      if ( v10 < 0x1C20 )
      {
        v29 = 0;
        v12 = *(int (__stdcall ****)(_DWORD))(a1 + 68);
        if ( v12 )
          v29 = (**v12)(&v28);
        sub_52AF185B(a1 + 32);
        v13 = a1 + 4;
        if ( *(_DWORD *)(a1 + 24) >= 0x10u )
          v13 = *v6;
        v18 = 0;
        v20[0] = v13;
        if ( !v29 )
          goto LABEL_7;
        (*(void (__stdcall **)(int *, int *, int *))(*(_DWORD *)v29 + 8))(&v18, v20, &v21);
        sub_52AF185B(&v28);
      }
    }
    v14 = calloc(1u, 0x70u);
    v15 = a1 + 4;
    *v14 = a1;
    v24 = 0;
    v16 = *(_DWORD *)(a1 + 24) < 0x10u;
    v25 = 2;
    v26 = 1;
    v27 = 6;
    if ( !v16 )
      v15 = *v6;
    v17 = uv_getaddrinfo(*(_DWORD *)(**(_DWORD **)a1 + 4), v14, sub_52AF42C2, v15, 0, &v24);
    if ( v17 )
    {
      if ( *(_DWORD *)(a1 + 24) >= 0x10u )
        v6 = (int *)*v6;
      sub_52AF4ED2("host_resolve", "_OnAsyncHostResolve, uv_getaddrinfo fail, host=%s, err=%d.", (char)v6);
      sub_52AF42C2(v14, v17, 0);
    }
    goto LABEL_41;
  }
  v29 = 0;
  v8 = *(int (__stdcall ****)(_DWORD))(a1 + 68);
  v19 = a1;
  if ( v8 )
    v29 = (**v8)(&v28);
  sub_52AF185B(a1 + 32);
  if ( *(_DWORD *)(a1 + 24) >= 0x10u )
    v6 = (int *)*v6;
  v18 = 0;
  v20[0] = (int)v6;
  if ( !v29 )
  {
LABEL_7:
    std::_Xbad_function_call();
LABEL_8:
    (*(void (__stdcall **)(int *, int *, int))(*(_DWORD *)v4 + 8))(&v19, (int *)&v23, v3);
    arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&v18);
    sub_52AF185B(&v28);
    return sub_52AF44D4(v20);
  }
  (*(void (__stdcall **)(int *, int *, void **))(*(_DWORD *)v29 + 8))(&v18, v20, &Dst); //52AF40DE ==============> sub_52AF4819
  sub_52AF185B(&v28);
  sub_52AF44D4(&v19);
  return arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Dst);
}
--------------
int __thiscall sub_52AF4819(int this, _DWORD *a2, _DWORD *a3, int a4)
{
  return (*(int (__cdecl **)(_DWORD, _DWORD, int, _DWORD, _DWORD))(this + 4))(
           *a2,
           *a3,
           a4,
           *(_DWORD *)(this + 12),
           *(_DWORD *)(this + 8)); // 52AF4832 ===========> 
}
--------------
int __cdecl sub_52AF4432(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)a4 + 12))(a1, a2, a3, a5); //52AF4449=========>sub_52AF9C24
}
--------------
int __thiscall sub_52AF9C24(int this, int a2, int a3, arksocket::IPAddress *a4, int a5)
{
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // edi@3
  int v8; // eax@3
  int (__thiscall *v9)(int, int); // esi@4
  int v10; // eax@4
  int v11; // eax@4
  unsigned __int16 v12; // si@9
  unsigned __int16 v13; // cx@9
  unsigned __int16 v14; // dx@9
  int v15; // eax@12
  const struct arksocket::IPAddress *v16; // eax@15
  const void **v17; // eax@15
  int v18; // ecx@20
  void *v20; // [sp+4h] [bp-30h]@4
  void *Memory; // [sp+18h] [bp-1Ch]@4
  void *v22; // [sp+1Ch] [bp-18h]@15
  int v23; // [sp+20h] [bp-14h]@11
  void *v24; // [sp+24h] [bp-10h]@15
  char v25; // [sp+28h] [bp-Ch]@15
  int (__thiscall **v26)(void *, char); // [sp+2Ch] [bp-8h]@3
  int v27; // [sp+30h] [bp-4h]@3  // -------------------->   arksocket::CreateUdp 创建的实例保存在  v27

  v5 = a2;
  v6 = this;
  if ( !a2 )
  {
    sub_52AF4BF7(*(void **)(this + 76), a4, *(_WORD *)(this + 68));
    arksocket::IPEndPoint::operator=(v6 + 76);
    v27 = 0;
    v26 = &off_52AFE370; // off_52AFE370 虚表？
    arksocket::CreateUdp((int)&v26); // 52AF9C88 ==============>
    v7 = v27;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 12))(
      v27,
      *(_DWORD *)(v6 + 104) != 0 ? *(_DWORD *)(v6 + 104) + 8 : 0);
    v8 = *(_DWORD *)(v6 + 72);
    if ( v8 )
    {
      v12 = *(_WORD *)(v8 + 8);
      v13 = *(_WORD *)(v8 + 10);
      v14 = v12;
      Memory = (void *)*(_WORD *)(v8 + 8);
      if ( v12 <= v13 )
        v14 = v13;
      v23 = v14;
      if ( v12 > v14 )
        goto LABEL_12;
      while ( 1 )
      {
        arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v24);
        v16 = (const struct arksocket::IPAddress *)(*(_DWORD *)(v6 + 72) + 4);
        v25 = 1;
        v17 = (const void **)arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v22, v16, v12);
        if ( (const void **)&v24 != v17 )
        {
          qmemcpy(v24, *v17, 0x80u);
          v7 = v27;
        }
        sub_52AFCC0F(v22);
        v25 = *(_BYTE *)(*(_DWORD *)(v6 + 72) + 13);
        v5 = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v7 + 16))(v7, &v24);
        v20 = v24;
        if ( !v5 )
          break;
        sub_52AFCC0F(v24);
        Memory = (char *)Memory + 1;
        if ( (unsigned __int16)Memory > (unsigned __int16)v23 )
          goto LABEL_6;
        v12 = (unsigned __int16)Memory;
      }
    }
    else
    {
      v9 = *(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 20);
      v10 = arksocket::IPEndPoint::IPEndPoint(
              (arksocket::IPEndPoint *)&Memory,
              (const struct arksocket::IPAddress *)&arksocket::IPAddress::Any,
              0);
      v11 = v9(v7, v10);
      v20 = Memory;
      v5 = v11;
    }
    sub_52AFCC0F(v20);
LABEL_6:
    if ( v5 )
    {
      sub_52AF4ED2("udp_channel", "_OnHostResolve, udp open fail, err=%d", v5);
LABEL_23:
      sub_52AF1648(&v26);
      return sub_52AF9DF6(v5);
    }
LABEL_12:
    v15 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v7 + 32))(v7, *(_DWORD *)(v6 + 108), 0);
    v5 = v15;
    if ( v15 )
    {
      sub_52AF4ED2("udp_channel", "_OnHostResolve, udp recv fail, err=%d", v15);
    }
    else
    {
      v18 = *(_DWORD *)(v6 + 96);
      if ( v18 )
        (*(void (**)(void))(*(_DWORD *)v18 + 8))();
      *(_DWORD *)(v6 + 96) = v7;  // --------------------------->  arksocket::CreateUdp 创建的实例保存在  v27 => v7 => *(_DWORD *)(v6 + 96) => *(_DWORD *)( this + 96)
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
    }
    goto LABEL_23;
  }
  sub_52AF4ED2("udp_channel", "UdpChannelImpl::_OnHostResolve fail, host=%s, ret=%d", a3);
  return sub_52AF9DF6(v5);
}
--------------


char __cdecl arksocket::CreateUdp(int a1)
{
  int v1; // ecx@1
  int v3; // [sp+4h] [bp-4h]@1

  v3 = 0;
  arksocket::CreateUdp((arksocket *)&v3, 0);
  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    (*(void (**)(void))(*(_DWORD *)v1 + 8))();
  *(_DWORD *)(a1 + 4) = v3;  // -----------------------------> arksocket 保存 a1
  return 1;
}	  
--------------

//sub_52AFB429 使用 arksocket?  没有. 使用 sub_52AF23DC 创建的实例
.text:52AFB437                 cmp     dword ptr [edi+48h], 0     // edi 为 基址 off_52AFF580 虚表内容.  edi是 CreateUdp 创建的 arksocket 实例？ 并不是.
.text:52AFB43B                 jz      loc_52AFB52A
.text:52AFB441                 test    byte ptr [edi+50h], 1
.text:52AFB445                 jnz     loc_52AFB52A



//52AF9575
char __cdecl arksocket::CreateUdp(arksocket *this, struct arksocket::IUdp **a2)
{
  int v2; // ebp@0
  char result; // al@2
  _DWORD *v4; // esi@3

  if ( this )
  {
    *(_DWORD *)this = 0;
    v4 = sub_52AFCBDF(0x54u); //申请内存
    sub_52AFAB2A((int)v4, v2, (struct arksocket::IOLoop *)a2);  //构造方法
    *v4 = &off_52AFF580; //虚表 
    result = 1;
    v4[1] = &off_52AFF5BC; //继承方法？？
    *(_DWORD *)this = v4;
  }
  else
  {
    result = 0;
  }
  return result;
} 


--------------

//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================

void uv_process_udp_send_req(uv_loop_t* loop, uv_udp_t* handle,
    uv_udp_send_t* req) {
  int err;

  assert(handle->type == UV_UDP);

  assert(handle->send_queue_size >= req->u.io.queued_bytes);
  assert(handle->send_queue_count >= 1);
  handle->send_queue_size -= req->u.io.queued_bytes;
  handle->send_queue_count--;

  UNREGISTER_HANDLE_REQ(loop, handle, req);

  if (req->cb) {
    err = 0;
    if (!REQ_SUCCESS(req)) {
      err = GET_REQ_SOCK_ERROR(req);
    }
    req->cb(req, uv_translate_sys_error(err));  // ====> arksocket.05756B73 
  }

  DECREASE_PENDING_REQ_COUNT(handle);
}


//WSARecvFrom  
void uv_process_udp_recv_req(uv_loop_t* loop, uv_udp_t* handle,
    uv_req_t* req) {
  uv_buf_t buf;
  int partial;

  assert(handle->type == UV_UDP);

  handle->flags &= ~UV_HANDLE_READ_PENDING;

  if (!REQ_SUCCESS(req)) {
    DWORD err = GET_REQ_SOCK_ERROR(req);
    if (err == WSAEMSGSIZE) {
      /* Not a real error, it just indicates that the received packet was
       * bigger than the receive buffer. */
    } else if (err == WSAECONNRESET || err == WSAENETRESET) {
      /* A previous sendto operation failed; ignore this error. If zero-reading
       * we need to call WSARecv/WSARecvFrom _without_ the. MSG_PEEK flag to
       * clear out the error queue. For nonzero reads, immediately queue a new
       * receive. */
      if (!(handle->flags & UV_HANDLE_ZERO_READ)) {
        goto done;
      }
    } else {
      /* A real error occurred. Report the error to the user only if we're
       * currently reading. */
      if (handle->flags & UV_HANDLE_READING) {
        uv_udp_recv_stop(handle);
        buf = (handle->flags & UV_HANDLE_ZERO_READ) ?
              uv_buf_init(NULL, 0) : handle->recv_buffer;
        handle->recv_cb(handle, uv_translate_sys_error(err), &buf, NULL, 0);
      }
      goto done;
    }
  }

  if (!(handle->flags & UV_HANDLE_ZERO_READ)) {
    /* Successful read */
    partial = !REQ_SUCCESS(req);
    handle->recv_cb(handle,
                    req->u.io.overlapped.InternalHigh,
                    &handle->recv_buffer,
                    (const struct sockaddr*) &handle->recv_from,
                    partial ? UV_UDP_PARTIAL : 0);
  } else if (handle->flags & UV_HANDLE_READING) {
    DWORD bytes, err, flags;
    struct sockaddr_storage from;
    int from_len;

    /* Do a nonblocking receive.
     * TODO: try to read multiple datagrams at once. FIONREAD maybe? */
    buf = uv_buf_init(NULL, 0);
    handle->alloc_cb((uv_handle_t*) handle, 65536, &buf);
    if (buf.base == NULL || buf.len == 0) {
      handle->recv_cb(handle, UV_ENOBUFS, &buf, NULL, 0);
      goto done;
    }
    assert(buf.base != NULL);

    memset(&from, 0, sizeof from);
    from_len = sizeof from;

    flags = 0;

    if (WSARecvFrom(handle->socket,
                    (WSABUF*)&buf,
                    1,
                    &bytes,
                    &flags,
                    (struct sockaddr*) &from,
                    &from_len,
                    NULL,
                    NULL) != SOCKET_ERROR) {

      /* Message received */
      handle->recv_cb(handle, bytes, &buf, (const struct sockaddr*) &from, 0);
    } else {
      err = WSAGetLastError();
      if (err == WSAEMSGSIZE) {
        /* Message truncated */
        handle->recv_cb(handle,
                        bytes,
                        &buf,
                        (const struct sockaddr*) &from,
                        UV_UDP_PARTIAL);
      } else if (err == WSAEWOULDBLOCK) {
        /* Kernel buffer empty */
        handle->recv_cb(handle, 0, &buf, NULL, 0);
      } else if (err == WSAECONNRESET || err == WSAENETRESET) {
        /* WSAECONNRESET/WSANETRESET is ignored because this just indicates
         * that a previous sendto operation failed.
         */
        handle->recv_cb(handle, 0, &buf, NULL, 0);
      } else {
        /* Any other error that we want to report back to the user. */
        uv_udp_recv_stop(handle);
        handle->recv_cb(handle, uv_translate_sys_error(err), &buf, NULL, 0);
      }
    }
  }

done:
  /* Post another read if still reading and not closing. */
  if ((handle->flags & UV_HANDLE_READING) &&
      !(handle->flags & UV_HANDLE_READ_PENDING)) {
    uv_udp_queue_recv(loop, handle);
  }

  DECREASE_PENDING_REQ_COUNT(handle);
}


//===============================================================================
INLINE static int uv_process_reqs(uv_loop_t* loop) {
  uv_req_t* req;
  uv_req_t* first;
  uv_req_t* next;

  if (loop->pending_reqs_tail == NULL)
    return 0;

  first = loop->pending_reqs_tail->next_req;
  next = first;
  loop->pending_reqs_tail = NULL;

  while (next != NULL) {
    req = next;
    next = req->next_req != first ? req->next_req : NULL;

    switch (req->type) {
      case UV_READ:
        DELEGATE_STREAM_REQ(loop, req, read, data);
        break;

      case UV_WRITE:
        DELEGATE_STREAM_REQ(loop, (uv_write_t*) req, write, handle);
        break;

      case UV_ACCEPT:
        DELEGATE_STREAM_REQ(loop, req, accept, data);
        break;

      case UV_CONNECT:
        DELEGATE_STREAM_REQ(loop, (uv_connect_t*) req, connect, handle);
        break;

      case UV_SHUTDOWN:
        /* Tcp shutdown requests don't come here. */
        assert(((uv_shutdown_t*) req)->handle->type == UV_NAMED_PIPE);
        uv_process_pipe_shutdown_req(
            loop,
            (uv_pipe_t*) ((uv_shutdown_t*) req)->handle,
            (uv_shutdown_t*) req);
        break;

      case UV_UDP_RECV:
        uv_process_udp_recv_req(loop, (uv_udp_t*) req->data, req);
        break;

      case UV_UDP_SEND:
        uv_process_udp_send_req(loop,
                                ((uv_udp_send_t*) req)->handle,
                                (uv_udp_send_t*) req);  //==============>uv_process_udp_send_req
        break;

      case UV_WAKEUP:
        uv_process_async_wakeup_req(loop, (uv_async_t*) req->data, req);
        break;

      case UV_SIGNAL_REQ:
        uv_process_signal_req(loop, (uv_signal_t*) req->data, req);
        break;

      case UV_POLL_REQ:
        uv_process_poll_req(loop, (uv_poll_t*) req->data, req);
        break;

      case UV_PROCESS_EXIT:
        uv_process_proc_exit(loop, (uv_process_t*) req->data);
        break;

      case UV_FS_EVENT_REQ:
        uv_process_fs_event_req(loop, req, (uv_fs_event_t*) req->data);
        break;

      default:
        assert(0);
    }
  }

  return 1;
}


//===============================================================================
int uv_run(uv_loop_t *loop, uv_run_mode mode) {
  DWORD timeout;
  int r;
  int ran_pending;

  r = uv__loop_alive(loop);
  if (!r)
    uv_update_time(loop);

  while (r != 0 && loop->stop_flag == 0) {
    uv_update_time(loop);
    uv__run_timers(loop);

    ran_pending = uv_process_reqs(loop);  //=====> uv_process_reqs
    uv_idle_invoke(loop);
    uv_prepare_invoke(loop);

    timeout = 0;
    if ((mode == UV_RUN_ONCE && !ran_pending) || mode == UV_RUN_DEFAULT)
      timeout = uv_backend_timeout(loop);

    uv__poll(loop, timeout);

    uv_check_invoke(loop);
    uv_process_endgames(loop);

    if (mode == UV_RUN_ONCE) {
      /* UV_RUN_ONCE implies forward progress: at least one callback must have
       * been invoked when it returns. uv__io_poll() can return without doing
       * I/O (meaning: no callbacks) when its timeout expires - which means we
       * have pending timers that satisfy the forward progress constraint.
       *
       * UV_RUN_NOWAIT makes no guarantees about progress so it's omitted from
       * the check.
       */
      uv__run_timers(loop);
    }

    r = uv__loop_alive(loop);
    if (mode == UV_RUN_ONCE || mode == UV_RUN_NOWAIT)
      break;
  }

  /* The if statement lets the compiler compile it to a conditional store.
   * Avoids dirtying a cache line.
   */
  if (loop->stop_flag != 0)
    loop->stop_flag = 0;

  return r;
}

arksocket.dll/05730000
dword_5746298


dword_51B06298
51AF0000

.text:51AF563F                 mov     esi, [ebp+lpTlsValue]

.text:51AF568B                 push    0
.text:51AF568D                 push    dword ptr [esi+4]
.text:51AF5690                 call    ds:uv_run



//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  


//===============================================================================



	  

