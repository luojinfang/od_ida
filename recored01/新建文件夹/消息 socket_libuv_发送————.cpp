/*  
 
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
 
//消息发送实例，怎样添加到 uv_loop_t 的?   并没有调用 uv_write，uv_write2  

=================================================	  
//libuv  base=55ED0000 
//arksocket  base=05740000  //会变

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
	  
================================================= 
//arksocket  base=057E0000  //会变
//libuv  base=55ED0000  


Address  To       From     Si Comment                Party 
0814FA14 55F0DA6B 775612E0 54 ws2_32.775612E0        User
0814FA68 55F0C1C5 55F0DA6B 2C libuv.55F0DA6B         User
0814FA94 55ED87CB 55F0C1C5 28 libuv.55F0C1C5         User  //uv__udp_send
0814FABC 057E6A5C 55ED87CB 4C libuv.55ED87CB         User  //uv_udp_send
0814FB08 057EB499 057E6A5C 5C arksocket.057E6A5C     User	//sub_57E69A6
0814FB64 057EB413 057EB499 54 arksocket.057EB499     User	//sub_57EB429
0814FBB8 057EB124 057EB413 50 arksocket.057EB413     User
0814FC08 057E2E4B 057EB124 18 arksocket.057EB124     User
0814FC20 057E2602 057E2E4B 20 arksocket.057E2E4B     User
0814FC40 057E25B9 057E2602 28 arksocket.057E2602     User
0814FC68 057EA17F 057E25B9 28 arksocket.057E25B9     User
0814FC90 057E9FD2 057EA17F 70 arksocket.057EA17F     User
0814FD00 56DF4302 057E9FD2 2C arksocket.057E9FD2     User
0814FD2C 56DF9E9A 56DF4302 2C preloginlogic.56DF4302 User
0814FD58 56DFCB24 56DF9E9A 74 preloginlogic.56DF9E9A User
0814FDCC 56DF79DF 56DFCB24 24 preloginlogic.56DFCB24 User
0814FDF0 56DF7DFF 56DF79DF 24 preloginlogic.56DF79DF User
0814FE14 56DF7A27 56DF7DFF 20 preloginlogic.56DF7DFF User
0814FE34 56DF75F0 56DF7A27 24 preloginlogic.56DF7A27 User
0814FE58 057E159A 56DF75F0 C  preloginlogic.56DF75F0 User
0814FE64 057E5297 057E159A 2C arksocket.057E159A     User
0814FE90 55EDBD3B 057E5297 3C arksocket.057E5297     User
0814FECC 55EDAE74 55EDBD3B 18 libuv.55EDBD3B         User	// uv_process_reqs(uv_loop_s *loop)
0814FEE4 057E5696 55EDAE74 20 libuv.55EDAE74         User	//uv_run(uv_loop_s *loop, uv_run_mode mode)
0814FF04 55EF3370 057E5696 28 arksocket.057E5696     User	//sub_57E563A
0814FF2C 63776CF2 55EF3370 48 libuv.55EF3370         System //uv__thread_start
0814FF74 759F6359 63776CF2 10 ucrtbased.63776CF2     System
0814FF84 77808944 759F6359 5C kernel32.759F6359      System
0814FFE0 77808914 77808944 10 ntdll.77808944         System
0814FFF0 00000000 77808914    ntdll.77808914         User

 
 
  
=================================================
*/      
typedef struct uv_udp_send_s uv_udp_send_t;
typedef struct uv_udp_s uv_udp_t;

//---------------
/* uv_udp_send_t is a subclass of uv_req_t. */
struct uv_udp_send_s {
  UV_REQ_FIELDS			//
  uv_udp_t* handle;  //底层 socket相关?
  uv_udp_send_cb cb;
  UV_UDP_SEND_PRIVATE_FIELDS
};

#define UV_UDP_SEND_PRIVATE_FIELDS                                            \
  /* empty */
 

#define UV_REQ_FIELDS                                                         \
  /* public */                                                                \
  void* data;                                                                 \
  /* read-only */                                                             \
  uv_req_type type;                                                           \
  /* private */                                                               \
  void* reserved[6];                                                          \
  UV_REQ_PRIVATE_FIELDS                                                       \

#define UV_REQ_PRIVATE_FIELDS                                                 \
  union {                                                                     \
    /* Used by I/O operations */                                              \
    struct {                                                                  \
      OVERLAPPED overlapped;                                                  \
      size_t queued_bytes;                                                    \
    } io;                                                                     \
  } u;                                                                        \
  struct uv_req_s* next_req;

//---------------
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



  
//---------------------------------------------------------------------------
  => ws2_32.dll.WSASendTo
  => uv__udp_send
  => uv_udp_send
  
//057E6A5C 
int __thiscall sub_57E69A6(_DWORD *this, int a2, int a3, arksocket::IPEndPoint *a4, int a5, int a6)
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
    sub_57E4ED2("op", "UvUdpSend::Send, Invalid Arg");
    return -1;
  }
  if ( v6[3] )
  {
    sub_57E4ED2("op", "UvUdpSend::Send, sending in progress.");
    return -1;
  }
  v7 = sub_57ECBDF(0x68u);
  v8 = sub_57E6916(v7);
  v9 = (int *)v8;
  v10 = *(_DWORD *)(v8 + 84);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 8))();
  *(_DWORD *)(v8 + 84) = v6;
  (*(void (__thiscall **)(void *))(*v6 + 4))(v6);
  v11 = (_DWORD *)(v8 + 4);
  *v11 = v6;
  
  // todo a3在哪里创建?
  v12 = (*(int (**)(void))(*(_DWORD *)a3 + 16))(); //len
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3);   //057E6A31 ======>sub_57E1A9B   //ecx =this,有多个类实例，没有一个地址是固定的
  
  /*
    uv_buf_t uv_buf_init(char* base, unsigned int len) {
	  uv_buf_t buf;
	  buf.base = base;
	  buf.len = len;
	  return buf;
	}

  */
  v21 = uv_buf_init(v13, v12);
  v22 = v14;
  
  /*
	int uv_udp_send(uv_udp_send_t* req,
                uv_udp_t* handle,
                const uv_buf_t bufs[],
                unsigned int nbufs,
                const struct sockaddr* addr,
                uv_udp_send_cb send_cb);
  */
  v15 = uv_udp_send(v11, a2, &v21, 1, *(_DWORD *)a4, sub_57E6B21); // =========> uv_udp_send
  v16 = v15;
  if ( v15 )
  {
    uv_strerror(v15);
    sub_57E4ED2("op", "UvUdpSend, uv_udp_send fail, check=%d, ret=%d, %s");
  }
  else
  {
    v18 = v9;
    *v9 = a2;
    sub_57E1D01(a5);
    sub_57E1D01(a3);
    arksocket::IPEndPoint::operator=(a4);
    v19 = v23;
    v9 = 0;
    v18[19] = a6;
    v17 = *(int **)(v19 + 12);
    if ( v18 != v17 && v17 )
      sub_57E7792(v17, *(_DWORD *)(v19 + 12));
    *(_DWORD *)(v19 + 12) = v18;
    v16 = 0;
  }
  if ( v9 )
    sub_57E7792(v9, (int)v17);
  return v16;
}


int __thiscall sub_57E1A9B(int this)
{
  return *(_DWORD *)(this + 12);
}





//---------------------------------------------------------------------------
//057EB499
void __thiscall sub_57EB429(int this)
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
  char v10; // [sp-28h] [bp-68h]@4
  int v11; // [sp-24h] [bp-64h]@4
  int v12; // [sp-20h] [bp-60h]@4
  int v13; // [sp-1Ch] [bp-5Ch]@4
  int v14; // [sp-18h] [bp-58h]@4
  int v15; // [sp-14h] [bp-54h]@4
  int v16; // [sp-10h] [bp-50h]@4
  int v17; // [sp-Ch] [bp-4Ch]@4
  int v18; // [sp-8h] [bp-48h]@4
  int v19; // [sp-4h] [bp-44h]@4
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
  if ( *(_DWORD *)(this + 72) && !(*(_BYTE *)(this + 80) & 1) )
  {
    v2 = **(_DWORD ***)(this + 68);  //057EB44B
    v3 = v2[2];
    *(_DWORD *)v2[1] = *v2;
    *(_DWORD *)(*v2 + 4) = v2[1];
    --*(_DWORD *)(v1 + 72);
    sub_57E194D(v2);
    v4 = (*(int (**)(void))(**(_DWORD **)(v3 + 12) + 16))();
    v5 = *(_DWORD *)(v1 + 56);
    *(_DWORD *)(v1 + 76) -= v4;
    v28 = sub_57E69A6(    //  057EB494 ============================> sub_57E69A6
            *(_DWORD **)(v1 + 36),
            *(_DWORD *)(v1 + 16),
            *(_DWORD *)(v3 + 12), //---->
            (arksocket::IPEndPoint *)(v3 + 4),
            v5 != 0 ? v5 + 8 : 0,
            *(_DWORD *)v3);
    if ( v28 )
    {
      sub_57E4ED2("udp", "UvUdpImpl::_SendQueueData, Send fail, ret=%d");
      v7 = sub_57E7676(v3 + 8);
      v8 = *(_DWORD *)v3;
      v21 = 0;
      v9 = v7;
      v22 = v8;
      v20 = sub_57EB52F;
      arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v23, (const struct arksocket::IPEndPoint *)(v3 + 4));
      sub_57E7676(v9);
      v1 = v27;
      v19 = 0;
      v24 = v28;
      v25 = v27;
      v19 = sub_57EC092(&v20);
      sub_57EB1CA(&v22);
      arksocket::Async::AsyncCall(v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
      sub_57E1648(&v26);
    }
    *(_DWORD *)(v1 + 80) |= 1u;
    sub_57EBACB((void *)v3, v6);
  }
}

{
.text:057EB429 ; =============== S U B R O U T I N E =======================================
.text:057EB429
.text:057EB429 ; Attributes: bp-based frame
.text:057EB429
.text:057EB429 sub_57EB429     proc near               ; CODE XREF: sub_57EB21C+1F2p
.text:057EB429                                         ; sub_57EB52F+44p
.text:057EB429
.text:057EB429 var_30          = dword ptr -30h
.text:057EB429 var_2C          = dword ptr -2Ch
.text:057EB429 var_28          = dword ptr -28h
.text:057EB429 var_24          = byte ptr -24h
.text:057EB429 var_20          = byte ptr -20h
.text:057EB429 var_18          = dword ptr -18h
.text:057EB429 var_14          = dword ptr -14h
.text:057EB429 var_10          = byte ptr -10h
.text:057EB429 var_8           = dword ptr -8
.text:057EB429 var_4           = dword ptr -4
.text:057EB429
.text:057EB429                 push    ebp
.text:057EB42A                 mov     ebp, esp
.text:057EB42C                 sub     esp, 34h
.text:057EB42F                 push    ebx
.text:057EB430                 push    esi
.text:057EB431                 push    edi
.text:057EB432                 mov     edi, ecx
.text:057EB434                 mov     [ebp+var_8], edi
.text:057EB437                 cmp     dword ptr [edi+48h], 0
.text:057EB43B                 jz      loc_57EB52A
.text:057EB441                 test    byte ptr [edi+50h], 1
.text:057EB445                 jnz     loc_57EB52A


.text:057EB44B                 mov     eax, [edi+44h]
.text:057EB44E                 push    0Ch
.text:057EB450                 mov     ecx, [eax]      ; Memory
.text:057EB452                 mov     edx, [ecx+4]
.text:057EB455                 mov     eax, [ecx]
.text:057EB457                 mov     esi, [ecx+8] //--------------

.text:057EB45A                 mov     [edx], eax
.text:057EB45C                 mov     edx, [ecx]
.text:057EB45E                 mov     eax, [ecx+4]
.text:057EB461                 mov     [edx+4], eax
.text:057EB464                 dec     dword ptr [edi+48h]
.text:057EB467                 pop     edx
.text:057EB468                 call    sub_57E194D
.text:057EB46D                 mov     ecx, [esi+0Ch]
.text:057EB470                 mov     eax, [ecx]
.text:057EB472                 call    dword ptr [eax+10h]
.text:057EB475                 mov     edx, [edi+38h]
.text:057EB478                 lea     ecx, [esi+4]
.text:057EB47B                 sub     [edi+4Ch], eax
.text:057EB47E                 push    dword ptr [esi] ; int
.text:057EB480                 lea     eax, [edx+8]
.text:057EB483                 neg     edx
.text:057EB485                 sbb     edx, edx
.text:057EB487                 and     edx, eax
.text:057EB489                 push    edx             ; int
.text:057EB48A                 push    ecx             ; arksocket::IPEndPoint *  
.text:057EB48B                 push    dword ptr [esi+0Ch] ; int   //-------------- 
.text:057EB48E                 mov     ecx, [edi+24h]
.text:057EB491                 push    dword ptr [edi+10h] ; int
.text:057EB494                 call    sub_57E69A6
.text:057EB499                 mov     [ebp+var_4], eax
.text:057EB49C                 test    eax, eax
.text:057EB49E                 jz      short loc_57EB51E
.text:057EB4A0                 push    eax
.text:057EB4A1                 push    offset aUvudpimpl_se_1 ; "UvUdpImpl::_SendQueueData, Send fail, r"...
.text:057EB4A6                 push    offset aUdp     ; "udp"
.text:057EB4AB                 call    sub_57E4ED2
.text:057EB4B0                 add     esp, 0Ch
.text:057EB4B3                 lea     eax, [esi+8]
.text:057EB4B6                 lea     ecx, [ebp+var_10]
.text:057EB4B9                 push    eax
.text:057EB4BA                 call    sub_57E7676
.text:057EB4BF                 mov     ecx, [esi]
.text:057EB4C1                 sub     esp, 28h
.text:057EB4C4                 and     [ebp+var_2C], 0
.text:057EB4C8                 mov     edi, eax
.text:057EB4CA                 lea     eax, [esi+4]
.text:057EB4CD                 mov     [ebp+var_28], ecx
.text:057EB4D0                 mov     ebx, esp
.text:057EB4D2                 mov     [ebp+var_30], offset sub_57EB52F
.text:057EB4D9                 push    eax             ; struct arksocket::IPEndPoint *
.text:057EB4DA                 lea     ecx, [ebp+var_24] ; this
.text:057EB4DD                 call    ??0IPEndPoint@arksocket@@QAE@ABV01@@Z ; arksocket::IPEndPoint::IPEndPoint(arksocket::IPEndPoint const &)
.text:057EB4E2                 push    edi
.text:057EB4E3                 lea     ecx, [ebp+var_20]
.text:057EB4E6                 call    sub_57E7676
.text:057EB4EB                 mov     eax, [ebp+var_4]
.text:057EB4EE                 lea     ecx, [ebp+var_30]
.text:057EB4F1                 mov     edi, [ebp+var_8]
.text:057EB4F4                 and     dword ptr [ebx+24h], 0
.text:057EB4F8                 mov     [ebp+var_18], eax
.text:057EB4FB                 mov     [ebp+var_14], edi
.text:057EB4FE                 call    sub_57EC092
.text:057EB503                 lea     ecx, [ebp+var_28]
.text:057EB506                 mov     [ebx+24h], eax
.text:057EB509                 call    sub_57EB1CA
.text:057EB50E                 lea     ecx, [edi+14h]
.text:057EB511                 call    ?AsyncCall@Async@arksocket@@QAEHV?$function@$$A6AXXZ@std@@@Z ; arksocket::Async::AsyncCall(std::function<void (void)>)
.text:057EB516                 lea     ecx, [ebp+var_10]
.text:057EB519                 call    sub_57E1648
.text:057EB51E
.text:057EB51E loc_57EB51E:                            ; CODE XREF: sub_57EB429+75j
.text:057EB51E                 or      dword ptr [edi+50h], 1
.text:057EB522                 push    ecx             ; int
.text:057EB523                 mov     ecx, esi        ; Memory
.text:057EB525                 call    sub_57EBACB
.text:057EB52A
.text:057EB52A loc_57EB52A:                            ; CODE XREF: sub_57EB429+12j
.text:057EB52A                                         ; sub_57EB429+1Cj
.text:057EB52A                 pop     edi
.text:057EB52B                 pop     esi
.text:057EB52C                 pop     ebx
.text:057EB52D                 leave
.text:057EB52E                 retn
.text:057EB52E sub_57EB429     endp
	
	
}


//---------------------------------------------------------------------------
057EB413 
signed int __thiscall sub_57EB21C(void *this, int a2, int a3, int a4)
{
  int v4; // ebx@1
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
  v4 = (int)this;
  v29 = a2;
  v5 = a3;
  v6 = *(_DWORD *)this;
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
    sub_57ECC0F(Memory);
    sub_57EAED3((arksocket::IPEndPoint *)&v25, (int)&v27);
    v8 = v27;
    if ( v27 )
    {
      arksocket::IPEndPoint::GetAddress(v5, &Memory);
      v9 = arksocket::IPAddress::GetString(&v30);
      if ( *(_DWORD *)(v9 + 20) >= 0x10u )
        v10 = *(_DWORD *)v9;
      sub_57E4ED2("udp", "UvUdpImpl, _Send, Open Fail, ret=%d, dest-addr=%s");
      sub_57E3015(&v30);
      arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Memory);
      sub_57ECC0F(v25);
      return v8;
    }
    sub_57ECC0F(v25);
  }
  if ( *(_DWORD *)(v4 + 76) <= 0x20000 )
  {
    v15 = sub_57ECBDF(0x10u);
    v16 = v15;
    *(_DWORD *)v15 = 0;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)(v15 + 8) = 0;
    *(_DWORD *)(v15 + 12) = 0;
    arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)(v15 + 4));
    v17 = v29;
    v18 = v16 + 8;
    *(_DWORD *)(v18 + 4) = 0;
    *(_DWORD *)v18 = &off_57EE370;
    v24 = v16;
    sub_57E1D01(v17);
    arksocket::IPEndPoint::operator=(v28);
    *(_DWORD *)v24 = a4;
    v19 = *(_DWORD *)(v4 + 68);
    v20 = *(_DWORD **)(v19 + 4);
    v21 = sub_57E19C1(*(_DWORD *)(v4 + 68), *(_DWORD *)(v19 + 4), &v24);
    v22 = *(_DWORD *)(v4 + 72);
    if ( (unsigned int)(357913940 - v22) < 1 )
      std::_Xlength_error("list<T> too long");
    *(_DWORD *)(v4 + 72) = v22 + 1;
    *(_DWORD *)(v19 + 4) = v21;
    *v20 = v21;
    *(_DWORD *)(v4 + 76) += (*(int (**)(void))(**(_DWORD **)(v24 + 12) + 16))();
    sub_57EB429(v4);  //======================>sub_57EB429
    result = 0;
  }
  else
  {
    arksocket::IPEndPoint::GetAddress(v5, &Memory);
    v12 = arksocket::IPAddress::GetString(&v30);
    if ( *(_DWORD *)(v12 + 20) >= 0x10u )
      v13 = *(_DWORD *)v12;
    v14 = *(_DWORD *)(v4 + 76);
    sub_57E4ED2("udp", "UvUdpImpl, _Send, send queue is full, drop the data, queue-size=%u, dest-addr=%s.");
    sub_57E3015(&v30);
    arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Memory);
    result = -1;
  }
  return result;
}




//---------------------------------------------------------------------------

057EB124 
int __thiscall sub_57EB0D7(int this, int a2, arksocket::IPEndPoint *a3, int a4)
{
  int v4; // ebx@1
  int result; // eax@5
  int v6; // esi@6
  char v7; // [sp-28h] [bp-60h]@6
  int v8; // [sp-24h] [bp-5Ch]@6
  int v9; // [sp-20h] [bp-58h]@6
  int v10; // [sp-1Ch] [bp-54h]@6
  int v11; // [sp-18h] [bp-50h]@6
  int v12; // [sp-14h] [bp-4Ch]@6
  int v13; // [sp-10h] [bp-48h]@6
  int v14; // [sp-Ch] [bp-44h]@6
  int v15; // [sp-8h] [bp-40h]@6
  int v16; // [sp-4h] [bp-3Ch]@6
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
      result = sub_57EB21C((void *)v4, a2, (int)a3, a4);  //=================>sub_57EB21C
    }
    else
    {
      v18 = 0;
      v17 = &off_57EE370;
      sub_57E1D01(a2);
      v20 = 0;
      v19 = sub_57EB1E6;
      v21 = a4;
      arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v22, a3);
      sub_57E7676(&v17);
      v16 = 0;
      v23 = v4;
      v16 = sub_57EC04A(&v19);
      sub_57EB1CA(&v21);
      v6 = arksocket::Async::AsyncCall(v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
      sub_57E1648(&v17);
      if ( v6 )
      {
        v16 = v6;
        sub_57E4ED2("udp", "UdpImpl::Send, AsyncCall fail, ret=%d");
      }
      result = v6;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}

//---------------------------------------------------------------------------
057E2E4B  
int __thiscall sub_57E2E27(int this, int a2)
{
  int v2; // ecx@1
  int result; // eax@2

  v2 = *(_DWORD *)(this + 64);
  if ( v2 )
    result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v2 + 24))(   //========>sub_57EB0D7
               *(_DWORD *)(a2 + 8),
               a2 + 12,
               *(_DWORD *)a2);
  else
    result = -1;
  return result;
}

//---------------------------------------------------------------------------
057E2602 
int __thiscall sub_57E25C4(int this, int a2)
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
    if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a2) ) //===========>sub_57E2E27
      ++*(_DWORD *)(a2 + 20);
  }
  v4 = time64(0);
  v5 = *(_DWORD *)(a2 + 56);
  v9 = v4;
  v10 = *(_DWORD **)(v5 + 4);
  v6 = sub_57E387B(v5, *(_DWORD *)(v5 + 4), &v9);
  v7 = *(_DWORD *)(v2 + 60);
  if ( (unsigned int)(268435454 - v7) < 1 )
    std::_Xlength_error("list<T> too long");
  *(_DWORD *)(v2 + 60) = v7 + 1;
  *(_DWORD *)(v5 + 4) = v6;
  *v10 = v6;
  return sub_57E2663(v2);
}




//---------------------------------------------------------------------------
057E25B9 
char __thiscall sub_57E24FC(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi@1
  int v7; // eax@3
  int v8; // edi@3
  int v9; // ebx@3
  int v11; // eax@7
  int v12; // ecx@7
  char v13; // [sp+10h] [bp-Ch]@7

  v6 = (int)this;
  if ( !a2 || !a3 )
    return 0;
  v7 = sub_57ECBDF(0x40u);
  v8 = sub_57E23DC(v7);
  sub_57E1D01(a2);
  v9 = a4;
  *(_DWORD *)v8 = a4;
  arksocket::IPEndPoint::operator=(v6 + 8);
  sub_57E1D01(a3);
  *(_DWORD *)(v8 + 32) = a5;
  *(_DWORD *)(v8 + 36) = a6;
  a2 = v9;
  if ( *(_DWORD *)sub_57E2EC3(&a3, &a2) != *(_DWORD *)(v6 + 16) )
  {
    sub_57E4ED2("data_sender", "DataSender::SendPacket, same cookie found, cookie=%u");
    return 0;
  }
  a5 = v9;
  a6 = v8;
  v11 = sub_57E39E7(&a5);
  sub_57E3A34(&v13, v12, v11 + 16, v11);
  sub_57E25C4(v6, v8);  //====================>sub_57E25C4
  sub_57E2D3A(v6);
  return 1;
}

//---------------------------------------------------------------------------
057EA17F 
signed int __thiscall sub_57EA10A(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi@1
  int v8; // eax@4
  int v9; // esi@6

  v6 = this;
  if ( !a2 )
  {
    sub_57E4ED2("udp_channel", "UdpChannelImpl::_SendData, buffer is NULL.");
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
      sub_57E1D01(v9);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v8 = *(_DWORD *)(v6 + 188);
    }
  }
  if ( !sub_57E24FC((void *)(v6 + 112), a2, v8, a4, a5, a6) )  //============>sub_57E24FC
  {
    sub_57E4ED2("udp_channel", "UdpChannelImpl::_SendData, SendPacket fail.");
    return -1;
  }
  return 0;
}



//---------------------------------------------------------------------------
//arksocket 057E9FD2  
signed int __thiscall sub_57E9F70(void *this, int a2, int a3, int *a4)
{
  int v4; // ebx@1
  DWORD v5; // eax@3
  arksocket::IOLoop *v6; // ecx@3
  signed int v7; // esi@4
  signed int result; // eax@6
  char v9; // [sp-28h] [bp-78h]@5
  int v10; // [sp-24h] [bp-74h]@5
  int v11; // [sp-20h] [bp-70h]@5
  int v12; // [sp-1Ch] [bp-6Ch]@5
  int v13; // [sp-18h] [bp-68h]@5
  int v14; // [sp-14h] [bp-64h]@5
  int v15; // [sp-10h] [bp-60h]@5
  int v16; // [sp-Ch] [bp-5Ch]@5
  int v17; // [sp-8h] [bp-58h]@5
  int v18; // [sp-4h] [bp-54h]@5
  int v19; // [sp+Ch] [bp-44h]@3
  int (__thiscall **v20)(void *, char); // [sp+10h] [bp-40h]@5
  int v21; // [sp+14h] [bp-3Ch]@5
  int (__thiscall **v22)(void *, char); // [sp+18h] [bp-38h]@5
  int v23; // [sp+1Ch] [bp-34h]@5
  int (__stdcall *v24)(char, int, char, int, int, int, int); // [sp+20h] [bp-30h]@5
  int v25; // [sp+24h] [bp-2Ch]@5
  int v26; // [sp+28h] [bp-28h]@5
  int v27; // [sp+2Ch] [bp-24h]@5
  int v28; // [sp+30h] [bp-20h]@5
  char v29; // [sp+38h] [bp-18h]@5
  char v30; // [sp+40h] [bp-10h]@5
  int v31; // [sp+48h] [bp-8h]@5

  v4 = (int)this;
  if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2) )
  {
    *a4 = arksocket::CookieMgr::GetCookie((volatile LONG *)(v4 + 180));
    v5 = GetTickCount();
    v6 = *(arksocket::IOLoop **)(v4 + 16);
    v19 = v5;
    if ( arksocket::IOLoop::IsLoopThread(v6) )
    {
      v7 = sub_57EA10A(v4, a2, a3, *a4, v19, 0);   //==============>sub_57EA10A
    }
    else
    {
      v23 = 0;
      v22 = &off_57EE370;
      sub_57E1D01(a3);
      v21 = 0;
      v20 = &off_57EE370;
      sub_57E1D01(a2);
      v25 = 0;
      v27 = 0;
      v26 = v19;
      v24 = sub_57EA0AF;
      v28 = *a4;
      sub_57E7676(&v22);
      sub_57E7676(&v20);
      v18 = 0;
      v31 = v4;
      v18 = sub_57EAADA(&v24);
      sub_57E1648(&v30);
      sub_57E1648(&v29);
      v7 = arksocket::Async::AsyncCall(v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
      sub_57E1648(&v20);
      sub_57E1648(&v22);
    }
    result = v7;
  }
  else
  {
    sub_57E4ED2("udp_channel", "UdpChannelImpl::Send, buffer is NULL.");
    result = -1;
  }
  return result;
}



//---------------------------------------------------------------------------


preloginlogic.56DF4302 
int __stdcall sub_56DF4259(int a1, int a2, void *a3, int a4, int a5)
{
  int v5; // edi@5
  int v7; // eax@9
  int v8; // esi@9
  int v9; // ebx@9
  int (__thiscall *v10)(int, int, int, int *); // edi@9
  int v11; // esi@9
  int v12; // eax@9
  int v13; // eax@9
  signed int v14; // esi@10
  int v15; // [sp+8h] [bp-Ch]@9
  int v16; // [sp+Ch] [bp-8h]@11
  int v17; // [sp+10h] [bp-4h]@11

  if ( a4 )
    *(_DWORD *)a4 = 0;
  if ( !a2 || !a3 )
    return -2147467259;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    a2 = (int)L"CUdpChannelMultiThread::SendData, m_channel is NULL.";
    sub_56DE2907(L"file", 131, L"func", 2, L"channel_mt", (const char *)L"%s", &a2);
    return -2147467259;
  }
  v7 = sub_56DF4BFE(a5);
  v8 = v7;
  v15 = v7;
  arksocket::Buffer::Buffer((arksocket::Buffer *)&a5);
  a1 = 0;
  arksocket::Buffer::CopyFrom((arksocket::Buffer *)&a5, a3, a2);
  v9 = *(_DWORD *)(v5 + 20);
  v10 = *(int (__thiscall **)(int, int, int, int *))(*(_DWORD *)v9 + 28);
  v11 = arksocket::ChannelSendOption::operator arksocket::IChannelSendOption *(v8);
  v12 = arksocket::Buffer::operator arksocket::IConstBuffer *(&a5);
  v13 = v10(v9, v12, v11, &a1);  //==============>arksocket.sub_57E9F70
  if ( v13 )
  {
    sub_56DE1C37(L"file", 143, L"func", 2, L"channel_mt", L"CUdpChannelMultiThread::SendData, Send fail, ret=%d.", v13);
    v14 = -2147467259;
  }
  else
  {
    v14 = 0;
    v16 = 0;
    v17 = 0;
    sub_56DF4DFF(a3, a2, &v16, &v17);
    GetTickCount();
    sub_56DE1C37(
      L"file",
      150,
      L"func",
      3,
      L"channel_mt",
      L"CUdpChannelMultiThread::SendData, cmd=0x%x, seq=0x%x, cookie=%u, tick=%u",
      v16);
    if ( a4 )
      *(_DWORD *)a4 = a1;
  }
  arksocket::Buffer::~Buffer((arksocket::Buffer *)&a5);
  sub_56DF47B7(&v15);
  return v14;
}

..........
preloginlogic.56DF9E9A 
int __thiscall sub_56DF9D36(void *this, int a2, int a3, size_t Size, int a5, int a6, int a7, int a8)
{
  int v8; // edi@1
  void *v9; // ebx@1
  int v10; // esi@2
  int v11; // eax@2
  int v12; // esi@3
  size_t v13; // eax@8
  __int16 v14; // bx@8
  unsigned __int16 v15; // di@8
  unsigned __int16 *v16; // eax@8
  size_t v17; // ST18_4@8
  int v18; // ecx@8
  unsigned __int16 *v19; // ebx@8
  const void *v20; // eax@8
  int v21; // ebx@8
  int v22; // edi@8
  int v23; // eax@8
  int v24; // esi@8
  int v25; // ebx@10
  int v26; // edi@10
  int v27; // eax@10
  int v29; // [sp+Ch] [bp-4h]@3

  v8 = a2;
  v9 = this;
  if ( !a8 )
  {
    v10 = sub_56DE4BEA(a2);
    v11 = sub_56DE4882(v8);
    sub_56DF8E1A(v11, v10);
  }
  v12 = *((_DWORD *)v9 + 15);
  v29 = v12;
  if ( v12 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    a8 = 0;
    Util::Data::CreateTXData((Util::Data *)&a8);
    (*(void (__stdcall **)(int, const char *, size_t))(*(_DWORD *)a8 + 248))(a8, "cPacketPerTime", Size);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a8 + 248))(a8, "cRetryLimit", a5);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a8 + 280))(a8, "dwRetryInterval", a6);
    if ( a7 )
      (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a8 + 384))(a8, "RetryStrategyInfo", a7);
    if ( *((_DWORD *)v9 + 21) && *((_DWORD *)v9 + 6) == 1 )
    {
      v13 = sub_56DE4BEA(v8);
      a7 = 0;
      v14 = v13;
      Size = v13;
      sub_56DE980D(v13 + 2);
      v15 = byteswap_ushort(v14 + 2);
      v16 = (unsigned __int16 *)sub_56DE4882(&a7);
      v17 = Size;
      v18 = a2;
      v19 = v16;
      *v16 = v15;
      v20 = (const void *)sub_56DE4882(v18);
      memcpy(v19 + 1, v20, v17);
      v21 = a8;
      a2 = *(_DWORD *)(*(_DWORD *)v12 + 40);
      v22 = sub_56DE4882(&a7);
      v23 = sub_56DE4BEA(&a7);
      v24 = ((int (__stdcall *)(int, int, int, int, int))a2)(v12, v23, v22, a3, v21);
      if ( a7 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a7 + 8))(a7);
    }
    else
    {
      v25 = a8;
      a7 = *(_DWORD *)(*(_DWORD *)v12 + 40);
      v26 = sub_56DE4882(v8);
      v27 = sub_56DE4BEA(a2);
      v24 = ((int (__stdcall *)(int, int, int, int, int))a7)(v12, v27, v26, a3, v25);
    }
    sub_56DE1E2F(&a8);
  }
  else
  {
    a2 = (int)L"err CTXCSProcessorMultiThread::SendData !m_pChannel";
    sub_56DE2907(L"file", 881, L"func", 2, L"CTXCSProcessor_MT", (const char *)L"%s", &a2);
    v24 = -2147467259;
  }
  sub_56DE1E2F(&v29);
  return v24;
}

..........
preloginlogic.56DFCB24 
int __thiscall sub_56DFC8C9(int this, int a2, int a3, int a4, char a5)
{
  int v5; // edi@1
  unsigned __int16 v6; // ax@1
  bool v7; // zf@1
  int v8; // eax@13
  int v9; // ebx@17
  int v10; // eax@20
  int v11; // eax@20
  int v12; // eax@25
  int v14; // [sp-1Ch] [bp-6Ch]@26
  int v15; // [sp-18h] [bp-68h]@26
  int v16; // [sp-14h] [bp-64h]@26
  int v17; // [sp-10h] [bp-60h]@26
  __int16 v18; // [sp-Ch] [bp-5Ch]@26
  int v19; // [sp-8h] [bp-58h]@26
  int v20; // [sp-4h] [bp-54h]@26
  int v21; // [sp+Ch] [bp-44h]@26
  int v22; // [sp+14h] [bp-3Ch]@1
  size_t Size; // [sp+18h] [bp-38h]@1
  int v24; // [sp+1Ch] [bp-34h]@1
  int v25; // [sp+20h] [bp-30h]@17
  int v26; // [sp+24h] [bp-2Ch]@17
  int v27; // [sp+28h] [bp-28h]@1
  int v28; // [sp+2Ch] [bp-24h]@1
  int v29; // [sp+30h] [bp-20h]@1
  int v30; // [sp+34h] [bp-1Ch]@8
  int v31; // [sp+38h] [bp-18h]@10
  int v32; // [sp+3Ch] [bp-14h]@1
  int v33; // [sp+40h] [bp-10h]@1
  int v34; // [sp+44h] [bp-Ch]@1
  int v35; // [sp+48h] [bp-8h]@1
  char v36; // [sp+4Fh] [bp-1h]@4

  v5 = this;
  v35 = 0xFFFF;
  v32 = 1;
  v33 = 0;
  LOBYTE(Size) = *(_BYTE *)(this + 76);
  LOBYTE(v27) = *(_BYTE *)(this + 77);
  v24 = *(_DWORD *)(this + 80);
  v28 = 0;
  v34 = 0;
  v29 = 0;
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 56))(a2, "wCsCmdNo:", &v35);
  v6 = sub_56DF9AB7(a2, 255);
  v7 = *(_DWORD *)(v5 + 20) == 0;
  v22 = v6;
  if ( v7 )
  {
    sub_56DE1C37(
      L"file",
      546,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"CTXCSProcessorMultiThread::_AsyncSend, m_bRunning==FALSE, Cmd=0x%x, SubCmd=0x%x",
      v35);
    goto LABEL_19;
  }
  v36 = 0;
  (*(void (__stdcall **)(int, const char *, char *))(*(_DWORD *)a2 + 176))(a2, "bCsCmdNoCyrpt", &v36);
  if ( v36 == 1 )
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bCsCmdNoCyrpt", &v32);
    v32 = v32 == 0;
  }
  (*(void (__stdcall **)(int, const char *, char *))(*(_DWORD *)a2 + 176))(a2, "CsCmdDecryptKeyArray", &v36);
  if ( v36 == 12 )
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 232))(a2, "CsCmdDecryptKeyArray", &v29);
  v30 = 0;
  sub_56DF782B(&v30);
  if ( v30 )
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v30 + 12))(v30, a2);
  v31 = 0;
  (*(void (__stdcall **)(int, const char *, size_t *))(*(_DWORD *)a2 + 40))(a2, "cPacketPerTime", &Size);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 40))(a2, "cRetryLimit", &v27);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 72))(a2, "dwRetryInterval", &v24);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 232))(a2, "arrRetryStrategyInfo", &v31);
  v28 = (unsigned __int8)v27;
  if ( v31 )
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v31 + 96))(v31, &v28);
  if ( (*(int (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a2 + 184))(a2, "wCSSeq", 4) )
  {
    v8 = (unsigned __int16)(*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(v5 + 52) + 12))(*(_DWORD *)(v5 + 52), v35);
    v33 = (unsigned __int16)v8;
  }
  else
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 56))(a2, "wCSSeq", &v33);
    sub_56DE1C37(
      L"file",
      604,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"SendData, Use special Seq, Cmd=0x%x, SubCmd=0x%x, Seq=0x%x",
      v35);
    v8 = v33;
  }
  if ( !sub_56DF96FD(v35, v8, v32, a2, a3, &v34) )
  {
    sub_56DE1E2F(&v31);
    sub_56DE1E2F(&v30);
    goto LABEL_19;
  }
  v9 = 0;
  v25 = 0;
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bNoSizeCheck", &v25);
  v26 = 0;
  if ( sub_56DF9D36((int)&v34, (int)&v26, Size, v27, v24, v31, v25) < 0 )   //=========>
  {
    sub_56DE1C37(
      L"file",
      626,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"CTXCSProcessorMultiThread::SendData, InternalSendData fail, cmd=%u, seq=%u",
      v35);
    sub_56DE1E2F(&v31);
    sub_56DE1E2F(&v30);
LABEL_19:
    if ( sub_56EAA06E(0x34u) )
    {
      v10 = sub_56DE4BEA(&v34);
      v11 = sub_56E29C57(v35, v33, 0, 0, v32, a3, a4, v29, a2, 0, v10);
    }
    else
    {
      v11 = 0;
    }
    sub_56DF8B42(v11);
    sub_56DE1E2F(&v29);
    if ( v34 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
      v34 = 0;
    }
    goto LABEL_30;
  }
  if ( sub_56EAA06E(0x34u) )
  {
    v12 = sub_56DE4BEA(&v34);
    v9 = sub_56E29C57(v35, v33, v26, v28, v32, a3, a4, v29, a2, 0, v12);
  }
  Util::CTXSpinLock::Lock((Util::CTXSpinLock *)(v5 + 108));
  sub_56DF57EB(&v21, v9);
  *(_DWORD *)(v21 + 20) = v9;
  Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)(v5 + 108));
  v20 = sub_56DE4BEA(&v34);
  v19 = v28;
  v18 = v33;
  v17 = v22;
  v16 = v35;
  v15 = v26;
  v14 = a2;
  if ( a2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  sub_56DFA0FF(v14, v15, v16, v17, v18, v19, v20);
  sub_56DE1E2F(&v31);
  sub_56DE1E2F(&v30);
  sub_56DE1E2F(&v29);
  if ( v34 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    v34 = 0;
  }
LABEL_30:
  sub_56DE1E2F(&a2);
  sub_56DE1E2F(&a3);
  sub_56DE1E2F(&a4);
  return sub_56DE1E2F(&a5);
}

..........
preloginlogic.56DF79DF 
int __cdecl sub_56DF7978(int (__thiscall *a1)(int, _DWORD *, _DWORD *, _DWORD *, _DWORD), int a2, _DWORD *a3, int ****a4, int ***a5, int **a6, int *a7)
{
  int v7; // edi@1
  int v8; // edx@1
  int *v9; // ecx@1
  int **v10; // ecx@3
  int ***v11; // ecx@5
  int ***v13; // [sp-10h] [bp-1Ch]@7
  int **v14; // [sp-Ch] [bp-18h]@5
  int *v15; // [sp-8h] [bp-14h]@3
  int v16; // [sp-4h] [bp-10h]@1

  v7 = *a3 + a2;
  v8 = *a7;
  v9 = &v16;
  v16 = v8;
  if ( v8 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  v15 = v9;
  v10 = &v15;
  v15 = *a6;
  if ( v15 )
    (*(void (__stdcall **)(int *))(*v15 + 4))(v15);
  v14 = v10;
  v11 = &v14;
  v14 = *a5;
  if ( v14 )
    ((void (__stdcall *)(int **))(*v14)[1])(v14);
  v13 = v11;
  v13 = (_DWORD *)*a4;
  if ( v13 )
    (*(void (__stdcall **)(int ***))(*v13 + 4))((int ***)v13);
  return a1(v7, (int ***)v13, v14, v15, v16);  //=====>
}

..........
preloginlogic.56DF7DFF 
int __cdecl sub_56DF7DE0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return sub_56DF7978(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), a2, a3, a4, a5, a6);
}


..........
preloginlogic.56DF7A27 
int __cdecl sub_56DF7A08(int a1, int a2, int a3, int a4)
{
  return sub_56DF7DE0(a3, a4 + 16, a4 + 12, a4 + 8, a4 + 4, a4);
}

//---------------------------------------------------------------------------
//preloginlogic.56DF75F0 
int sub_56DF75D7()
{
  return sub_56DF7A08();
}

//---------------------------------------------------------------------------
//arksocket
057E159A 
int __stdcall sub_57E1576(void *Memory)
{
  int v1; // ecx@2
  int v2; // ST08_4@5

  if ( (unsigned __int8)sub_57E1524(*(_DWORD *)Memory) )
  {
    v1 = *((_DWORD *)Memory + 13);
    if ( !v1 )
      std::_Xbad_function_call();
    (*(void (**)(void))(*(_DWORD *)v1 + 8))();   //=============================> preloginlogic.56DF75F0 
  }
  else
  {
    v2 = *(_DWORD *)Memory;
    sub_57E4ED2("async", "AsyncImpl::_AsyncCallback, AsyncCall Canceled, Cookie=%u.");
  }
  sub_57E185B((char *)Memory + 16);
  sub_57E1648((char *)Memory + 4);
  return sub_57ECC0F(Memory);
}
 
 
//---------------------------------------------------------------------------
057E5297
int __thiscall sub_57E5285(int this)
{
  int v1; // esi@1
  int v2; // ecx@1
  int result; // eax@2
  int v4; // ecx@3

  v1 = this;
  v2 = *(_DWORD *)(this + 68);
  if ( v2 )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 12))(*(_DWORD *)(v1 + 16)); //=================>sub_57E1576
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 60);
    if ( v4 )
      result = (*(int (**)(void))(*(_DWORD *)v4 + 8))();
  }
  if ( *(_DWORD *)v1 )
    result = uv_sem_post(*(_DWORD *)v1);
  return result;
}



//---------------------------------------------------------------------------

//libuv
uv_process_reqs => 057E5297 / sub_57E5285
uv_run => uv_process_reqs

//---------------------------------------------------------------------------
//arksocket
057E5696 => uv_run
int __cdecl sub_57E563A(LPVOID lpTlsValue)
{
  _DWORD *v1; // esi@1
  int v2; // edi@1
  DWORD v3; // ebx@1
  void *lpTlsValuea; // [sp+14h] [bp+8h]@1

  v1 = lpTlsValue;
  sub_57E55A1(lpTlsValue);
  lpTlsValuea = *(void **)lpTlsValue;
  v2 = sub_57E77F3();
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
  return uv_run(v1[1], 0); //uv_run(uv_loop_t *loop, uv_run_mode mode)
}
//---------------------------------------------------------------------------
//libuv
libuv.55EF3370  uv__thread_start => sub_57E563A
//---------------------------------------------------------------------------










//=========================================================================================================================================================
>	libuv.dll!uv__udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) send_cb) 行 896	C
 	libuv.dll!uv_udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, void(*)(uv_udp_send_s *, int) send_cb) 行 330	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv_process_async_wakeup_req(uv_loop_s * loop, uv_async_s * handle, uv_req_s * req) 行 96	C
 	libuv.dll!uv_process_reqs(uv_loop_s * loop) 行 194	C
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 466	C
 	[外部代码]	
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	

//------------------
static void uv_insert_pending_req(uv_loop_t* loop, uv_req_t* req) 

//------------------
// 
>	libuv.dll!uv_insert_pending_req(uv_loop_s * loop, uv_req_s * req) 行 91	C
 	libuv.dll!uv__send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) cb) 行 438	C
 	libuv.dll!uv__udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) send_cb) 行 908	C
 	libuv.dll!uv_udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, void(*)(uv_udp_send_s *, int) send_cb) 行 330	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv_process_udp_recv_req(uv_loop_s * loop, uv_udp_s * handle, uv_req_s * req) 行 529	C
 	libuv.dll!uv_process_reqs(uv_loop_s * loop) 行 184	C
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 466	C
 	[外部代码]	
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	

//wakeup ,recv
>	libuv.dll!uv_insert_pending_req(uv_loop_s * loop, uv_req_s * req) 行 91	C
 	libuv.dll!uv__poll(uv_loop_s * loop, unsigned long timeout) 行 408	C
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 474	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	
	

 
 
//send
>	libuv.dll!uv_insert_pending_req(uv_loop_s * loop, uv_req_s * req) 行 91	C
 	libuv.dll!uv__send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) cb) 行 438	C
 	libuv.dll!uv__udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) send_cb) 行 908	C
 	libuv.dll!uv_udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, void(*)(uv_udp_send_s *, int) send_cb) 行 330	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv__run_timers(uv_loop_s * loop) 行 174	C
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 464	C
 	[外部代码]	
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	
//send 
>	libuv.dll!uv_insert_pending_req(uv_loop_s * loop, uv_req_s * req) 行 91	C
 	libuv.dll!uv__send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) cb) 行 438	C
 	libuv.dll!uv__udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) send_cb) 行 908	C
 	libuv.dll!uv_udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, void(*)(uv_udp_send_s *, int) send_cb) 行 330	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv_process_udp_send_req(uv_loop_s * loop, uv_udp_s * handle, uv_udp_send_s * req) 行 584	C
 	libuv.dll!uv_process_reqs(uv_loop_s * loop) 行 188	C   // 处理 loop->pending_reqs_tail 链表
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 466	C
 	[外部代码]	
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	

/*
https://www.codedump.info/post/20190123-libuv/
uv_req_t及其子类
	handler主要应对一定与某个文件fd相关联的事件，除了这些以外，libuv希望把所有可能导致阻塞的操作全部异步化，包括：文件操作、查询域名操作等。这部分需要异步化的流程，全部封装到了uv_req_t结构体中。

	每个uv_req_t子类中，都有一个类型为struct uv__work的成员：
	 
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
	最终，每一个uv_req_t都会被放到一个线程中进行处理，处理完毕了才回调对应的函数。后面会展开讨论这个流程。

	uv_req_t有以下子类：

		uv_getaddrinfo_t：用于getaddrinfo调用。
		uv_getnameinfo_t：用于getnameinfo调用。
		uv_shutdown_t：用于shutdown操作。
		uv_write_t：用于写操作。
		uv_connect_t：用于TCP连接。
		uv_udp_send_t ：
		uv_fs_t：用于文件的IO读写请求。
		uv_worker_t：用于向线程提交一个任务。
	除了uv_worker_t之外，其它几个操作都有以下的特点：可能会阻塞线程，所以就单独拿出来处理了

*/	
static void uv__poll(uv_loop_t* loop, DWORD timeout) {
  BOOL success;
  uv_req_t* req;
  OVERLAPPED_ENTRY overlappeds[128];
  ULONG count;
  ULONG i;
  int repeat;
  uint64_t timeout_time;

  timeout_time = loop->time + timeout;

  for (repeat = 0; ; repeat++) {
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
          req = uv_overlapped_to_req(overlappeds[i].lpOverlapped);
          uv_insert_pending_req(loop, req);
        }
      }

      /* Some time might have passed waiting for I/O,
       * so update the loop time here.
       */
      uv_update_time(loop);
    } else if (GetLastError() != WAIT_TIMEOUT) {
      /* Serious error */
      uv_fatal_error(GetLastError(), "GetQueuedCompletionStatusEx");
    } else if (timeout > 0) {
      /* GetQueuedCompletionStatus can occasionally return a little early.
       * Make sure that the desired timeout target time is reached.
       */
      uv_update_time(loop);
      if (timeout_time > loop->time) {
        timeout = (DWORD)(timeout_time - loop->time);
        /* The first call to GetQueuedCompletionStatus should return very
         * close to the target time and the second should reach it, but
         * this is not stated in the documentation. To make sure a busy
         * loop cannot happen, the timeout is increased exponentially
         * starting on the third round.
         */
        timeout += repeat ? (1 << (repeat - 1)) : 0;
        continue;
      }
    }
    break;
  }
}


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

    ran_pending = uv_process_reqs(loop);
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

 
 
 //============================================================
 
 Address  To       From     Siz Comment            Party 
07E8F678 55EDC289 55EDB8E0 850 libuv.55EDB8E0     User   // uv_insert_pending_req  /wakeup
07E8FEC8 55EDAEC7 55EDC289 1C  libuv.55EDC289     User	 //uv__poll(uv_loop_s *loop, unsigned int timeout)
07E8FEE4 057E5696 55EDAEC7 20  libuv.55EDAEC7     User	 //int __cdecl uv_run(uv_loop_s *loop, uv_run_mode mode)
07E8FF04 55EF3370 057E5696 28  arksocket.057E5696 User
07E8FF2C 63776CF2 55EF3370 48  libuv.55EF3370     System
07E8FF74 759F6359 63776CF2 10  ucrtbased.63776CF2 System
07E8FF84 77808944 759F6359 5C  kernel32.759F6359  System
07E8FFE0 77808914 77808944 10  ntdll.77808944     System
07E8FFF0 00000000 77808914     ntdll.77808914     User


Address  To       From     Si Comment                Party 
07E8FA14 55F0DA6B 775612E0 54 ws2_32.775612E0        User
07E8FA68 55F0C1C5 55F0DA6B 2C libuv.55F0DA6B         User
07E8FA94 55ED87CB 55F0C1C5 28 libuv.55F0C1C5         User //uv__udp_send
07E8FABC 057E6A5C 55ED87CB 4C libuv.55ED87CB         User//uv_udp_send
07E8FB08 057EB499 057E6A5C 5C arksocket.057E6A5C     User
07E8FB64 057EB413 057EB499 54 arksocket.057EB499     User
07E8FBB8 057EB124 057EB413 50 arksocket.057EB413     User
07E8FC08 057E2E4B 057EB124 18 arksocket.057EB124     User
07E8FC20 057E2602 057E2E4B 20 arksocket.057E2E4B     User
07E8FC40 057E25B9 057E2602 28 arksocket.057E2602     User
07E8FC68 057EA17F 057E25B9 28 arksocket.057E25B9     User
07E8FC90 057E9FD2 057EA17F 70 arksocket.057EA17F     User
07E8FD00 56DF4302 057E9FD2 2C arksocket.057E9FD2     User
07E8FD2C 56DF9E9A 56DF4302 2C preloginlogic.56DF4302 User
07E8FD58 56DFCB24 56DF9E9A 74 preloginlogic.56DF9E9A User
07E8FDCC 56DF79DF 56DFCB24 24 preloginlogic.56DFCB24 User
07E8FDF0 56DF7DFF 56DF79DF 24 preloginlogic.56DF79DF User
07E8FE14 56DF7A27 56DF7DFF 20 preloginlogic.56DF7DFF User
07E8FE34 56DF75F0 56DF7A27 24 preloginlogic.56DF7A27 User
07E8FE58 057E159A 56DF75F0 C  preloginlogic.56DF75F0 User
07E8FE64 057E5297 057E159A 2C arksocket.057E159A     User
07E8FE90 55EDBD3B 057E5297 3C arksocket.057E5297     User	//sub_57E5285
07E8FECC 55EDAE74 55EDBD3B 18 libuv.55EDBD3B         User	//uv_process_reqs  => uv_process_async_wakeup_req(uv_loop_t* loop, uv_async_t* handle,  uv_req_t* req) => handle->async_cb(handle)
07E8FEE4 057E5696 55EDAE74 20 libuv.55EDAE74         User	//uv_run 
07E8FF04 55EF3370 057E5696 28 arksocket.057E5696     User
07E8FF2C 63776CF2 55EF3370 48 libuv.55EF3370         System
07E8FF74 759F6359 63776CF2 10 ucrtbased.63776CF2     System
07E8FF84 77808944 759F6359 5C kernel32.759F6359      System
07E8FFE0 77808914 77808944 10 ntdll.77808944         System
07E8FFF0 00000000 77808914    ntdll.77808914         User




//wakeup ,recv
>	libuv.dll!uv_insert_pending_req(uv_loop_s * loop, uv_req_s * req) 行 91	C
 	libuv.dll!uv__poll(uv_loop_s * loop, unsigned long timeout) 行 408	C
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 474	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	
//---------------
 
 
uv_insert_pending_req   .text 55EDB8E0  
uv_insert_pending_req_0 .text 55EE7180  
uv_insert_pending_req_1 .text 55EED760  
uv_insert_pending_req_2 .text 55EF3F70  
uv_insert_pending_req_3 .text 55EFF6D0  
uv_insert_pending_req_4 .text 55F033F0  
uv_insert_pending_req_5 .text 55F0CFE0  
//INLINE static void uv_insert_pending_req(uv_loop_t* loop, uv_req_t* req)   // pending_reqs_tail 添加 
 
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
                                (uv_udp_send_t*) req);
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

  UV_REQ_INIT(req, UV_UDP_SEND);
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
    req->u.io.queued_bytes = uv__count_bufs(bufs, nbufs); // uv__count_bufs(const uv_buf_t bufs[], unsigned int nbufs)
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

size_t uv__count_bufs(const uv_buf_t bufs[], unsigned int nbufs) {
  unsigned int i;
  size_t bytes;

  bytes = 0;
  for (i = 0; i < nbufs; i++)
    bytes += (size_t) bufs[i].len;

  return bytes;
}
typedef struct _WSABUF {
    ULONG len;     /* the length of the buffer */
    _Field_size_bytes_(len) CHAR FAR *buf; /* the pointer to the buffer */
} WSABUF, FAR * LPWSABUF;


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

//=================================
	  
//点击发送  uv_udp_send
Address  To       From     Si Comment                Party 
07E8FABC 057E6A5C 55ED8760 4C libuv.55ED8760         User  //uv_udp_send
07E8FB08 057EB499 057E6A5C 5C arksocket.057E6A5C     User  //sub_57E69A6
07E8FB64 057EB413 057EB499 54 arksocket.057EB499     User
07E8FBB8 057EB124 057EB413 50 arksocket.057EB413     User
07E8FC08 057E2E4B 057EB124 18 arksocket.057EB124     User
07E8FC20 057E2602 057E2E4B 20 arksocket.057E2E4B     User
07E8FC40 057E25B9 057E2602 28 arksocket.057E2602     User
07E8FC68 057EA17F 057E25B9 28 arksocket.057E25B9     User
07E8FC90 057E9FD2 057EA17F 70 arksocket.057EA17F     User
07E8FD00 56DF4302 057E9FD2 2C arksocket.057E9FD2     User
07E8FD2C 56DF9E9A 56DF4302 2C preloginlogic.56DF4302 User
07E8FD58 56DFCB24 56DF9E9A 74 preloginlogic.56DF9E9A User
07E8FDCC 56DF79DF 56DFCB24 24 preloginlogic.56DFCB24 User
07E8FDF0 56DF7DFF 56DF79DF 24 preloginlogic.56DF79DF User
07E8FE14 56DF7A27 56DF7DFF 20 preloginlogic.56DF7DFF User
07E8FE34 56DF75F0 56DF7A27 24 preloginlogic.56DF7A27 User
07E8FE58 057E159A 56DF75F0 C  preloginlogic.56DF75F0 User
07E8FE64 057E5297 057E159A 2C arksocket.057E159A     User
07E8FE90 55EDBD3B 057E5297 3C arksocket.057E5297     User
07E8FECC 55EDAE74 55EDBD3B 18 libuv.55EDBD3B         User
07E8FEE4 057E5696 55EDAE74 20 libuv.55EDAE74         User
07E8FF04 55EF3370 057E5696 28 arksocket.057E5696     User
07E8FF2C 63776CF2 55EF3370 48 libuv.55EF3370         System
07E8FF74 759F6359 63776CF2 10 ucrtbased.63776CF2     System
07E8FF84 77808944 759F6359 5C kernel32.759F6359      System
07E8FFE0 77808914 77808944 10 ntdll.77808944         System
07E8FFF0 00000000 77808914    ntdll.77808914         User 

//=================================