//==================================================================================================
/* 	
	查看  malloc 在哪里使用了，就可以找到申请类存的地方，间接可找到创建类实例的方法，找到类构造 
		
class AsyncTask::MessageLoop::MessageLoop

class AsyncTask::MessageLoopForUI::MessageLoopForUI : public class AsyncTask::MessageLoop::MessageLoop

class  AsyncTask::MessagePumpForUI

class  AsyncTask::CThreadSwitch
  
  
*/



/*
const AsyncTask::CThreadSwitch::`vftable'                                                                  51B28508 96          
const AsyncTask::MessageLoop::`vftable'                                                                    51B283DC 97          
const AsyncTask::MessageLoopForUI::`vftable'                                                               51B28440 98          
const AsyncTask::MessageLoopProxy::`vftable'                                                               51B28464 99          
const AsyncTask::MessageLoopProxyImpl::`vftable'{for `AsyncTask::MessageLoop::DestructionObserver'}        51B284B4 100         
const AsyncTask::MessageLoopProxyImpl::`vftable'{for `AsyncTask::MessageLoopProxy'}                        51B28490 101         
const AsyncTask::MessagePump::`vftable'                                                                    51B28450 102         
const AsyncTask::MessagePumpForUI::`vftable'                                                               51B284F0 103         
const AsyncTask::MessagePumpWin::`vftable'                                                                 51B283C4 104         
const AsyncTask::TaskQueue::`vftable'                                                                      51B28530 105         
const AsyncTask::Thread::`vftable'                                                                         51B28540 106         


*/
//==================================================================================================
{
void *__cdecl sub_51B265B4(size_t Size)
{
  void *result; // eax@3

  while ( 1 )
  {
    result = malloc(Size);
    if ( result )
      break;
    if ( !callnewh(Size) )
    {
      JUMPOUT(Size, -1, sub_51B26EBF);
      sub_51B26EA2();
    }
  }
  return result;
}
/*
 
Direction Type Address                                                               Text                
--------- ---- -------                                                               ----                
Up        p    sub_51B2147F+14                                                       call    sub_51B265B4
Up        p    sub_51B2147F+35                                                       call    sub_51B265B4
Up        p    AsyncTask::MessageLoop::create_work_event(void)+6                     call    sub_51B265B4 
Up        p    AsyncTask::MessageLoop::MessageLoop(AsyncTask::MessageLoop::Type)+107 call    sub_51B265B4
Up        p    AsyncTask::MessageLoopProxyImpl::OnDestruct(void)+2C                  call    sub_51B265B4
Up        p    AsyncTask::MessageLoopProxy::CreateForCurrentThread(void)+6           call    sub_51B265B4
Up        p    AsyncTask::MessagePumpForUI::InitMessageWnd(void)+5                   call    sub_51B265B4
Up        p    AsyncTask::Thread::StopSoon(void)+15                                  call    sub_51B265B4
*/
}
//==================================================================================================
{
_DWORD *__thiscall sub_51B2147F(size_t Size)
{
  size_t v1; // eax@2
  void *v2; // eax@4
  int v3; // edx@4
  void *v4; // ecx@4
  _DWORD *result; // eax@5

  if ( Size < 0x1000 )
  {
    if ( Size )
      result = sub_51B265B4(Size);
    else
      result = 0;
  }
  else
  {
    v1 = Size + 35;
    if ( Size + 35 <= Size )
      v1 = -1;
    v2 = sub_51B265B4(v1);
    v4 = v2;
    if ( v2 )
    {
      result = (_DWORD *)(((unsigned int)v2 + 35) & 0xFFFFFFE0);
      *(result - 1) = v4;
    }
    else
    {
      result = (_DWORD *)invalid_parameter_noinfo_noreturn(0, v3);
    }
  }
  return result;
}
//------------------------------------------------------------------------------------------------
Direction Type Address                                                              Text                
--------- ---- -------                                                              ----                
Up        p    AsyncTask::AtExitManager::AtExitManager(void)+20                     call    sub_51B2147F
Up        p    sub_51B2129C+54                                                      call    sub_51B2147F
Up        p    sub_51B2131D+53                                                      call    sub_51B2147F
Down      p    AsyncTask::MessageLoop::MessageLoop(AsyncTask::MessageLoop::Type)+C4 call    sub_51B2147F
Down      p    sub_51B21C0E+17                                                      call    sub_51B2147F
Down      p    sub_51B22C1F+56                                                      call    sub_51B2147F
Down      p    sub_51B23198+3C                                                      call    sub_51B2147F
Down      p    sub_51B23267+54                                                      call    sub_51B2147F
Down      p    sub_51B233BE+51                                                      call    sub_51B2147F
Down      p    sub_51B234E5+43                                                      call    sub_51B2147F
Down      p    sub_51B23579+6B                                                      call    sub_51B2147F
Down      p    sub_51B23690+6A                                                      call    sub_51B2147F
Down      p    sub_51B23848+43                                                      call    sub_51B2147F
Down      p    AsyncTask::TaskQueue::TaskQueue(AsyncTask::TaskQueue const &)+27     call    sub_51B2147F
Down      p    sub_51B25A4E+59                                                      call    sub_51B2147F
Down      p    sub_51B25BA1+5C                                                      call    sub_51B2147F

//------------------------------------------------------------------------------------------------
//AtExitManager 构造类
AsyncTask::AtExitManager *__thiscall AsyncTask::AtExitManager::AtExitManager(AsyncTask::AtExitManager *this)
{
  AsyncTask::AtExitManager *v1; // edi@1
  int v2; // esi@1
  _DWORD *v3; // eax@1

  v1 = this;
  AsyncTask::LockImpl::LockImpl((LPCRITICAL_SECTION)this);
  v2 = (int)v1 + 24;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  v3 = sub_51B2147F(8u);  //创建基类内存 8字节 
  *(_DWORD *)v2 = v3;
  lpCriticalSection = (LPCRITICAL_SECTION)v1;
  *v3 = 0; 		//基类属性初始化
  v3[1] = 0;	//基类属性初始化
  **(_DWORD **)v2 = v2;
  return v1;
}


//--------------------------------




}
//==================================================================================================
{
	
//51B217CA  创建 AsyncTask::MessageLoop 的 event
void __thiscall AsyncTask::MessageLoop::create_work_event(AsyncTask::MessageLoop *this)
{
  AsyncTask::MessageLoop *v1; // edi@1
  _DWORD *v2; // esi@1

  v1 = this;
  v2 = sub_51B265B4(4u); //创建内存
  *v2 = CreateEventW(0, 0, 0, 0);  // CreateEvent 是一个WindowsAPI函数。它用来创建或打开一个命名的或无名的事件对象。如果想为对象指定一个访问掩码，应当使用CreateEventEx函数
  *((_DWORD *)v1 + 59) = v2;
}

//--------------------------

//51B21AE8   构造 AsyncTask::MessageLoop::MessageLoop 
int __thiscall AsyncTask::MessageLoop::MessageLoop(int this, int a2)
{
  int v2; // edi@1
  int v3; // esi@1
  _DWORD *v4; // eax@1
  DWORD *v5; // eax@2
  AsyncTask::MessagePumpForUI *v6; // eax@4
  LONG v7; // eax@4

  v2 = this;
  *(_DWORD *)this = &AsyncTask::MessageLoop::`vftable';
  *(_DWORD *)(this + 4) = a2;
  sub_51B21C0E(this + 8);
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  sub_51B21C0E(v2 + 44);
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 0;
  *(_WORD *)(v2 + 88) = 1;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 15;
  *(_BYTE *)(v2 + 92) = 0;
  sub_51B21C0E(v2 + 116);
  AsyncTask::LockImpl::LockImpl((LPCRITICAL_SECTION)(v2 + 136));
  v3 = v2 + 208;
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 172) = 0;
  *(_DWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 180) = 0;
  *(_DWORD *)(v2 + 184) = 0;
  *(_DWORD *)(v2 + 188) = 0;
  *(_DWORD *)(v2 + 192) = 0;
  *(_DWORD *)(v2 + 196) = 0;
  *(_BYTE *)(v2 + 200) = 0;
  *(_DWORD *)(v2 + 204) = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  v4 = sub_51B2147F(8u);
  *(_DWORD *)v3 = v4;
  *v4 = 0;
  v4[1] = 0;
  **(_DWORD **)v3 = v3;
  *(_DWORD *)(v2 + 228) = 0;
  *(_DWORD *)(v2 + 232) = 0;
  *(_DWORD *)(v2 + 236) = 0;
  if ( !AsyncTask::MessageLoop::current() )
  {
    v5 = (DWORD *)sub_51B2297C();
    TlsSetValue(*v5, (LPVOID)v2);
  }
  if ( !*(_DWORD *)(v2 + 4) )
  {
    v6 = (AsyncTask::MessagePumpForUI *)sub_51B265B4(0x38u);
    v7 = AsyncTask::MessagePumpForUI::MessagePumpForUI(v6); //构造 MessagePumpForUI
    sub_51B22A8B((volatile LONG *)(v2 + 64), v7);
  }
  return v2;
}




//--------------------------

Direction Type Address                                                       Text                                                                                                                                                                   
--------- ---- -------                                                       ----                                                                                                                                                                   
Up        p    AsyncTask::MessageLoop::`default constructor closure'(void)+2 call    ??0MessageLoop@AsyncTask@@QAE@W4Type@01@@Z; AsyncTask::MessageLoop::MessageLoop(AsyncTask::MessageLoop::Type)                                                  
Up        p    AsyncTask::MessageLoopForUI::MessageLoopForUI(void)+5         call    ??0MessageLoop@AsyncTask@@QAE@W4Type@01@@Z; AsyncTask::MessageLoop::MessageLoop(AsyncTask::MessageLoop::Type)                                                  
Down      p    AsyncTask::Thread::ThreadMain(void)+29                        call    ??0MessageLoop@AsyncTask@@QAE@W4Type@01@@Z; AsyncTask::MessageLoop::MessageLoop(AsyncTask::MessageLoop::Type)                                                  
Down      o    .rdata:off_51B28F28                                           dd rva ??4CThreadSwitch@AsyncTask@@QAEAAV01@ABV01@@Z, rva ??0?$CWindowImplBaseT@VCWindow@ATL@@V?$CWinTraits@$0FGAAAAAA@$0A@@2@@ATL@@QAE@XZ; AsyncTask::Lock::Lock(void)


//--------------------------
//51B21985 构造 AsyncTask::MessageLoopForUI::MessageLoopForUI
AsyncTask::MessageLoopForUI *__thiscall AsyncTask::MessageLoopForUI::MessageLoopForUI(AsyncTask::MessageLoopForUI *this)
{
  AsyncTask::MessageLoopForUI *v1; // esi@1

  v1 = this;
  AsyncTask::MessageLoop::MessageLoop((int)this, 0); //构造 MessageLoop
  *(_DWORD *)v1 = &AsyncTask::MessageLoopForUI::`vftable';
  return v1;
}


}
//==================================================================================================
{

//51B2438B 	
void __thiscall AsyncTask::MessagePumpForUI::InitMessageWnd(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // esi@1
  AsyncTask::CThreadSwitch *v2; // eax@1
  int v3; // eax@1

  v1 = this;
  v2 = (AsyncTask::CThreadSwitch *)sub_51B265B4(0x24u); //创建内存
  v3 = AsyncTask::CThreadSwitch::CThreadSwitch(v2); //构造 CThreadSwitch
  *((_DWORD *)v1 + 13) = v3;
  *((_DWORD *)v1 + 12) = *(_DWORD *)(v3 + 4);
}
  

//51B260F6
AsyncTask::CThreadSwitch *__thiscall AsyncTask::CThreadSwitch::CThreadSwitch(AsyncTask::CThreadSwitch *this)
{
  AsyncTask::CThreadSwitch *v1; // esi@1
  HWND v2; // eax@1
  HWND v3; // eax@1

  v1 = this;
  *((_DWORD *)this + 1) = 0; //界面实例
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = DefWindowProcW;
  *(_DWORD *)this = &AsyncTask::CThreadSwitch::`vftable';
  v2 = GetDesktopWindow();  //该函数返回桌面窗口的句柄。桌面窗口覆盖整个屏幕。桌面窗口是一个要在其上绘制所有的图标和其他窗口的区域。
  v3 = ATL::CWindowImpl<AsyncTask::CThreadSwitch,ATL::CWindow,ATL::CWinTraits<1442840576,0>>::Create(
         (void *)v1, //AsyncTask::CThreadSwitch
         v2, //hWndParent
         (int)&unk_51B2F0A4, //聊天框界面x,y,w,h参数实例
         L"MyWing",
         0x80000000,
         0,
         0,
         0);
  *((_DWORD *)v1 + 1) = v3; //保存界面实例
  if ( v3 )
    SetWindowLongW(v3, -4, (LONG)AsyncTask::CThreadSwitch::ThreadWindowProc); //GWL_WNDPROC -4  为窗口设定一个新的处理函数。
  return v1;
}

//51B23F86
AsyncTask::CThreadSwitch *__thiscall AsyncTask::CThreadSwitch::CThreadSwitch(AsyncTask::CThreadSwitch *this, const struct AsyncTask::CThreadSwitch *a2)
{
  AsyncTask::CThreadSwitch *v2; // edi@1
  AsyncTask::CThreadSwitch *result; // eax@1

  v2 = this;
  ATL::CWindowImplRoot<ATL::CWindow>::operator=(a2);
  *((_DWORD *)v2 + 8) = *((_DWORD *)a2 + 8);
  result = v2;
  *(_DWORD *)v2 = &AsyncTask::CThreadSwitch::`vftable';
  return result;
}



//51B2619D
__int32 __stdcall AsyncTask::CThreadSwitch::ThreadWindowProc(HWND hWnd, unsigned int Msg, UINT_PTR uIDEvent, unsigned int lParam)
{
  if ( Msg == 275 )
  {
    AsyncTask::MessagePumpForUI::HandleTimerMessage(uIDEvent);
  }
  else
  {
    if ( Msg != 36863 )
      return DefWindowProcW(hWnd, Msg, uIDEvent, lParam);
    AsyncTask::MessagePumpForUI::OnMessage((AsyncTask::MessagePumpForUI *)uIDEvent, lParam, uIDEvent, 0);
  }
  return 0;
}

//51B243A8
__int32 __thiscall AsyncTask::MessagePumpForUI::OnMessage(AsyncTask::MessagePumpForUI *this, unsigned int a2, unsigned int a3, __int32 a4)
{
  if ( a2 == 275 )
  {
    AsyncTask::MessagePumpForUI::HandleTimerMessage((UINT_PTR)this);
  }
  else if ( a2 == 1025 )
  {
    AsyncTask::MessagePumpForUI::HandleWorkMessage(this);
  }
  return 0;
}

//51B2445D
void __thiscall AsyncTask::MessagePumpForUI::HandleWorkMessage(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // esi@1

  v1 = this;
  if ( *((_DWORD *)this + 11) )
  {
    AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(this);
    if ( (unsigned __int8)(*(int (**)(void))(***((_DWORD ***)v1 + 11) + 4))() )
      (*(void (__thiscall **)(AsyncTask::MessagePumpForUI *))(*(_DWORD *)v1 + 12))(v1);
  }
  else
  {
    InterlockedExchange((volatile LONG *)this + 10, 0);
  }
}
//-------------------------
char __thiscall AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // edi@1
  BOOL v2; // esi@1
  UINT v3; // eax@2
  struct tagMSG Msg; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = PeekMessageW(&Msg, 0, 0, 0, 1u);  //wRemoveMsg=1 /PM_REMOVE  PeekMessage处理后，消息从队列里除掉。
  InterlockedExchange((volatile LONG *)v1 + 10, 0);
  if ( !v2 )
    return 0;
  v3 = Msg.message;
  if ( Msg.message == 37886 )
  { //特别处理
    PostMessageW(Msg.hwnd, 0x93FEu, Msg.wParam, Msg.lParam);
    PeekMessageW(&Msg, 0, 0, 0, 0);
    if ( Msg.message != 37886 )
    {
      PeekMessageW(&Msg, 0, 0, 0, 1u); //wRemoveMsg=1 /PM_REMOVE  PeekMessage处理后，消息从队列里除掉。
      v3 = Msg.message;
      goto LABEL_5;
    }
    return 0;
  }
LABEL_5:
  if ( v3 != 18 )
    (*(void (__thiscall **)(AsyncTask::MessagePumpForUI *))(*(_DWORD *)v1 + 12))(v1);
  return AsyncTask::MessagePumpForUI::ProcessMessageHelper(v1, &Msg);
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
    TranslateMessage(lpMsg); //该函数将虚拟键消息转换为字符消息。字符消息被寄送到调用线程的消息队列里，当下一次线程调用函数 GetMessage 或 PeekMessage 时被读出。
    if ( lpMsg->message == 36863 && lpMsg->hwnd == (HWND)*((_DWORD *)v2 + 12) )
    {
      this = v2;
      return AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(this);
    }
    DispatchMessageW(lpMsg);
    AsyncTask::MessagePumpWin::DidProcessMessage(v2, lpMsg);
  }
  return 1;
}


void __thiscall AsyncTask::MessagePumpWin::WillProcessMessage(AsyncTask::MessagePumpWin *this, const struct tagMSG *a2)
{
  char *v2; // ecx@1
  int v3; // eax@6
  bool v4; // zf@7
  char *v5; // [sp+0h] [bp-Ch]@1
  int v6; // [sp+4h] [bp-8h]@1
  int v7; // [sp+8h] [bp-4h]@2

  v6 = 0;
  v2 = (char *)this + 8;
  v5 = v2;
  if ( *((_DWORD *)v2 + 4) )
    v7 = (*((_DWORD *)v2 + 1) - *(_DWORD *)v2) >> 2;
  else
    v7 = -1;
  ++*((_DWORD *)v2 + 3);
  while ( 1 )
  {
    v3 = sub_51B22A3D(&v5);
    if ( !v3 )
      break;
    (*(void (__thiscall **)(int, const struct tagMSG *))(*(_DWORD *)v3 + 4))(v3, a2); 
  }
  v4 = (*((_DWORD *)v5 + 3))-- == 1;
  if ( v4 )
    sub_51B22C9B(v5, v6, v7);
}


//-------------------------

	
	
}
//==================================================================================================
{
	
	
	
}
//==================================================================================================
{
	
	
	
}
//==================================================================================================
{
	
	
	
}
//==================================================================================================
//第一进程
//AsyncTask::CThreadSwitch::CThreadSwitch(AsyncTask::CThreadSwitch *this)
{

Address  To       From     Siz Comment               Party 
0019F358 51B2198F 51B260F6 6A8 asynctask.51B260F6    User
0019FA00 53927E8B 51B2198F 80  asynctask.51B2198F    User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944 10  ntdll.77808944        System
0019FFF0 00000000 77808914     ntdll.77808914        User

  
	
}
//==================================================================================================
//第一进程
//AsyncTask::Thread::Thread
{
	
Address  To       From     Siz Comment               Party 
0019F360 5391F96B 51B25DC5 6A0 asynctask.51B25DC5    User
0019FA00 53927E8B 5391F96B 80  hummerengine.5391F96B User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944 10  ntdll.77808944        System
0019FFF0 00000000 77808914     ntdll.77808914        User
	
	
}
//==================================================================================================
//第一进程
//多次调用 
{
Address  To       From     Siz Comment            Party 
041DFE58 51B26019 51B260F6 114 asynctask.51B260F6 User
041DFF6C 51B25E47 51B26019 8   asynctask.51B26019 User
041DFF74 759F6359 51B25E47 10  asynctask.51B25E47 System
041DFF84 77808944 759F6359 5C  kernel32.759F6359  System
041DFFE0 77808914 77808944 10  ntdll.77808944     System
041DFFF0 00000000 77808914     ntdll.77808914     User
	
	
	
}
//==================================================================================================
//第二进程
//五次调用
//AsyncTask::CThreadSwitch::CThreadSwitch(AsyncTask::CThreadSwitch *this)
{
Address  To       From     Siz Comment            Party 
0E3BFE58 51B26019 51B260F6 114 asynctask.51B260F6 User
0E3BFF6C 51B25E47 51B26019 8   asynctask.51B26019 User
0E3BFF74 759F6359 51B25E47 10  asynctask.51B25E47 System
0E3BFF84 77808944 759F6359 5C  kernel32.759F6359  System
0E3BFFE0 77808914 77808944 10  ntdll.77808944     System
0E3BFFF0 00000000 77808914     ntdll.77808914     User


}
--------
0E3BFF6C 51B25E47 51B26019 8   asynctask.51B26019 User
void __thiscall AsyncTask::Thread::ThreadMain(AsyncTask::Thread *this)
{
  AsyncTask::Thread *v1; // edi@1
  const char *v2; // eax@1
  LONG *v3; // eax@3
  char v4; // [sp+Ch] [bp-FCh]@3
  char v5; // [sp+10h] [bp-F8h]@1

  v1 = this;
  AsyncTask::MessageLoop::MessageLoop(&v5, ***((_DWORD ***)this + 2));
  *((_DWORD *)v1 + 6) = GetCurrentThreadId();
  v2 = (char *)v1 + 28;
  if ( *((_DWORD *)v1 + 12) >= 0x10u )
    v2 = (const char *)*((_DWORD *)v1 + 7);
  AsyncTask::Thread::SetName(v2);
  AsyncTask::MessageLoop::set_thread_name((char *)v1 + 28);
  *((_DWORD *)v1 + 4) = &v5;
  v3 = (LONG *)AsyncTask::MessageLoopProxy::CreateForCurrentThread(&v4);
  sub_51B260BF((volatile LONG *)v1 + 5, *v3);
  sub_51B229D2(&v4);
  (*(void (__thiscall **)(AsyncTask::Thread *))(*(_DWORD *)v1 + 8))(v1);
  SetEvent(*(HANDLE *)(*((_DWORD *)v1 + 2) + 4));
  (*(void (__thiscall **)(AsyncTask::Thread *, _DWORD))(*(_DWORD *)v1 + 12))(v1, *((_DWORD *)v1 + 4));
  (*(void (__thiscall **)(AsyncTask::Thread *))(*(_DWORD *)v1 + 16))(v1);
  *((_DWORD *)v1 + 4) = 0;
  sub_51B260BF((volatile LONG *)v1 + 5, 0);
  AsyncTask::MessageLoop::~MessageLoop((AsyncTask::MessageLoop *)&v5);
  (*(void (__thiscall **)(AsyncTask::Thread *))(*(_DWORD *)v1 + 20))(v1);
  *((_DWORD *)v1 + 6) = 0;
}

--------
0E3BFF74 759F6359 51B25E47 10  asynctask.51B25E47 System
DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
  (*(void (**)(void))(*(_DWORD *)lpThreadParameter + 4))();
  return 0;
}




//==================================================================================================
{
	
	
	
}
//==================================================================================================
{
	
	
	
}
