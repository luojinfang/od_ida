/*  

Libevent、libev、libuv 三个网络库，都是c语言实现的异步事件库
	libevent :名气最大，应用最广泛，历史悠久的跨平台事件库；
	libev :较libevent而言，设计更简练，性能更好，但对Windows支持不够好；
	libuv :开发node的过程中需要一个跨平台的事件库，他们首选了libev，但又要支持Windows，故重新封装了一套，linux下用libev实现，Windows下用IOCP实现
	 

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
 
//消息发送实例，怎样添加到 uv_loop_t 的?   并没有调用 uv_write, uv_write2  


      0E18FA6C 55EE50AD 76F23500 38       ws2_32.76F23500            用户模块
      0E18FAA4 55EE5334 55EE50AD 2C       libuv.55EE50AD             用户模块
      0E18FAD0 55ED2EEC 55EE5334 24       libuv.55EE5334             用户模块
      0E18FAF4 05136A5C 55ED2EEC 4C       libuv.55ED2EEC             用户模块
      0E18FB40 0513B499 05136A5C 5C       arksocket.05136A5C         用户模块
      0E18FB9C 0513B413 0513B499 54       arksocket.0513B499         用户模块
      0E18FBF0 0513B124 0513B413 50       arksocket.0513B413         用户模块
      0E18FC40 05132E4B 0513B124 18       arksocket.0513B124         用户模块
      0E18FC58 05132602 05132E4B 20       arksocket.05132E4B         用户模块
      0E18FC78 051325B9 05132602 28       arksocket.05132602         用户模块
      0E18FCA0 0513A17F 051325B9 28       arksocket.051325B9         用户模块
      0E18FCC8 05139FD2 0513A17F 70       arksocket.0513A17F         用户模块
      0E18FD38 56DF4302 05139FD2 2C       arksocket.05139FD2         用户模块
      0E18FD64 56DF9E9A 56DF4302 2C       preloginlogic.56DF4302     用户模块
      0E18FD90 56DFCEEC 56DF9E9A 70       preloginlogic.56DF9E9A     用户模块
      0E18FE00 56DF7973 56DFCEEC 24       preloginlogic.56DFCEEC     用户模块
      0E18FE24 56DF7DDB 56DF7973 24       preloginlogic.56DF7973     用户模块
      0E18FE48 56DF7A03 56DF7DDB 20       preloginlogic.56DF7DDB     用户模块
      0E18FE68 56DF75D2 56DF7A03 24       preloginlogic.56DF7A03     用户模块
      0E18FE8C 0513159A 56DF75D2 C        preloginlogic.56DF75D2     用户模块
      0E18FE98 05135297 0513159A 28       arksocket.0513159A         用户模块
      0E18FEC0 55ED39A7 05135297 20       arksocket.05135297         用户模块
      0E18FEE0 55ED3A9C 55ED39A7 24       libuv.55ED39A7             用户模块
      0E18FF04 05135696 55ED3A9C 20       libuv.55ED3A9C             用户模块
      0E18FF24 55EE0E29 05135696 18       arksocket.05135696         用户模块
      0E18FF3C 7590738F 55EE0E29 38       libuv.55EE0E29             系统模块
      0E18FF74 74F70419 7590738F 10       ucrtbase.7590738F          系统模块
      0E18FF84 771666DD 74F70419 5C       kernel32.74F70419          系统模块
      0E18FFE0 771666AD 771666DD 10       ntdll.771666DD             系统模块
      0E18FFF0 00000000 771666AD          ntdll.771666AD             用户模块



      0E18F8E4 55EE50AD 76F23500 38  ws2_32.76F23500            用户模块
      0E18F91C 55EE5334 55EE50AD 2C  libuv.55EE50AD             用户模块
      0E18F948 55ED2EEC 55EE5334 24  libuv.55EE5334             用户模块
      0E18F96C 05136A5C 55ED2EEC 4C  libuv.55ED2EEC             用户模块
      0E18F9B8 0513B499 05136A5C 5C  arksocket.05136A5C         用户模块
      0E18FA14 0513B413 0513B499 54  arksocket.0513B499         用户模块
      0E18FA68 0513B124 0513B413 50  arksocket.0513B413         用户模块
      0E18FAB8 05132E4B 0513B124 18  arksocket.0513B124         用户模块
      0E18FAD0 05132602 05132E4B 20  arksocket.05132E4B         用户模块
      0E18FAF0 051325B9 05132602 28  arksocket.05132602         用户模块
      0E18FB18 0513A17F 051325B9 28  arksocket.051325B9         用户模块
      0E18FB40 05139FD2 0513A17F 70  arksocket.0513A17F         用户模块
      0E18FBB0 56DF4302 05139FD2 2C  arksocket.05139FD2         用户模块
      0E18FBDC 56DF9E9A 56DF4302 2C  preloginlogic.56DF4302     用户模块
      0E18FC08 56DFB5E1 56DF9E9A 38  preloginlogic.56DF9E9A     用户模块
      0E18FC40 56DFAF47 56DFB5E1 64  preloginlogic.56DFB5E1     用户模块
      0E18FCA4 56DFABE2 56DFAF47 2C  preloginlogic.56DFAF47     用户模块
      0E18FCD0 56DFAB28 56DFABE2 20  preloginlogic.56DFABE2     用户模块
      0E18FCF0 56DF51C3 56DFAB28 80  preloginlogic.56DFAB28     用户模块
      0E18FD70 0513A596 56DF51C3 38  preloginlogic.56DF51C3     用户模块
      0E18FDA8 0513B936 0513A596 20  arksocket.0513A596         用户模块
      0E18FDC8 05136F09 0513B936 34  arksocket.0513B936         用户模块
      0E18FDFC 55EE554E 05136F09 C4  arksocket.05136F09         用户模块
      0E18FEC0 55ED3990 55EE554E 20  libuv.55EE554E             用户模块
      0E18FEE0 55ED3A9C 55ED3990 24  libuv.55ED3990             用户模块
      0E18FF04 05135696 55ED3A9C 20  libuv.55ED3A9C             用户模块
      0E18FF24 55EE0E29 05135696 18  arksocket.05135696         用户模块
      0E18FF3C 7590738F 55EE0E29 38  libuv.55EE0E29             系统模块
      0E18FF74 74F70419 7590738F 10  ucrtbase.7590738F          系统模块
      0E18FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
      0E18FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
      0E18FFF0 00000000 771666AD     ntdll.771666AD             用户模块


      0E18FD3C 55EE50AD 76F23500 38  ws2_32.76F23500            用户模块
      0E18FD74 55EE5334 55EE50AD 2C  libuv.55EE50AD             用户模块
      0E18FDA0 55ED2EEC 55EE5334 24  libuv.55EE5334             用户模块
      0E18FDC4 05136A5C 55ED2EEC 4C  libuv.55ED2EEC             用户模块
      0E18FE10 0513B499 05136A5C 5C  arksocket.05136A5C         用户模块
      0E18FE6C 0513B578 0513B499 1C  arksocket.0513B499         用户模块
      0E18FE88 05136B73 0513B578 1C  arksocket.0513B578         用户模块
      0E18FEA4 55EE561D 05136B73 1C  arksocket.05136B73         用户模块
      0E18FEC0 55ED399C 55EE561D 20  libuv.55EE561D             用户模块
      0E18FEE0 55ED3A9C 55ED399C 24  libuv.55ED399C             用户模块
      0E18FF04 05135696 55ED3A9C 20  libuv.55ED3A9C             用户模块
      0E18FF24 55EE0E29 05135696 18  arksocket.05135696         用户模块
      0E18FF3C 7590738F 55EE0E29 38  libuv.55EE0E29             系统模块
      0E18FF74 74F70419 7590738F 10  ucrtbase.7590738F          系统模块
      0E18FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
      0E18FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
      0E18FFF0 00000000 771666AD     ntdll.771666AD             用户模块

*/    



/*
      0CF0FA14 706DDA6B 76D73500 54  ws2_32.76D73500            用户模块
      0CF0FA68 706DC1C5 706DDA6B 2C  libuv.uv__send+9B          用户模块
      0CF0FA94 706A881B 706DC1C5 28  libuv.uv__udp_send+95      用户模块
      0CF0FABC 05756A5C 706A881B 4C  libuv.uv_udp_send+6B       用户模块
      0CF0FB08 0575B499 05756A5C 5C  arksocket.05756A5C         用户模块
      0CF0FB64 0575B413 0575B499 54  arksocket.0575B499         用户模块
      0CF0FBB8 0575B124 0575B413 50  arksocket.0575B413         用户模块
      0CF0FC08 05752E4B 0575B124 18  arksocket.0575B124         用户模块
      0CF0FC20 05752602 05752E4B 20  arksocket.05752E4B         用户模块
      0CF0FC40 057525B9 05752602 28  arksocket.05752602         用户模块
      0CF0FC68 0575A17F 057525B9 28  arksocket.057525B9         用户模块
      0CF0FC90 05759FD2 0575A17F 70  arksocket.0575A17F         用户模块
      0CF0FD00 56DF4302 05759FD2 2C  arksocket.05759FD2         用户模块
      0CF0FD2C 56DF9E9A 56DF4302 2C  preloginlogic.56DF4302     用户模块
      0CF0FD58 56DFCB24 56DF9E9A 74  preloginlogic.56DF9E9A     用户模块
      0CF0FDCC 56DF79DF 56DFCB24 24  preloginlogic.56DFCB24     用户模块
      0CF0FDF0 56DF7DFF 56DF79DF 24  preloginlogic.56DF79DF     用户模块
      0CF0FE14 56DF7A27 56DF7DFF 20  preloginlogic.56DF7DFF     用户模块
      0CF0FE34 56DF75F0 56DF7A27 24  preloginlogic.56DF7A27     用户模块
      0CF0FE58 0575159A 56DF75F0 C   preloginlogic.56DF75F0     用户模块
      0CF0FE64 05755297 0575159A 2C  arksocket.0575159A         用户模块
      0CF0FE90 706ABD7B 05755297 3C  arksocket.05755297         用户模块
      0CF0FECC 706AAEB4 706ABD7B 18  libuv.$LN50+13             用户模块
      0CF0FEE4 05755696 706AAEB4 20  libuv.uv_run+74            用户模块
      0CF0FF04 706C3370 05755696 28  arksocket.05755696         用户模块
      0CF0FF2C 5DD96CF2 706C3370 48  libuv.uv__thread_start+70  系统模块
      0CF0FF74 75FE0419 5DD96CF2 10  ucrtbased.5DD96CF2         系统模块
      0CF0FF84 770566DD 75FE0419 5C  kernel32.75FE0419          系统模块
      0CF0FFE0 770566AD 770566DD 10  ntdll.770566DD             系统模块
      0CF0FFF0 00000000 770566AD     ntdll.770566AD             用户模块  
	  
	  
	  
	  0CF0F85C 706DDA6B 76D73500 54  ws2_32.76D73500                   用户模块
      0CF0F8B0 706DC1C5 706DDA6B 2C  libuv.uv__send+9B                 用户模块
      0CF0F8DC 706A881B 706DC1C5 28  libuv.uv__udp_send+95             用户模块
      0CF0F904 05756A5C 706A881B 4C  libuv.uv_udp_send+6B              用户模块
      0CF0F950 0575B499 05756A5C 5C  arksocket.05756A5C                用户模块
      0CF0F9AC 0575B413 0575B499 54  arksocket.0575B499                用户模块
      0CF0FA00 0575B124 0575B413 50  arksocket.0575B413                用户模块
      0CF0FA50 05752E4B 0575B124 18  arksocket.0575B124                用户模块
      0CF0FA68 05752602 05752E4B 20  arksocket.05752E4B                用户模块
      0CF0FA88 057525B9 05752602 28  arksocket.05752602                用户模块
      0CF0FAB0 0575A17F 057525B9 28  arksocket.057525B9                用户模块
      0CF0FAD8 05759FD2 0575A17F 70  arksocket.0575A17F                用户模块
      0CF0FB48 56DF4302 05759FD2 2C  arksocket.05759FD2                用户模块
      0CF0FB74 56DF9E9A 56DF4302 2C  preloginlogic.56DF4302            用户模块
      0CF0FBA0 56DFB5E1 56DF9E9A 38  preloginlogic.56DF9E9A            用户模块
      0CF0FBD8 56DFAF47 56DFB5E1 64  preloginlogic.56DFB5E1            用户模块
      0CF0FC3C 56DFABE2 56DFAF47 2C  preloginlogic.56DFAF47            用户模块
      0CF0FC68 56DFAB28 56DFABE2 20  preloginlogic.56DFABE2            用户模块
      0CF0FC88 56DF51C3 56DFAB28 80  preloginlogic.56DFAB28            用户模块
      0CF0FD08 0575A596 56DF51C3 34  preloginlogic.56DF51C3            用户模块
      0CF0FD3C 0575B936 0575A596 20  arksocket.0575A596                用户模块
      0CF0FD5C 05756F09 0575B936 34  arksocket.0575B936                用户模块
      0CF0FD90 706DC943 05756F09 100 arksocket.05756F09                用户模块
      0CF0FE90 706ABD44 706DC943 3C  libuv.uv_process_udp_recv_req+323 用户模块
      0CF0FECC 706AAEB4 706ABD44 18  libuv.$LN48+13                    用户模块
      0CF0FEE4 05755696 706AAEB4 20  libuv.uv_run+74                   用户模块
      0CF0FF04 706C3370 05755696 28  arksocket.05755696                用户模块
      0CF0FF2C 5DD96CF2 706C3370 48  libuv.uv__thread_start+70         系统模块
      0CF0FF74 75FE0419 5DD96CF2 10  ucrtbased.5DD96CF2                系统模块
      0CF0FF84 770566DD 75FE0419 5C  kernel32.75FE0419                 系统模块
      0CF0FFE0 770566AD 770566DD 10  ntdll.770566DD                    系统模块
      0CF0FFF0 00000000 770566AD     ntdll.770566AD                    用户模块 
	  
	  
	  
	  0CF0FCEC 706DDA6B 76D73500 54  ws2_32.76D73500                   用户模块
      0CF0FD40 706DC1C5 706DDA6B 2C  libuv.uv__send+9B                 用户模块
      0CF0FD6C 706A881B 706DC1C5 28  libuv.uv__udp_send+95             用户模块
      0CF0FD94 05756A5C 706A881B 4C  libuv.uv_udp_send+6B              用户模块
      0CF0FDE0 0575B499 05756A5C 5C  arksocket.05756A5C                用户模块
      0CF0FE3C 0575B578 0575B499 1C  arksocket.0575B499                用户模块
      0CF0FE58 05756B73 0575B578 1C  arksocket.0575B578                用户模块
      0CF0FE74 706DCD50 05756B73 1C  arksocket.05756B73                用户模块
      0CF0FE90 706ABD60 706DCD50 3C  libuv.uv_process_udp_send_req+1E0 用户模块
      0CF0FECC 706AAEB4 706ABD60 18  libuv.$LN49+14                    用户模块
      0CF0FEE4 05755696 706AAEB4 20  libuv.uv_run+74                   用户模块
      0CF0FF04 706C3370 05755696 28  arksocket.05755696                用户模块
      0CF0FF2C 5DD96CF2 706C3370 48  libuv.uv__thread_start+70         系统模块
      0CF0FF74 75FE0419 5DD96CF2 10  ucrtbased.5DD96CF2                系统模块
      0CF0FF84 770566DD 75FE0419 5C  kernel32.75FE0419                 系统模块
      0CF0FFE0 770566AD 770566DD 10  ntdll.770566DD                    系统模块
      0CF0FFF0 00000000 770566AD     ntdll.770566AD                    用户模块 
	  
	  
	  
	  
libuv.dll / base=55ED0000 

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
    *(_DWORD *)(v1 + 4) = v2;
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
  return uv_run(v1[1], 0);
}

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



	  

