//----------------
//类

//AsyncTask::Thread  创建

//AsyncTask::MessageLoop::PendingTask 创建

//AsyncTask::Task 创建
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
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE     User	//AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591     User	//AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF     User 	//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
0019F340 51B2207A 51B24321 24  asynctask.51B24321     User 	//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User 	//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
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
0019EF60 56DF6DC8 52AF162F 50  arksocket.52AF162F     User //arksocket::Async::AsyncCall   封装了 uv_async_send
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
0019F284 51B24578 771641E0 18  user32.771641E0        User	//DispatchMessageW
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User 	//AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg) 
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User	//AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(AsyncTask::MessagePumpForUI *this)
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User	//AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg)
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User	//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User 	//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User 	//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 759F6359 00403365 10  qq.00403365            System
0019FF84 77808944 759F6359 5C  kernel32.759F6359      System
0019FFE0 77808914 77808944 10  ntdll.77808944         System
0019FFF0 00000000 77808914     ntdll.77808914         User


//==================================================================================================================================

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
  v2 = (int)v1 + 8; //v2 为 task队例,通过  sub_51B22B52 取出元素
  while ( 1 )
  {
    qmemcpy(&v5, (const void *)sub_51B22B52(v2), 0x18u);   //rep movsd
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
    if ( AsyncTask::MessageLoop::DeferOrRunPendingTask(v1, (const struct AsyncTask::MessageLoop::PendingTask *)&v5) )  //================================>DeferOrRunPendingTask
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
//-----------------------------------
int __thiscall sub_51B22B52(int this)
{
  int v1; // eax@1

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
    v1 = *(_DWORD *)v1;
  return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * (*(_DWORD *)(this + 12) & (*(_DWORD *)(v1 + 8) - 1)));
}

//----------------------------------------------------------------------
//类
struct AsyncTask::Task

struct AsyncTask::MessageLoop::PendingTask

struct Util::SessionTask


//51B2184C
AsyncTask::MessageLoop::PendingTask *__thiscall AsyncTask::MessageLoop::PendingTask::PendingTask(AsyncTask::MessageLoop::PendingTask *this, struct AsyncTask::Task *a2, bool a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = a3;
  return this;
}

-------------
//51B25DC5
AsyncTask::Thread *__thiscall AsyncTask::Thread::Thread(AsyncTask::Thread *this, const char *Src)
{
  AsyncTask::Thread *v2; // esi@1
  char *v3; // ecx@1

  v2 = this;
  *(_DWORD *)this = &AsyncTask::Thread::`vftable';
  v3 = (char *)this + 28;
  *((_WORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 15;
  *v3 = 0;
  sub_51B231F7(v3, (void *)Src, strlen(Src));
  return v2;
}
-------------





-------------





-------------







//----------------------------------------------------------------------
 //创建内存 51B265B4
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




3424                                                                 
      1F23FE30 51B214B9 51B265B4 28       asynctask.51B265B4         用户模块	//创建内存 =>  malloc(Size);
      1F23FE58 51B26019 51B214B9 114      asynctask.51B214B9         用户模块	//sub_51B2147F(size_t Size)
      1F23FF6C 51B25E47 51B26019 8        asynctask.51B26019         用户模块	//AsyncTask::Thread::ThreadMain(AsyncTask::Thread *this)
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块  	//StartAddress(LPVOID lpThreadParameter)
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块
	  
3424                                                                 
      1F23FE40 51B21BF4 51B265B4 18       asynctask.51B265B4         用户模块 //创建内存 =>  malloc(Size);
      1F23FE58 51B26019 51B21BF4 114      asynctask.51B21BF4         用户模块	//AsyncTask::MessageLoop::MessageLoop(int this, int a2)
      1F23FF6C 51B25E47 51B26019 8        asynctask.51B26019         用户模块 //AsyncTask::Thread::ThreadMain(AsyncTask::Thread *this)
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块 //StartAddress(LPVOID lpThreadParameter)
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块

3424                                                                 
      1F23FE48 51B23C7C 51B265B4 10       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
      1F23FE58 51B26051 51B23C7C 114      asynctask.51B23C7C         用户模块//AsyncTask::MessageLoopProxy::CreateForCurrentThread(_DWORD *a1)
      1F23FF6C 51B25E47 51B26051 8        asynctask.51B26051         用户模块//AsyncTask::Thread::ThreadMain(AsyncTask::Thread *this)
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块//StartAddress(LPVOID lpThreadParameter)
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块
	  
3424                                                                 
      1F23FDE4 51B214B9 51B265B4 44       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
      1F23FE28 51B21EB8 51B214B9 14       asynctask.51B214B9         用户模块//sub_51B2147F(size_t Size)
      1F23FE3C 51B23AAA 51B21EB8 1C       asynctask.51B21EB8         用户模块//AsyncTask::MessageLoop::AddDestructionObserver(AsyncTask::MessageLoop *this, struct AsyncTask::MessageLoop::DestructionObserver *a2)
      1F23FE58 51B26051 51B23AAA 114      asynctask.51B23AAA         用户模块//AsyncTask::MessageLoopProxyImpl::MessageLoopProxyImpl(AsyncTask::MessageLoopProxyImpl *this)
      1F23FF6C 51B25E47 51B26051 8        asynctask.51B26051         用户模块//AsyncTask::Thread::ThreadMain(AsyncTask::Thread *this)
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块//StartAddress(LPVOID lpThreadParameter)
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块	  



44272                                                                
      0019D3C4 51B214B9 51B265B4 2C       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
      0019D3F0 51B231B3 51B214B9 18       asynctask.51B214B9         用户模块//sub_51B2147F(size_t Size)
      0019D408 51B2236B 51B231B3 58       asynctask.51B231B3         用户模块//sub_51B23198(int this, const void *a2)
      0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块//AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3, bool a4, bool a5)
      0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块//AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
      0019D48C 54C91FBF 54B186F3 1C       im.54B186F3                用户模块
      0019D4A8 0975725C 54C91FBF 44       im.54C91FBF                用户模块
      0019D4EC 0CB1A47B 0975725C 14       appframework.0975725C      用户模块
      0019D500 0974EAC5 0CB1A47B 20       chatframeapp.0CB1A47B      用户模块
      0019D520 09758E78 0974EAC5 14       appframework.0974EAC5      用户模块
      0019D534 097582F4 09758E78 18       appframework.09758E78      用户模块
      0019D54C 0CB1A5C2 097582F4 14       appframework.097582F4      用户模块
      0019D560 09753EB5 0CB1A5C2 1C       chatframeapp.0CB1A5C2      用户模块
      0019D57C 0974B957 09753EB5 46C      appframework.09753EB5      用户模块
      0019D9E8 0974AFC8 0974B957 2C       appframework.0974B957      用户模块
      0019DA14 0974A71D 0974AFC8 18       appframework.0974AFC8      用户模块
      0019DA2C 096738EB 0974A71D 18       appframework.0974A71D      用户模块
      0019DA44 0CB1808E 096738EB 18       appframework.096738EB      用户模块
      0019DA5C 0CB1B747 0CB1808E 430      chatframeapp.0CB1808E      用户模块
      0019DE8C 0967ADDE 0CB1B747 538      chatframeapp.0CB1B747      用户模块
      0019E3C4 0978A86B 0967ADDE 7C       appframework.0967ADDE      用户模块
      0019E440 0CA9BFA8 0978A86B 18       appframework.0978A86B      用户模块
      0019E458 0CB251FF 0CA9BFA8 450      chatframeapp.0CA9BFA8      用户模块
      0019E8A8 0CB1590F 0CB251FF 44C      chatframeapp.0CB251FF      用户模块
      0019ECF4 0CA6DEA8 0CB1590F 20       chatframeapp.0CB1590F      用户模块
      0019ED14 0CA6E189 0CA6DEA8 18       chatframeapp.0CA6DEA8      用户模块
      0019ED2C 532A9720 0CA6E189 80       chatframeapp.0CA6E189      用户模块
      0019EDAC 531BE1B1 532A9720 70       gf.532A9720                用户模块
      0019EE1C 531BFC10 531BE1B1 1C       gf.531BE1B1                用户模块
      0019EE38 50204DF9 531BFC10 24       gf.531BFC10                用户模块
      0019EE5C 5047D1D8 50204DF9 28       afctrl.50204DF9            用户模块
      0019EE84 53190D2C 5047D1D8 50       afctrl.5047D1D8            用户模块
      0019EED4 5318A5F3 53190D2C 6C       gf.53190D2C                用户模块
      0019EF40 532B45CA 5318A5F3 68       gf.5318A5F3                用户模块
      0019EFA8 532B0923 532B45CA B8       gf.532B45CA                用户模块
      0019F060 532BB68F 532B0923 30       gf.532B0923                用户模块
      0019F090 532BA702 532BB68F 20       gf.532BB68F                用户模块
      0019F0B0 532B9D5C 532BA702 1C       gf.532BA702                用户模块
      0019F0CC 5328110C 532B9D5C 50       gf.532B9D5C                用户模块
      0019F11C 5FF120CF 5328110C 20       gf.5328110C                系统模块
      0019F13C 75E15CAB 5FF120CF 2C       atlthunk.5FF120CF          系统模块
      0019F168 75E067BC 75E15CAB E4       user32.75E15CAB            系统模块
      0019F24C 75E058FB 75E067BC 74       user32.75E067BC            系统模块
      0019F2C0 75E056D0 75E058FB C        user32.75E058FB            系统模块
      0019F2CC 51B24578 75E056D0 18       user32.75E056D0            用户模块
      0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86          hummerengine.53920B86      用户模块

44272                                                                
      0019D3EC 51B214B9 51B265B4 1C       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
      0019D408 51B2236B 51B214B9 58       asynctask.51B214B9         用户模块//sub_51B2147F(size_t Size)
      0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块//AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3, bool a4, bool a5)
      0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块//AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)	  
      0019D48C 54C91FBF 54B186F3 1C       im.54B186F3                用户模块
      0019D4A8 0975725C 54C91FBF 44       im.54C91FBF                用户模块
      0019D4EC 0CB1A47B 0975725C 14       appframework.0975725C      用户模块
      0019D500 0974EAC5 0CB1A47B 20       chatframeapp.0CB1A47B      用户模块
      0019D520 09758E78 0974EAC5 14       appframework.0974EAC5      用户模块
      0019D534 097582F4 09758E78 18       appframework.09758E78      用户模块
      0019D54C 0CB1A5C2 097582F4 14       appframework.097582F4      用户模块
      0019D560 09753EB5 0CB1A5C2 1C       chatframeapp.0CB1A5C2      用户模块
      0019D57C 0974B957 09753EB5 46C      appframework.09753EB5      用户模块
      0019D9E8 0974AFC8 0974B957 2C       appframework.0974B957      用户模块
      0019DA14 0974A71D 0974AFC8 18       appframework.0974AFC8      用户模块
      0019DA2C 096738EB 0974A71D 18       appframework.0974A71D      用户模块
      0019DA44 0CB1808E 096738EB 18       appframework.096738EB      用户模块
      0019DA5C 0CB1B747 0CB1808E 430      chatframeapp.0CB1808E      用户模块
      0019DE8C 0967ADDE 0CB1B747 538      chatframeapp.0CB1B747      用户模块
      0019E3C4 0978A86B 0967ADDE 7C       appframework.0967ADDE      用户模块
      0019E440 0CA9BFA8 0978A86B 18       appframework.0978A86B      用户模块
      0019E458 0CB251FF 0CA9BFA8 450      chatframeapp.0CA9BFA8      用户模块
      0019E8A8 0CB1590F 0CB251FF 44C      chatframeapp.0CB251FF      用户模块
      0019ECF4 0CA6DEA8 0CB1590F 20       chatframeapp.0CB1590F      用户模块
      0019ED14 0CA6E189 0CA6DEA8 18       chatframeapp.0CA6DEA8      用户模块
      0019ED2C 532A9720 0CA6E189 80       chatframeapp.0CA6E189      用户模块
      0019EDAC 531BE1B1 532A9720 70       gf.532A9720                用户模块
      0019EE1C 531BFC10 531BE1B1 1C       gf.531BE1B1                用户模块
      0019EE38 50204DF9 531BFC10 24       gf.531BFC10                用户模块
      0019EE5C 5047D1D8 50204DF9 28       afctrl.50204DF9            用户模块
      0019EE84 53190D2C 5047D1D8 50       afctrl.5047D1D8            用户模块
      0019EED4 5318A5F3 53190D2C 6C       gf.53190D2C                用户模块
      0019EF40 532B45CA 5318A5F3 68       gf.5318A5F3                用户模块
      0019EFA8 532B0923 532B45CA B8       gf.532B45CA                用户模块
      0019F060 532BB68F 532B0923 30       gf.532B0923                用户模块
      0019F090 532BA702 532BB68F 20       gf.532BB68F                用户模块
      0019F0B0 532B9D5C 532BA702 1C       gf.532BA702                用户模块
      0019F0CC 5328110C 532B9D5C 50       gf.532B9D5C                用户模块
      0019F11C 5FF120CF 5328110C 20       gf.5328110C                系统模块
      0019F13C 75E15CAB 5FF120CF 2C       atlthunk.5FF120CF          系统模块
      0019F168 75E067BC 75E15CAB E4       user32.75E15CAB            系统模块
      0019F24C 75E058FB 75E067BC 74       user32.75E067BC            系统模块
      0019F2C0 75E056D0 75E058FB C        user32.75E058FB            系统模块
      0019F2CC 51B24578 75E056D0 18       user32.75E056D0            用户模块
      0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B          hummerengine.53927E8B      用户模块


44272                                                                
      0019F0E4 51B214B9 51B265B4 2C       asynctask.51B265B4         用户模块
      0019F110 51B231B3 51B214B9 18       asynctask.51B214B9         用户模块
      0019F128 51B2236B 51B231B3 58       asynctask.51B231B3         用户模块
      0019F180 51B22169 51B2236B 1C       asynctask.51B2236B         用户模块
      0019F19C 54B186F3 51B22169 C        asynctask.51B22169         用户模块
      0019F1A8 54C93EEE 54B186F3 74       im.54B186F3                用户模块
      0019F21C 54C99405 54C93EEE 34       im.54C93EEE                用户模块
      0019F250 54A6B0C6 54C99405 1C       im.54C99405                用户模块
      0019F26C 54B47A90 54A6B0C6 40       im.54A6B0C6                用户模块
      0019F2AC 51B224EE 54B47A90 28       im.54B47A90                用户模块
      0019F2D4 51B22591 51B224EE C        asynctask.51B224EE         用户模块
      0019F2E0 51B227CF 51B22591 34       asynctask.51B22591         用户模块
      0019F314 51B24321 51B227CF 2C       asynctask.51B227CF         用户模块
      0019F340 51B2207A 51B24321 24       asynctask.51B24321         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块
      0019FF74 76660419 00403365 10       qq.00403365                系统模块
      0019FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      0019FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      0019FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块


44272                                                                
      0019F10C 51B214B9 51B265B4 1C       asynctask.51B265B4         用户模块
      0019F128 51B2236B 51B214B9 58       asynctask.51B214B9         用户模块
      0019F180 51B22169 51B2236B 1C       asynctask.51B2236B         用户模块
      0019F19C 54B186F3 51B22169 C        asynctask.51B22169         用户模块
      0019F1A8 54C93EEE 54B186F3 74       im.54B186F3                用户模块
      0019F21C 54C99405 54C93EEE 34       im.54C93EEE                用户模块
      0019F250 54A6B0C6 54C99405 1C       im.54C99405                用户模块
      0019F26C 54B47A90 54A6B0C6 40       im.54A6B0C6                用户模块
      0019F2AC 51B224EE 54B47A90 28       im.54B47A90                用户模块
      0019F2D4 51B22591 51B224EE C        asynctask.51B224EE         用户模块
      0019F2E0 51B227CF 51B22591 34       asynctask.51B22591         用户模块
      0019F314 51B24321 51B227CF 2C       asynctask.51B227CF         用户模块
      0019F340 51B2207A 51B24321 24       asynctask.51B24321         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块
      0019FF74 76660419 00403365 10       qq.00403365                系统模块
      0019FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      0019FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      0019FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块


17984       //多次调用                                                          
      0FD0FCFC 51B23C7C 51B265B4 10       asynctask.51B265B4         用户模块
      0FD0FD0C 556E39C5 51B23C7C 1C       asynctask.51B23C7C         用户模块
      0FD0FD28 54B48BE6 556E39C5 8        kernelutil.556E39C5        用户模块
      0FD0FD30 557E9B27 54B48BE6 30       im.54B48BE6                用户模块
      0FD0FD60 556E395E 557E9B27 34       kernelutil.557E9B27        用户模块
      0FD0FD94 51B224EE 556E395E 28       kernelutil.556E395E        用户模块
      0FD0FDBC 51B22591 51B224EE C        asynctask.51B224EE         用户模块
      0FD0FDC8 51B227CF 51B22591 38       asynctask.51B22591         用户模块
      0FD0FE00 51B24321 51B227CF 2C       asynctask.51B227CF         用户模块
      0FD0FE2C 51B2207A 51B24321 24       asynctask.51B24321         用户模块
      0FD0FE50 51B25FE7 51B2207A 8        asynctask.51B2207A         用户模块
      0FD0FE58 51B26082 51B25FE7 114      asynctask.51B25FE7         用户模块
      0FD0FF6C 51B25E47 51B26082 8        asynctask.51B26082         用户模块
      0FD0FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块
      0FD0FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      0FD0FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      0FD0FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块


44272                                                                
      0019EF34 51B214B9 51B265B4 1C       asynctask.51B265B4         用户模块
      0019EF50 51B2236B 51B214B9 58       asynctask.51B214B9         用户模块
      0019EFA8 51B22169 51B2236B 1C       asynctask.51B2236B         用户模块
      0019EFC4 557E99BB 51B22169 14       asynctask.51B22169         用户模块
      0019EFD8 557E991E 557E99BB 1C       kernelutil.557E99BB        用户模块
      0019EFF4 557E9A34 557E991E 18       kernelutil.557E991E        用户模块
      0019F00C 54B4DAC5 557E9A34 18       kernelutil.557E9A34        用户模块
      0019F024 54A25703 54B4DAC5 10       im.54B4DAC5                用户模块
      0019F034 523E0F13 54A25703 98       im.54A25703                用户模块
      0019F0CC 523DEDFD 523E0F13 28       common.523E0F13            用户模块
      0019F0F4 75E15CAB 523DEDFD 2C       common.523DEDFD            系统模块
      0019F120 75E067BC 75E15CAB E4       user32.75E15CAB            系统模块
      0019F204 75E058FB 75E067BC 74       user32.75E067BC            系统模块
      0019F278 75E056D0 75E058FB C        user32.75E058FB            系统模块
      0019F284 51B24578 75E056D0 18       user32.75E056D0            用户模块
      0019F29C 51B2460F 51B24578 34       asynctask.51B24578         用户模块
      0019F2D0 51B2456F 51B2460F 14       asynctask.51B2460F         用户模块
      0019F2E4 51B244FB 51B2456F 30       asynctask.51B2456F         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块
      0019FF74 76660419 00403365 10       qq.00403365                系统模块
      0019FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      0019FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      0019FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块

 
//==================================================================================================================================
//AsyncTask::Thread  创建

Address  To       From     Siz Comment               Party 
0019D464 54B18704 51B25DC5 10  asynctask.51B25DC5    User   //AsyncTask::Thread::Thread
0019D474 54B18628 54B18704 18  im.54B18704           User
0019D48C 54C91FBF 54B18628 1C  im.54B18628           User
0019D4A8 0DA8725C 54C91FBF 44  im.54C91FBF           User
0019D4EC 0E13A47B 0DA8725C 14  appframework.0DA8725C User
0019D500 0DA7EAC5 0E13A47B 20  chatframeapp.0E13A47B User
0019D520 0DA88E78 0DA7EAC5 14  appframework.0DA7EAC5 User
0019D534 0DA882F4 0DA88E78 18  appframework.0DA88E78 User
0019D54C 0E13A5C2 0DA882F4 14  appframework.0DA882F4 User
0019D560 0DA83EB5 0E13A5C2 1C  chatframeapp.0E13A5C2 User
0019D57C 0DA7B957 0DA83EB5 46C appframework.0DA83EB5 User
0019D9E8 0DA7AFC8 0DA7B957 2C  appframework.0DA7B957 User
0019DA14 0DA7A71D 0DA7AFC8 18  appframework.0DA7AFC8 User
0019DA2C 0D9A38EB 0DA7A71D 18  appframework.0DA7A71D User
0019DA44 0E13808E 0D9A38EB 18  appframework.0D9A38EB User
0019DA5C 0E13B747 0E13808E 430 chatframeapp.0E13808E User
0019DE8C 0D9AADDE 0E13B747 538 chatframeapp.0E13B747 User
0019E3C4 0DABA86B 0D9AADDE 7C  appframework.0D9AADDE User
0019E440 0E0BBFA8 0DABA86B 18  appframework.0DABA86B User
0019E458 0E1451FF 0E0BBFA8 450 chatframeapp.0E0BBFA8 User
0019E8A8 0E13590F 0E1451FF 44C chatframeapp.0E1451FF User
0019ECF4 0E08DEA8 0E13590F 20  chatframeapp.0E13590F User
0019ED14 0E08E189 0E08DEA8 18  chatframeapp.0E08DEA8 User
0019ED2C 532A9720 0E08E189 80  chatframeapp.0E08E189 User
0019EDAC 531BE1B1 532A9720 70  gf.532A9720           User
0019EE1C 531BFC10 531BE1B1 1C  gf.531BE1B1           User
0019EE38 50204DF9 531BFC10 24  gf.531BFC10           User
0019EE5C 5047D1D8 50204DF9 28  afctrl.50204DF9       User
0019EE84 53190D2C 5047D1D8 50  afctrl.5047D1D8       User
0019EED4 5318A5F3 53190D2C 6C  gf.53190D2C           User
0019EF40 532B45CA 5318A5F3 68  gf.5318A5F3           User
0019EFA8 532B0923 532B45CA B8  gf.532B45CA           User
0019F060 532BB68F 532B0923 30  gf.532B0923           User
0019F090 532BA702 532BB68F 20  gf.532BB68F           User
0019F0B0 532B9D5C 532BA702 1C  gf.532BA702           User
0019F0CC 5328110C 532B9D5C 50  gf.532B9D5C           User
0019F11C 74E1205F 5328110C 20  gf.5328110C           System
0019F13C 771847AB 74E1205F 2C  atlthunk.74E1205F     System
0019F168 771652AC 771847AB E4  user32.771847AB       System
0019F24C 771643FE 771652AC 74  user32.771652AC       System
0019F2C0 771641E0 771643FE C   user32.771643FE       System
0019F2CC 51B24578 771641E0 18  user32.771641E0       User
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578    User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB    User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C    User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6     qq.004012C6           User



//==================================================================================================================================
//AsyncTask::MessageLoop::PendingTask 创建

//==================================================================================================================================
 
char __thiscall AsyncTask::Thread::Start(AsyncTask::Thread *this)
{
  int v2; // [sp+0h] [bp-8h]@1
  int v3; // [sp+4h] [bp-4h]@1

  v2 = 0;
  v3 = 0;
  return AsyncTask::Thread::StartWithOptions(this, (const struct AsyncTask::Thread::Options *)&v2);
}

char __thiscall AsyncTask::Thread::StartWithOptions(AsyncTask::Thread *this, const struct AsyncTask::Thread::Options *a2)
{
  char v2; // bl@1
  AsyncTask::Thread *v3; // edi@1
  const struct AsyncTask::Thread::Options *v5; // [sp+Ch] [bp-8h]@1
  HANDLE hObject; // [sp+10h] [bp-4h]@1

  v2 = 0;
  v3 = this;
  v5 = a2;
  hObject = CreateEventW(0, 0, 0, 0);
  *((_DWORD *)v3 + 2) = &v5;
  if ( AsyncTask::Thread::Create(*((_DWORD *)a2 + 1), v3, (void **)v3 + 3) )
  {
    AsyncTask::WaitableEvent::Wait((AsyncTask::WaitableEvent *)&hObject);
    v2 = 1;
    *((_BYTE *)v3 + 4) = 1;
  }
  *((_DWORD *)v3 + 2) = 0;
  CloseHandle(hObject);
  return v2;
}

bool __cdecl AsyncTask::Thread::Create(SIZE_T dwStackSize, struct AsyncTask::ThreadDelegate *lpParameter, void **a3)
{
  SIZE_T v3; // esi@1
  DWORD v4; // edi@1
  HANDLE v5; // eax@5

  v3 = dwStackSize;
  v4 = 0;
  if ( dwStackSize && sub_51B264FE() >= 2 )
    v4 = 0x10000;
  else
    v3 = 0;
  v5 = CreateThread(0, v3, StartAddress, (LPVOID)lpParameter, v4, 0);
  *a3 = v5;
  return v5 != 0;
}

DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
  (*(void (**)(void))(*(_DWORD *)lpThreadParameter + 4))();
  return 0;
}
//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//AsyncTask::Task 创建
44272                                                                
      0019D3C4 51B214B9 51B265B4 2C       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
      0019D3F0 51B231B3 51B214B9 18       asynctask.51B214B9         用户模块//sub_51B2147F(size_t Size)
      0019D408 51B2236B 51B231B3 58       asynctask.51B231B3         用户模块//sub_51B23198(int this, const void *a2)
      0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块//AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3, bool a4, bool a5)
      0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块//AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
      0019D48C 54C91FBF 54B186F3 1C       im.54B186F3                用户模块
      0019D4A8 0975725C 54C91FBF 44       im.54C91FBF                用户模块
      0019D4EC 0CB1A47B 0975725C 14       appframework.0975725C      用户模块
      0019D500 0974EAC5 0CB1A47B 20       chatframeapp.0CB1A47B      用户模块
      0019D520 09758E78 0974EAC5 14       appframework.0974EAC5      用户模块
      0019D534 097582F4 09758E78 18       appframework.09758E78      用户模块
      0019D54C 0CB1A5C2 097582F4 14       appframework.097582F4      用户模块
      0019D560 09753EB5 0CB1A5C2 1C       chatframeapp.0CB1A5C2      用户模块
      0019D57C 0974B957 09753EB5 46C      appframework.09753EB5      用户模块
      0019D9E8 0974AFC8 0974B957 2C       appframework.0974B957      用户模块
      0019DA14 0974A71D 0974AFC8 18       appframework.0974AFC8      用户模块
      0019DA2C 096738EB 0974A71D 18       appframework.0974A71D      用户模块
      0019DA44 0CB1808E 096738EB 18       appframework.096738EB      用户模块
      0019DA5C 0CB1B747 0CB1808E 430      chatframeapp.0CB1808E      用户模块
      0019DE8C 0967ADDE 0CB1B747 538      chatframeapp.0CB1B747      用户模块
      0019E3C4 0978A86B 0967ADDE 7C       appframework.0967ADDE      用户模块
      0019E440 0CA9BFA8 0978A86B 18       appframework.0978A86B      用户模块
      0019E458 0CB251FF 0CA9BFA8 450      chatframeapp.0CA9BFA8      用户模块
      0019E8A8 0CB1590F 0CB251FF 44C      chatframeapp.0CB251FF      用户模块
      0019ECF4 0CA6DEA8 0CB1590F 20       chatframeapp.0CB1590F      用户模块
      0019ED14 0CA6E189 0CA6DEA8 18       chatframeapp.0CA6DEA8      用户模块
      0019ED2C 532A9720 0CA6E189 80       chatframeapp.0CA6E189      用户模块
      0019EDAC 531BE1B1 532A9720 70       gf.532A9720                用户模块
      0019EE1C 531BFC10 531BE1B1 1C       gf.531BE1B1                用户模块
      0019EE38 50204DF9 531BFC10 24       gf.531BFC10                用户模块
      0019EE5C 5047D1D8 50204DF9 28       afctrl.50204DF9            用户模块
      0019EE84 53190D2C 5047D1D8 50       afctrl.5047D1D8            用户模块
      0019EED4 5318A5F3 53190D2C 6C       gf.53190D2C                用户模块
      0019EF40 532B45CA 5318A5F3 68       gf.5318A5F3                用户模块
      0019EFA8 532B0923 532B45CA B8       gf.532B45CA                用户模块
      0019F060 532BB68F 532B0923 30       gf.532B0923                用户模块
      0019F090 532BA702 532BB68F 20       gf.532BB68F                用户模块
      0019F0B0 532B9D5C 532BA702 1C       gf.532BA702                用户模块
      0019F0CC 5328110C 532B9D5C 50       gf.532B9D5C                用户模块
      0019F11C 5FF120CF 5328110C 20       gf.5328110C                系统模块
      0019F13C 75E15CAB 5FF120CF 2C       atlthunk.5FF120CF          系统模块
      0019F168 75E067BC 75E15CAB E4       user32.75E15CAB            系统模块
      0019F24C 75E058FB 75E067BC 74       user32.75E067BC            系统模块
      0019F2C0 75E056D0 75E058FB C        user32.75E058FB            系统模块
      0019F2CC 51B24578 75E056D0 18       user32.75E056D0            用户模块
      0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86          hummerengine.53920B86      用户模块
//==================================================================================================================================	  
0019D3C4 51B214B9 51B265B4 2C       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
  










//==================================================================================================================================
0019D3F0 51B231B3 51B214B9 18       asynctask.51B214B9         用户模块//sub_51B2147F(size_t Size)

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D408 51B2236B 51B231B3 58       asynctask.51B231B3         用户模块//sub_51B23198(int this, const void *a2)

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块//AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3, bool a4, bool a5)

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块//AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D48C 54C91FBF 54B186F3 1C       im.54B186F3                用户模块
void __cdecl Util::SessionTask::PostTask_Session(Util::SessionTask *this, struct AsyncTask::CancelableTask *a2, __int64 a3)
{
  AsyncTask::Thread *v3; // eax@1

  v3 = (AsyncTask::Thread *)sub_54B18634();  // --------> 
  if ( (signed int)a3 >= 0 && ((signed int)a3 > 0 || a2) )
    sub_54B1865A(this, a2, a3);
  else
    sub_54B18692(v3, this);
}
 
void __thiscall sub_54B18692(AsyncTask::Thread *this, struct AsyncTask::Task *a2)
{
  AsyncTask::Thread *v2; // esi@1
  AsyncTask::MessageLoop *v3; // eax@2

  v2 = this;
  if ( AsyncTask::Thread::message_loop(this) )
  {
    v3 = AsyncTask::Thread::message_loop(v2);
    AsyncTask::MessageLoop::PostTask(v3, a2);  //=================>AsyncTask::MessageLoop::PostTask()
  }
  else
  {
    (*(void (**)(void))(*(_DWORD *)a2 + 4))();
  }
}
 
//创建  AsyncTask::Thread  /dword_54EEB2FC
int sub_54B18634()
{
  int result; // eax@1
  int v1; // eax@2

  result = dword_54EEB2FC;
  if ( !dword_54EEB2FC )
  {
    v1 = sub_54DBD177(0x34u);
    if ( v1 )
      result = sub_54B1861B(v1);// sub_54B186F5()=>  AsyncTask::Thread::Thread(this, a2);  AsyncTask::Thread::Start(v1);
    else
      result = 0;
    dword_54EEB2FC = result;
  }
  return result;
} 
 
 	  
	  
//==================================================================================================================================
0019D4A8 0975725C 54C91FBF 44       im.54C91FBF                用户模块
signed int __userpurge sub_54C91E47@<eax>(int a1@<esi>, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // edi@1
  _DWORD *v8; // esi@3
  __int16 v9; // ax@7
  int v10; // eax@18
  Util::SessionTask *v11; // eax@18
  __int64 v12; // [sp-8h] [bp-Ch]@3

  v6 = a3;
  if ( !a3 )
    return -2147024809;
  HIDWORD(v12) = a1;
  v8 = a2;
  if ( !a2[3] )
    return -2147467259;
  if ( !sub_54CC1350(a2) )
  {
    sub_54A14A68(L"file", 607, L"func", 2, L"BuddySession", (const char *)L"%s", &unk_54E7D838);
    return -2147467259;
  }
  sub_54A14A68(L"file", 612, L"func", 2, L"BuddySession", (const char *)L"Send BuddyMsg, toUin = [%lu]", v8[3]);
  sub_54C93D87(v6);
  if ( !sub_54C957D7(v6, a4, a5, a6) ) //----------------->组织消息? Util::Data::CreateTXData,Util::Data::CreateTXArray
  {
    sub_54C997E3(v6);
    v9 = Util::Contact::GetStatus(v8[3], 0);
    if ( v9 == 20 || v9 == 201 )
    {
      a2 = a6;
      if ( a6 )
        (*(void (__stdcall **)(_DWORD *))(*a6 + 4))(a6);
      a3 = a5;
      if ( a5 )
        (*(void (__stdcall **)(_DWORD *))(*a5 + 4))(a5);
      a5 = a4;
      if ( a4 )
        (*(void (__stdcall **)(_DWORD *))(*a4 + 4))(a4);
      v10 = *v6;
      a6 = v6;
      (*(void (__stdcall **)(_DWORD *))(v10 + 4))(v6);
      LODWORD(v12) = 0;
      v11 = (Util::SessionTask *)sub_54C92ADD(sub_54C97C76, 0, &a6, &a5, &a3, &a2); //---------------->
      Util::SessionTask::PostTask_Session(v11, 0, v12); //==========================>
      sub_54A37E45(&a6);
      sub_54A37E45(&a5);
      sub_54A37E45(&a3);
      sub_54A37E45(&a2);
    }
    else if ( sub_54C97D99(v6, a4, a5, a6) < 0 )
    {
      sub_54A14A68(
        L"file",
        638,
        L"func",
        2,
        L"BuddySession",
        (const char *)L"Send BuddyMsg, toUin = [%lu], QueryPicSendType fail",
        v8[3]);
      return -2147467259;
    }
    sub_54A14A68(
      L"file",
      644,
      L"func",
      2,
      L"BuddySession",
      (const char *)L"Send BuddyMsg, toUin = [%lu], return ok",
      v8[3]);
  }
  return 0;
}
 
//创建 Util::SessionTask
int __stdcall sub_54C92ADD(int a1, int a2, int a3, int a4, int a5, int a6)
{
  char v6; // bl@1
  int v7; // eax@2
  int v8; // esi@2
  char v10; // [sp+Ch] [bp-18h]@2
  char v11; // [sp+1Ch] [bp-8h]@2
  int v12; // [sp+20h] [bp-4h]@1

  v6 = 0;
  v12 = 0;
  if ( sub_54DBD177(0x30u) )
  {
    sub_54C93435(a3, a4, a5, a6);
    v7 = sub_54A35665(&v11);
    v8 = sub_54C932FB(v7, a1, a2, &v10);
    v6 = 3;
  }
  else
  {
    v8 = 0;
  }
  if ( v6 & 2 )
  {
    v6 &= 0xFDu;
    sub_54A14F97(&v11);
  }
  if ( v6 & 1 )
    sub_54C93A0A(&v10);
  return v8;
}
 
 
 	  
	  
//==================================================================================================================================
0019D4EC 0CB1A47B 0975725C 14       appframework.0975725C      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D500 0974EAC5 0CB1A47B 20       chatframeapp.0CB1A47B      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D520 09758E78 0974EAC5 14       appframework.0974EAC5      用户模块
0019D534 097582F4 09758E78 18       appframework.09758E78      用户模块
0019D54C 0CB1A5C2 097582F4 14       appframework.097582F4      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D560 09753EB5 0CB1A5C2 1C       chatframeapp.0CB1A5C2      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019D57C 0974B957 09753EB5 46C      appframework.09753EB5      用户模块
0019D9E8 0974AFC8 0974B957 2C       appframework.0974B957      用户模块
0019DA14 0974A71D 0974AFC8 18       appframework.0974AFC8      用户模块
0019DA2C 096738EB 0974A71D 18       appframework.0974A71D      用户模块
0019DA44 0CB1808E 096738EB 18       appframework.096738EB      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019DA5C 0CB1B747 0CB1808E 430      chatframeapp.0CB1808E      用户模块
0019DE8C 0967ADDE 0CB1B747 538      chatframeapp.0CB1B747      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019E3C4 0978A86B 0967ADDE 7C       appframework.0967ADDE      用户模块
0019E440 0CA9BFA8 0978A86B 18       appframework.0978A86B      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019E458 0CB251FF 0CA9BFA8 450      chatframeapp.0CA9BFA8      用户模块
0019E8A8 0CB1590F 0CB251FF 44C      chatframeapp.0CB251FF      用户模块
0019ECF4 0CA6DEA8 0CB1590F 20       chatframeapp.0CB1590F      用户模块
0019ED14 0CA6E189 0CA6DEA8 18       chatframeapp.0CA6DEA8      用户模块
0019ED2C 532A9720 0CA6E189 80       chatframeapp.0CA6E189      用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019EDAC 531BE1B1 532A9720 70       gf.532A9720                用户模块
0019EE1C 531BFC10 531BE1B1 1C       gf.531BE1B1                用户模块
0019EE38 50204DF9 531BFC10 24       gf.531BFC10                用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019EE5C 5047D1D8 50204DF9 28       afctrl.50204DF9            用户模块
0019EE84 53190D2C 5047D1D8 50       afctrl.5047D1D8            用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019EED4 5318A5F3 53190D2C 6C       gf.53190D2C                用户模块
0019EF40 532B45CA 5318A5F3 68       gf.5318A5F3                用户模块
0019EFA8 532B0923 532B45CA B8       gf.532B45CA                用户模块
0019F060 532BB68F 532B0923 30       gf.532B0923                用户模块
0019F090 532BA702 532BB68F 20       gf.532BB68F                用户模块
0019F0B0 532B9D5C 532BA702 1C       gf.532BA702                用户模块
0019F0CC 5328110C 532B9D5C 50       gf.532B9D5C                用户模块
0019F11C 5FF120CF 5328110C 20       gf.5328110C                系统模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019F13C 75E15CAB 5FF120CF 2C       atlthunk.5FF120CF          系统模块
0019F168 75E067BC 75E15CAB E4       user32.75E15CAB            系统模块
0019F24C 75E058FB 75E067BC 74       user32.75E067BC            系统模块
0019F2C0 75E056D0 75E058FB C        user32.75E058FB            系统模块
0019F2CC 51B24578 75E056D0 18       user32.75E056D0            用户模块

 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
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
    DispatchMessageW(lpMsg); //=====================>
    AsyncTask::MessagePumpWin::DidProcessMessage(v2, lpMsg);
  }
  return 1;
}
 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
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
 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
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
    v2 = AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(v1);
  }
}
 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块

void __thiscall AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
  JUMPOUT(*((_BYTE *)this + 89), 0, AsyncTask::MessageLoop::RunInternalInSEHFrame);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 4))(this);
}
 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019FA00 53927E8B 53920B86          hummerengine.53920B86      用户模块	
 
 
 
 
 
 	  
	  
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

 
 
 
 
 
 	  
	  
//==================================================================================================================================

 
 
 
 
 
 	  
	  
//==================================================================================================================================

 
 
 
 
 
 	  
	  
//==================================================================================================================================

 
 
 
 
 
 	  
	  
//==================================================================================================================================

 
 
 
 
 
 	  
	  
//==================================================================================================================================

 
 
 
 
 
 	  
	  
//==================================================================================================================================

 
 
 
 
 
 