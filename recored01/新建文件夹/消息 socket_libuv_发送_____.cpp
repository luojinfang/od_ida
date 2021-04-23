线程 ID  地址       返回到      返回自      大小  注释                         方   
204836                                                           
       089FFA14 55F0DA6B 76D73500 54  ws2_32.76D73500            用户模块
       089FFA68 55F0C1C5 55F0DA6B 2C  libuv.uv__send+9B          用户模块
       089FFA94 55ED881B 55F0C1C5 28  libuv.uv__udp_send+95      用户模块
       089FFABC 52AF6A5C 55ED881B 4C  libuv.uv_udp_send+6B       用户模块
       089FFB08 52AFB499 52AF6A5C 5C  arksocket.52AF6A5C         用户模块
       089FFB64 52AFB413 52AFB499 54  arksocket.52AFB499         用户模块
       089FFBB8 52AFB124 52AFB413 50  arksocket.52AFB413         用户模块
       089FFC08 52AF2E4B 52AFB124 18  arksocket.52AFB124         用户模块
       089FFC20 52AF2602 52AF2E4B 20  arksocket.52AF2E4B         用户模块
       089FFC40 52AF25B9 52AF2602 28  arksocket.52AF2602         用户模块
       089FFC68 52AFA17F 52AF25B9 28  arksocket.52AF25B9         用户模块
       089FFC90 52AF9FD2 52AFA17F 70  arksocket.52AFA17F         用户模块
       089FFD00 56DF4302 52AF9FD2 2C  arksocket.52AF9FD2         用户模块
       089FFD2C 56DF9E9A 56DF4302 2C  preloginlogic.56DF4302     用户模块
       089FFD58 56DFCB24 56DF9E9A 74  preloginlogic.56DF9E9A     用户模块
       089FFDCC 56DF79DF 56DFCB24 24  preloginlogic.56DFCB24     用户模块
       089FFDF0 56DF7DFF 56DF79DF 24  preloginlogic.56DF79DF     用户模块
       089FFE14 56DF7A27 56DF7DFF 20  preloginlogic.56DF7DFF     用户模块
       089FFE34 56DF75F0 56DF7A27 24  preloginlogic.56DF7A27     用户模块
       089FFE58 52AF159A 56DF75F0 C   preloginlogic.56DF75F0     用户模块
       089FFE64 52AF5297 52AF159A 2C  arksocket.52AF159A         用户模块
       089FFE90 55EDBD7B 52AF5297 3C  arksocket.52AF5297         用户模块
       089FFECC 55EDAEB4 55EDBD7B 18  libuv.$LN50+13             用户模块	//55EDBD76                 call    j__uv_process_async_wakeup_req
       089FFEE4 52AF5696 55EDAEB4 20  libuv.uv_run+74            用户模块	//55EDAEAF                 call    uv_process_reqs
       089FFF04 55EF3370 52AF5696 28  arksocket.52AF5696         用户模块
       089FFF2C 50E86CF2 55EF3370 48  libuv.uv__thread_start+70  系统模块
       089FFF74 75FE0419 50E86CF2 10  ucrtbased.50E86CF2         系统模块
       089FFF84 770566DD 75FE0419 5C  kernel32.75FE0419          系统模块
       089FFFE0 770566AD 770566DD 10  ntdll.770566DD             系统模块
       089FFFF0 00000000 770566AD     ntdll.770566AD             用户模块
 
204836                                                                  
       089FFCEC 55F0DA6B 76D73500 54  ws2_32.76D73500                   用户模块
       089FFD40 55F0C1C5 55F0DA6B 2C  libuv.uv__send+9B                 用户模块
       089FFD6C 55ED881B 55F0C1C5 28  libuv.uv__udp_send+95             用户模块
       089FFD94 52AF6A5C 55ED881B 4C  libuv.uv_udp_send+6B              用户模块
       089FFDE0 52AFB499 52AF6A5C 5C  arksocket.52AF6A5C                用户模块
       089FFE3C 52AFB578 52AFB499 1C  arksocket.52AFB499                用户模块
       089FFE58 52AF6B73 52AFB578 1C  arksocket.52AFB578                用户模块
       089FFE74 55F0CD50 52AF6B73 1C  arksocket.52AF6B73                用户模块
       089FFE90 55EDBD60 55F0CD50 3C  libuv.uv_process_udp_send_req+1E0 用户模块	//55F0CD4E                 call    ecx
       089FFECC 55EDAEB4 55EDBD60 18  libuv.$LN49+14                    用户模块	//55EDBD5B                 call    j__uv_process_udp_send_req
       089FFEE4 52AF5696 55EDAEB4 20  libuv.uv_run+74                   用户模块  	//55EDAEAF                 call    uv_process_reqs
       089FFF04 55EF3370 52AF5696 28  arksocket.52AF5696                用户模块
       089FFF2C 50E86CF2 55EF3370 48  libuv.uv__thread_start+70         系统模块
       089FFF74 75FE0419 50E86CF2 10  ucrtbased.50E86CF2                系统模块
       089FFF84 770566DD 75FE0419 5C  kernel32.75FE0419                 系统模块
       089FFFE0 770566AD 770566DD 10  ntdll.770566DD                    系统模块
       089FFFF0 00000000 770566AD     ntdll.770566AD                    用户模块
	   
	   
	   
>	libuv.dll!uv__send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) cb) 行 421	C
 	libuv.dll!uv__udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, unsigned int addrlen, void(*)(uv_udp_send_s *, int) send_cb) 行 908	C
 	libuv.dll!uv_udp_send(uv_udp_send_s * req, uv_udp_s * handle, const uv_buf_t * bufs, unsigned int nbufs, const sockaddr * addr, void(*)(uv_udp_send_s *, int) send_cb) 行 330	C
 	[外部代码]	
 	arkSocket.dll![下面的框架可能不正确和/或缺失，没有为 arkSocket.dll 加载符号]	未知
 	libuv.dll!uv_process_async_wakeup_req(uv_loop_s * loop, uv_async_s * handle, uv_req_s * req) 行 96	C
 	libuv.dll!uv_process_reqs(uv_loop_s * loop) 行 194	C
 	libuv.dll!uv_run(uv_loop_s * loop, uv_run_mode mode) 行 466	C
 	[外部代码]	
 	libuv.dll!uv__thread_start(void * arg) 行 102	C
 	[外部代码]	
	   
 

 



	   
libuv.dll/base=55ED0000	   
arksocket.dll/base=52AF0000
hummerengine.dll/Base=53910000
asynctask.dll/Base=51B20000
IM.dll/Base=54A10000
 
 
	   
//==============================================================================================================================
//timer 	   
.text:52AF55FC                 call    ds:uv_timer_init
.text:52AF5602                 push    0
.text:52AF5604                 push    32h
.text:52AF5606                 push    0
.text:52AF5608                 push    32h
.text:52AF560A                 push    offset sub_52AF58D7
.text:52AF560F                 push    dword ptr [ebx+40h]
.text:52AF5612                 call    ds:uv_timer_start	   
	   
	   
  
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
  uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 20), sub_52AF569E);
  v3 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 28) = v3;
  *v3 = v1;
  uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 28), sub_52AF583D);
  v4 = calloc(1u, 0x60u);
  *(_DWORD *)(v1 + 64) = v4;
  *v4 = v1;
  uv_timer_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 64));
  uv_timer_start(*(_DWORD *)(v1 + 64), sub_52AF58D7, 50, 0, 50, 0);
  v5 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 108) = v5;
  *v5 = v1;
  return uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 108), sub_52AF5BC0);
}	   
	   
//==============================================================================================================================

		   
//https://blog.csdn.net/paohui0134/article/details/51647648
	   
//uv_async_send
Direction Type Address                           Text                    
--------- ---- -------                           ----                    
Up        p    arksocket::IOLoop::Stop(void)+332 call    ds:uv_async_send
          p    sub_52AF583D+6E                   call    ds:uv_async_send
Down      p    sub_52AF5944+11C                  call    ds:uv_async_send
Down      p    sub_52AF5AB5+E1                   call    ds:uv_async_send
Up        r    arksocket::IOLoop::Stop(void)+332 call    ds:uv_async_send
          r    sub_52AF583D+6E                   call    ds:uv_async_send
Down      r    sub_52AF5944+11C                  call    ds:uv_async_send
Down      r    sub_52AF5AB5+E1                   call    ds:uv_async_send





Address  To       From     Siz Comment                Party 
0019EF48 52AF5A66 55EDA5C0 30  libuv.55EDA5C0         User  //uv_async_send
0019EF78 52AF50D7 52AF5A66 3C  arksocket.52AF5A66     User
0019EFB4 52AF14A7 52AF50D7 20  arksocket.52AF50D7     User
0019EFD4 52AF162F 52AF14A7 38  arksocket.52AF14A7     User
0019F00C 56DF6DC8 52AF162F 50  arksocket.52AF162F     User
0019F05C 56E59CCC 56DF6DC8 38  preloginlogic.56DF6DC8 User
0019F094 54D60C1C 56E59CCC 40  preloginlogic.56E59CCC User
0019F0D4 54D5C69D 54D60C1C 28  im.54D60C1C            User	//sub_54D60A8D
0019F0FC 54C98AC4 54D5C69D C4  im.54D5C69D            User
0019F1C0 54C99727 54C98AC4 8C  im.54C98AC4            User
0019F24C 54B196FC 54C99727 20  im.54C99727            User
0019F26C 54B22591 54B196FC 40  im.54B196FC            User
0019F2AC 51B224EE 54B22591 28  im.54B22591            User
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE     User
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591     User
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF     User	//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
0019F340 51B2207A 51B24321 24  asynctask.51B24321     User  //AsyncTask::MessagePumpForUI::DoRunLoop 
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 759F6359 00403365 10  qq.00403365            System
0019FF84 77808944 759F6359 5C  kernel32.759F6359      System
0019FFE0 77808914 77808944 10  ntdll.77808944         System
0019FFF0 00000000 77808914     ntdll.77808914         User





//==============================================================================================================================
 
0019F2CC 51B24578 771641E0 18  user32.771641E0       User
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578    User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB    User  //AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C    User  //AsyncTask::MessagePumpForUI::DoRunLoop  
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           SystemInfo

//消息拷贝， ProcessNextWindowsMessage 获得下一个 msg 数据
0019F098 54D60B00 54C9B82D 3C  im.54C9B82D                用户模块
0019F0D4 54D5C69D 54D60B00 28  im.54D60B00                用户模块 //sub_54D60A8D
0019F0FC 54C98AC4 54D5C69D C4  im.54D5C69D                用户模块

//54C9B82D
void __thiscall sub_54C9B801(CCmdCodecBase *this)
{
  CCmdCodecBase *v1; // edi@1

  v1 = this;
  CCmdCodecBase::CodeNumber("dwMsgSeq", 6);
  CCmdCodecBase::CodeNumber("cMsgType", 2);
  CCmdCodecBase::CodeBuffer(v1, "bufMsg");
}


//==============================================================================================================================
0019EF48 52AF5A66 55EDA5C0 30  libuv.55EDA5C0         User  //uv_async_send

 

int uv_async_send(uv_async_t* handle) {
  uv_loop_t* loop = handle->loop;

  if (handle->type != UV_ASYNC) {
    /* Can't set errno because that's not thread-safe. */
    return -1;
  }

  /* The user should make sure never to call uv_async_send to a closing or
   * closed handle. */
  assert(!(handle->flags & UV_HANDLE_CLOSING));

  if (!uv__atomic_exchange_set(&handle->async_sent)) {
    POST_COMPLETION_FOR_REQ(loop, &handle->async_req);
  }

  return 0;
}

#define POST_COMPLETION_FOR_REQ(loop, req)                              \
  if (!PostQueuedCompletionStatus((loop)->iocp,                         \
                                  0,                                    \
                                  0,                                    \
                                  &((req)->u.io.overlapped))) {         \    ------------------------> (req)->u.io.overlapped
    uv_fatal_error(GetLastError(), "PostQueuedCompletionStatus");       \
  }


//==============================================================================================================================
0019EF78 52AF50D7 52AF5A66 3C  arksocket.52AF5A66     User





//==============================================================================================================================
0019EFB4 52AF14A7 52AF50D7 20  arksocket.52AF50D7     User





//==============================================================================================================================
0019EFD4 52AF162F 52AF14A7 38  arksocket.52AF14A7     User





//==============================================================================================================================
0019F00C 56DF6DC8 52AF162F 50  arksocket.52AF162F     User





//==============================================================================================================================
0019F05C 56E59CCC 56DF6DC8 38  preloginlogic.56DF6DC8 User





//==============================================================================================================================
0019F094 54D60C1C 56E59CCC 40  preloginlogic.56E59CCC User



 



//==============================================================================================================================
0019F0D4 54D5C69D 54D60C1C 28  im.54D60C1C            User
signed int __thiscall sub_54D60A8D(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // edi@1
  signed int v5; // esi@2
  LONG v6; // esi@5
  void (__stdcall *v7)(LONG, const char *, int); // ebx@5
  int v8; // eax@5
  LONG v9; // ebx@11
  int v10; // esi@13
  int v11; // ST14_4@15
  int v12; // edi@15
  LONG v14; // [sp+Ch] [bp-1Ch]@15
  int v15; // [sp+10h] [bp-18h]@15
  int v16; // [sp+14h] [bp-14h]@15
  _DWORD *v17; // [sp+18h] [bp-10h]@1
  int v18; // [sp+1Ch] [bp-Ch]@9
  int v19; // [sp+20h] [bp-8h]@3
  LONG Target; // [sp+24h] [bp-4h]@1

  Target = 0;
  v17 = this;
  Util::Data::CreateTXData((Util::Data *)&Target);
  v4 = a2;
  if ( sub_54D60F7C(a2, Target) < 0 )
  {
    sub_54A14A68(
      L"file",
      630,
      L"func",
      3,
      L"CTXCCServiceEx",
      (const char *)L"%s",
      L"err CTXCCServiceEx::SendDataThruServer SetupRelayCmdToMsgCenterData failed");
    v5 = -2147467259;
    goto LABEL_24;
  }
  v19 = 0;
  if ( (*(int (__stdcall **)(int, int, int *))(*(_DWORD *)a3 + 12))(a3, v4, &v19) < 0 ) //------------------->//消息拷贝
  {
    v5 = -2147467259;
    goto LABEL_22;
  }
  v6 = Target;
  v7 = *(void (__stdcall **)(LONG, const char *, int))(*(_DWORD *)Target + 328);
  v8 = v19;
  if ( !v19 )
  {
    Util::Data::CreateTXBuffer((Util::Data *)&v19);
    v8 = v19;
  }
  v7(v6, "bufOthers", v8);
  a2 = 0;
  if ( sub_54D5E52F(&a2) >= 0 )
  {
    v18 = 0;
    if ( sub_54CCDF2C(&v18) )
    {
      v9 = InterlockedExchange(&Target, 0);
      if ( Target )
        sub_54A1B4E4(&Target, 0);
      v10 = a4;
      if ( a4 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a4 + 4))(a4);
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      v14 = v9;
      v15 = v10;
      v11 = v17[6];
      v16 = v4;
      sub_54D5D14C(v11, &v14);
      v12 = (int)v17;
      if ( (*(int (__stdcall **)(int, LONG, int, _DWORD))(*(_DWORD *)v18 + 12))(v18, v9, a2, v17[9]) >= 0 )  //================>56E59CCC
      {
        v5 = 0;
        goto LABEL_20;
      }
      sub_54A14A68(
        L"file",
        670,
        L"func",
        3,
        L"CTXCCServiceEx",
        (const char *)L"%s",
        L"err CTXCCServiceEx::SendDataThruServer SendData failed");
      sub_54D61C2F((int)&a3, *(void **)(*(_DWORD *)(v12 + 24) + 4));
      (*(void (__stdcall **)(LONG))(*(_DWORD *)v9 + 8))(v9);
      if ( v10 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    }
    else
    {
      sub_54A14A68(
        L"file",
        653,
        L"func",
        3,
        L"CTXCCServiceEx",
        (const char *)L"%s",
        L"err CTXCCServiceEx::SendDataThruServer QueryService failed");
    }
    v5 = -2147467259;
LABEL_20:
    sub_54A14EEA(&v18);
    goto LABEL_21;
  }
  sub_54A14A68(
    L"file",
    645,
    L"func",
    3,
    L"CTXCCServiceEx",
    (const char *)L"%s",
    L"err CTXCCServiceEx::SendDataThruServer CreateCodec failed");
  v5 = -2147467259;
LABEL_21:
  sub_54A14EEA(&a2);
LABEL_22:
  if ( v19 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v19 + 8))(v19);
    v19 = 0;
  }
LABEL_24:
  sub_54A14EEA(&Target);
  return v5;
}


//==============================================================================================================================
0019F0FC 54C98AC4 54D5C69D C4  im.54D5C69D            User
int __stdcall sub_54D5C5C8(int a1, int *a2, int a3, int a4)
{
  int *v4; // esi@1
  int v5; // eax@1
  int v6; // eax@1
  int v7; // eax@1
  int result; // eax@2
  int v9; // [sp+Ch] [bp-8h]@1
  int v10; // [sp+10h] [bp-4h]@1

  v4 = a2;
  v5 = *a2;
  v9 = 0;
  (*(void (__stdcall **)(int *, const char *, int *))(v5 + 32))(a2, "bSendSigMsg", &v9);
  v6 = *v4;
  a2 = 0;
  (*(void (__stdcall **)(int *, const char *, int **))(v6 + 56))(v4, "wCmdNo", &a2);
  ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, const wchar_t *, char))sub_54A14A68)(
    L"file",
    545,
    L"func",
    3,
    L"Perf.CCComm.Pck",
    L"1,1,%d,%d",
    (char)a2);
  sub_54A14A68(
    L"file",
    547,
    L"func",
    3,
    L"NetWork.CCComm.Pck",
    (const char *)L"%s,%d,%d,%d,aaa",
    (unsigned int)L"CCComm");
  v7 = *v4;
  v10 = 0;
  (*(void (__stdcall **)(int *, const char *, int *))(v7 + 72))(v4, "dwLastChangeTime", &v10);
  sub_54A14A68(L"file", 552, L"func", 3, L"CTXCCServiceEx", (const char *)&unk_54EACE38, a2, v10);
  if ( v9 )
    result = sub_54D60E23(v4, a3, a4);
  else
    result = sub_54D60A8D(v4, a3, a4);  //==================>54D60C1C
  return result;
}


//==============================================================================================================================
0019F1C0 54C99727 54C98AC4 8C  im.54C98AC4            User
char __thiscall sub_54C98736(int this, int a2, void (__stdcall *a3)(_DWORD, const char *, _DWORD, _DWORD, _DWORD), int a4, int a5, int a6, int a7, int a8, int *a9)
{
  int v9; // esi@1
  signed int v10; // ebx@1
  int v11; // ST18_4@1
  char v12; // bl@2
  int v13; // esi@7
  int v14; // eax@14
  unsigned int v15; // esi@15
  int v16; // esi@25
  void (__stdcall *v17)(int, const char *, int); // edi@25
  int v18; // eax@25
  int v19; // esi@27
  int *v20; // edi@27
  int v21; // eax@27
  int v22; // eax@31
  int v23; // esi@31
  signed int v24; // eax@33
  const wchar_t *v25; // ecx@33
  int v27; // [sp+0h] [bp-ACh]@0
  int v28; // [sp+4h] [bp-A8h]@0
  char v29; // [sp+8h] [bp-A4h]@25
  char v30; // [sp+30h] [bp-7Ch]@5
  char v31; // [sp+58h] [bp-54h]@5
  int v32; // [sp+80h] [bp-2Ch]@1
  int v33; // [sp+88h] [bp-24h]@1
  int v34; // [sp+90h] [bp-1Ch]@1
  int v35; // [sp+94h] [bp-18h]@1
  int v36; // [sp+98h] [bp-14h]@1
  int v37; // [sp+9Ch] [bp-10h]@17
  int v38; // [sp+A0h] [bp-Ch]@31
  int v39; // [sp+A4h] [bp-8h]@25
  int v40; // [sp+A8h] [bp-4h]@25

  v9 = this;
  v10 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2;
  v32 = 0;
  BYTE1(v33) = a4;
  BYTE2(v33) = (_BYTE)a3;
  v11 = *(_DWORD *)(this + 16);
  v36 = this;
  BYTE3(v33) = v10 >> 2;
  LOBYTE(v33) = 0;
  v34 = (unsigned __int8)a3;
  v35 = 3;
  sub_54A14A68(
    L"file",
    168,
    L"func",
    3,
    L"BuddySession",
    L"CTXBuddySession::SendMsgWorker begin uin=%lu index=%d count=%d internalseq=%lu",
    v11);
  if ( (unsigned __int8)a3 < BYTE3(v33) )
  {
    a4 = 0;
    if ( Util::Data::CreateTXData((Util::Data *)&a4) )
    {
      (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a4 + 264))(a4, "wCmdNo", 11);
      (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 280))(a4, "dwToUin", *(_DWORD *)(v9 + 16));
      CTXCommPack::CTXCommPack((CTXCommPack *)&v30);
      CTXCommPack::CTXCommPack((CTXCommPack *)&v31);
      v12 = 1;
      CTXCommPack::AddDWord((CTXCommPack *)&v31, *(_BYTE *)(v9 + 172), 1);
      a3 = 0;
      CTXCommPack::GetBufferOut((CTXCommPack *)&v31, (struct CTXBuffer *)&a3);
      CTXCommPack::AddTLV(&v30, 1, &a3, 2);
      if ( a3 )
      {
        (*(void (__stdcall **)(void (__stdcall *)(_DWORD, const char *, _DWORD, _DWORD, _DWORD)))(*(_DWORD *)a3 + 8))(a3);
        a3 = 0;
      }
      CTXCommPack::~CTXCommPack((CTXCommPack *)&v31);
      v13 = v9 + 176;
      if ( !sub_54A157D3(v13) )
        CTXCommPack::AddTLV(&v30, 3, v13, 2);
      if ( a7 )
      {
        (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 264))(a4, "wCSSeq", a8);
        CTXCommPack::CTXCommPack((CTXCommPack *)&v31);
        CTXCommPack::AddByte((CTXCommPack *)&v31, 1u);
        a3 = 0;
        CTXCommPack::GetBufferOut((CTXCommPack *)&v31, (struct CTXBuffer *)&a3);
        CTXCommPack::AddTLV(&v30, 11, &a3, 2);
        if ( a3 )
        {
          (*(void (__stdcall **)(void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))(*(_DWORD *)a3 + 8))((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a3);
          a3 = 0;
        }
        CTXCommPack::~CTXCommPack((CTXCommPack *)&v31);
      }
      if ( a9 )
      {
        v14 = *a9;
        a8 = 0;
        (*(void (__stdcall **)(int *, const char *, int *))(v14 + 232))(a9, "arrayExtInfo", &a8);
        if ( a8 )
        {
          a9 = 0;
          (*(void (__stdcall **)(int, int **))(*(_DWORD *)a8 + 96))(a8, &a9);
          v15 = 0;
          if ( a9 )
          {
            do
            {
              a7 = 0;
              if ( (*(int (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)a8 + 68))(a8, v15, &a7) >= 0
                && (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)a7 + 56))(a7, "wExtInfoTag", &v37) >= 0
                && (unsigned __int16)v37 > 6u )
              {
                a3 = 0;
                (*(void (__stdcall **)(int, const char *, void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))(*(_DWORD *)a7 + 120))(
                  a7,
                  "buffExtInfo",
                  (void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))&a3);
                if ( !sub_54A157D3(&a3) )
                  CTXCommPack::AddTLV(&v30, v37, &a3, 2);
                if ( a3 )
                  (*(void (__stdcall **)(void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))(*(_DWORD *)a3 + 8))((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a3);
              }
              sub_54A14EEA(&a7);
              ++v15;
            }
            while ( v15 < (unsigned int)a9 );
          }
        }
        sub_54A14EEA(&a8);
      }
      v39 = 0;
      CTXCommPack::GetBufferOut((CTXCommPack *)&v30, (struct CTXBuffer *)&v39);
      CTXCommPack::CTXCommPack((CTXCommPack *)&v29);
      CTXCommPack::AddTLV(&v29, 0, &v39, 2);
      v40 = 0;
      CTXCommPack::GetBufferOut((CTXCommPack *)&v29, (struct CTXBuffer *)&v40);
      v16 = a4;
      v17 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 328);
      v18 = v40;
      if ( !v40 )
      {
        Util::Data::CreateTXBuffer((Util::Data *)&v40);
        v18 = v40;
      }
      v17(v16, "buffTLVExtInfo", v18);
      (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 280))(a4, "dwMsgSeq", v33);
      (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 248))(a4, "cMsgType", a6);
      v19 = a4;
      a3 = *(void (__stdcall **)(_DWORD, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a4 + 328);
      v20 = (int *)(*(_DWORD *)a2 + 4 * v34);
      v21 = *v20;
      if ( !*v20 )
      {
        Util::Data::CreateTXBuffer((Util::Data *)(*(_DWORD *)a2 + 4 * v34));
        v21 = *v20;
      }
      a3(v19, "bufMsg", v21, v27, v28);
      (*(void (__cdecl **)(int, const char *, int))(*(_DWORD *)a4 + 280))(a4, "dwInternalSeq", a5);
      a3 = 0;
      if ( sub_54B727F9(&a3) >= 0 )
      {
        v38 = 0;
        v22 = sub_54C92A0C(&v38);
        v23 = v36;
        if ( v22
          && (*(int (__stdcall **)(int, int, void (__stdcall *)(_DWORD, const char *, _DWORD, _DWORD, _DWORD), int))(*(_DWORD *)v38 + 12))(
               v38,
               a4,
               a3,
               v36 + 112) >= 0 )  //================================>54D5C69D
        {
          v24 = 287;
          v25 = L"CTXBuddySession::SendMsgWorker end uin=%lu";
        }
        else
        {
          v12 = 0;
          v35 = 2;
          v24 = 282;
          v25 = L"CTXBuddySession::SendMsgWorker get sender or senddata failed uin=%lu";
        }
        sub_54A14A68(L"file", v24, L"func", v35, L"BuddySession", v25, *(_DWORD *)(v23 + 16));
        sub_54A14EEA(&v38);
      }
      else
      {
        v12 = 0;
      }
      sub_54A14EEA(&a3);
      if ( v40 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v40 + 8))(v40);
        v40 = 0;
      }
      CTXCommPack::~CTXCommPack((CTXCommPack *)&v29);
      if ( v39 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39);
        v39 = 0;
      }
      CTXCommPack::~CTXCommPack((CTXCommPack *)&v30);
    }
    else
    {
      v12 = 0;
    }
    sub_54A14EEA(&a4);
  }
  else
  {
    v12 = 0;
  }
  sub_54A14EEA(&v32);
  return v12;
}


//==============================================================================================================================
0019F24C 54B196FC 54C99727 20  im.54C99727            User
int __thiscall sub_54C9944E(_DWORD *this, int a2, int a3, int a4, int a5, signed int a6, int a7)
{
  _DWORD *v7; // esi@1
  int v8; // ecx@4
  int v9; // ebx@6
  int v10; // eax@6
  int v11; // ebx@14
  int v12; // eax@18
  bool v13; // zf@19
  int v14; // ecx@24
  int v15; // edx@24
  char v16; // al@30
  int v17; // eax@36
  int v19; // [sp-28h] [bp-8Ch]@6
  struct ITXData **v20; // [sp-Ch] [bp-70h]@0
  int v21; // [sp-8h] [bp-6Ch]@0
  int v22; // [sp-4h] [bp-68h]@1
  int v23; // [sp+Ch] [bp-58h]@10
  int v24; // [sp+10h] [bp-54h]@12
  int v25; // [sp+14h] [bp-50h]@14
  int v26; // [sp+18h] [bp-4Ch]@16
  int v27; // [sp+24h] [bp-40h]@16
  int v28; // [sp+28h] [bp-3Ch]@16
  int v29; // [sp+2Ch] [bp-38h]@16
  int v30; // [sp+30h] [bp-34h]@16
  int v31; // [sp+3Ch] [bp-28h]@10
  int v32; // [sp+40h] [bp-24h]@10
  int v33; // [sp+44h] [bp-20h]@10
  int v34; // [sp+48h] [bp-1Ch]@24
  int v35; // [sp+4Ch] [bp-18h]@24
  int v36; // [sp+50h] [bp-14h]@16
  struct ITXData **v37; // [sp+54h] [bp-10h]@1
  int v38; // [sp+58h] [bp-Ch]@16
  int v39; // [sp+5Ch] [bp-8h]@3
  int v40; // [sp+60h] [bp-4h]@16

  v7 = this;
  v37 = 0;
  sub_54C929F8(&v37);
  if ( v37 )
  {
    v22 = a2;
    v21 = v7[4];
    v20 = v37;
    (*((void (**)(void))*v37 + 4))();
  }
  sub_54C99A1D(v7[4], a2, 0);
  v39 = 0;
  sub_54A1AA0D(a3);
  if ( (unsigned int)sub_54A1547A(&v39) <= 0x2BC )
  {
    v31 = 0;
    v32 = 0;
    v33 = 0;
    sub_54B62CF3(0, &v39);
    sub_54C938E2(&v23);
    if ( v23 != a2 )
      sub_54A1B4E4(&v23, a2);
    if ( v24 != a5 )
      sub_54A1B4E4(&v24, a5);
    v11 = a4;
    if ( v25 != a4 )
      sub_54A1B4E4(&v25, a4);
    sub_54C92DCB((int)&v26, v31, v32, a5);
    v27 = ++v7[37];
    v29 = a6;
    LOWORD(v28) = 0;
    BYTE2(v28) = 0;
    v36 = 0;
    a6 = 0;
    v38 = 0;
    v40 = 0;
    v30 = a7;
    (*(void (__cdecl **)(int, int *, struct ITXData **, int, int))(*(_DWORD *)a2 + 40))(a2, &v40, v20, v21, v22);
    if ( a5 )
      (*(void (__cdecl **)(int, const char *, int *))(*(_DWORD *)a5 + 32))(a5, "bLongText", &v36);
    v12 = v40;
    if ( v40 )
    {
      v13 = (*(int (__cdecl **)(int, const char *, signed int))(*(_DWORD *)v40 + 184))(v40, "wCSSeq", 4) == 0;
      v12 = v40;
      if ( v13 )
      {
        (*(void (__cdecl **)(int, const char *, int *))(*(_DWORD *)v40 + 56))(v40, "wCSSeq", &v38);
        v12 = v40;
        a6 = 1;
      }
    }
    if ( v36 )
    {
      a6 = 0;
      if ( v12 )
      {
        (*(void (__cdecl **)(int, const char *, int *))(*(_DWORD *)v12 + 56))(v12, "wCSSeqForLongText", &v38);
        v12 = v40;
      }
    }
    v14 = 0;
    v15 = 0;
    v35 = 0;
    v34 = 0;
    if ( v12 )
    {
      a4 = 0;
      (*(void (__cdecl **)(int, const char *, int *))(*(_DWORD *)v12 + 152))(v12, "pCustomData", &a4);
      if ( a4 )
      {
        (*(void (__cdecl **)(int, const char *, int *))(*(_DWORD *)a4 + 32))(a4, "bAutoReply", &v35);
        (*(void (__cdecl **)(int, const char *, int *))(*(_DWORD *)a4 + 32))(a4, "bCRMDefault", &v34);
      }
      sub_54A14EEA(&a4);
      v14 = v35;
      v15 = v34;
    }
    if ( v14 )
    {
      LOBYTE(a4) = 2;
    }
    else
    {
      v16 = 1;
      if ( v15 )
        v16 = 11;
      LOBYTE(a4) = v16;
    }
    if ( (unsigned __int8)sub_54C98736(&v26, v28, *(int *)((char *)&v28 + 1), v27, a4, a6, v38, a5) ) //===========================>54C98AC4
    {
      sub_54C92FC7(v7[39], &v23);
      if ( !a6 && sub_54C963EE(v7[4], a5) )
      {
        v17 = 0;
        a4 = 0;
        if ( a5 )
        {
          (*(void (__cdecl **)(int, const char *, void *, int *))(*(_DWORD *)a5 + 136))(
            a5,
            "pSaveMsgPack",
            &unk_54DD5478,
            &a4);
          v17 = a4;
        }
        if ( v17 )
          sub_54CC2D90(L"buddy", v17, 0, 0);
        else
          sub_54CC2D90(L"buddy", a2, 0, 0);
        sub_54A14EEA(&a4);
      }
    }
    else if ( v11 )
    {
      (*(void (__cdecl **)(int, signed int, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, -3, a2, 0);
    }
    sub_54A14EEA(&v40);
    sub_54C93B86(&v23);
    sub_54B65020(&v31);
  }
  else
  {
    sub_54A14A68(
      L"file",
      3471,
      L"func",
      2,
      L"BuddySession",
      L"Send BuddyMsg, toUin = [%lu], SendOnlineMsgAndPic, msg size too long, need longmsg channel",
      v7[4]);
    v8 = a5;
    if ( !a5 )
    {
      Util::Data::CreateTXData((Util::Data *)&a5, v20);
      v8 = a5;
    }
    (*(void (__cdecl **)(int, const char *, signed int, struct ITXData **, int, int))(*(_DWORD *)v8 + 240))(
      v8,
      "bForwardMsg",
      a6,
      v20,
      v21,
      v22);
    (*(void (__cdecl **)(int, const char *, int))(*(_DWORD *)a5 + 280))(a5, "dwForwardTaskID", a7);
    v9 = a4;
    v10 = sub_54C95680(a2, 0, a4, a5);
    v19 = v7[4];
    if ( v10 )
    {
      sub_54A14A68(
        L"file",
        3483,
        L"func",
        2,
        L"BuddySession",
        L"Send BuddyMsg, toUin = [%lu], SendOnlineMsgAndPic, HandleLongMsg ok",
        v19);
    }
    else
    {
      sub_54A14A68(
        L"file",
        3489,
        L"func",
        2,
        L"BuddySession",
        L"Send BuddyMsg, toUin = [%lu], SendOnlineMsgAndPic, HandleLongMsg fail",
        v19);
      if ( v9 )
        (*(void (__cdecl **)(int, signed int, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, -3, a2, 0);
    }
  }
  if ( v39 )
  {
    (*(void (__cdecl **)(int))(*(_DWORD *)v39 + 8))(v39);
    v39 = 0;
  }
  return sub_54A14EEA(&v37);
}


//==============================================================================================================================
0019F26C 54B22591 54B196FC 40  im.54B196FC            User
int __cdecl sub_54B196DC(int a1, int (__thiscall *a2)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int a3, int a4)
{
  return a2(
           a3 + a1,
           *(_DWORD *)a4,
           *(_DWORD *)(a4 + 4),
           *(_DWORD *)(a4 + 8),
           *(_DWORD *)(a4 + 12),
           *(_DWORD *)(a4 + 16),
           *(_DWORD *)(a4 + 20));
}


//==============================================================================================================================
0019F2AC 51B224EE 54B22591 28  im.54B22591            User
void __thiscall sub_54B22514(int this)
{
  int v1; // edx@1
  int v2; // eax@1
  const wchar_t *v3; // ST04_4@5
  Util::Misc *v4; // esi@5
  int v5; // eax@5
  int v6; // ecx@5
  unsigned __int32 v7; // ST08_4@8
  int v8; // [sp+0h] [bp-20h]@1
  char v9; // [sp+4h] [bp-1Ch]@5

  v1 = *(_DWORD *)(this + 4);
  v2 = 0;
  v8 = this;
  if ( v1 && *(_DWORD *)(v1 + 4) )
    v2 = *(_DWORD *)(this + 8);
  if ( v2 )
  {
    memset(&v9, 0, 0x18u);
    sub_54A375DC(&v9, 12, (const char *)L"%p", *(_DWORD *)(this + 16), *(_DWORD *)(this + 20));
    v4 = (Util::Misc *)Util::Misc::LogTaskStart((Util::Misc *)&v9, v3);
    v5 = *(_DWORD *)(v8 + 4);
    v6 = 0;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 4) )
        v6 = *(_DWORD *)(v8 + 8);
    }
    sub_54B196DC(v6, *(_DWORD *)(v8 + 16), *(_DWORD *)(v8 + 20), v8 + 24);  //==============>
    Util::Misc::LogTaskEnd(v4, v7);
  }
}


//==============================================================================================================================
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE     User
void __thiscall AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
{
  AsyncTask::MessageLoop *v2; // esi@1
  AsyncTask::WaitableEvent *v3; // ecx@2
  int v4; // edi@5
  int v5; // ecx@6
  int v6; // eax@6
  void (__thiscall ***v7)(_DWORD); // eax@12
  bool v8; // zf@13
  int v9; // eax@20
  HANDLE *v10; // eax@24
  AsyncTask::MessageLoop *v11; // [sp+10h] [bp-10h]@3
  int v12; // [sp+14h] [bp-Ch]@3
  int v13; // [sp+18h] [bp-8h]@8

  v2 = this;
  if ( AsyncTask::MessageLoop::is_dispatcher(this) )
  {
    AsyncTask::MessageLoop::PostTask(*((AsyncTask::MessageLoop **)v2 + 58), a2);
    v3 = *(AsyncTask::WaitableEvent **)(*((_DWORD *)v2 + 58) + 236);
    if ( v3 )
    {
      v11 = (AsyncTask::MessageLoop *)5000;
      v12 = 0;
      if ( !AsyncTask::WaitableEvent::TimedWait(v3, (const struct AsyncTask::TimeDelta *)&v11)
        && *((_DWORD *)v2 + 56) < 3u )
      {
        v4 = (*(int (**)(void))(**((_DWORD **)v2 + 51) + 4))();
        v11 = (AsyncTask::MessageLoop *)v4;
        if ( v4 )
        {
          v5 = *((_DWORD *)v2 + 58);
          *(_DWORD *)(v5 + 228) = 0;
          AsyncTask::MessageLoop::Quit((AsyncTask::MessageLoop *)v5);
          sub_51B22C1F((int)v2 + 208, (int *)&v11);
          v6 = *(_DWORD *)(v4 + 16);
          *((_DWORD *)v2 + 58) = v6;
          *(_BYTE *)(v6 + 200) = 1;
          *(_DWORD *)(*((_DWORD *)v2 + 58) + 228) = v2;
          AsyncTask::MessageLoop::create_work_event(*((AsyncTask::MessageLoop **)v2 + 58));
        }
      }
    }
  }
  else
  {
    v11 = (AsyncTask::MessageLoop *)((char *)v2 + 180);
    v12 = 0;
    if ( *((_DWORD *)v2 + 49) )
      v13 = (*((_DWORD *)v2 + 46) - *((_DWORD *)v2 + 45)) >> 2;
    else
      v13 = -1;
    ++*((_DWORD *)v2 + 48);
    while ( 1 )
    {
      v7 = (void (__thiscall ***)(_DWORD))sub_51B22A3D(&v11);
      if ( !v7 )
        break;
      (**v7)(v7);
    }
    v8 = (*((_DWORD *)v11 + 3))-- == 1;
    if ( v8 )
      sub_51B22C9B();
    (*(void (**)(void))(*(_DWORD *)a2 + 4))(); //===============>54B22591
    v11 = (AsyncTask::MessageLoop *)((char *)v2 + 180);
    v12 = 0;
    if ( *((_DWORD *)v2 + 49) )
      v13 = (*((_DWORD *)v2 + 46) - *((_DWORD *)v2 + 45)) >> 2;
    else
      v13 = -1;
    ++*((_DWORD *)v2 + 48);
    while ( 1 )
    {
      v9 = sub_51B22A3D(&v11);
      if ( !v9 )
        break;
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    }
    v8 = (*((_DWORD *)v11 + 3))-- == 1;
    if ( v8 )
      sub_51B22C9B();
    (**(void (__stdcall ***)(_DWORD))a2)(1);
    *((_BYTE *)v2 + 88) = 1;
    if ( *((_BYTE *)v2 + 200) )
    {
      v10 = (HANDLE *)*((_DWORD *)v2 + 59);
      if ( v10 )
        SetEvent(*v10);
    }
  }
}


//==============================================================================================================================
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591     User
char __thiscall AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
{
  char result; // al@3

  if ( *((_BYTE *)a2 + 20) || **((_DWORD **)this + 40) == 1 )
  {
    AsyncTask::MessageLoop::RunTask(this, *(struct AsyncTask::Task **)a2); //=====================>51B224EE
    result = 1;
  }
  else
  {
    sub_51B23198(a2);
    result = 0;
  }
  return result;
}

//==============================================================================================================================
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF     User
char __thiscall AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
{
  AsyncTask::MessageLoop *v1; // ebx@1
  int v2; // eax@3
  bool v3; // zf@4
  int v5; // [sp+10h] [bp-18h]@4
  __int64 v6; // [sp+18h] [bp-10h]@7

  v1 = this;
  if ( !*((_BYTE *)this + 88) )
    return 0;
  AsyncTask::MessageLoop::ReloadWorkQueue(this);
  if ( !*((_DWORD *)v1 + 6) )
    return 0;
  v2 = (int)v1 + 8;
  while ( 1 )
  {
    qmemcpy(&v5, (const void *)sub_51B22B52(v2), 0x18u);
    v3 = (*((_DWORD *)v1 + 6))-- == 1;
    if ( v3 )
      *((_DWORD *)v1 + 5) = 0;
    else
      ++*((_DWORD *)v1 + 5);
    if ( v6 )
    {
      AsyncTask::MessageLoop::AddToDelayedWorkQueue(v1, (const struct AsyncTask::MessageLoop::PendingTask *)&v5);
      if ( **((_DWORD **)v1 + 7) == v5 )
        (*(void (__stdcall **)(__int64 *))(**((_DWORD **)v1 + 16) + 16))(&v6);
      goto LABEL_11;
    }
    if ( AsyncTask::MessageLoop::DeferOrRunPendingTask(v1, (const struct AsyncTask::MessageLoop::PendingTask *)&v5) )  //================>51B22591
      return 1;
LABEL_11:
    v2 = (int)v1 + 8;
    if ( !*((_DWORD *)v1 + 6) )
    {
      AsyncTask::MessageLoop::ReloadWorkQueue(v1);
      v2 = (int)v1 + 8;
      if ( !*((_DWORD *)v1 + 6) )
        return 0;
    }
  }
}
		   
//==============================================================================================================================
0019F340 51B2207A 51B24321 24  asynctask.51B24321     User

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
    v4 = (*(int (**)(void))(**(_DWORD **)i + 4))();  //===================>51B227CF
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
    v2 = AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(v1);
  }
}  
		   
//==============================================================================================================================
 0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
void __thiscall AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
  JUMPOUT(*((_BYTE *)this + 89), 0, AsyncTask::MessageLoop::RunInternalInSEHFrame); //======>51B24321
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 4))(this);
} 	
	   
		   
//==============================================================================================================================
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
signed int __thiscall sub_5391F82B(void *this, wchar_t *a2)
{
  void *v2; // edi@1
  int v3; // ecx@1
  signed int v4; // ebx@4
  int v5; // esi@4
  Util::Misc *v6; // eax@4
  const wchar_t *v7; // eax@4
  int v8; // esi@4
  loginstatistics::CTXLoginStatistic *v9; // eax@13
  int v10; // eax@13
  int v11; // ecx@13
  LONG v12; // esi@13
  char v13; // al@14
  const char *v15; // esi@20
  int v16; // ecx@31
  char v17; // al@34
  signed int v18; // ebx@48
  volatile LONG *v19; // edi@48
  int v20; // eax@55
  PerfDataReportUtil *v21; // eax@55
  char v22; // al@55
  wchar_t *v23; // esi@55
  const wchar_t *v24; // eax@55
  const wchar_t *v25; // eax@55
  int v26; // eax@55
  Util::HostResolve *v27; // eax@55
  int v28; // esi@55
  int v29; // eax@65
  int v30; // ecx@65
  int v31; // eax@67
  int v32; // ecx@67
  HMODULE v33; // eax@78
  FARPROC v34; // eax@79
  char v35; // al@80
  const char *v36; // edi@81
  const wchar_t *v37; // eax@85
  const wchar_t *v38; // eax@85
  int v39; // esi@86
  void (__stdcall *v40)(int, int); // edi@86
  int v41; // eax@86
  int v42; // eax@86
  int v43; // esi@86
  void (__stdcall *v44)(int, wchar_t *); // edi@86
  wchar_t *v45; // eax@86
  int v46; // esi@86
  void (__thiscall *v47)(int, int, const wchar_t *); // edi@86
  const wchar_t *v48; // eax@86
  const wchar_t *v49; // eax@86
  int v50; // ST38_4@86
  int v51; // eax@91
  int v52; // eax@94
  int v53; // ecx@101
  int v54; // esi@103
  int v55; // eax@103
  HMODULE v56; // esi@112
  int v57; // ST38_4@126
  int v58; // eax@131
  signed int v59; // eax@136
  const wchar_t *v60; // ecx@136
  int v61; // ecx@138
  wchar_t *v62; // esi@141
  int v63; // eax@141
  unsigned __int32 v64; // eax@141
  char v65; // al@143
  int v66; // ecx@143
  int v67; // ecx@147
  void *v68; // eax@148
  Util::MsgIndex *v69; // ST34_4@156
  Util::FS *v70; // [sp+0h] [bp-694h]@2
  bool Dst; // [sp+10h] [bp-684h]@13
  bool v72; // [sp+11h] [bp-683h]@13
  const wchar_t *v73; // [sp+14h] [bp-680h]@13
  unsigned __int32 v74; // [sp+18h] [bp-67Ch]@13
  DWORDLONG v75; // [sp+20h] [bp-674h]@13
  int v76; // [sp+2Ch] [bp-668h]@4
  int v77; // [sp+30h] [bp-664h]@4
  int v78; // [sp+34h] [bp-660h]@55
  int (__thiscall **v79)(void *, char); // [sp+38h] [bp-65Ch]@4
  int v80; // [sp+3Ch] [bp-658h]@4
  int v81; // [sp+40h] [bp-654h]@4
  int v82; // [sp+44h] [bp-650h]@4
  char v83; // [sp+48h] [bp-64Ch]@4
  int v84; // [sp+4Ch] [bp-648h]@4
  int v85; // [sp+50h] [bp-644h]@4
  __int64 v86; // [sp+58h] [bp-63Ch]@4
  LARGE_INTEGER Frequency; // [sp+60h] [bp-634h]@4
  char v88; // [sp+6Ch] [bp-628h]@4
  char v89; // [sp+78h] [bp-61Ch]@4
  char v90; // [sp+7Ch] [bp-618h]@4
  char v91; // [sp+88h] [bp-60Ch]@4
  int v92; // [sp+8Ch] [bp-608h]@65
  int v93; // [sp+90h] [bp-604h]@65
  LONG v94; // [sp+94h] [bp-600h]@156
  LONG Target; // [sp+98h] [bp-5FCh]@37
  int (__thiscall **v96)(void *, char); // [sp+9Ch] [bp-5F8h]@4
  int v97; // [sp+A0h] [bp-5F4h]@60
  int v98; // [sp+A4h] [bp-5F0h]@62
  int v99; // [sp+A8h] [bp-5ECh]@62
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [sp+ACh] [bp-5E8h]@85
  int v101; // [sp+B4h] [bp-5E0h]@42
  int v102; // [sp+B8h] [bp-5DCh]@4
  int v103; // [sp+BCh] [bp-5D8h]@1
  LONG v104; // [sp+C0h] [bp-5D4h]@13
  PerfDataReportUtil *v105; // [sp+C4h] [bp-5D0h]@85
  struct ITXArray *v106; // [sp+C8h] [bp-5CCh]@38
  int v107; // [sp+CCh] [bp-5C8h]@85
  unsigned __int32 v108; // [sp+D0h] [bp-5C4h]@4
  const wchar_t *v109; // [sp+D4h] [bp-5C0h]@4
  int (__thiscall **v110)(void *, char); // [sp+D8h] [bp-5BCh]@4
  int v111; // [sp+1C8h] [bp-4CCh]@4
  int v112; // [sp+1CCh] [bp-4C8h]@4
  int v113; // [sp+1D0h] [bp-4C4h]@4
  int v114; // [sp+1D4h] [bp-4C0h]@4
  int v115; // [sp+1D8h] [bp-4BCh]@4
  int v116; // [sp+1DCh] [bp-4B8h]@4
  int v117; // [sp+1E0h] [bp-4B4h]@4
  int v118; // [sp+1E4h] [bp-4B0h]@4
  int v119; // [sp+1E8h] [bp-4ACh]@4
  int v120; // [sp+1ECh] [bp-4A8h]@4
  int v121; // [sp+1F0h] [bp-4A4h]@4
  struct _MEMORYSTATUSEX Buffer; // [sp+1F8h] [bp-49Ch]@4
  int (__thiscall **v123)(void *, char); // [sp+23Ch] [bp-458h]@4
  AsyncTask::MessageLoop *v124; // [sp+24Ch] [bp-448h]@4
  int v125; // [sp+254h] [bp-440h]@4
  Util::Misc *Caption[132]; // [sp+270h] [bp-424h]@5
  Util::Misc *Filename[60]; // [sp+480h] [bp-214h]@5
  struct _OSVERSIONINFOW VersionInformation; // [sp+570h] [bp-124h]@105

  v2 = this;
  v103 = (int)this;
  sub_5392183C();
  if ( (unsigned __int8)sub_53928035(v3) )
    Util::FS::StartAddCache(v70);
  else
    Util::Misc::LogTaskCheckDead(v70);
  ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, const wchar_t *, char))sub_53911B89)(
    L"file",
    2007,
    L"func",
    2,
    L"ExitInfo",
    L"Hook PostQuitMessage,cmdline:%s",
    (char)Str);
  v79 = &off_5393A2E8;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v4 = 1;
  v83 = 0;
  v84 = 1000;
  v85 = 1;
  _mm_storel_pd((double *)&v86, 0i64);
  AsyncTask::MessageLoopForUI::MessageLoopForUI((AsyncTask::MessageLoopForUI *)&v110);
  v110 = &off_5393A178;
  v111 = 0;
  v112 = 200;
  v113 = 200;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  AsyncTask::MessageLoopForUI::AddObserver(
    (AsyncTask::MessageLoopForUI *)&v110,
    (struct AsyncTask::MessagePumpWin::Observer *)&v79);
  v76 = 0;
  v77 = 0;
  v96 = &off_539396E0;
  AsyncTask::Thread::Thread((AsyncTask::Thread *)&v123, "Logical");
  v123 = &off_53939750;
  AsyncTask::Thread::StartWithOptions((AsyncTask::Thread *)&v123, (const struct AsyncTask::Thread::Options *)&v76);
  AsyncTask::MessageLoop::SetWorkerFactory(v124, (struct AsyncTask::MessageLoop::WorkerFactory *)&v96);
  Util::Misc::SetMainAndLogicMsgLoop((Util::Misc *)&v110, v124, v70);
  v5 = v125;
  v6 = (Util::Misc *)GetCurrentThreadId();
  Util::Misc::SetMainAndLogicThreadId(v6, v5, (unsigned __int32)v70);
  CTXStringW::CTXStringW((CTXStringW *)&v89);
  CTXStringW::CTXStringW((CTXStringW *)&v90);
  CTXStringW::CTXStringW((CTXStringW *)&v91);
  Version::GetVersionExW((Version *)&v88, v70);
  CTXStringW::CTXStringW(&v70);
  sub_539187AF(L"file", 166, L"func", 2, L"TXPerf", &unk_539388E8, (unsigned int)&v89);
  Frequency.QuadPart = 0i64;
  QueryPerformanceFrequency(&Frequency);
  v7 = (const wchar_t *)Util::Misc::GetCPUCores(v70);
  LOBYTE(v5) = (_BYTE)v7;
  v109 = v7;
  v108 = Util::Misc::GetCPUFrequency(v70);
  ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, const wchar_t *, char))sub_53911B89)(
    L"file",
    177,
    L"func",
    2,
    L"TXPerf",
    L"CPU\u6709%d\u4e2a\uff0c\u4e3b\u9891\uff1a%lu\uff0c\u9ad8\u6027\u80fd\u8ba1\u6570\u5668\u9891\u7387\u9ad8\u4f4d%lu\uf"
     "f0c\u4f4e\u4f4d%lu",
    v5);
  Buffer.dwLength = 64;
  memset(&Buffer.dwMemoryLoad, 0, 0x3Cu);
  GlobalMemoryStatusEx(&Buffer);
  ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, void *, char))sub_53911B89)(
    L"file",
    183,
    L"func",
    2,
    L"TXPerf",
    &unk_53938958,
    Buffer.dwMemoryLoad);
  v102 = 0;
  v8 = 0;
  if ( OSVersion::IsWin7OrGreater(v70) )
  {
    LOWORD(Caption[0]) = 0;
    LOWORD(Filename[0]) = 0;
    GetWindowsDirectoryW((LPWSTR)Caption, 0x104u);
    GetModuleFileNameW(0, (LPWSTR)Filename, 0x104u);
    if ( LOWORD(Caption[0]) == LOWORD(Filename[0]) )
    {
      if ( 0 != LOWORD(Caption[0]) )
      {
        v8 = Util::Misc::IsSupoortTrim(Caption[0], (wchar_t)v70);
        v102 = v8;
LABEL_12:
        ((void (__cdecl *)(_DWORD, signed int, _DWORD, _DWORD, _DWORD, void *, char))sub_53911B89)(
          L"file",
          218,
          L"func",
          2,
          L"TXPerf",
          &unk_53938A28,
          (char)Caption[0]);
        goto LABEL_13;
      }
    }
    else if ( 0 != LOWORD(Caption[0]) )
    {
      v102 = Util::Misc::IsSupoortTrim(Caption[0], (wchar_t)v70);
    }
    if ( LOWORD(Filename[0]) )
      v8 = Util::Misc::IsSupoortTrim(Filename[0], (wchar_t)v70);
    goto LABEL_12;
  }
LABEL_13:
  memset(&Dst, 0, 0x18u);
  v73 = v109;
  Dst = v102 != 0;
  v74 = v108;
  v75 = Buffer.ullTotalPhys;
  v72 = v8 != 0;
  v9 = (loginstatistics::CTXLoginStatistic *)loginstatistics::CTXLoginStatistic::instance();
  loginstatistics::CTXLoginStatistic::setMachineInfo(v9, (struct loginstatistics::LoginMachineInfo *)&Dst);
  v10 = sub_53930F19(0x28u);
  v12 = sub_5391D152(v10);
  v104 = v12;
  if ( v12 )
  {
    v13 = sub_53928035(v11);
    if ( !sub_5391E58A(v13) )
      goto LABEL_15;
  }
  v109 = 0;
  sub_53915257();
  if ( !sub_5391683E(&v109) )
  {
    dword_53945770 = 1;
    Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
    AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
    sub_539216F1(v12);
LABEL_15:
    CTXStringW::~CTXStringW((CTXStringW *)&v91);
    CTXStringW::~CTXStringW((CTXStringW *)&v90);
    CTXStringW::~CTXStringW((CTXStringW *)&v89);
    AsyncTask::Thread::~Thread((AsyncTask::Thread *)&v123);
    v96 = &off_539396EC;
    sub_53925242(&v110);
    v79 = &off_5393A2E8;
    sub_53925959(&v80);
    return 0;
  }
  if ( TXUpdateCfg::IsNeedRestore(v70) )
  {
    v109 = L"Need restore";
    v15 = (const char *)L"%s";
    sub_539124B3(L"func", 2, L"TXUPD", (const char *)L"%s", &v109);
    v109 = L"InitTXUpdate(false)";
    sub_539124B3(L"func", 2, L"txupd", (const char *)L"%s", &v109);
    if ( v104 && !sub_5391D470(0) )
    {
      v109 = L"InitTXUpdate(false) succeeded.";
LABEL_23:
      sub_539124B3(L"func", 2, L"txupd", v15, &v109);
LABEL_24:
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
      sub_539216F1(v104);
      goto LABEL_15;
    }
    v109 = L"InitTXUpdate(false) failed.";
LABEL_31:
    sub_539124B3(L"func", 2, L"txupd", v15, &v109);
    goto LABEL_34;
  }
  v15 = (const char *)L"%s";
  if ( TXUpdateCfg::IsNeedRestorePatch(v70) )
  {
    v109 = L"Need restore patch";
    sub_539124B3(L"func", 2, L"TXUPD", (const char *)L"%s", &v109);
    v109 = L"InitTXUpdate(true)";
    sub_539124B3(L"func", 2, L"txupd", (const char *)L"%s", &v109);
    if ( v104 && !sub_5391D470(1) )
    {
      v109 = L"InitTXUpdate(true) succeeded.";
      goto LABEL_23;
    }
    v109 = L"InitTXUpdate(true) failed.";
    goto LABEL_31;
  }
  v109 = L"Do not need restore";
  sub_539124B3(L"func", 2, L"TXUPD", (const char *)L"%s", &v109);
  v109 = L"InitAutoUpdate";
  sub_539124B3(L"func", 2, L"txupd", (const char *)L"%s", &v109);
  if ( v104 && !sub_5391D2C0() )
    goto LABEL_24;
LABEL_34:
  v17 = sub_53928035(v16);
  v108 = 0;
  if ( v17 )
  {
    sub_53911DC3(&unk_53938120, &v108);
    sub_5391164A(&v108);
  }
  else
  {
    sub_53911DC3(&unk_53938130, &v108);
    sub_5391164A(&v108);
  }
  Target = 0;
  sub_53911DC3(&unk_539396B8, &Target);
  if ( Target )
  {
    v108 = 0;
    (*(void (__stdcall **)(LONG, int *))(*(_DWORD *)Target + 12))(Target, (int *)&v108);
    v106 = 0;
    (*(void (__stdcall **)(LONG, int *))(*(_DWORD *)Target + 32))(Target, (int *)&v106);
    HttpClientUtil::SetPtLogin2HttpsUrlConfig(v108, v106);
    if ( Target )
      sub_53911956(&Target, 0);
    sub_5391164A(&v106);
  }
  if ( sub_539217DD() )
  {
    v101 = 0;
    sub_53911DC3(&unk_53935110, &v101);
    if ( v101 )
      (*(void (__stdcall **)(int, _DWORD, signed int, _DWORD))(*(_DWORD *)v101 + 24))(v101, 0, 8, 0);
    v106 = 0;
    v108 = 2;
    sub_53911DC3(&unk_539396A8, &v106);
    if ( v106 )
    {
      (*(void (__stdcall **)(struct ITXArray *, int *))(*(_DWORD *)v106 + 60))(v106, (int *)&v108);
      if ( !v108 )
        Util::GF::DPI::SetDPIAdaptFlag(0, v70);
    }
    if ( (unsigned __int8)sub_5392801C() )
    {
      sub_53925AE3((char *)v2 + 60);
      v18 = 0;
      v19 = (volatile LONG *)((char *)v2 + 69);
      do
      {
        if ( InterlockedExchangeAdd(v19, 0) )
          break;
        Sleep(0x3E8u);
        ++v18;
      }
      while ( v18 < 5 );
      Util::Misc::SetEnablePreload(0, v70);
      sub_53925BE0(v103 + 60);
      v4 = 1;
    }
    ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, const char *, char))sub_53911B89)(
      L"file",
      424,
      L"func",
      2,
      L"Startup",
      v15,
      (unsigned int)L"background startup");
    sub_5391164A(&v106);
    sub_5391164A(&v101);
  }
  if ( sub_53920E8D() )
  {
    v20 = sub_53918B55(&v109, "wStartToShowLP");
    v21 = (PerfDataReportUtil *)CTXBSTR::operator wchar_t *(v20);
    PerfDataReportUtil::SetPerfReportDataForWord(v21, a2, 0, v70);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v109);
    Version::GetBuildVer(v70);
    Version::GetPubNo(v70);
    v22 = sub_53914ED8();
    ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, void *, char))sub_53911B89)(
      L"file",
      439,
      L"func",
      2,
      L"ConnectionLost",
      &unk_53938C78,
      v22);
    v78 = 0;
    v23 = *(wchar_t **)(v103 + 76);
    CTXStringW::CTXStringW(&v108, L"platform");
    v24 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v108);
    v25 = TXLoadString(L"HttpDataReportDomainName", v24);
    v26 = CTXBSTR::CTXBSTR(&v109, v25);
    v27 = (Util::HostResolve *)CTXBSTR::operator wchar_t *(v26);
    Util::HostResolve::Resolve(v27, v23, (struct ITXHostResolverSink *)&v78, (unsigned __int32 *)v70);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v109);
    CTXStringW::~CTXStringW((CTXStringW *)&v108);
    v28 = v103;
    if ( !sub_539264C8(v103 + 44) )
    {
      v36 = (const char *)L"%s";
LABEL_153:
      Util::ExitInfo::UpdateExitInfo(100);
      Util::GF::ClosePopupWindows(v70);
      TraceGuidReg.RegHandle = &unk_53938F24;
      sub_539124B3(L"func", 2, L"TBH|AddrSearch", v36, &TraceGuidReg.RegHandle);
      sub_53911B89(L"file", 788, L"func", 2, L"ExitFlow", v36, L"exit message loop");
      if ( (unsigned __int8)sub_5392801C() )
      {
        Util::Misc::SetEnablePreload(0, v70);
        if ( !InterlockedExchangeAdd((volatile LONG *)(v28 + 68), 0) )
        {
          sub_53911B89(L"file", 799, L"func", 2, L"ExitFlow", v36, L"Begin Exit Set PreThreadExit.");
          sub_53925BE0(v28 + 60);
        }
      }
      Util::ExitInfo::UpdateExitInfo(120);
      sub_5392539F(&v110);
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
      Util::MsgIndex::StopThread(v69);
      Util::ExitInfo::UpdateExitInfo(130);
      Util::Msg::StopMsgThread(v70);
      Util::Msg::CloseMsgStorage(v70);
      Util::ExitInfo::UpdateExitInfo(135);
      sub_5392539F(&v110);
      TraceGuidReg.RegHandle = L"Close info.db begin";
      sub_539124B3(L"func", 2, L"Exit", v36, &TraceGuidReg.RegHandle);
      v94 = 0;
      sub_53911DC3(&unk_53939648, &v94);
      if ( v94 )
      {
        (*(void (__stdcall **)(LONG))(*(_DWORD *)v94 + 28))(v94);
        FS::RemoveFileSystem((FS *)L"UserDataInfoStorage:", (const wchar_t *)v70);
        if ( v94 )
          sub_53911956(&v94, 0);
      }
      TraceGuidReg.RegHandle = L"Close info.db end";
      sub_539124B3(L"func", 2, L"Exit", v36, &TraceGuidReg.RegHandle);
      NewRegistry::OnExitProcess(v70);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
      sub_539216F1(v104);
      sub_5391164A(&v94);
      goto LABEL_160;
    }
    if ( (unsigned __int8)sub_53927A44() )
      sub_53926F8E(&byte_53946805);
    if ( byte_53946805 )
      goto LABEL_59;
    v97 = 0;
    sub_53911DC3(&unk_53939698, &v97);
    if ( v97 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v97 + 16))(v97);
    v98 = 0;
    v99 = 0;
    sub_53911DC3(&unk_53935110, &v98);
    if ( v98 )
    {
      (*(void (__stdcall **)(int, const wchar_t *, _DWORD, signed int, int *))(*(_DWORD *)v98 + 32))(
        v98,
        L"PCMgrInstaller_Domain",
        0,
        1,
        &v99);
      if ( v99 )
      {
        v102 = 0;
        (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v99 + 16))(v99, "PCMgrInstaller_Setting", &v102);
        if ( v102 )
        {
          v93 = 0;
          v92 = 0;
          v29 = (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)v102 + 56))(v102, "StrongLogic", &v93);
          v30 = v93;
          if ( v29 )
            v30 = 0;
          v93 = v30;
          v31 = (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)v102 + 56))(v102, "WeakLogic", &v92);
          v32 = v92;
          if ( v31 )
            v32 = 0;
          v92 = v32;
          if ( v93 || v32 )
          {
            v101 = 0;
            sub_53911DC3(&unk_53939688, &v101);
            if ( v101 && (*(int (__stdcall **)(int))(*(_DWORD *)v101 + 12))(v101) < 0 )
            {
              Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
              AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
              sub_539216F1(v104);
              sub_5391164A(&v101);
              sub_5391164A(&v102);
LABEL_74:
              sub_5391164A(&v99);
              sub_5391164A(&v98);
              sub_5391164A(&v97);
              v4 = 0;
              goto LABEL_160;
            }
            sub_5391164A(&v101);
          }
        }
        sub_5391164A(&v102);
      }
    }
    if ( !Util::Misc::IsOverWindowVista(v70) )
      goto LABEL_81;
    v33 = Util::Sys::SafeLoadLibrary((Util::Sys *)L"user32.dll", (const wchar_t *)v70);
    if ( v33 )
    {
      v34 = GetProcAddress(v33, "ChangeWindowMessageFilter");
      if ( v34 )
      {
        v35 = ((int (__stdcall *)(signed int, signed int))v34)(74, 1);
        ((void (__cdecl *)(const wchar_t *, signed int, const wchar_t *, signed int, const wchar_t *, const wchar_t *, char))sub_53911B89)(
          L"file",
          529,
          L"func",
          3,
          L"QQProtect",
          L"ChangeWindowMessageFilter :%u",
          v35);
LABEL_81:
        v36 = (const char *)L"%s";
        goto LABEL_82;
      }
      v109 = L"ChangeWindowMessageFilter fail";
    }
    else
    {
      v109 = L"load user32.dll fail";
    }
    v36 = (const char *)L"%s";
    sub_539124B3(L"func", 2, L"QQProtect", (const char *)L"%s", &v109);
LABEL_82:
    v106 = 0;
    sub_53911DC3(&unk_53939678, &v106);
    if ( v106 )
      (*(void (__stdcall **)(struct ITXArray *))(*(_DWORD *)v106 + 28))(v106);
    sub_5391164A(&v106);
    v106 = 0;
    sub_53911DC3(&unk_53939668, &v106);
    if ( !v106 )
    {
      CTXStringW::CTXStringW(&v105, L"platform");
      v37 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v105);
      v38 = TXLoadString(L"MsgBox_Text_FileBroken", v37);
      CTXStringW::CTXStringW(&v109, v38);
      CTXStringW::~CTXStringW((CTXStringW *)&v105);
      v107 = 0;
      sub_53911BAE(&v107);
      TraceGuidReg.RegHandle = 0;
      if ( v107 )
      {
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v107 + 28))(v107, 0, 0);
        v39 = v107;
        v40 = *(void (__stdcall **)(int, int))(*(_DWORD *)v107 + 176);
        v41 = CTXBSTR::CTXBSTR(&v105, L"MsgBoxEx");
        v42 = CTXBSTR::operator wchar_t *(v41);
        v40(v39, v42);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v105);
        v43 = v107;
        v44 = *(void (__stdcall **)(int, wchar_t *))(*(_DWORD *)v107 + 1304);
        v45 = CTXStringW::GetBSTR((CTXStringW *)&v109);
        v44(v43, v45);
        v46 = v107;
        v47 = *(void (__thiscall **)(int, int, const wchar_t *))(*(_DWORD *)v107 + 1144);
        CTXStringW::CTXStringW(&v105, L"platform");
        v48 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v105);
        v49 = TXLoadString(L"CF_MESSAGE_TITLE", v48);
        v47(v50, v46, v49);
        CTXStringW::~CTXStringW((CTXStringW *)&v105);
        (*(void (__stdcall **)(int, signed int))(*(_DWORD *)v107 + 1312))(v107, 262192);
        (*(void (__stdcall **)(int, _DWORD, HANDLE *, _DWORD))(*(_DWORD *)v107 + 1288))(
          v107,
          0,
          &TraceGuidReg.RegHandle,
          0);
      }
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
      sub_539216F1(v104);
      sub_5391164A(&v107);
      CTXStringW::~CTXStringW((CTXStringW *)&v109);
      sub_5391164A(&v106);
      goto LABEL_74;
    }
    sub_5391164A(&v106);
    v51 = sub_539217DD();
    if ( !sub_5391D4DC(v51) )
    {
      memset(Caption, 0, 0x20Au);
      GetModuleFileNameW(0, (LPWSTR)Caption, 0x104u);
      TraceGuidReg.RegHandle = L"Initialization failure: 0x00000030";
      sub_539124B3(L"func", 2, L"Initialize", v36, &TraceGuidReg.RegHandle);
      v4 = 0;
      MessageBoxW(0, L"Initialization failure: 0x00000030", (LPCWSTR)Caption, 0x10u);
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
      sub_539216F1(v104);
      sub_5391164A(&v99);
      sub_5391164A(&v98);
      sub_5391164A(&v97);
      goto LABEL_160;
    }
    sub_5392801C();
    if ( (unsigned __int8)sub_5392801C() )
    {
      v52 = sub_539217DD();
      sub_5391D84B(v52);
    }
    sub_53926DA9(v28 + 44);
    if ( (unsigned __int8)sub_5392801C() )
    {
      if ( sub_539217DD() )
        Util::Misc::SetEnablePreload((Util::Misc *)1, v70);
      TXTimer::SetIdleCallback(*(TXTimer **)(v28 + 8), 0, (unsigned int)v70);
    }
    if ( Util::Window::AddIdleCallback((Util::Window *)v28, v70) )
    {
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
      sub_539216F1(v104);
      sub_5391164A(&v99);
      sub_5391164A(&v98);
      sub_5391164A(&v97);
      v4 = 0;
      goto LABEL_160;
    }
    if ( !Util::Sys::IsVista(v70) || !(unsigned __int8)sub_53928035(v53) )
      goto LABEL_135;
    v54 = qword_53946968;
    v55 = HIDWORD(qword_53946968) | qword_53946968;
    if ( qword_53946968 )
    {
LABEL_125:
      if ( byte_53946980 & 1 )
      {
        sub_5391F411(v53, v53);
        v54 = qword_53946968;
        v53 = v57;
      }
      if ( byte_5394698D )
      {
        v53 = HIDWORD(qword_53946968);
        if ( HIDWORD(qword_53946968) | v54 )
        {
          if ( byte_5394698C )
          {
            UnregisterTraceGuids(*(_QWORD *)v54);
            v58 = *(_WORD *)(v54 + 42);
            v53 = 0;
            *(_DWORD *)(v54 + 32) = 0;
            *(_BYTE *)(v54 + 40) = 0;
            *(_DWORD *)(v54 + 8) = 0;
            *(_DWORD *)(v54 + 12) = 0;
            if ( (_WORD)v58 )
            {
              memset(*(void **)(v54 + 44), 0, 4 * ((v58 - 1) / 32) + 4);
              v53 = 0;
            }
            *(_DWORD *)v54 = 0;
            *(_DWORD *)(v54 + 4) = 0;
          }
          else
          {
            dword_53946984(v54, HIDWORD(qword_53946968));
          }
          _mm_storel_pd((double *)&qword_53946968, 0i64);
        }
      }
LABEL_135:
      if ( (unsigned __int8)sub_53928035(v53) )
      {
        v59 = 682;
        v60 = L"PerfStand.Startup.End";
      }
      else
      {
        v59 = 686;
        v60 = L"PerfStand.StartupEx.End";
      }
      sub_53911B89(L"file", v59, L"func", 2, v60, (const char *)L"%d", v4);
      if ( (unsigned __int8)sub_53928035(v61) )
      {
        v107 = 0;
        sub_53911DC3(&unk_53938120, &v107);
        if ( v107 )
        {
          v105 = 0;
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v107 + 16))(v107, (int *)&v105);
          if ( v105 )
          {
            v62 = (wchar_t *)(GetTickCount() - (_DWORD)a2);
            v63 = sub_53918B55(&TraceGuidReg.RegHandle, "wStartToShowLP");
            v64 = CTXBSTR::operator wchar_t *(v63);
            PerfDataReportUtil::SetPerfOPReportDataForWord(v105, v64, v62, 5u, v70);
            CTXBSTR::~CTXBSTR((CTXBSTR *)&TraceGuidReg.RegHandle);
          }
        }
        sub_5391164A(&v107);
      }
      sub_539256A9(&v79);
      v65 = sub_5392801C();
      v28 = v103;
      if ( v65 )
        sub_53918C42(v66, *(_DWORD *)(v103 + 84));
      v108 = 0;
      sub_53911DC3(&unk_53939658, &v108);
      if ( v108 )
      {
        (*(void (__stdcall **)(unsigned __int32))(*(_DWORD *)v108 + 12))(v108);
        v105 = 0;
        sub_53911DC3(&unk_53939658, &v105);
        (*(void (__stdcall **)(PerfDataReportUtil *, void *))(*(_DWORD *)v105 + 16))(v105, &unk_53945268);
        sub_5391164A(&v105);
      }
      AsyncTask::MessageLoopForUI::Run((AsyncTask::MessageLoopForUI *)&v110);   //=====================>
      if ( (unsigned __int8)sub_5392801C() )
      {
        v68 = *(void **)(v28 + 84);
        v103 = 0;
        TraceGuidReg.RegHandle = v68;
        Util::Core::GetPlatformCore((Util::Core *)&v103, (struct ITXCore **)v70);
        if ( v103 )
          (*(void (__stdcall **)(int, void *, HANDLE))(*(_DWORD *)v103 + 52))(
            v103,
            &unk_539396F8,
            TraceGuidReg.RegHandle);
        sub_5391164A(&v103);
      }
      sub_53928035(v67);
      dword_53945770 = 1;
      sub_53925844(&v79);
      sub_5391164A(&v108);
      sub_5391164A(&v99);
      sub_5391164A(&v98);
      sub_5391164A(&v97);
      goto LABEL_153;
    }
    v107 &= v55;
    if ( byte_5394698D != (_BYTE)v55 )
    {
LABEL_121:
      if ( byte_5394698C )
      {
        TraceGuidReg.Guid = &ControlGuid;
        qword_53946968 = (signed int)&RequestContext;
        TraceGuidReg.RegHandle = 0;
        RegisterTraceGuidsW(RequestAddress, &RequestContext, &ControlGuid, 1u, &TraceGuidReg, 0, 0, &RequestContext);
      }
      else
      {
        off_539452C8(&ControlGuid, sub_5391F123, &RequestContext, &qword_53946968);
      }
      v54 = qword_53946968;
      goto LABEL_125;
    }
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation)
      || ((byte_5394698C = VersionInformation.dwMajorVersion < 6, VersionInformation.dwMajorVersion > 6)
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 ? (v107 = 1) : (v107 = 0),
          VersionInformation.dwMajorVersion >= 6) )
    {
      v56 = GetModuleHandleW(L"advapi32.dll");
      if ( v56 || v107 && (v56 = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0 )
      {
        dword_53946988 = (int)GetProcAddress(v56, "EventWrite");
        if ( dword_53946988 )
        {
          off_539452C8 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v56, "EventRegister");
          if ( off_539452C8 )
          {
            dword_53946984 = (int (__stdcall *)(_DWORD, _DWORD))GetProcAddress(v56, "EventUnregister");
            if ( dword_53946984 )
              goto LABEL_120;
          }
          off_539452C8 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_5391F257;
        }
      }
      byte_5394698C = v4;
    }
LABEL_120:
    byte_5394698D = v4;
    goto LABEL_121;
  }
  v4 = 0;
LABEL_59:
  Util::Misc::SetMainAndLogicMsgLoop(0, 0, v70);
  AsyncTask::Thread::Stop((AsyncTask::Thread *)&v123);
  sub_539216F1(v104);
LABEL_160:
  sub_5391164A(&Target);
  CTXStringW::~CTXStringW((CTXStringW *)&v91);
  CTXStringW::~CTXStringW((CTXStringW *)&v90);
  CTXStringW::~CTXStringW((CTXStringW *)&v89);
  AsyncTask::Thread::~Thread((AsyncTask::Thread *)&v123);
  v96 = &off_539396EC;
  sub_53925242(&v110);
  v79 = &off_5393A2E8;
  sub_53925959(&v80);
  return v4;
}	   
	   
	   

	  	   
		   
//==============================================================================================================================
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
signed int RunQQHummerEngine()
{
  DWORD v0; // esi@1
  int v1; // ST18_4@1
  signed int result; // eax@5
  char v3; // [sp+8h] [bp-68h]@6

  v0 = 0;
  TXLog::SetWriteFileOpt(0);
  if ( (unsigned __int8)sub_53928035(v1) )
  {
    sub_53911B89(L"file", 47, L"func", 2, L"PerfStand.Startup.Begin", L"%d", 1);
    v0 = GetTickCount();
  }
  else
  {
    sub_53911B89(L"file", 52, L"func", 2, L"PerfStand.StartupEx.Begin", L"%d", 1);
  }
  if ( Util::Sys::CheckVistaAndStartSelfMediumLevel() )
  {
    result = 1;
  }
  else
  {
    sub_53927CC0();
    sub_5391F472(&v3);
    sub_5391F82B(v0);  //=============>53920B86
    TXLog::SetWriteFileOpt((TXLog *)1);
    Util::ExitInfo::UpdateExitInfo(180);
    sub_5391F6FE(&v3);
    result = 0;
  }
  return result;
}	   
	   
	   
	   

	   
		   
//==============================================================================================================================
//0019FF1C 004012C6 0040289B C   qq.0040289B            User
int __stdcall sub_402506(int a1)
{
  char v1; // di@1
  signed int v2; // ebx@3
  int v3; // ecx@4
  int v4; // esi@5
  signed int v5; // edi@6
  HMODULE v6; // esi@14
  int v7; // eax@33
  signed int v8; // ecx@41
  int v9; // eax@41
  int v10; // edx@41
  DWORD_PTR v11; // ST1C_4@47
  HANDLE v12; // eax@47
  int v13; // esi@51
  HMODULE v14; // eax@51
  FARPROC v15; // edi@53
  HMODULE v16; // eax@55
  void (*v17)(void); // eax@56
  char v19; // [sp+10h] [bp-480h]@1
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [sp+14h] [bp-47Ch]@25
  struct _SYSTEM_INFO SystemInfo; // [sp+1Ch] [bp-474h]@40
  struct _OSVERSIONINFOW VersionInformation; // [sp+40h] [bp-450h]@3
  int Dst; // [sp+158h] [bp-338h]@37
  int v24; // [sp+15Ch] [bp-334h]@38
  int v25; // [sp+160h] [bp-330h]@39
  WCHAR OutputString; // [sp+278h] [bp-218h]@51

  v1 = GetTickCount();
  v19 = v1;
  if ( (unsigned __int8)sub_4028D4() )
    sub_40240B();
  memset(&VersionInformation.dwMajorVersion, 0, 0x110u);
  VersionInformation.dwOSVersionInfoSize = 276;
  GetVersionExW(&VersionInformation);
  v2 = 1;
  if ( VersionInformation.dwMajorVersion >= 6 && (unsigned __int8)sub_4028D4() )
  {
    v4 = qword_407A38;
    if ( *(_QWORD *)&qword_407A38 )
    {
LABEL_27:
      if ( byte_407A40 & 1 )
      {
        sub_401733(v3, v3);
        v4 = qword_407A38;
      }
      if ( byte_407A4D && *(&qword_407A38 + 1) | v4 )
      {
        if ( byte_407A4C )
        {
          UnregisterTraceGuids(*(_QWORD *)v4);
          v7 = *(_WORD *)(v4 + 42);
          *(_DWORD *)(v4 + 32) = 0;
          *(_BYTE *)(v4 + 40) = 0;
          *(_DWORD *)(v4 + 8) = 0;
          *(_DWORD *)(v4 + 12) = 0;
          if ( (_WORD)v7 )
            memset(*(void **)(v4 + 44), 0, 4 * ((v7 - 1) / 32) + 4);
          *(_DWORD *)v4 = 0;
          *(_DWORD *)(v4 + 4) = 0;
        }
        else
        {
          dword_407A44(v4, *(&qword_407A38 + 1));
        }
        _mm_storel_pd((double *)&qword_407A38, 0i64);
      }
      goto LABEL_37;
    }
    v5 = 0;
    if ( byte_407A4D != (*((_BYTE *)&qword_407A38 + 4) | (unsigned __int8)qword_407A38) )
    {
LABEL_23:
      if ( byte_407A4C )
      {
        TraceGuidReg.Guid = &ControlGuid;
        *(_QWORD *)&qword_407A38 = (signed int)&RequestContext;
        TraceGuidReg.RegHandle = 0;
        RegisterTraceGuidsW(RequestAddress, &RequestContext, &ControlGuid, 1u, &TraceGuidReg, 0, 0, &RequestContext);
      }
      else
      {
        off_407560(&ControlGuid, sub_401445, &RequestContext, &qword_407A38);
      }
      v1 = v19;
      v4 = qword_407A38;
      goto LABEL_27;
    }
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation)
      || ((byte_407A4C = VersionInformation.dwMajorVersion < 6, VersionInformation.dwMajorVersion > 6)
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 ? (v5 = 1) : (v5 = 0),
          VersionInformation.dwMajorVersion >= 6) )
    {
      v6 = GetModuleHandleW(L"advapi32.dll");
      if ( v6 || v5 && (v6 = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0 )
      {
        dword_407A48 = (int)GetProcAddress(v6, "EventWrite");
        if ( dword_407A48 )
        {
          off_407560 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v6, "EventRegister");
          if ( off_407560 )
          {
            dword_407A44 = (int (__stdcall *)(_DWORD, _DWORD))GetProcAddress(v6, "EventUnregister");
            if ( dword_407A44 )
              goto LABEL_22;
          }
          off_407560 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_401579;
        }
      }
      byte_407A4C = 1;
    }
LABEL_22:
    byte_407A4D = 1;
    goto LABEL_23;
  }
LABEL_37:
  memset(&Dst, 0, 0x11Cu);
  Dst = 284;
  GetVersionExW((LPOSVERSIONINFOW)&Dst);
  if ( !(unsigned __int8)sub_4028D4() && v24 == 5 && v25 == 2 )
  {
    memset(&SystemInfo, 0, 0x24u);
    GetSystemInfo(&SystemInfo);
    if ( SystemInfo.dwNumberOfProcessors > 1 )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        if ( v2 & SystemInfo.dwActiveProcessorMask )
        {
          if ( ++v9 >= 2 )
            break;
        }
        v2 *= 2;
        if ( ++v10 >= 32 )
          goto LABEL_47;
      }
      v8 = v2;
LABEL_47:
      v11 = v8;
      v12 = GetCurrentProcess();
      SetProcessAffinityMask(v12, v11);
    }
  }
  if ( (unsigned __int8)sub_4028D4() && sub_402484() )
    LoadLibraryExW(L"riched20.dll", 0, 0x800u);
  GetTickCount();
  memset(&OutputString, 0, 0x20Au);
  sub_401140(&OutputString, 260, 260, L"[QQPerfLog] dwMainEntry = %lu , dwSH = %lu , dwDelete = %lu", v1);
  OutputDebugStringW(&OutputString);
  v13 = -1;
  v14 = GetModuleHandleW(L"HummerEngine.dll");
  if ( v14 || (v14 = LoadLibraryW(L"HummerEngine.dll")) != 0 )
  {
    v15 = GetProcAddress(v14, "RunQQHummerEngine");
    if ( v15 )
    {
      OleInitialize(0);
      v13 = ((int (__cdecl *)(int))v15)(a1);  // ===============> 53927E8B
      v16 = GetModuleHandleW(L"HummerEngine.dll");
      if ( v16 )
      {
        v17 = (void (*)(void))GetProcAddress(v16, "UninitializeCom");
        if ( v17 )
          v17();
      }
    }
    else
    {
      GetLastError();
    }
  }
  return v13;
}
	 

 
//==============================================================================================================================
0019FF28 00403365 004012C6 4C  qq.004012C6            User
int __stdcall sub_4012BB(int a1, int a2, int a3, int a4)
{
  return sub_402506(a4);
}   	   
//==============================================================================================================================
  
 
   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
		   
//==============================================================================================================================
	   
	   
	   

	   
	   
	   
	   
	   
	   
	   
	   
	   