//----------------
//类

//创建 AsyncTask::Thread  

//创建 AsyncTask::MessageLoop::PendingTask 

//创建 AsyncTask::Task 

//创建 Util::SessionTask

//处理默认事件id


//创建内存方法


//AsyncTask::Thread::Start 启动线程

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
//创建内存方法
//AsyncTask
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

--------- ---- -------                                                               ----                
//im
  sub_54DBD177



--------- ---- -------                                                               ----                


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
//创建 AsyncTask::Thread  

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
 

//==================================================================================================================================
 
//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//创建 AsyncTask::Task 
44272                                                                
      0019D3C4 51B214B9 51B265B4 2C       asynctask.51B265B4         用户模块//创建内存 =>  malloc(Size);
      0019D3F0 51B231B3 51B214B9 18       asynctask.51B214B9         用户模块//sub_51B2147F(size_t Size)
      0019D408 51B2236B 51B231B3 58       asynctask.51B231B3         用户模块//sub_51B23198(int this, const void *a2)
      0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块//AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3, bool a4, bool a5)
      0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块//AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
      0019D48C 54C91FBF 54B186F3 1C       im.54B186F3                用户模块
      0019D4A8 0DC8725C 54C91FBF 44       im.54C91FBF                用户模块
      0019D4EC 0E6BA47B 0DC8725C 14       appframework.0DC8725C      用户模块
      0019D500 0DC7EAC5 0E6BA47B 20       chatframeapp.0E6BA47B      用户模块
      0019D520 0DC88E78 0DC7EAC5 14       appframework.0DC7EAC5      用户模块
      0019D534 0DC882F4 0DC88E78 18       appframework.0DC88E78      用户模块
      0019D54C 0E6BA5C2 0DC882F4 14       appframework.0DC882F4      用户模块
      0019D560 0DC83EB5 0E6BA5C2 1C       chatframeapp.0E6BA5C2      用户模块
      0019D57C 0DC7B957 0DC83EB5 46C      appframework.0DC83EB5      用户模块
      0019D9E8 0DC7AFC8 0DC7B957 2C       appframework.0DC7B957      用户模块
      0019DA14 0DC7A71D 0DC7AFC8 18       appframework.0DC7AFC8      用户模块
      0019DA2C 0DBA38EB 0DC7A71D 18       appframework.0DC7A71D      用户模块
      0019DA44 0E6B808E 0DBA38EB 18       appframework.0DBA38EB      用户模块
      0019DA5C 0E6BB747 0E6B808E 430      chatframeapp.0E6B808E      用户模块
      0019DE8C 0DBAADDE 0E6BB747 538      chatframeapp.0E6BB747      用户模块
      0019E3C4 0DCBA86B 0DBAADDE 7C       appframework.0DBAADDE      用户模块
      0019E440 0E63BFA8 0DCBA86B 18       appframework.0DCBA86B      用户模块
      0019E458 0E6C51FF 0E63BFA8 450      chatframeapp.0E63BFA8      用户模块
      0019E8A8 0E6B590F 0E6C51FF 44C      chatframeapp.0E6C51FF      用户模块
      0019ECF4 0E60DEA8 0E6B590F 20       chatframeapp.0E6B590F      用户模块
      0019ED14 0E60E189 0E60DEA8 18       chatframeapp.0E60DEA8      用户模块
      0019ED2C 532A9720 0E60E189 80       chatframeapp.0E60E189      用户模块
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
      0019F11C 5FF1216F 5328110C 20       gf.5328110C                系统模块
      0019F13C 75E15CAB 5FF1216F 2C       atlthunk.5FF1216F          系统模块
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
    AsyncTask::MessageLoop::PostTask(v3, a2);  //=================>51B22169/AsyncTask::MessageLoop::PostTask()
  }
  else
  {
    (*(void (**)(void))(*(_DWORD *)a2 + 4))();
  }
}
 
//创建 AsyncTask::Thread  /dword_54EEB2FC
int sub_54B18634()
{
  int result; // eax@1
  int v1; // eax@2

  result = dword_54EEB2FC;
  if ( !dword_54EEB2FC )
  {
    v1 = sub_54DBD177(0x34u);//申请 AsyncTask::Thread 内存
    if ( v1 )
      result = sub_54B1861B(v1);// sub_54B186F5()=>  AsyncTask::Thread::Thread(this, a2);  AsyncTask::Thread::Start(v1);
    else
      result = 0;
    dword_54EEB2FC = result;
  }
  return result;
} 

AsyncTask::Thread *__thiscall sub_54B1861B(AsyncTask::Thread *this)
{
  AsyncTask::Thread *v1; // esi@1

  v1 = this;
  sub_54B186F5(this, "SessionThread");
  AsyncTask::Thread::Start(v1);  //--------> 
  return v1;
}
AsyncTask::Thread *__thiscall sub_54B186F5(AsyncTask::Thread *this, const char *a2)
{
  AsyncTask::Thread *v2; // esi@1

  v2 = this;
  AsyncTask::Thread::Thread(this, a2);
  return v2;
}
AsyncTask::Thread *__thiscall AsyncTask::Thread::Thread(AsyncTask::Thread *this, const char *Src)
{
  AsyncTask::Thread *v2; // esi@1
  char *v3; // ecx@1

  v2 = this;
  *(_DWORD *)this = &AsyncTask::Thread::`vftable';
  v3 = (char *)this + 28; //-------------------->字符串
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
//------------------------------
//AsyncTask::Thread::Start 启动线程
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

//@lpParameter  为 AsyncTask::Thread *
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

//@lpThreadParameter  为 AsyncTask::Thread *
DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
  (*(void (**)(void))(*(_DWORD *)lpThreadParameter + 4))(); // 执行了 &AsyncTask::Thread::`vftable 的第二个方法 => AsyncTask::Thread::ThreadMain()
  return 0;
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
0019D4EC 0E6BA47B 0DC8725C 14       appframework.0DC8725C      用户模块
signed int __userpurge sub_DC87053@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  char v4; // al@4
  signed int result; // eax@4
  int v6; // eax@5
  void (__stdcall *v7)(int, const char *, int); // esi@5
  int v8; // eax@5
  int v9; // eax@5
  void (__stdcall *v10)(int, const char *, int); // esi@5
  int v11; // eax@5
  int v12; // eax@5
  void (__stdcall *v13)(int, const char *, int); // esi@5
  int v14; // eax@5
  int v15; // eax@5
  signed int v16; // edi@6
  int v17; // esi@7
  int (__stdcall *v18)(int, int, int *); // edi@7
  int v19; // eax@7
  char v20; // al@8
  int v21; // eax@9
  char v22; // al@12
  int v23; // [sp-4h] [bp-28h]@5
  char v24; // [sp+8h] [bp-1Ch]@5
  int v25; // [sp+Ch] [bp-18h]@9
  char v26; // [sp+10h] [bp-14h]@5
  int v27; // [sp+14h] [bp-10h]@5
  int v28; // [sp+18h] [bp-Ch]@7
  int v29; // [sp+1Ch] [bp-8h]@5
  int v30; // [sp+20h] [bp-4h]@9

  if ( a4 && a3 )
  {
    if ( sub_DC8908E(a2, a3, a4) >= 0 )
    {
      v23 = a1;
      CTXStringW::CTXStringW((CTXStringW *)&v26);
      v6 = Util::Contact::GetSelfUin();
      CTXStringW::Format((CTXStringW *)&v26, L"%lu", v6);
      v7 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 320);
      v8 = CTXBSTR::CTXBSTR(&v24, L"buddy");
      v9 = CTXBSTR::operator wchar_t *(v8);
      v7(a4, "maintype", v9);
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v24);
      v10 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 320);
      v11 = CTXBSTR::CTXBSTR(&v24, L"ccmsg");
      v12 = CTXBSTR::operator wchar_t *(v11);
      v10(a4, "subtype", v12);
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v24);
      v13 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 320);
      v14 = CTXBSTR::CTXBSTR(&v24, &v26);
      v15 = CTXBSTR::operator wchar_t *(v14);
      v13(a4, "key", v15);
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v24);
      v29 = 0;
      Util::Data::CreateTXData((Util::Data *)&v29);
      (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v29 + 240))(v29, "bSelfMsg", 1);
      (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a4 + 368))(a4, "iMsgData", v29);
      v27 = 0;
      if ( sub_DB9EE82(&v27) )
      {
        v28 = 0;
        v17 = v27;
        v18 = *(int (__stdcall **)(int, int, int *))(*(_DWORD *)v27 + 12);
        v19 = sub_DC88C98(a2);
        if ( v18(v17, v19, &v28) >= 0 )
        {
          v21 = *(_DWORD *)a4;
          v16 = 0;
          v30 = 0;
          v25 = 0;
          (*(void (__stdcall **)(int, const char *, int *, int))(v21 + 32))(a4, "bIsForward", &v25, v23);
          if ( v25 )
          {
            Util::Data::CreateTXData((Util::Data *)&v30);
            (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v30 + 240))(v30, "bIsForward", 1);
          }
          if ( (*(int (__stdcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v28 + 24))(v28, a3, 0, *(_DWORD *)(a2 + 40)) < 0 )  //================================> 54C91FBF/sub_54C91E47
          {
            v22 = sub_DC88C98(a2);
            sub_DB8B1E3(L"file", 259, L"func", 2, L"BuddySession", L"InternalSendMsg toUin = [%lu], SendMsg fail", v22);
            (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a4 + 240))(a4, "bHasSendFailed", 1);
            sub_DC8914F(-3, a3, a4);
          }
          sub_DB86E7B(&v30);
        }
        else
        {
          v20 = sub_DC88C98(a2);
          sub_DB8B1E3(L"file", 239, L"func", 2, L"ChatFrame", L"GetSession fail toUin = [%lu]", v20);
          v16 = -2147467259;
        }
        sub_DB86E7B(&v28);
      }
      else
      {
        v16 = -2147467259;
      }
      sub_DB86E7B(&v27);
      sub_DB86E7B(&v29);
      CTXStringW::~CTXStringW((CTXStringW *)&v26);
      result = v16;
    }
    else
    {
      v4 = sub_DC88C98(a2);
      sub_DB8B1E3(
        L"file",
        212,
        L"func",
        2,
        L"BuddySession",
        L"InternalSendMsg toUin = [%lu], __super::InternalSendMsg fail",
        v4);
      result = -2147467259;
    }
  }
  else
  {
    result = -2147024809;
  }
  return result;
} 
	  
//==================================================================================================================================
0019D500 0DC7EAC5 0E6BA47B 20       chatframeapp.0E6BA47B      用户模块

int __stdcall sub_E6BA458(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int result; // eax@2

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    result = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v3 + 156))(v3, a2, a3); //==========> 0DC8725C/sub_DC87053
  else
    result = -2147467259;
  return result;
} 
 	  
	  
//==================================================================================================================================
0019D520 0DC88E78 0DC7EAC5 14       appframework.0DC7EAC5      用户模块
int __stdcall sub_DC7EA7B(int a1, int *a2, int a3)
{
  int *v3; // esi@1
  int i; // edi@1
  int v5; // ecx@2
  int v6; // eax@3
  int v8; // [sp+8h] [bp-4h]@1

  v8 = 0;
  v3 = a2;
  (*(void (__stdcall **)(int *, int *))(*a2 + 64))(a2, &v8);
  for ( i = v8; i; --i )
  {
    v5 = *v3;
    BYTE3(a2) = 0;
    (*(void (__stdcall **)(int *, int, char *))(v5 + 68))(v3, i - 1, (char *)&a2 + 3);
  }
  v6 = sub_DC7F162(a1);
  return (*(int (__stdcall **)(int, int *, int))(*(_DWORD *)v6 + 156))(v6, v3, a3); //=====================>0E6BA47B/sub_E6BA458
}

 

//==================================================================================================================================
0019D534 0DC882F4 0DC88E78 18       appframework.0DC88E78      用户模块
int __stdcall sub_DC88E55(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int result; // eax@2

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    result = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v3 + 216))(v3, a2, a3);//=====================>0DC7EAC5/sub_DC7EA7B
  else
    result = -2147467259;
  return result;
} 
 	  
	  
//==================================================================================================================================
0019D54C 0E6BA5C2 0DC882F4 14       appframework.0DC882F4      用户模块
int __stdcall sub_DC882B4(int a1, int a2, int a3)
{
  void *v4; // [sp+0h] [bp-4h]@1

  v4 = &unk_DD691F0;
  sub_DB8FBAD(L"file", 891, L"func", 2, L"CAFBuddyChatLogic", (const char *)L"%s", &v4);
  return sub_DC88E55(a1, a2, a3); //=====================> 0DC88E78/sub_DC88E55
}
 
 
 
 	  
	  
//==================================================================================================================================
0019D560 0DC83EB5 0E6BA5C2 1C       chatframeapp.0E6BA5C2      用户模块
int __stdcall sub_E6BA59F(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int result; // eax@2

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    result = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v3 + 216))(v3, a2, a3); //=====================> 0DC882F4/sub_DC882B4
  else
    result = -2147467259;
  return result;
}

//==================================================================================================================================
0019D57C 0DC7B957 0DC83EB5 46C      appframework.0DC83EB5      用户模块
int __thiscall sub_DC83E8B(void *this, int a2, int a3)
{
  void *v3; // esi@1
  int v4; // eax@3
  int v5; // esi@3
  void *v7; // [sp+4h] [bp-4h]@1

  v3 = this;
  v7 = this;
  if ( this )
    (*(void (__stdcall **)(void *))(*(_DWORD *)this + 4))(this);
  v4 = sub_DC7F162(v3);
  v5 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v4 + 216))(v4, a2, a3);//=====================> 0E6BA5C2/sub_E6BA59F
  sub_DB86E7B(&v7);
  return v5;
}
 
 
 

//==================================================================================================================================
0019D9E8 0DC7AFC8 0DC7B957 2C       appframework.0DC7B957      用户模块 
const wchar_t *__stdcall sub_DC7B36B(void *a1, Util::Misc *a2, int a3)
{
  int v3; // ebx@1
  int *v4; // esi@1
  int v5; // ST24_4@10
  int v6; // eax@12
  int v7; // eax@14
  int v9; // eax@19
  int v10; // esi@20
  struct ITXArray **v11; // ST0C_4@23
  struct ITXArray *v12; // ST08_4@23
  int v13; // eax@25
  int v14; // eax@25
  const wchar_t *v15; // esi@29
  unsigned int v16; // ecx@29
  signed int v17; // edx@29
  unsigned int v18; // ecx@32
  int v19; // esi@33
  void *v20; // ebx@34
  int v21; // eax@42
  char v22; // al@51
  signed int v23; // [sp-18h] [bp-474h]@15
  const wchar_t *v24; // [sp-14h] [bp-470h]@15
  const wchar_t *v25; // [sp-Ch] [bp-468h]@15
  const wchar_t *v26; // [sp-8h] [bp-464h]@15
  char v27; // [sp-4h] [bp-460h]@15
  __int64 v28; // [sp+Ch] [bp-450h]@52
  int v29; // [sp+14h] [bp-448h]@1
  void *Memory; // [sp+18h] [bp-444h]@33
  int v31; // [sp+20h] [bp-43Ch]@12
  int v32; // [sp+24h] [bp-438h]@25
  int v33; // [sp+28h] [bp-434h]@25
  int v34; // [sp+2Ch] [bp-430h]@19
  void *v35; // [sp+30h] [bp-42Ch]@1
  Util::Misc *v36; // [sp+34h] [bp-428h]@3
  int v37; // [sp+38h] [bp-424h]@25
  const wchar_t *v38; // [sp+3Ch] [bp-420h]@1
  int v39; // [sp+40h] [bp-41Ch]@3
  struct ITXMsgPack *v40; // [sp+44h] [bp-418h]@23
  int v41; // [sp+48h] [bp-414h]@10
  int v42; // [sp+4Ch] [bp-410h]@3
  int v43; // [sp+50h] [bp-40Ch]@6
  const wchar_t *v44; // [sp+54h] [bp-408h]@1
  __int16 v45[512]; // [sp+58h] [bp-404h]@31

  v3 = a3;
  v4 = (int *)a2;
  v38 = (const wchar_t *)a2;
  v29 = a3;
  v44 = L"CAFBaseChatLogic::SendMsgDirect() \u70b9\u51fb\u53d1\u9001\u6309\u94ae \u5f00\u59cb\u53d1\u9001";
  sub_DB8FBAD((int)L"file", 650, (int)L"func", 3, (int)L"FileMsgTab2", (const char *)L"%s", &v44);
  v35 = a1;
  if ( a1 )
    (*(void (__stdcall **)(void *))(*(_DWORD *)a1 + 4))(a1);
  v39 = 0;
  v42 = 0;
  v36 = a2;
  if ( a2 )
    (*(void (__stdcall **)(Util::Misc *))(*(_DWORD *)a2 + 4))(a2);
  if ( a3 )
  {
    v43 = 0;
    if ( a2 )
      sub_DB88649(&v43, a2);
    else
      (*(void (__stdcall **)(int, const char *, void *, int *))(*(_DWORD *)a3 + 136))(
        a3,
        "iMsgPack",
        &unk_DD03E98,
        &v43);
    if ( v43 )
    {
      v41 = 0;
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v43 + 24))(v43, &v41);
      sub_DC7F14B(&v39);
      (*(void (__stdcall **)(int, int))(*(_DWORD *)v39 + 20))(v39, v41);
      Util::Data::CreateTXData((Util::Data *)&v42);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 204))(v5, a3, v42);
      (*(void (__stdcall **)(int, const char *, void *, int))(*(_DWORD *)v42 + 344))(v42, "iMsgPack", &unk_DD03E98, v39);
      sub_DB86E7B(&v41);
    }
    sub_DB86E7B(&v43);
    (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a3 + 240))(a3, "b_showmsg_from_sendmsg", 1);
  }
  v6 = 0;
  v31 = 0;
  if ( a3 )
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a3 + 72))(a3, "dwMsgSeq", &v31);
    v6 = v31;
  }
  sub_DC84785(v6);
  v7 = sub_DC7F162(a1);
  v44 = (const wchar_t *)(*(int (__stdcall **)(int, Util::Misc *, int))(*(_DWORD *)v7 + 152))(v7, a2, a3);
  if ( v44 )
  {
    v27 = sub_DBBBB1E(a1);
    v26 = L"InternalPreSendMsg fail toUin = [%lu]";
    v25 = L"ChatFrame";
    v24 = L"func";
    v23 = 701;
LABEL_16:
    sub_DB8B1E3(L"file", v23, v24, 2, v25, v26, v27);
    sub_DB86E7B(&v36);
    sub_DB86E7B(&v42);
    sub_DB86E7B(&v39);
    sub_DB86E7B(&v35);
    return v44;
  }
  v44 = (const wchar_t *)(*(int (__stdcall **)(void *, Util::Misc *, int))(*(_DWORD *)a1 + 56))(a1, a2, a3);
  if ( (signed int)v44 < 0 )
  {
    v27 = sub_DBBBB1E(a1);
    v26 = L"CheckSendMsg fail toUin = [%lu]";
    v25 = L"ChatFrame";
    v24 = L"func";
    v23 = 713;
    goto LABEL_16;
  }
  v9 = sub_DC7F162(a1);
  v34 = (*(int (__stdcall **)(int, Util::Misc *, int))(*(_DWORD *)v9 + 148))(v9, a2, a3);
  if ( v34 >= 0 )
  {
    if ( a3 )
      (*(void (__stdcall **)(int, const char *, void *, Util::Misc *))(*(_DWORD *)a3 + 344))(
        a3,
        "iMsgPack",
        &unk_DD03E98,
        a2);
    v44 = L"CAFBaseChatLogic::SendMsgDirect() \u5f00\u59cb\u5bf9\u56fe\u7247\u8fdb\u884c\u538b\u7f29";
    sub_DB8FBAD((int)L"file", 737, (int)L"func", 3, (int)L"FileMsgTab2", (const char *)L"%s", &v44);
    v40 = 0;
    Util::Data::CreateTXArray((Util::Data *)&v40, v11);
    if ( Util::Misc::HasPic(a2, v40, v12) )
    {
      v34 = 0;
      (*(void (__stdcall **)(struct ITXMsgPack *, int *))(*(_DWORD *)v40 + 96))(v40, &v34);
      if ( v34 )
      {
        v13 = *(_DWORD *)a1;
        v37 = -1;
        v32 = 0;
        (*(void (__stdcall **)(void *, int *))(v13 + 24))(a1, &v32);
        sub_DBAD097(v32);
        v14 = v33;
        if ( v33 )
        {
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v33 + 56))(v33, &v37);
          v14 = v33;
        }
        v41 = 0;
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v14 + 48))(v14, &v41);
        if ( v41 && v37 != -1 )
        {
          v43 = 0;
          Util::Data::CreateTXData((Util::Data *)&v43);
          (*(void (__stdcall **)(int, const char *, struct ITXMsgPack *))(*(_DWORD *)v43 + 384))(v43, "arFiles", v40);
          v15 = L"OnTransmit(dwTargetUin, nChatFrameType, pBigPicData)";
          v16 = 0;
          v17 = 79;
          do
          {
            if ( (_WORD)v17 == 40 )
              break;
            ++v15;
            v45[v16++] = v17;
            v17 = *v15;
          }
          while ( (_WORD)v17 );
          v18 = v16;
          if ( v18 >= 512 )
          {
            sub_DCFDFF5(v18 * 2, v17);
            __debugbreak();
            JUMPOUT(*(_DWORD *)sub_DC7BA39);
          }
          v45[v18] = 0;
          sub_DC7F199(&Memory, 0, v45);
          v19 = *(_DWORD *)Memory;
          if ( *(void **)Memory != Memory )
          {
            v20 = Memory;
            do
            {
              (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v19 + 8) + 12))(
                *(_DWORD *)(v19 + 8),
                v41,
                v37,
                v43);
              v19 = *(_DWORD *)v19;
            }
            while ( (void *)v19 != v20 );
            v3 = v29;
          }
          sub_DB9053A(&Memory);
          sub_DB861A0(Memory, 12);
          sub_DB86E7B(&v43);
          v4 = (int *)v38;
        }
        else
        {
          sub_DB8B1E3(
            L"file",
            764,
            L"func",
            2,
            L"ChatFrame",
            L"filter big pic, targetuin invalid, uin[%u], chattype[%d]",
            v41);
        }
        if ( v33 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33);
        sub_DB86E7B(&v32);
      }
      v21 = *v4;
      v44 = 0;
      (*(void (__stdcall **)(int *, int *))(v21 + 64))(v4, (int *)&v44);
      if ( !v44 )
      {
        v38 = L"after filter big pic, msg pack is empty";
        sub_DB8FBAD((int)L"file", 772, (int)L"func", 2, (int)L"ChatFrame", (const char *)L"%s", &v38);
        sub_DB86E7B(&v40);
        v10 = 0;
        goto LABEL_55;
      }
      sub_DC847D3(v4, 0);
      (*(void (__stdcall **)(_DWORD, int *, int))(**((_DWORD **)a1 + 54) + 24))(*((_DWORD *)a1 + 54), v4, v3);
      if ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)a1 + 54) + 16))(*((_DWORD *)a1 + 54)) >= 0 )
      {
LABEL_50:
        if ( *((_DWORD *)a1 + 73) )
        {
          v22 = sub_DBBBB1E(a1);
          sub_DB8B1E3(L"file", 803, L"func", 2, L"ChatLogic", L"SendMsgDirect toUin = [%lu], m_bDestroy == TRUE", v22);
          sub_DB86E7B(&v40);
          v10 = -2147467259;
        }
        else
        {
          sub_DC847D3(v4, 1);
          v10 = (*(int (__stdcall **)(void *, int *, int))(*(_DWORD *)a1 + 68))(a1, v4, v3);
          _mm_storel_pd((double *)&v28, 0i64);
          if ( v3 )
            (*(void (__stdcall **)(int, const char *, __int64 *))(*(_DWORD *)v3 + 88))(v3, "u64MsgUID", &v28);
          sub_DC81D02(v42, v28, HIDWORD(v28));
          sub_DB86E7B(&v40);
        }
        goto LABEL_55;
      }
      if ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)a1 + 54) + 12))(*((_DWORD *)a1 + 54)) >= 0 )
      {
        v38 = L"Start PreprocessPicThread";
        sub_DB8FBAD((int)L"file", 790, (int)L"func", 3, (int)L"CAFBaseChatLogic", (const char *)L"%s", &v38);
        goto LABEL_50;
      }
      v38 = L"PreprocessPicThread start error";
      sub_DB8FBAD((int)L"file", 785, (int)L"func", 2, (int)L"CAFBaseChatLogic", (const char *)L"%s", &v38);
    }
    else
    {
      sub_DC847D3(a2, 0);
    }
    sub_DC83E8B(a1, (int)v4, v3); //=====================> 0DC83EB5/sub_DC83E8B
    goto LABEL_50;
  }
  v44 = L"Fail!";
  sub_DB8FBAD((int)L"file", 726, (int)L"func", 3, (int)L"InternalCheckMsgImageResult", (const char *)L"%s", &v44);
  v10 = v34;
LABEL_55:
  sub_DB86E7B(&v36);
  sub_DB86E7B(&v42);
  sub_DB86E7B(&v39);
  sub_DB86E7B(&v35);
  return (const wchar_t *)v10;
}
 
 
 
 
 	  
	  
//==================================================================================================================================
0019DA14 0DC7A71D 0DC7AFC8 18       appframework.0DC7AFC8      用户模块
int __stdcall sub_DC7AF48(int a1, int a2)
{
  int v2; // esi@1
  int v3; // edi@2
  int v4; // ebx@3
  char v5; // al@5
  int v6; // eax@6
  int v8; // [sp+Ch] [bp-Ch]@6
  int v9; // [sp+10h] [bp-8h]@1
  int v10; // [sp+14h] [bp-4h]@1

  v9 = 0;
  v2 = a1;
  (*(void (__stdcall **)(int, int *))(*(_DWORD *)a1 + 32))(a1, &v9);
  sub_DBA4BFA(v9);
  if ( v10 && (v3 = a2) != 0 )
  {
    sub_DC805FF(v2);
    a1 = 0;
    sub_DC819C4(&a1, v3);
    (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v3 + 280))(v3, "dwMsgSeq", ++*(_DWORD *)(v2 + 24));
    v4 = sub_DC800E0(a1, v3);
    if ( v4 )
    {
      v5 = sub_DBBBB1E(v2);
      sub_DB8B1E3(L"file", 585, L"func", 2, L"ChatFrame", L"BeforeDirectSendMsg fail toUin = [%lu]", v5);
    }
    else
    {
      v4 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v2 + 64))(v2, a1, v3);//=====================> 0DC7B957/sub_DC7B36B
    }
    v6 = *(_DWORD *)v3;
    v8 = 0;
    (*(void (__stdcall **)(int, const char *, int *))(v6 + 32))(v3, "bPreventClearMsgInEdit", &v8);
    if ( !v8 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 964))(v10);
    sub_DB86E7B(&a1);
  }
  else
  {
    v4 = -2147024809;
  }
  sub_DB86E7B(&v10);
  sub_DB86E7B(&v9);
  return v4;
}
 
 
 
 
 	  
	  
//==================================================================================================================================
0019DA2C 0DBA38EB 0DC7A71D 18       appframework.0DC7A71D      用户模块
signed int __stdcall sub_DC7A651(unsigned int a1, signed int a2, int a3)
{
  int v3; // esi@9
  Util::ChatSession *v4; // edi@9
  char v5; // al@15
  int v6; // esi@17
  int v8; // eax@39
  unsigned int v9; // ebx@41
  int v10; // eax@41
  unsigned int v11; // esi@41
  void (__stdcall *v12)(unsigned int, const char *, int); // edi@41
  int v13; // eax@41
  int v14; // esi@41
  int v15; // esi@46
  int v16; // esi@50

  if ( a2 <= 144 )
  {
    if ( a2 == 144 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)(a1 - 8) + 52))(a1 - 8);
      return -2147467263;
    }
    if ( a2 > 116 )
    {
      if ( a2 != 126 )
      {
        if ( a2 == 127 )
          goto LABEL_27;
        if ( a2 <= 128 || a2 > 130 && a2 != 132 )
          return -2147467263;
      }
    }
    else if ( a2 != 116 )
    {
      if ( a2 != 100 )
      {
        if ( a2 != 104 )
        {
          if ( a2 != 105 )
          {
            if ( a2 == 109 )
            {
              v3 = a1 - 8;
              v4 = (Util::ChatSession *)sub_DBBBB1E(a1 - 8);
              if ( Util::Contact::IsUinFoldInFilterMsgBox(v4) )
              {
                Util::DataReport2::DataReport((Util::DataReport2 *)0x800B6A1, 0x2710u);
              }
              else if ( Util::ChatSession::IsNodeFoldInMsgBox(v4) )
              {
                a2 = 0;
                BYTE3(a1) = -1;
                sub_DC7F429(&a2);
                (*(void (__stdcall **)(signed int, Util::ChatSession *, char *))(*(_DWORD *)a2 + 36))(
                  a2,
                  v4,
                  (char *)&a1 + 3);
                Util::DataReport2::DataReport((Util::DataReport2 *)0x800B6A1, BYTE3(a1));
                sub_DB86E7B(&a2);
              }
              if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)v3 + 60))(v3, a3) < 0 )	//=====================> 0DC7AFC8/sub_DC7AF48
              {
                v5 = sub_DBBBB1E(v3);
                sub_DB8B1E3(L"file", 315, L"func", 2, L"ChatFrame", L"SendMsg fail toUin = [%lu], SendMsg fail", v5);
              }
              else
              {
                sub_DC817CD(a3);
              }
              return 0;
            }
            return -2147467263;
          }
          sub_DC84FE4(a3);
          return 0;
        }
LABEL_27:
        sub_DC84EB1(a3);
        return 0;
      }
      v6 = a3;
      if ( a3 )
        (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a3 + 240))(a3, "b_showmsg_from_receivemsg", 1);
      (*(void (__stdcall **)(int, int))(*(_DWORD *)(a1 - 8) + 80))(a1 - 8, v6);
      return -2147467263;
    }
    return sub_DC81A63(a2, a3);
  }
  if ( a2 > 173 )
  {
    if ( a2 != 216 )
    {
      if ( a2 == 217 )
      {
        sub_DC85402(a3);
        return 0;
      }
      if ( a2 == 236 )
      {
        a2 = 0;
        v16 = a1 - 8;
        (*(void (__stdcall **)(int, signed int *))(*(_DWORD *)(a1 - 8) + 32))(a1 - 8, &a2);
        sub_DBA4BFA(a2);
        if ( a3 )
        {
          sub_DBBBB1E(v16);
          if ( sub_DBBBB1E(v16) == 1421604270 || sub_DBBBB1E(v16) == -1913857496 )
          {
            a1 = 0;
            sub_DB8AB5D(a3, L"PubAccBGTip", &a1);
            if ( a1 )
              (*(void (__stdcall **)(unsigned int, signed int))(*(_DWORD *)a1 + 348))(a1, 1);
            sub_DB86E7B(&a1);
          }
        }
        sub_DB86E7B(&a3);
        sub_DB86E7B(&a2);
      }
      else if ( a2 == 237 )
      {
        a2 = 0;
        v15 = a3;
        if ( a3 )
        {
          (*(void (__stdcall **)(int, const char *, void *, signed int *))(*(_DWORD *)a3 + 136))(
            a3,
            "iMsgPack",
            &unk_DD03E98,
            &a2);
          if ( a2 )
            (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)(a1 - 8) + 68))(a1 - 8, a2, v15);
        }
        sub_DB86E7B(&a2);
        return 0;
      }
      return -2147467263;
    }
    return sub_DC81A63(a2, a3);
  }
  if ( a2 != 173 )
  {
    if ( a2 == 155 )
    {
      v8 = sub_DC7F162(a1 - 8);
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 200))(v8);
    }
    else
    {
      if ( a2 == 161 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)(a1 - 8) + 116))(a1 - 8, a3);
        return 0;
      }
      if ( a2 == 167 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)(a1 - 8) + 84))(a1 - 8, a3);
      }
      else if ( a2 == 168 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)(a1 - 8) + 88))(a1 - 8, a3);
      }
    }
    return -2147467263;
  }
  v9 = a1;
  sub_DC84564(1);
  v10 = *(_DWORD *)(v9 + 188);
  a1 = 0;
  (*(void (__stdcall **)(int, unsigned int *))(*(_DWORD *)v10 + 196))(v10, &a1);
  v11 = a1;
  v12 = *(void (__stdcall **)(unsigned int, const char *, int))(*(_DWORD *)a1 + 280);
  v13 = sub_DBBBB1E(v9 - 8);
  v12(v11, "dwChatFrameID", v13);
  (*(void (__stdcall **)(_DWORD, unsigned int))(**(_DWORD **)(v9 + 188) + 200))(*(_DWORD *)(v9 + 188), a1);
  v14 = sub_DC81A63(173, a3);
  sub_DB86E7B(&a1);
  return v14;
}
 
 
 
 	  
	  
//==================================================================================================================================
0019DA44 0E6B808E 0DBA38EB 18       appframework.0DBA38EB      用户模块

int __stdcall sub_DBA38BF(int a1, int a2, int a3)
{
  int v3; // esi@2

  sub_DB869A8(*(_DWORD *)(a1 - 4));
  if ( a1 )
    v3 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, a3);//=====================> 0DC7A71D/sub_DC7A651
  else
    v3 = -2147467259;
  sub_DB86E7B(&a1);
  return v3;
}
 
 
 
 
 	  
	  
//==================================================================================================================================
0019DA5C 0E6BB747 0E6B808E 430      chatframeapp.0E6B808E      用户模块
 
 int __stdcall sub_E6B8062(int a1, int a2, int a3)
{
  int v3; // esi@2

  sub_E610F7F(*(_DWORD *)(a1 - 4));
  if ( a1 )
    v3 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, a3);//=====================> 0DBA38EB/sub_DBA38BF
  else
    v3 = -2147467259;
  sub_E607009(&a1);
  return v3;
}
 
 
 	  
	  
//==================================================================================================================================
0019DE8C 0DBAADDE 0E6BB747 538      chatframeapp.0E6BB747      用户模块

int __stdcall sub_E6BB53D(int a1, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // eax@7
  __int16 v5; // ax@7
  signed int v6; // edx@9
  unsigned int v7; // ecx@9
  const wchar_t *v8; // esi@9
  unsigned int v9; // ecx@12
  void *v10; // ebx@13
  int j; // esi@13
  unsigned int v12; // ecx@17
  const wchar_t *v13; // esi@17
  void *v14; // ebx@21
  int i; // esi@21
  int v16; // eax@24
  int v17; // ebx@26
  void (__stdcall *v18)(int, int); // esi@27
  int v19; // eax@27
  int v21; // eax@30
  int v22; // eax@31
  void *Memory; // [sp+10h] [bp-40Ch]@13
  __int16 v24[512]; // [sp+18h] [bp-404h]@11

  v3 = a3;
  if ( a2 != 144 )
  {
    if ( a2 != 145 )
    {
      if ( a2 == 233 )
      {
        sub_E6BCF78(a3);
      }
      else if ( a2 == 234 )
      {
        sub_E6BCF33(a3);
      }
      return sub_E6B8062(a1, a2, v3); //=====================> 0E6B808E/sub_E6B8062
    }
    v4 = sub_E6B8015(a1 - 8);
    v5 = Util::Contact::GetStatus(v4, 0);
    if ( v5 == 20 || v5 == 40 )
    {
      v6 = 79;
      v12 = 0;
      *(_DWORD *)(a1 + 300) = 1;
      v13 = L"OnReport(L\"0x8002768\")";
      do
      {
        if ( (_WORD)v6 == 40 )
          break;
        ++v13;
        v24[v12++] = v6;
        v6 = *v13;
      }
      while ( (_WORD)v6 );
      v9 = v12;
      if ( v9 < 512 )
      {
        v24[v9] = 0;
        sub_E617ABE(&Memory, 0, v24);
        v14 = Memory;
        for ( i = *(_DWORD *)Memory; (void *)i != v14; i = *(_DWORD *)i )
          (*(void (__stdcall **)(_DWORD, const wchar_t *))(**(_DWORD **)(i + 8) + 28))(*(_DWORD *)(i + 8), L"0x8002768");
        goto LABEL_24;
      }
    }
    else
    {
      v6 = 79;
      v7 = 0;
      *(_DWORD *)(a1 + 296) = 1;
      v8 = L"OnReport(L\"0x800276a\")";
      do
      {
        if ( (_WORD)v6 == 40 )
          break;
        ++v8;
        v24[v7++] = v6;
        v6 = *v8;
      }
      while ( (_WORD)v6 );
      v9 = v7;
      if ( v9 < 512 )
      {
        v24[v9] = 0;
        sub_E617ABE(&Memory, 0, v24);
        v10 = Memory;
        for ( j = *(_DWORD *)Memory; (void *)j != v10; j = *(_DWORD *)j )
          (*(void (__stdcall **)(_DWORD, const wchar_t *))(**(_DWORD **)(j + 8) + 28))(*(_DWORD *)(j + 8), L"0x800276a");
LABEL_24:
        sub_E6079DB(&Memory);
        sub_E606E90(Memory, 12);
        v16 = sub_E6B8015(a1 - 8);
        if ( Util::Contact::IsNewFlagValid(v16, 26) )
          Util::DataReport2::DataReport(
            (Util::DataReport2 *)0x80067E5,
            0,
            0,
            (unsigned __int32)&word_E797FAC,
            &word_E797FAC,
            0);
        v17 = *(_DWORD *)(a1 + 268);
        if ( v17 )
        {
          v18 = *(void (__stdcall **)(int, int))(*(_DWORD *)v17 + 28);
          v19 = sub_E6B8015(a1 - 8);
          v18(v17, v19);
        }
        v3 = a3;
        return sub_E6B8062(a1, a2, v3);
      }
    }
    sub_E78EBE8(v9 * 2, v6);
    __debugbreak();
    JUMPOUT(*(_DWORD *)sub_E6BB790);
  }
  v21 = sub_E6B8015(a1 - 8);
  if ( !Util::Contact::IsBuddy(v21) )
  {
    v22 = sub_E6B8015(a1 - 8);
    if ( !Util::Contact::IsStranger(v22) )
      sub_E6BE062(a1 - 8);
  }
  return sub_E6B8062(a1, a2, v3);
}
 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019E3C4 0DCBA86B 0DBAADDE 7C       appframework.0DBAADDE      用户模块
//=====================> 0E6BB747/sub_E6BB53D
//IDA 反编译不了
 
 
 
 	  
	  
//==================================================================================================================================
0019E440 0E63BFA8 0DCBA86B 18       appframework.0DCBA86B      用户模块
int __stdcall sub_DCBA2CE(int a1, signed int a2, int a3)
{
  int v3; // edi@1
  void (__stdcall *v4)(int, const char *, int); // esi@10
  int v5; // eax@10
  void (__stdcall *v6)(int, const char *, int); // esi@10
  int v7; // eax@10
  int v8; // eax@10
  void (__stdcall *v9)(int, int); // esi@12
  int v10; // eax@12
  int v11; // edi@12
  void (__stdcall *v12)(int, int); // esi@12
  int v13; // eax@12
  int result; // eax@13
  void (__stdcall *v15)(int, const char *, int); // esi@15
  int v16; // eax@15
  int v17; // eax@15
  int (__stdcall *v18)(int, int); // esi@17
  int v19; // eax@17
  int v20; // esi@17
  int v21; // eax@18
  int v22; // ecx@21
  int v23; // ecx@28
  int v24; // eax@30
  int v25; // eax@39
  int v26; // eax@40
  int v27; // esi@40
  void (__stdcall *v28)(int, int); // edi@41
  int v29; // eax@41
  int *v30; // ecx@44
  int v31; // eax@48
  int v32; // eax@49
  int v33; // eax@50
  int v34; // eax@50
  int v35; // eax@50
  _DWORD *i; // esi@57
  int v37; // [sp+Ch] [bp-5Ch]@1
  int v38; // [sp+10h] [bp-58h]@15
  int v39; // [sp+14h] [bp-54h]@10
  int v40; // [sp+18h] [bp-50h]@10
  int v41; // [sp+1Ch] [bp-4Ch]@10
  int v42; // [sp+20h] [bp-48h]@1
  __int128 v43; // [sp+24h] [bp-44h]@50
  __int128 v44; // [sp+34h] [bp-34h]@50
  int v45; // [sp+44h] [bp-24h]@52
  LONG v46; // [sp+48h] [bp-20h]@52
  LONG v47; // [sp+4Ch] [bp-1Ch]@52
  LONG v48; // [sp+50h] [bp-18h]@52
  struct tagRECT rc; // [sp+54h] [bp-14h]@50

  v3 = a3;
  v42 = a3;
  v37 = -2147467263;
  if ( a2 > 188 )
  {
    if ( a2 == 190 )
    {
      v40 = 0;
      v31 = sub_DB8601D(a1 - 32);
      sub_DB8AB5D(v31, L"ChatFrameDockPanel", &v40);
      if ( v40 )
      {
        v41 = 0;
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v40 + 264))(v40, &v41);
        v32 = sub_DB8601D(a1 - 32);
        if ( v41 == v32 )
        {
          v42 = 0;
          v33 = sub_DB8601D(a1 - 32);
          sub_DB8AB5D(v33, L"SidebarCtrl", &v42);
          v34 = *(_DWORD *)(a1 - 32);
          v44 = 0i64;
          (*(void (__stdcall **)(int, __int128 *))(v34 + 600))(a1 - 32, &v44);
          v35 = *(_DWORD *)(a1 - 32);
          v43 = 0i64;
          (*(void (__stdcall **)(int, __int128 *))(v35 + 280))(a1 - 32, &v43);
          rc = 0i64;
          if ( v42 )
          {
            (*(void (__stdcall **)(int, struct tagRECT *))(*(_DWORD *)v42 + 600))(v42, &rc);
            OffsetRect(&rc, -(signed int)v44, -DWORD1(v44));
          }
          v45 = v43;
          v47 = rc.left;
          v46 = rc.top;
          v48 = rc.top + 1;
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)(a1 - 32) + 196))(a1 - 32, &v45);
          sub_DB86E7B(&v42);
        }
        sub_DB86E7B(&v41);
      }
      sub_DB86E7B(&v40);
      goto LABEL_55;
    }
    if ( a2 == 191 )
    {
      sub_DCBCA70(a1 - 32);
      return 0;
    }
    if ( a2 == 195 )
    {
      v40 = 0;
      sub_DB8AAE5(&v40);
      (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v40 + 240))(v40, "bShow", 1);
      (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v40 + 240))(v40, "bismousein", 0);
      (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)a1 + 28))(a1, 199, v40);
      v30 = &v40;
    }
    else
    {
      if ( a2 != 196 )
      {
        if ( a2 == 197 )
        {
          (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)a1 + 28))(a1, 202, a3);
          return 0;
        }
        if ( a2 == 231 )
        {
          v26 = *(_DWORD *)a3;
          v40 = 0;
          (*(void (__stdcall **)(int, const char *, void *, int *))(v26 + 136))(a3, "pTabButton", &unk_DD41630, &v40);
          CTXBSTR::CTXBSTR(&v41);
          v27 = v40;
          if ( v40 )
          {
            v28 = *(void (__stdcall **)(int, int))(*(_DWORD *)v40 + 164);
            v29 = CTXBSTR::operator&(&v41);
            v28(v27, v29);
            v3 = v42;
          }
          CTXStringW::CTXStringW(&v39, &v41);
          *(_DWORD *)(a1 + 316) = (unsigned __int8)operator==(&v39, L"GroupInfoTabBtn");
          sub_DCBBD02(a1 - 32);
          CTXStringW::~CTXStringW((CTXStringW *)&v39);
          CTXBSTR::~CTXBSTR((CTXBSTR *)&v41);
          sub_DB86E7B(&v40);
          goto LABEL_55;
        }
        if ( a2 != 232 )
          goto LABEL_55;
        v25 = *(_DWORD *)a3;
        v42 = 0;
        (*(void (__stdcall **)(int, const char *, int *))(v25 + 32))(a3, "bEnableVSplitter", &v42);
        *(_DWORD *)(a1 + 324) = v42;
LABEL_19:
        sub_DCBBD02(a1 - 32);
        goto LABEL_55;
      }
      v42 = 0;
      sub_DB8AAE5(&v42);
      (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v42 + 240))(v42, "bShow", 0);
      (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)a1 + 28))(a1, 199, v42);
      v30 = &v42;
    }
    sub_DB86E7B(v30);
    return 0;
  }
  if ( a2 == 188 )
  {
    v24 = *(_DWORD *)a3;
    v42 = 0;
    (*(void (__stdcall **)(int, const char *, int *))(v24 + 32))(a3, "bAIOMaterialTransparent", &v42);
    if ( v42 != *(_DWORD *)(a1 + 264) )
    {
      *(_DWORD *)(a1 + 264) = v42;
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)(a1 - 32) + 196))(a1 - 32, 0);
    }
    return 0;
  }
  if ( a2 > 163 )
  {
    if ( a2 != 164 )
    {
      if ( a2 != 165 && a2 == 174 )
        return sub_DCBC176(a1 - 32);
      goto LABEL_55;
    }
    *(_DWORD *)(a1 + 176) = 0;
    v23 = *(_DWORD *)(a1 - 32);
    v42 = 0;
    (*(void (__stdcall **)(int, int *))(v23 + 948))(a1 - 32, &v42);
    sub_DB869A8(v42);
    if ( v41 )
      (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)v41 + 28))(v41, 164, a3);
LABEL_23:
    sub_DB86E7B(&v41);
    sub_DB86E7B(&v42);
    goto LABEL_55;
  }
  if ( a2 == 163 )
  {
    *(_DWORD *)(a1 + 176) = 1;
    v22 = *(_DWORD *)(a1 - 32);
    v42 = 0;
    (*(void (__stdcall **)(int, int *))(v22 + 948))(a1 - 32, &v42);
    sub_DB869A8(v42);
    if ( v41 )
      (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)v41 + 28))(v41, 163, a3);
    goto LABEL_23;
  }
  if ( a2 == 136 )
    return sub_DCBB9D7(a3);
  if ( a2 == 142 )
  {
    v21 = *(_DWORD *)a3;
    v42 = 0;
    (*(void (__stdcall **)(int, const char *, int *))(v21 + 32))(a3, "bShow", &v42);
    *(_DWORD *)(a1 + 320) = v42;
    goto LABEL_19;
  }
  if ( a2 == 156 )
  {
    if ( a3 )
    {
      CTXBSTR::CTXBSTR(&v41);
      v15 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a3 + 112);
      v16 = CTXBSTR::operator&(&v41);
      v15(a3, "bsTitle", v16);
      v17 = *(_DWORD *)(a1 + 48);
      v38 = v17;
      if ( v17 )
      {
        v18 = *(int (__stdcall **)(int, int))(*(_DWORD *)v17 + 20);
        v19 = CTXBSTR::operator wchar_t *(&v41);
        v20 = v18(v38, v19);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v41);
        return v20;
      }
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v41);
    }
    goto LABEL_55;
  }
  if ( a2 == 157 && a3 )
  {
    CTXBSTR::CTXBSTR(&v41);
    CTXBSTR::CTXBSTR(&v40);
    v4 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a3 + 112);
    v5 = CTXBSTR::operator&(&v41);
    v4(v42, "bsBigIcon", v5);
    v6 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v42 + 112);
    v7 = CTXBSTR::operator&(&v40);
    v3 = v42;
    v6(v42, "bsSmallIcon", v7);
    v8 = *(_DWORD *)(a1 + 48);
    v39 = v8;
    if ( !v8 )
    {
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v40);
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v41);
      goto LABEL_55;
    }
    v9 = *(void (__stdcall **)(int, int))(*(_DWORD *)v8 + 32);
    v10 = CTXBSTR::operator wchar_t *(&v41);
    v9(v39, v10);
    v11 = *(_DWORD *)(a1 + 48);
    v12 = *(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 28);
    v13 = CTXBSTR::operator wchar_t *(&v40);
    v12(v11, v13);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v40);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v41);
    return 0;
  }
LABEL_55:
  if ( (*(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 164)) & 0xFFFFFFFC )
  {
    sub_DB86C76(a1 + 164);
    for ( i = (_DWORD *)rc.top; i != (_DWORD *)rc.right; ++i )
    {
      sub_DB86AFC(*i);
      if ( !v42
        || (v41 = -1, (*(void (__stdcall **)(int, int *))(*(_DWORD *)v42 + 976))(v42, &v41), v41 != 2) && v41 != 3 )
      {
        sub_DB869A8(*i);
        if ( v40 )
        {
          v37 = (*(int (__stdcall **)(int, signed int, int))(*(_DWORD *)v40 + 28))(v40, a2, v3); //=====================> 0DBAADDE/
          if ( v37 >= 0 )
          {
            sub_DB86E7B(&v40);
            sub_DB86E7B(&v42);
            break;
          }
        }
        sub_DB86E7B(&v40);
      }
      sub_DB86E7B(&v42);
    }
    if ( a2 == 145 )
    {
      v42 = 0;
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)(a1 - 32) + 948))(a1 - 32, &v42);
      sub_DCBB4EC(v42);
      if ( v39 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 44))(v39);
      sub_DB86E7B(&v39);
      sub_DB86E7B(&v42);
    }
    sub_DB88C32(&rc.top);
    result = v37;
  }
  else
  {
    result = -2147467263;
  }
  return result;
}

 
	  
//==================================================================================================================================
0019E458 0E6C51FF 0E63BFA8 450      chatframeapp.0E63BFA8      用户模块

int __stdcall sub_E63BF7C(int a1, int a2, int a3)
{
  int v3; // esi@2

  sub_E610F7F(*(_DWORD *)(a1 - 24));
  if ( a1 )
    v3 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, a3);//=====================> 0DCBA86B/sub_DCBA2CE
  else
    v3 = -2147467259;
  sub_E607009(&a1);
  return v3;
}
 
 
 
 
 	  
	  
//==================================================================================================================================
0019E8A8 0E6B590F 0E6C51FF 44C      chatframeapp.0E6C51FF      用户模块

signed int __stdcall sub_E6C4B62(int a1, int a2, int a3)
{
  int v3; // edi@1
  int *v4; // esi@6
  int v5; // eax@6
  int v6; // ecx@6
  int v7; // eax@8
  unsigned __int32 v8; // eax@10
  const wchar_t *v9; // edi@10
  int v10; // edx@10
  __int16 v11; // si@10
  unsigned int v12; // edx@13
  void *v13; // ebx@14
  int l; // esi@14
  unsigned int v16; // ebx@19
  Util::ChatSession *v17; // esi@19
  void (__stdcall *v18)(Util::ChatSession *, const char *, int); // edi@19
  int v19; // eax@19
  const wchar_t *v20; // esi@19
  unsigned int v21; // ebx@22
  int m; // esi@23
  Util::ChatSession *v23; // edi@24
  void (__stdcall *v24)(Util::ChatSession *, int, signed int, Util::ChatSession *); // ebx@24
  int v25; // eax@24
  int *v26; // ecx@25
  unsigned int v27; // ebx@26
  Util::ChatSession *v28; // esi@26
  void (__stdcall *v29)(Util::ChatSession *, const char *, int); // edi@26
  int v30; // eax@26
  const wchar_t *v31; // esi@26
  unsigned int v32; // ebx@29
  int k; // esi@30
  Util::ChatSession *v34; // edi@31
  void (__stdcall *v35)(Util::ChatSession *, int, signed int, Util::ChatSession *); // ebx@31
  int v36; // eax@31
  unsigned int v37; // ebx@35
  int v38; // esi@35
  void (__stdcall *v39)(int, const char *, int); // edi@35
  int v40; // eax@35
  const wchar_t *v41; // esi@38
  unsigned int v42; // ebx@41
  int i; // esi@42
  int v44; // edi@43
  void (__stdcall *v45)(Util::ChatSession *, int, signed int, int); // ebx@43
  int v46; // eax@43
  const wchar_t *v47; // esi@45
  unsigned int v48; // ebx@48
  int j; // esi@49
  int v50; // edi@50
  void (__stdcall *v51)(Util::ChatSession *, int, signed int, int); // ebx@50
  int v52; // eax@50
  void *Memory; // [sp+10h] [bp-42Ch]@14
  void *v54; // [sp+18h] [bp-424h]@23
  Util::ChatSession *v55; // [sp+1Ch] [bp-420h]@6
  int v56; // [sp+20h] [bp-41Ch]@8
  Util::ChatSession *v57; // [sp+24h] [bp-418h]@6
  int v58; // [sp+28h] [bp-414h]@8
  int v59; // [sp+2Ch] [bp-410h]@1
  int v60; // [sp+30h] [bp-40Ch]@8
  Util::ChatSession *v61; // [sp+34h] [bp-408h]@6
  __int16 v62[512]; // [sp+38h] [bp-404h]@12

  v59 = a1;
  v3 = a3;
  if ( a2 == 122 )
  {
    v55 = (Util::ChatSession *)1;
    if ( a3 )
      (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a3 + 72))(a3, "dwActivateState", (int *)&v55);
    v37 = 0;
    v58 = 0;
    Util::Data::CreateTXData((Util::Data *)&v58);
    v38 = v58;
    v39 = *(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v58 + 288);
    v40 = sub_E6C56E2(v59 - 32);
    v39(v38, "nChatFrameType", v40);
    v56 = 0;
    v60 = 0;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)(v59 - 32) + 948))(v59 - 32, &v60);
    if ( v60 )
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v60 + 24))(v60, &v56);
    (*(void (__stdcall **)(int, const char *, const char *, int))(*(_DWORD *)v58 + 344))(
      v58,
      "interfaceChatType",
      "凲p1qE碬'曔c遀C",
      v56);
    v61 = 0;
    if ( v55 )
    {
      ChatFrameExtMatch::CreateMatch(1, 4, &v61);
      v41 = L"OnEvent(GetId(), ChatFrame::CF_GetFocus, pExtraInfo)";
      v12 = 79;
      do
      {
        if ( (_WORD)v12 == 40 )
          break;
        ++v41;
        v62[v37++] = v12;
        v12 = *v41;
      }
      while ( (_WORD)v12 );
      v42 = v37;
      if ( v42 >= 512 )
        goto LABEL_55;
      v62[v42] = 0;
      sub_E62CE85(&Memory, v61, v62);
      for ( i = *(_DWORD *)Memory; (void *)i != Memory; i = *(_DWORD *)i )
      {
        v44 = v58;
        v57 = *(Util::ChatSession **)(i + 8);
        v45 = *(void (__stdcall **)(Util::ChatSession *, int, signed int, int))(*(_DWORD *)v57 + 12);
        v46 = sub_E6C5754(v59 - 32);
        v45(v57, v46, 4, v44);
      }
    }
    else
    {
      ChatFrameExtMatch::CreateMatch(1, 54, &v61);
      v47 = L"OnEvent(GetId(), ChatFrame::CF_MissFocus, pExtraInfo)";
      v12 = 79;
      do
      {
        if ( (_WORD)v12 == 40 )
          break;
        ++v47;
        v62[v37++] = v12;
        v12 = *v47;
      }
      while ( (_WORD)v12 );
      v48 = v37;
      if ( v48 >= 512 )
        goto LABEL_55;
      v62[v48] = 0;
      sub_E62CE85(&Memory, v61, v62);
      for ( j = *(_DWORD *)Memory; (void *)j != Memory; j = *(_DWORD *)j )
      {
        v50 = v58;
        v57 = *(Util::ChatSession **)(j + 8);
        v51 = *(void (__stdcall **)(Util::ChatSession *, int, signed int, int))(*(_DWORD *)v57 + 12);
        v52 = sub_E6C5754(v59 - 32);
        v51(v57, v52, 54, v50);
      }
    }
    sub_E6079DB(&Memory);
    sub_E606E90(Memory, 12);
    sub_E607009(&v61);
    sub_E607009(&v60);
    sub_E607009(&v56);
    v26 = &v58;
  }
  else
  {
    if ( a2 == 163 )
    {
      v27 = 0;
      v61 = 0;
      Util::Data::CreateTXData((Util::Data *)&v61);
      v28 = v61;
      v29 = *(void (__stdcall **)(Util::ChatSession *, const char *, int))(*(_DWORD *)v61 + 288);
      v30 = sub_E6C56E2(v59 - 32);
      v29(v28, "nChatFrameType", v30);
      v60 = 0;
      ChatFrameExtMatch::CreateMatch(1, 55, &v60);
      v31 = L"OnEvent(GetId(), ChatFrame::CF_ChatViewSelected, pExtraSelectedInfo)";
      v12 = 79;
      do
      {
        if ( (_WORD)v12 == 40 )
          break;
        ++v31;
        v62[v27++] = v12;
        v12 = *v31;
      }
      while ( (_WORD)v12 );
      v32 = v27;
      if ( v32 >= 512 )
        goto LABEL_55;
      v62[v32] = 0;
      sub_E62CE85(&v54, v60, v62);
      for ( k = *(_DWORD *)v54; (void *)k != v54; k = *(_DWORD *)k )
      {
        v34 = v61;
        v57 = *(Util::ChatSession **)(k + 8);
        v35 = *(void (__stdcall **)(Util::ChatSession *, int, signed int, Util::ChatSession *))(*(_DWORD *)v57 + 12);
        v36 = sub_E6C5754(v59 - 32);
        v35(v57, v36, 55, v34);
      }
    }
    else
    {
      if ( a2 != 164 )
      {
        if ( a2 != 173 || !a3 )
          return sub_E63BF7C(v59, a2, v3); //=====================> 0E63BFA8/sub_E63BF7C
        v4 = (int *)(v59 - 32);
        v55 = 0;
        v61 = 0;
        v5 = sub_E6C5754(v59 - 32);
        v6 = *(_DWORD *)a3;
        v57 = (Util::ChatSession *)v5;
        (*(void (__stdcall **)(int, const char *, int *))(v6 + 72))(a3, "dwOldId", (int *)&v55);
        (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a3 + 72))(a3, "dwNewId", (int *)&v61);
        if ( v57 != v55 || v57 == v61 )
          return -2147467259;
        v7 = *v4;
        v60 = 0;
        v56 = 0;
        v58 = 0;
        (*(void (__stdcall **)(int *, int *))(v7 + 948))(v4, &v58);
        if ( v58 )
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v58 + 24))(v58, &v60);
        v8 = sub_E6C56E2(v4);
        Util::ChatSession::CreateChatFrameType(v61, v8, &v56, 0);
        v9 = L"OnChangeSessionType(pType, pNewType)";
        v10 = 0;
        v11 = 79;
        do
        {
          if ( v11 == 40 )
            break;
          ++v9;
          v62[v10++] = v11;
          v11 = *v9;
        }
        while ( *v9 );
        v3 = a3;
        v12 = 2 * v10;
        if ( v12 < 0x400 )
        {
          *(__int16 *)((char *)v62 + v12) = 0;
          sub_E6C532B(&Memory, 0, v62);
          v13 = Memory;
          for ( l = *(_DWORD *)Memory; (void *)l != v13; l = *(_DWORD *)l )
            (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(l + 8) + 16))(*(_DWORD *)(l + 8), v60, v56);
          sub_E6079DB(&Memory);
          sub_E606E90(Memory, 12);
          sub_E6C57C5(v61);
          sub_E607009(&v58);
          sub_E607009(&v56);
          sub_E607009(&v60);
          return sub_E63BF7C(v59, a2, v3);
        }
LABEL_55:
        sub_E78EBE8(40, v12);
        __debugbreak();
        JUMPOUT(*(_DWORD *)sub_E6C5216);
      }
      v16 = 0;
      v61 = 0;
      Util::Data::CreateTXData((Util::Data *)&v61);
      v17 = v61;
      v18 = *(void (__stdcall **)(Util::ChatSession *, const char *, int))(*(_DWORD *)v61 + 288);
      v19 = sub_E6C56E2(v59 - 32);
      v18(v17, "nChatFrameType", v19);
      v60 = 0;
      ChatFrameExtMatch::CreateMatch(1, 56, &v60);
      v20 = L"OnEvent(GetId(), ChatFrame::CF_ChatViewSelectedCancelled, pUnSelectedExtraInfo)";
      v12 = 79;
      do
      {
        if ( (_WORD)v12 == 40 )
          break;
        ++v20;
        v62[v16++] = v12;
        v12 = *v20;
      }
      while ( (_WORD)v12 );
      v21 = v16;
      if ( v21 >= 512 )
        goto LABEL_55;
      v62[v21] = 0;
      sub_E62CE85(&v54, v60, v62);
      for ( m = *(_DWORD *)v54; (void *)m != v54; m = *(_DWORD *)m )
      {
        v23 = v61;
        v57 = *(Util::ChatSession **)(m + 8);
        v24 = *(void (__stdcall **)(Util::ChatSession *, int, signed int, Util::ChatSession *))(*(_DWORD *)v57 + 12);
        v25 = sub_E6C5754(v59 - 32);
        v24(v57, v25, 56, v23);
      }
    }
    sub_E6079DB(&v54);
    sub_E606E90(v54, 12);
    sub_E607009(&v60);
    v26 = (int *)&v61;
  }
  sub_E607009(v26);
  v3 = a3;
  return sub_E63BF7C(v59, a2, v3);
}
 
 
 
 
 	  
	  
//==================================================================================================================================
0019ECF4 0E60DEA8 0E6B590F 20       chatframeapp.0E6B590F      用户模块

int __thiscall sub_E6B55B0(int this, int a2)
{
  int v2; // ST1C_4@1
  const wchar_t *v3; // esi@1
  int v4; // ecx@1
  __int16 v5; // di@1
  const wchar_t *v6; // edx@1
  int *v7; // ebx@4
  unsigned int v8; // ecx@4
  int v9; // esi@5
  void *v10; // edi@6
  int v11; // eax@9
  int v12; // eax@10
  _DWORD *v13; // edi@16
  int j; // esi@16
  void *v15; // edi@25
  int i; // esi@25
  int v17; // eax@32
  void *v19; // [sp-8h] [bp-440h]@19
  int v20; // [sp+Ch] [bp-42Ch]@30
  int v21; // [sp+10h] [bp-428h]@9
  int v22; // [sp+14h] [bp-424h]@11
  int v23; // [sp+18h] [bp-420h]@30
  int v24; // [sp+1Ch] [bp-41Ch]@30
  int v25; // [sp+20h] [bp-418h]@1
  void *Memory; // [sp+24h] [bp-414h]@5
  int v27; // [sp+28h] [bp-410h]@10
  _DWORD *v28; // [sp+2Ch] [bp-40Ch]@16
  int *v29; // [sp+30h] [bp-408h]@1
  __int16 v30[512]; // [sp+34h] [bp-404h]@3

  v25 = this;
  v2 = *(_DWORD *)(this + 156);
  v29 = (int *)a2;
  sub_E606DC2(
    L"file",
    333,
    L"func",
    2,
    L"ChatFrame",
    L"CBottomFrameCtrlLogic::OnClickSendMsgButton [uin] = %lu [chattype] = %d",
    *(_DWORD *)(this + 152));
  v3 = L"OnReport(L\"5F22A41E-4B41-477F-AC5B-B81FF9E92D9C\")";
  v4 = 0;
  v5 = 79;
  v6 = (const wchar_t *)79;
  do
  {
    if ( (_WORD)v6 == 40 )
      break;
    ++v3;
    v30[v4++] = (signed __int16)v6;
    v6 = (const wchar_t *)*v3;
  }
  while ( (_WORD)v6 );
  v7 = v29;
  v8 = 2 * v4;
  if ( v8 >= 0x400 )
    goto LABEL_37;
  *(__int16 *)((char *)v30 + v8) = 0;
  sub_E617ABE(&Memory, 0, v30);
  v9 = *(_DWORD *)Memory;
  if ( *(void **)Memory != Memory )
  {
    v10 = Memory;
    do
    {
      (*(void (__stdcall **)(_DWORD, const wchar_t *))(**(_DWORD **)(v9 + 8) + 28))(
        *(_DWORD *)(v9 + 8),
        L"5F22A41E-4B41-477F-AC5B-B81FF9E92D9C");
      v9 = *(_DWORD *)v9;
    }
    while ( (void *)v9 != v10 );
    v5 = 79;
  }
  sub_E6079DB(&Memory);
  sub_E606E90(Memory, 12);
  v11 = *(_DWORD *)v25;
  v21 = 0;
  (*(void (__stdcall **)(int, int *))(v11 + 24))(v25, &v21);
  sub_E6AB95C(v21);
  Util::DataReport::SetDataReportBit(
    (Util::DataReport *)0xBC005001,
    (unsigned __int32)"dwCountofSetting4",
    (const char *)9);
  if ( !v7 )
  {
    if ( !v22 )
      goto LABEL_30;
    v6 = L"OnReport(L\"94D96117-2FEF-43AE-B773-5C395242CC11\")";
    v8 = 0;
    do
    {
      if ( v5 == 40 )
        break;
      ++v6;
      v30[v8++] = v5;
      v5 = *v6;
    }
    while ( *v6 );
    v7 = v29;
    if ( 2 * v8 < 0x400 )
    {
      v30[v8] = 0;
      sub_E617ABE(&Memory, 0, v30);
      v15 = Memory;
      for ( i = *(_DWORD *)Memory; (void *)i != v15; i = *(_DWORD *)i )
        (*(void (__stdcall **)(_DWORD, const wchar_t *))(**(_DWORD **)(i + 8) + 28))(
          *(_DWORD *)(i + 8),
          L"94D96117-2FEF-43AE-B773-5C395242CC11");
      sub_E6079DB(&Memory);
      v19 = Memory;
      goto LABEL_29;
    }
LABEL_37:
    sub_E78EBE8(v8, v6);
    __debugbreak();
    JUMPOUT(*(_DWORD *)sub_E6B5977);
  }
  v12 = *v7;
  v27 = 0;
  (*(void (__stdcall **)(int *, const char *, int *))(v12 + 32))(v7, "bDefaultAction", &v27);
  if ( !v27 && v22 )
  {
    v6 = L"OnReport(L\"94D96117-2FEF-43AE-B773-5C395242CC11\")";
    v8 = 0;
    do
    {
      if ( v5 == 40 )
        break;
      ++v6;
      v30[v8++] = v5;
      v5 = *v6;
    }
    while ( *v6 );
    v7 = v29;
    if ( 2 * v8 < 0x400 )
    {
      v30[v8] = 0;
      sub_E617ABE(&v28, 0, v30);
      v13 = v28;
      for ( j = *v28; (_DWORD *)j != v13; j = *(_DWORD *)j )
        (*(void (__stdcall **)(_DWORD, const wchar_t *))(**(_DWORD **)(j + 8) + 28))(
          *(_DWORD *)(j + 8),
          L"94D96117-2FEF-43AE-B773-5C395242CC11");
      sub_E6079DB(&v28);
      v19 = v28;
LABEL_29:
      sub_E606E90(v19, 12);
      goto LABEL_30;
    }
    goto LABEL_37;
  }
LABEL_30:
  v23 = 0;
  (*(void (__stdcall **)(int, int *))(*(_DWORD *)v25 + 32))(v25, &v23);
  sub_E6B45FA(v23);
  sub_E610F7F(v20);
  if ( v24 )
  {
    v29 = 0;
    Util::Data::CreateTXData((Util::Data *)&v29);
    (*(void (__stdcall **)(int, const char *, signed int))(*v29 + 280))((int)v29, "strSendEventSource", 1);
    if ( v7 )
    {
      v17 = *v7;
      v25 = 0;
      if ( (*(int (__stdcall **)(int *, const char *, int *))(v17 + 32))(v7, "bDefaultAction", &v25) >= 0 )
      {
        if ( v25 )
          (*(void (__stdcall **)(int *, const char *, _DWORD))(*v29 + 280))(v29, "strSendEventSource", 0);
      }
    }
    (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)v24 + 28))(v24, 109, (int)v29);//=====================> 0E6C51FF/sub_E6C4B62
    (*(void (__stdcall **)(int, signed int, _DWORD))(*(_DWORD *)v24 + 28))(v24, 108, 0);
    sub_E607009(&v29);
  }
  sub_E607009(&v24);
  sub_E607009(&v20);
  sub_E607009(&v23);
  sub_E607009(&v22);
  return sub_E607009(&v21);
} 
 
 
 
 	  
	  
//==================================================================================================================================
0019ED14 0E60E189 0E60DEA8 18       chatframeapp.0E60DEA8      用户模块

signed int __thiscall sub_E60DE46(int this, int a2, int a3, int a4)
{
  int v4; // edi@1
  signed int result; // eax@2
  int v6; // [sp+4h] [bp-10h]@3
  int v7; // [sp+8h] [bp-Ch]@3
  int v8; // [sp+Ch] [bp-8h]@3
  int v9; // [sp+10h] [bp-4h]@3

  v4 = this;
  if ( *(_DWORD *)(this + 92) )
  {
    sub_E60D281(a3);
    v6 = v9;
    v7 = ((unsigned __int64)v9 >> 32) + a2;
    sub_E60F1F7(&v8, &v6);
    if ( v8 == *(_DWORD *)(v4 + 56) )
    {
      sub_E60F1F7(&v8, &v6);
      if ( v8 != *(_DWORD *)(v4 + 24) )
        (*(void (__thiscall **)(int, int, int, int))(v8 + 16))(*(_DWORD *)(v8 + 20) + *(_DWORD *)(v4 + 92), a2, a3, a4);
    }
    else
    {
      (*(void (__thiscall **)(int, int))(v8 + 16))(*(_DWORD *)(v8 + 20) + *(_DWORD *)(v4 + 92), a4);//=====================> 0E6B590F/sub_E6B55B0
    }
    sub_E607009(&v9);
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}
 
 
 	  
	  
//==================================================================================================================================
0019ED2C 532A9720 0E60E189 80       chatframeapp.0E60E189      用户模块

signed int __stdcall sub_E60E13F(int a1, int a2, int a3, int a4)
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
      return 0x8000FFFF;
  }
  v8 = 0x80004001;
  if ( v4 )
  {
    v9 = *(int **)(a1 + 24);
    if ( v9 )
    {
      v10 = *v9;
      return (*(int (__fastcall **)(int *, signed int, int, int, int))(v10 + 4))(v9, 0x80004001, a2, a3, a4); //=====================> 0E60DEA8/sub_E60DE46
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
    v11 = 0x8000FFFF;
    if ( v15 )
      v11 = 0x80004001;
    return v11;
  }
  return v8;
} 
 	  
	  
//==================================================================================================================================
0019EDAC 531BE1B1 532A9720 70       gf.532A9720                用户模块

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
        (*(void (__fastcall **)(int, int, int, int, unsigned int, int))(*(_DWORD *)v24 + 28))(   
          v22,
          v23,
          v24,
          a2,
          v52,
          a3);    //=====================> 0E60E189/sub_E60E13F
		  
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
0019EE1C 531BFC10 531BE1B1 1C       gf.531BE1B1                用户模块
 
int __thiscall sub_531BE060(void *this, int a2, int a3, _DWORD *a4, int a5, signed int a6)
{
  void *v6; // edi@1
  int v7; // ecx@1
  void (__stdcall ***v8)(_DWORD, _DWORD, _DWORD); // edx@1
  int v9; // eax@5
  _DWORD *v10; // eax@10
  int result; // eax@11
  int v12; // eax@12
  int v13; // eax@17
  void (__stdcall *v14)(int, int); // esi@18
  int v15; // eax@18
  int v16; // ecx@18
  int v17; // eax@18
  int v18; // eax@18
  int v19; // eax@20
  int v20; // eax@20
  int v21; // eax@21
  int v22; // eax@22
  unsigned int v23; // eax@24
  int v24; // eax@30
  int v25; // edx@30
  int v26; // ST08_4@30
  int v27; // esi@30
  int v28; // eax@32
  int v29; // eax@43
  int v30; // eax@44
  int v31; // eax@44
  char *v32; // ecx@44
  bool v33; // zf@46
  int v34; // eax@49
  LONG v35; // eax@49
  int v36; // eax@49
  int v37; // eax@52
  int v38; // eax@52
  int v39; // [sp+4h] [bp-6Ch]@0
  int v40; // [sp+8h] [bp-68h]@0
  signed int v41; // [sp+Ch] [bp-64h]@8
  struct IGFFrame *v42; // [sp+10h] [bp-60h]@18
  unsigned int v43; // [sp+20h] [bp-50h]@23
  int v44; // [sp+24h] [bp-4Ch]@1
  char v45; // [sp+28h] [bp-48h]@18
  HWND hWnd; // [sp+2Ch] [bp-44h]@22
  struct IGFFrame **v47; // [sp+30h] [bp-40h]@23
  char v48; // [sp+34h] [bp-3Ch]@18
  char v49; // [sp+38h] [bp-38h]@18
  char v50; // [sp+40h] [bp-30h]@20
  char v51; // [sp+4Ch] [bp-24h]@46
  char v52; // [sp+50h] [bp-20h]@49
  char v53; // [sp+58h] [bp-18h]@44
  char v54; // [sp+64h] [bp-Ch]@52

  v6 = this;
  v7 = 0;
  v44 = 0;
  v8 = (void (__stdcall ***)(_DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 1);
  if ( v8 )
  {
    (**v8)(v8, &unk_532FF180, &v44);
    v7 = v44;
    if ( v44 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v44 + 8))(v44);
      v7 = v44;
    }
  }
  if ( a2 != v7 )
    return sub_53199120(a2, a3, a4, a5, a6);
  v9 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 203 )
  {
    switch ( v9 )
    {
      case 901:
        return sub_531BE670(v7, a3, v39, v40, v41);
      case 933:
        sub_531A6810(v6);
        if ( *((_BYTE *)v6 + 474) && !*((_BYTE *)v6 + 38) )
          sub_531BEA20(v6);
        return sub_53199120(a2, a3, a4, a5, a6);
      default:
        return sub_53199120(a2, a3, a4, a5, a6);
      case 1101:
        *((_BYTE *)v6 + 474) = 1;
        return sub_53199120(a2, a3, a4, a5, a6);
      case 1001:
        v29 = *((_DWORD *)v6 + 114);
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            CTXData::CTXData((CTXData *)&v51);
            v33 = (*((_BYTE *)v6 + 340) & 2) == 0;
            v42 = 0;
            v41 = 3;
            if ( v33 )
            {
              sub_531BDDC0(2, v41, v42);
              v42 = (struct IGFFrame *)1;
            }
            else
            {
              sub_531BDDC0(0, v41, v42);
              v42 = 0;
            }
            v34 = CTXData::operator[](&v52, "bPushed", v42);
            CTXDataField::operator=(v34);
            v35 = sub_5319D170(v6);
            Util::GF::ClearMousePointer(v35, v42);
            v36 = CTXData::operator ITXData *(&v51);
            sub_532A9460((int (***)(void))v6 + 73, 289, v36);
            v32 = &v51;
          }
          else
          {
            if ( v29 != 2 && v29 != 3 )
            {
LABEL_54:
              *a4 = 1;
              return 0;
            }
            sub_531BDFB0(109);
            CTXData::CTXData((CTXData *)&v54);
            v37 = CTXData::operator[](&v54, "nFace", (*((_DWORD *)v6 + 85) >> 4) & 1);
            CTXDataField::operator=(v37);
            v38 = CTXData::operator ITXData *(&v54);
            sub_532A9460((int (***)(void))v6 + 73, 290, v38);
            v32 = &v54;
          }
        }
        else
        {
          CTXData::CTXData((CTXData *)&v53);
          v30 = CTXData::operator[](&v53, "bDefaultAction", 1);
          CTXDataField::operator=(v30);
          v31 = CTXData::operator ITXData *(&v53);
          sub_532A9460((int (***)(void))v6 + 73, 4099, v31);  //=====================> 532A9720/sub_532A9460 
          v32 = &v53;
        }
        CTXData::~CTXData((CTXData *)v32);
        goto LABEL_54;
    }
  }
  if ( *(_DWORD *)a3 == 203 )
  {
    v28 = *(_DWORD *)(a3 + 20);
    if ( v28 != 13 && v28 != 32 )
    {
      v10 = a4;
    }
    else
    {
      sub_53198500(v6, 0);
LABEL_10:
      v10 = a4;
      *a4 = 1;
    }
    result = sub_53199120(a2, a3, v10, a5, a6);
  }
  else
  {
    switch ( v9 )
    {
      case 102:
        sub_532A9460((int (***)(void))v6 + 73, 4103, 0);
        v41 = 102;
        goto LABEL_9;
      case 103:
        v12 = *((_DWORD *)v6 + 114);
        if ( !v12 || v12 == 2 || v12 == 3 )
          sub_532A9460((int (***)(void))v6 + 73, 4104, 0);
        v41 = 103;
LABEL_9:
        sub_531BDFB0(v41);
        goto LABEL_10;
      case 109:
        v13 = *((_DWORD *)v6 + 114);
        if ( v13 )
        {
          if ( v13 == 2 )
          {
            sub_531BDFB0(109);
            CTXData::CTXData((CTXData *)&v50);
            v19 = CTXData::operator[](&v50, "nFace", (*((_DWORD *)v6 + 85) >> 4) & 1);
            CTXDataField::operator=(v19);
            v20 = CTXData::operator ITXData *(&v50);
            sub_532A9460((int (***)(void))v6 + 73, 290, v20);
            CTXData::operator ITXData *(&v50);
            CTXData::~CTXData((CTXData *)&v50);
          }
        }
        else
        {
          CTXBSTR::CTXBSTR((CTXBSTR *)&v45);
          v14 = *(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 164);
          v15 = CTXBSTR::operator&(&v45);
          v14(a2, v15);
          CTXData::CTXData((CTXData *)&v48);
          CTXBSTR::CTXBSTR(&v41, &v45, v16);
          v17 = CTXData::operator[](&v49, &"name", v42);
          CTXDataField::operator=(v17);
          v18 = CTXData::operator ITXData *(&v48);
          sub_532A9460((int (***)(void))v6 + 73, 4099, v18);
          CTXData::operator ITXData *(&v48);
          CTXData::~CTXData((CTXData *)&v48);
          CTXBSTR::~CTXBSTR((CTXBSTR *)&v45);
        }
        v21 = CTXBSTR::operator wchar_t *((char *)v6 + 268);
        ((void (__thiscall *)(int))loc_5318F260)(v21);
        *a4 = 1;
        result = 0;
        break;
      case 105:
        sub_531BDFB0(105);
        hWnd = 0;
        sub_531A4850(&hWnd);
        UpdateWindow(hWnd);
        v22 = *((_DWORD *)v6 + 114);
        *((_BYTE *)v6 + 327) = 1;
        if ( v22 == 1 )
        {
          v43 = 0;
          Util::Data::CreateTXData((Util::Data *)&v43, (struct ITXData **)v42);
          (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v43 + 240))(
            v43,
            "bPushed",
            (*((_DWORD *)v6 + 85) >> 1) & 1);
          sub_532A9460((int (***)(void))v6 + 73, 289, v43);
          v47 = &v42;
          if ( &v42 )
          {
            v23 = v43;
            if ( v43 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v43 + 8))(v43);
              v23 = v43;
            }
            if ( v23 < 0x80000000 )
              v43 = v23 + 2147483648;
          }
        }
        else if ( v22 == 3 )
        {
          sub_532A9460((int (***)(void))v6 + 73, 290, 0);
        }
        v41 = a6;
        *a4 = 0;
        v24 = sub_53199120(a2, a3, a4, a5, v41);
        v25 = *(_DWORD *)v6;
        v41 = 1;
        v26 = *((_DWORD *)v6 + 85);
        v27 = v24;
        *((_BYTE *)v6 + 327) = 0;
        (*(void (__thiscall **)(void *, int, signed int, signed int))(v25 + 708))(v6, v26, -1, v41);
        (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v6 + 600))(v6, 0);
        result = v27;
        break;
      case 106:
        sub_531BDFB0(106);
        *a4 = 1;
        result = 0;
        break;
      default:
        return sub_53199120(a2, a3, a4, a5, a6);
    }
  }
  return result;
}
 
 
 
 	  
	  
//==================================================================================================================================
0019EE38 50204DF9 531BFC10 24       gf.531BFC10                用户模块

int __stdcall sub_531BFBF0(int a1, int a2, int a3, _DWORD *a4, int a5, signed int a6)
{
  return sub_531BE060((void *)(a1 - 0x20C), a2, a3, a4, a5, a6); //=====================> 531BE1B1/sub_531BE060
}
 
 
 
 	  
	  
//==================================================================================================================================
0019EE5C 5047D1D8 50204DF9 28       afctrl.50204DF9            用户模块
 
int __stdcall sub_50204DB8(int a1, int a2, Util::GF::DPI *a3, int a4, int a5, int a6)
{
  int v6; // esi@2

  sub_50209714(*(_DWORD *)(a1 - 8));
  if ( a1 )
  {
    Util::GF::DPI::HandleMessageScale(a3);
    v6 = (*(int (__stdcall **)(int, int, Util::GF::DPI *, int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, a3, a4, a5, a6);//=====================> 531BFC10/sub_531BFBF0
  }
  else
  {
    v6 = -2147467259;
  }
  sub_5020A6C8(&a1);
  return v6;
}
 
 
 
 	  
	  
//==================================================================================================================================
0019EE84 53190D2C 5047D1D8 50       afctrl.5047D1D8            用户模块

int __stdcall sub_5047D18E(int a1, int a2, Util::GF::DPI *a3, int a4, int a5, int a6)
{
  int result; // eax@3

  if ( a2 != sub_5020689E(a1 - 16) || *(_DWORD *)a3 != 922 )
    result = sub_50204DB8(a1, a2, a3, a4, a5, a6);//=====================> 50204DF9/sub_50204DB8
  else
    result = sub_5047DD65(a2, a3, a4, a5, a6);
  return result;
} 
 
 
 
 
 	  
	  
//==================================================================================================================================
0019EED4 5318A5F3 53190D2C 6C       gf.53190D2C                用户模块

int __usercall sub_53190930@<eax>(int a1@<edx>, void (__stdcall ***a2)(_DWORD, _DWORD, _DWORD)@<ecx>, Util::GF::DPI *a3, int a4, int a5, _DWORD *a6)
{
  void (__stdcall ***v6)(_DWORD, _DWORD, _DWORD); // edi@1
  void (__stdcall **v7)(_DWORD, _DWORD, _DWORD); // eax@1
  int v8; // esi@1
  int v9; // ecx@1
  HDC v10; // eax@3
  HDC v11; // edi@3
  int v12; // eax@4
  char v13; // cl@5
  __m128d v14; // xmm0@7
  int v15; // edi@12
  HDC v16; // eax@13
  HDC v17; // edi@13
  int v18; // eax@14
  char v19; // cl@15
  __m128d v20; // xmm0@17
  int v21; // edx@25
  HDC v22; // eax@27
  HDC v23; // edi@27
  int v24; // ecx@28
  char v25; // al@29
  __m128d v26; // xmm0@31
  int v27; // ebx@34
  int v28; // edi@38
  HDC v29; // eax@41
  HDC v30; // edi@41
  int v31; // ecx@42
  char v32; // al@43
  __m128d v33; // xmm0@45
  struct tagBaseArg *v35; // [sp+0h] [bp-30h]@0
  unsigned __int32 v36; // [sp+10h] [bp-20h]@20
  void (__stdcall ***v37)(_DWORD, _DWORD, _DWORD); // [sp+14h] [bp-1Ch]@1
  int v38; // [sp+18h] [bp-18h]@11
  int v39; // [sp+1Ch] [bp-14h]@1
  int v40; // [sp+20h] [bp-10h]@2
  int v41; // [sp+24h] [bp-Ch]@10
  int v42; // [sp+28h] [bp-8h]@1
  int v43; // [sp+2Ch] [bp-4h]@1

  v6 = a2;
  v39 = a1;
  v37 = a2;
  v7 = *a2;
  v8 = 0;
  v42 = 0;
  v43 = 0;
  (*v7)(a2, &unk_533000B0, &v42);
  v9 = v42;
  if ( v42 )
  {
    v40 = 1;
    if ( !(dword_533479AC & 1) )
    {
      byte_53347994 = 0;
      dword_533479AC |= 1u;
      dword_53347998 = 96;
      dword_5334799C = 96;
      dword_533479A0 = 96;
      dword_533479A8 = 0;
      v10 = GetDC(0);
      v11 = v10;
      if ( v10 )
      {
        dword_5334799C = GetDeviceCaps(v10, 88);
        v12 = GetDeviceCaps(v11, 90);
        dword_533479A0 = v12;
        if ( dword_533440A8 )
        {
          v13 = dword_5334799C;
          nNumerator = dword_5334799C;
          dword_53347998 = v12;
        }
        else
        {
          v13 = nNumerator;
        }
        sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v13);
        v14 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
        v14.m128d_f64[0] = v14.m128d_f64[0] / 96.0;
        dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v14);
        ReleaseDC(0, v11);
      }
      v9 = v42;
      byte_53347994 = 1;
    }
    if ( nNumerator == 96 )
    {
      v41 = 0;
    }
    else
    {
      Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v41, (unsigned __int32 *)&v38);
      GetCurrentThreadId();
      v9 = v42;
      v41 = dword_533479A8;
      dword_533479A8 = 0;
    }
    v15 = (*(int (__stdcall **)(int, int, Util::GF::DPI *, int, int, _DWORD *, int *))(*(_DWORD *)v9 + 44))(
            v9,
            v39,
            a3,
            a4,
            a5,
            a6,
            &v40);
    v38 = v15;
    if ( !(dword_533479AC & 1) )
    {
      byte_53347994 = 0;
      dword_533479AC |= 1u;
      dword_53347998 = 96;
      dword_5334799C = 96;
      dword_533479A0 = 96;
      dword_533479A8 = 0;
      v16 = GetDC(0);
      v17 = v16;
      if ( v16 )
      {
        dword_5334799C = GetDeviceCaps(v16, 88);
        v18 = GetDeviceCaps(v17, 90);
        dword_533479A0 = v18;
        if ( dword_533440A8 )
        {
          v19 = dword_5334799C;
          nNumerator = dword_5334799C;
          dword_53347998 = v18;
        }
        else
        {
          v19 = nNumerator;
        }
        sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v19);
        v20 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
        v20.m128d_f64[0] = v20.m128d_f64[0] / 96.0;
        dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v20);
        ReleaseDC(0, v17);
      }
      v15 = v38;
      byte_53347994 = 1;
    }
    if ( nNumerator != 96 )
    {
      Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v36, (unsigned __int32 *)&v38);
      GetCurrentThreadId();
      dword_533479A8 += v41;
    }
    if ( !*a6 || !v40 )
    {
      v8 = v15;
      goto LABEL_51;
    }
    v6 = v37;
  }
  (**v6)(v6, &unk_533000A0, &v43);
  v21 = v43;
  if ( !v43 )
    goto LABEL_52;
  if ( !(dword_533479AC & 1) )
  {
    byte_53347994 = 0;
    dword_533479AC |= 1u;
    dword_53347998 = 96;
    dword_5334799C = 96;
    dword_533479A0 = 96;
    dword_533479A8 = 0;
    v22 = GetDC(0);
    v23 = v22;
    if ( v22 )
    {
      dword_5334799C = GetDeviceCaps(v22, 88);
      v24 = GetDeviceCaps(v23, 90);
      dword_533479A0 = v24;
      if ( dword_533440A8 )
      {
        v25 = dword_5334799C;
        nNumerator = dword_5334799C;
        dword_53347998 = v24;
      }
      else
      {
        v25 = nNumerator;
      }
      sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v25);
      v26 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
      v26.m128d_f64[0] = v26.m128d_f64[0] / 96.0;
      dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v26);
      ReleaseDC(0, v23);
    }
    v21 = v43;
    byte_53347994 = 1;
  }
  if ( nNumerator == 96 )
  {
    v27 = 0;
  }
  else
  {
    Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v37, &v36);
    GetCurrentThreadId();
    v27 = dword_533479A8;
    v21 = v43;
    dword_533479A8 = 0;
  }
  v41 = 1;
  (*(void (__stdcall **)(int, int *))(*(_DWORD *)v21 + 36))(v21, &v41);
  if ( !v41 )
    Util::GF::DPI::HandleMessageUnscale(a3, v35);
  v28 = (*(int (__stdcall **)(int, int, Util::GF::DPI *, int, int, _DWORD *))(*(_DWORD *)v43 + 28))(
          v43,
          v39,
          a3,
          a4,
          a5,
          a6);	//=====================> 5047D1D8/sub_5047D18E
		  
  v37 = (void (__stdcall ***)(_DWORD, _DWORD, _DWORD))v28;
  if ( !v41 )
    Util::GF::DPI::HandleMessageScale(a3, v35);
  if ( !(dword_533479AC & 1) )
  {
    byte_53347994 = 0;
    dword_533479AC |= 1u;
    dword_53347998 = 96;
    dword_5334799C = 96;
    dword_533479A0 = 96;
    dword_533479A8 = 0;
    v29 = GetDC(0);
    v30 = v29;
    if ( v29 )
    {
      dword_5334799C = GetDeviceCaps(v29, 88);
      v31 = GetDeviceCaps(v30, 90);
      dword_533479A0 = v31;
      if ( dword_533440A8 )
      {
        v32 = dword_5334799C;
        nNumerator = dword_5334799C;
        dword_53347998 = v31;
      }
      else
      {
        v32 = nNumerator;
      }
      sub_53154EA0(L"file", 218, L"func", 2, L"DPI", L"dpix is %d", v32);
      v33 = (__m128d)COERCE_UNSIGNED_INT64((double)nNumerator);
      v33.m128d_f64[0] = v33.m128d_f64[0] / 96.0;
      dword_533479A4 = (unsigned __int128)_mm_cvtpd_ps(v33);
      ReleaseDC(0, v30);
    }
    v28 = (int)v37;
    byte_53347994 = 1;
  }
  if ( nNumerator != 96 )
  {
    Util::Misc::GetMainAndLogicThreadId((Util::Misc *)&v37, &v36);
    GetCurrentThreadId();
    dword_533479A8 += v27;
  }
  if ( !*a6 )
    v8 = v28;
LABEL_51:
  v21 = v43;
LABEL_52:
  if ( v42 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v42 + 8))(v42);
    v21 = v43;
    v42 = 0;
  }
  if ( v21 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21);
  return v8;
}
 
 
 
 	  
	  
//==================================================================================================================================
0019EF40 532B45CA 5318A5F3 68       gf.5318A5F3                用户模块
//=====================> 5318A5F3/Util::GF::DispatchFrameMsg
signed int __cdecl Util::GF::DispatchFrameMsg(Util::GF *this, struct IGFFrame *a2, struct tagBaseArg *a3, int *a4, __int32 *a5)
{
  Util::GF *v5; // edi@1
  Util::GF::DPI *v6; // ebx@4
  int v7; // ebx@5
  int v8; // ecx@8
  Util::GF *v9; // ecx@9
  char *v10; // esi@18
  int v11; // ecx@19
  int *v12; // esi@21
  char *v13; // esi@24
  char *v14; // esi@27
  _BYTE *v15; // edx@29
  unsigned int v16; // ecx@30
  int v17; // ecx@31
  struct tagBaseArg *v19; // [sp+0h] [bp-54h]@8
  void *Memory; // [sp+10h] [bp-44h]@8
  char *v21; // [sp+14h] [bp-40h]@8
  char *v22; // [sp+18h] [bp-3Ch]@8
  int v23; // [sp+1Ch] [bp-38h]@9
  int v24; // [sp+20h] [bp-34h]@9
  void *v25; // [sp+24h] [bp-30h]@18
  char *v26; // [sp+28h] [bp-2Ch]@18
  char *v27; // [sp+2Ch] [bp-28h]@18
  int v28; // [sp+30h] [bp-24h]@11
  int v29; // [sp+34h] [bp-20h]@2
  struct tagBaseArg **v30; // [sp+38h] [bp-1Ch]@34
  int v31; // [sp+3Ch] [bp-18h]@22
  int v32; // [sp+40h] [bp-14h]@21
  int v33; // [sp+44h] [bp-10h]@5
  int v34; // [sp+48h] [bp-Ch]@4
  int v35; // [sp+4Ch] [bp-8h]@24
  int v36; // [sp+50h] [bp-4h]@18

  v5 = this;
  if ( !this || (*(int (__stdcall **)(Util::GF *, int *))(*(_DWORD *)this + 44))(this, &v29) < 0 || !v29 )
    return -2147467259;
  (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v5 + 4))(v5);
  v34 = 0;
  sub_5318E450((struct ITXCore *)&v34);
  v6 = a2;
  if ( !v34 )
    goto LABEL_8;
  v33 = 0;
  v7 = (*(int (__stdcall **)(int, Util::GF *, struct IGFFrame *, struct tagBaseArg *, int *, int *))(*(_DWORD *)v34 + 40))(
         v34,
         v5,
         a2,
         a3,
         a4,
         &v33);
  if ( !v33 )
  {
    v6 = a2;
LABEL_8:
    Util::GF::DPI::HandleMessageScale(v6, v19);
    Memory = 0;
    v21 = 0;
    v22 = 0;
    if ( a5 )
      goto LABEL_21;
    v24 = 0x3FFFFFFF;
    v23 = 0x7FFFFFFF;
    sub_5318D820(v8);
    v9 = v5;
    do
    {
      this = 0;
      (*(void (__stdcall **)(Util::GF *, Util::GF **))(*(_DWORD *)v9 + 264))(v9, &this);
      if ( !this )
        break;
      if ( (*(int (__stdcall **)(Util::GF *, int *))(*(_DWORD *)this + 44))(this, &v28) >= 0 && v28 )
      {
        if ( v22 == v21 )
        {
          ((void (__thiscall *)(void **, char *, Util::GF **))sub_5318EE10)(&Memory, v21, &this);
        }
        else
        {
          *(_DWORD *)v21 = this;
          v21 += 4;
        }
      }
      else
      {
        (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)this + 8))(this);
      }
      v9 = this;
    }
    while ( this );
    v10 = v21;
    v36 = 1;
    v27 = v21;
    v26 = v21;
    v25 = Memory;
    if ( v21 == Memory )
    {
LABEL_21:
      v12 = a4;
      v32 = 1;
      v7 = sub_531903D0(v6, a3, a4, &v32);
      if ( v32 )
      {
        v31 = 1;
        v7 = sub_53190930((int)v5, (void (__stdcall ***)(_DWORD, _DWORD, _DWORD))v5, a2, (int)a3, (int)v12, &v31); //=====================> 53190D2C/sub_53190930
        if ( v31 )
        {
          if ( !a5 )
          {
            v13 = (char *)Memory;
            v35 = 1;
            if ( Memory != v21 )
            {
              do
              {
                v35 = 1;
                v7 = sub_53190930(
                       (int)v5,
                       *(void (__stdcall ****)(_DWORD, _DWORD, _DWORD))v13,
                       a2,
                       (int)a3,
                       (int)a4,
                       &v35);
                if ( !v35 )
                  break;
                v13 += 4;
              }
              while ( v13 != v21 );
            }
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v36 = 1;
        v11 = *((_DWORD *)v10 - 1);
        v10 -= 4;
        v7 = sub_531903D0(v6, a3, a4, &v36);
        if ( !v36 )
          break;
        v6 = a2;
        v27 = v10;
        v26 = v10;
        v25 = Memory;
        if ( v10 == Memory )
          goto LABEL_21;
      }
    }
    v14 = (char *)Memory;
    if ( Memory != v21 )
    {
      do
      {
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v14 + 8))(*(_DWORD *)v14);
        v14 += 4;
      }
      while ( v14 != v21 );
    }
    (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v5 + 8))(v5);
    v15 = Memory;
    if ( Memory )
    {
      v16 = (v22 - (_BYTE *)Memory) & 0xFFFFFFFC;
      if ( v16 >= 0x1000 )
      {
        v15 = (_BYTE *)*((_DWORD *)Memory - 1);
        v17 = v16 + 35;
        if ( (unsigned int)((_BYTE *)Memory - v15 - 4) > 0x1F )
          invalid_parameter_noinfo_noreturn(v17);
      }
      sub_532EFC66(v15);
      Memory = 0;
      v21 = 0;
      v22 = 0;
    }
    goto LABEL_34;
  }
  (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v5 + 8))(v5);
LABEL_34:
  v30 = &v19;
  if ( &v19 )
  {
    if ( v34 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
  }
  return v7;
} 
 
 
 
 	  
	  
//==================================================================================================================================
0019EFA8 532B0923 532B45CA B8       gf.532B45CA                用户模块

//@a5 wParam
signed int __stdcall sub_532B44D0(Util::GF *a1, struct IGFFrame *a2, struct tagBaseArg *a3, int *a4, int a5)
{
  int v5; // ecx@5
  signed int v6; // eax@12
  int v7; // eax@16
  signed int result; // eax@17
  Util::GF *v9; // [sp+0h] [bp-4Ch]@0
  int v10; // [sp+14h] [bp-38h]@2
  __int128 v11; // [sp+18h] [bp-34h]@8
  __int128 v12; // [sp+28h] [bp-24h]@8
  __int64 v13; // [sp+38h] [bp-14h]@8

  if ( a1 && (*(int (__stdcall **)(Util::GF *, int *))(*(_DWORD *)a1 + 44))(a1, &v10) >= 0 && v10 )
  {
    if ( Util::GF::GetCurrentModeId(v9) != 1 )
      goto LABEL_22;
    v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 101 || v5 == 102 || v5 == 103 )
    {
      v11 = *(_OWORD *)a2;
      v12 = *((_OWORD *)a2 + 1);
      _mm_storel_epi64((__m128i *)&v13, _mm_loadl_epi64((const __m128i *)a2 + 2));
      if ( v5 == 101 )
      {
        LODWORD(v11) = 117;
      }
      else if ( v5 == 102 )
      {
        LODWORD(v11) = 116;
      }
      else
      {
        v6 = v11;
        if ( v5 == 103 )
          v6 = 118;
        LODWORD(v11) = v6;
      }
      Util::GF::DispatchFrameMsg(a1, (struct IGFFrame *)&v11, a3, a4, (__int32 *)1);
    }
    v7 = *(_DWORD *)a1;
    v10 = 0;
    (*(void (__stdcall **)(Util::GF *, int *))(v7 + 364))(a1, &v10);
    if ( v10 )
LABEL_22:
      result = Util::GF::DispatchFrameMsg(a1, a2, a3, a4, 0); //=====================> 5318A5F3/Util::GF::DispatchFrameMsg
    else
      result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}
 
 
 	  
	  
//==================================================================================================================================
0019F060 532BB68F 532B0923 30       gf.532B0923                用户模块

//@a2  point.x
//@a3  point.y
//@a4 wParam
//@a5  
signed int __stdcall sub_532B0730(int a1, int a2, unsigned int a3, int a4, struct tagBaseArg *a5)
{
  struct tagBaseArg *v5; // edi@1
  DWORD v6; // eax@3
  Util::GF *v7; // ecx@3
  volatile LONG *v8; // ebx@3
  Util::GF *v9; // eax@3
  int v10; // ecx@3
  int v11; // edi@9
  LONG v12; // eax@13
  int v13; // ecx@14
  int v14; // edx@15
  int v15; // edi@16
  Util::GF *v16; // eax@20
  bool v17; // zf@28
  int v18; // ecx@29
  unsigned int v19; // edx@29
  Util::GF *v20; // edx@30
  struct IGFFrame *v21; // ecx@30
  int v22; // eax@31
  int v23; // ecx@38
  int v25; // [sp-4h] [bp-9Ch]@3
  int v26; // [sp+0h] [bp-98h]@36
  LONG Value; // [sp+Ch] [bp-8Ch]@3
  int v28; // [sp+10h] [bp-88h]@1
  unsigned int v29; // [sp+14h] [bp-84h]@1
  int v30; // [sp+1Ch] [bp-7Ch]@3
  int v31; // [sp+20h] [bp-78h]@3
  struct tagBaseArg *v32; // [sp+24h] [bp-74h]@1
  DWORD v33; // [sp+28h] [bp-70h]@3
  int v34; // [sp+2Ch] [bp-6Ch]@13
  int v35; // [sp+30h] [bp-68h]@3
  int v36; // [sp+44h] [bp-54h]@3
  unsigned int v37; // [sp+48h] [bp-50h]@3
  int v38; // [sp+4Ch] [bp-4Ch]@3
  __int64 v39; // [sp+54h] [bp-44h]@30
  __int64 v40; // [sp+5Ch] [bp-3Ch]@30
  int v41; // [sp+64h] [bp-34h]@30
  int v42; // [sp+6Ch] [bp-2Ch]@30
  unsigned __int64 v43; // [sp+70h] [bp-28h]@30
  __int64 v44; // [sp+78h] [bp-20h]@30
  __int64 v45; // [sp+80h] [bp-18h]@30
  int v46; // [sp+88h] [bp-10h]@30

  v5 = a5;
  v28 = a2;
  v29 = a3;
  v32 = a5;
  if ( !a5 || !*(_DWORD *)(a1 + 16) )
    return -2147467259;
  v6 = GetTickCount();
  v7 = *(Util::GF **)(a1 + 16);
  v33 = v6;
  *(_DWORD *)(a1 + 176) = v6;
  v30 = 0;
  v31 = 0;
  Value = 0;
  sub_53190240(v7, (int)&Value);
  sub_531941A0(&v35);
  v8 = (volatile LONG *)(a1 + 28);
  v36 = v28;
  v37 = v29;
  v38 = a4;
  v9 = *(Util::GF **)(a1 + 28);
  v35 = 106;
  v25 = v10;
  if ( v9 )
    sub_532B44D0(v9, (struct IGFFrame *)&v35, a5, &v30, v25);
  else
    sub_532B44D0((Util::GF *)Value, (struct IGFFrame *)&v35, a5, &v30, v25);
  if ( Value && Value == *v8 )
  {
    (*(void (__stdcall **)(LONG, int *))(*(_DWORD *)Value + 632))(Value, &v31);
    sub_53152BB0();
    if ( nNumerator == 96 )
      v11 = nNumerator - 76;
    else
      v11 = MulDiv(20, nNumerator, 96);
    if ( v31 && v33 - *(_DWORD *)(a1 + 52) < GetDoubleClickTime() )
    {
      v12 = Value;
      v34 = *(_DWORD *)(a1 + 48);
      if ( v34 == Value )
      {
        v13 = *(_DWORD *)(a1 + 40) - v28;
        if ( v13 <= v11 )
        {
          v14 = *(_DWORD *)(a1 + 44) - v29;
          if ( v14 <= v11 )
          {
            v15 = -v11;
            if ( v13 >= v15 && v14 >= v15 )
            {
              if ( v34 )
                sub_531542D0((volatile LONG *)(a1 + 48), 0);
              *(_DWORD *)(a1 + 52) = 0;
              v16 = (Util::GF *)sub_531941A0(&v35);
              v35 = 113;
LABEL_25:
              v36 = v28;
              v37 = v29;
              v38 = a4;
              sub_532B44D0(v16, (struct IGFFrame *)&v35, (struct tagBaseArg *)&v31, &v30, a4); //=====================> 532B45CA/sub_532B44D0
              v5 = v32;
              goto LABEL_26;
            }
          }
        }
      }
    }
    else
    {
      v12 = Value;
    }
    if ( *(_DWORD *)(a1 + 48) != v12 )
      sub_531542D0((volatile LONG *)(a1 + 48), v12);
    *(_DWORD *)(a1 + 52) = v33;
    v16 = (Util::GF *)sub_531941A0(&v35);
    v35 = 109;
    goto LABEL_25;
  }
LABEL_26:
  if ( *v8 && *(_BYTE *)(a1 + 120) )
  {
    v17 = *(_BYTE *)(a1 + 121) == 0;
    *(_BYTE *)(a1 + 120) = 0;
    if ( v17 )
    {
      _mm_storel_pd((double *)&v40, 0i64);
      _mm_storel_pd((double *)&v41, 0i64);
      _mm_storel_pd((double *)&v44, 0i64);
      _mm_storel_pd((double *)&v45, 0i64);
      _mm_storel_pd((double *)&v46, 0i64);
      sub_53192580((char *)&v39 + 4);
      v42 = v28;
      v43 = __PAIR__(a4, v29);
      HIDWORD(v39) = 502;
      sub_532B44D0(v20, v21, (struct tagBaseArg *)&v31, &v30, (int)v21);
    }
    else
    {
      v18 = v28;
      v19 = v29;
      *(_BYTE *)(a1 + 121) = 0;
      sub_532B53F0(a1, v5, v18, v19);
    }
  }
  v22 = *(_DWORD *)(a1 + 24);
  if ( v22 == *v8 && v22 )
    sub_531542D0((volatile LONG *)(a1 + 24), 0);
  if ( *v8 )
    sub_531542D0(v8, 0);
  v32 = (struct tagBaseArg *)&v26;
  if ( &v26 )
  {
    if ( Value )
    {
      v23 = *(_DWORD *)Value;
      v25 = Value;
      (*(void (__stdcall **)(LONG))(v23 + 8))(Value);
    }
  }
  return 0;
}
 
 
 
 	  
	  
//==================================================================================================================================
0019F090 532BA702 532BB68F 20       gf.532BB68F                用户模块
//@a3  HKL/lParam
//@a4  SHIWORD(HKL)
//@a5  wParam
 void __thiscall sub_532BB630(int this, HWND hWnd, int a3, int a4, int a5, int a6)
{
  int v6; // esi@1
  struct tagPOINT Point; // [sp+8h] [bp-8h]@5

  v6 = this;
  if ( *(_DWORD *)(this + 36) )
  {
    if ( GetCapture() == *(HWND *)(this + 4) && !(a5 & 0x12) )
      ReleaseCapture();
    Point.x = a3;
    Point.y = a4;
    ClientToScreen(hWnd, &Point);
    (*(void (__stdcall **)(_DWORD, LONG, LONG, int, int))(**(_DWORD **)(v6 + 36) + 168))(
      *(_DWORD *)(v6 + 36),  //v6为 gf单例? (v6 + 36)为界面实例？
      Point.x,
      Point.y,
      a5,/*wParam*/
      a6 );  //=====================> 532B0923/sub_532B0730
  }
} 
 
 
 
 	  
	  
//==================================================================================================================================
0019F0B0 532B9D5C 532BA702 1C       gf.532BA702                用户模块
//处理默认事件id
LRESULT __thiscall sub_532B9EF0(void *this, UINT Msg, WPARAM wParam, HKL hkl, int a5)
{
  LRESULT result; // eax@2
  int (__thiscall *v6)(void *, _DWORD, _DWORD, int); // edx@78

  *(_DWORD *)a5 = 0;
  if ( Msg == 80 )
  {
    *(_DWORD *)a5 = 1;
    ActivateKeyboardLayout(hkl, 0x10u);
    return 1;
  }
  if ( Msg == 81 )
  {
    *(_DWORD *)a5 = 1;
    return DefWindowProcW(*((HWND *)this + 1), 0x51u, wParam, (LPARAM)hkl);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    if ( Msg == 256 )
      goto LABEL_52;
    if ( Msg != 260 && Msg != 261 && Msg != 257 && Msg != 522 )
      return 0;
  }
  if ( Msg <= 0x100 )
  {
    if ( Msg != 256 )
    {
      switch ( Msg )
      {
        case 0xFu:
          (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 208))(this, *((_DWORD *)this + 1), a5);
          result = 0;
          break;
        case 0x47u:
          (*(void (__thiscall **)(void *, _DWORD, HKL, int))(*(_DWORD *)this + 216))(
            this,
            *((_DWORD *)this + 1),
            hkl,
            a5);
          result = 0;
          break;
        case 0x46u:
          result = (*(int (__thiscall **)(void *, _DWORD, HKL, int))(*(_DWORD *)this + 212))(
                     this,
                     *((_DWORD *)this + 1),
                     hkl,
                     a5);
          break;
        case 0x7Eu:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, WPARAM, int))(*(_DWORD *)this + 44))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            (unsigned __int16)hkl,
            wParam >> 16,
            a5);
          result = 0;
          break;
        case 0x1Cu:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 24))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            hkl,
            a5);
          result = 0;
          break;
        case 0x20u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 224))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     (unsigned __int16)hkl,
                     (unsigned int)hkl >> 16,
                     a5);
          break;
        case 0x81u:
          result = (*(int (__thiscall **)(void *, _DWORD, HKL, int))(*(_DWORD *)this + 156))(
                     this,
                     *((_DWORD *)this + 1),
                     hkl,
                     a5);
          break;
        case 0x24u:
          (*(void (__thiscall **)(void *, _DWORD, HKL, int))(*(_DWORD *)this + 76))(
            this,
            *((_DWORD *)this + 1),
            hkl,
            a5);
          result = 0;
          break;
        case 6u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, HKL, WPARAM, int))(*(_DWORD *)this + 20))(
            this,
            *((_DWORD *)this + 1),
            (unsigned __int16)wParam,
            hkl,
            wParam >> 16,
            a5);
          result = 0;
          break;
        case 0x14u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, int))(*(_DWORD *)this + 64))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     a5);
          break;
        case 0x10u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, int))(*(_DWORD *)this + 32))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            a5);
          result = 0;
          break;
        case 1u:
          result = ((*(int (__thiscall **)(void *, _DWORD, HKL, int))(*(_DWORD *)this + 36))(
                      this,
                      *((_DWORD *)this + 1),
                      hkl,
                      a5) != 0)
                 - 1;
          break;
        case 2u:
          (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 40))(this, *((_DWORD *)this + 1), a5);
          result = 0;
          break;
        case 0xAu:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, int))(*(_DWORD *)this + 56))(
            this,
            *((_DWORD *)this + 1),
            wParam == 1,
            a5);
          result = 0;
          break;
        case 0x16u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, int))(*(_DWORD *)this + 60))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            a5);
          result = 0;
          break;
        case 8u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, int))(*(_DWORD *)this + 96))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            a5);
          result = 0;
          break;
        case 0x21u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 124))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     (unsigned __int16)hkl,
                     (unsigned int)hkl >> 16,
                     a5);
          break;
        case 3u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 140))(
            this,
            *((_DWORD *)this + 1),
            (signed __int16)hkl,
            SHIWORD(hkl),
            a5);
          result = 0;
          break;
        case 0x86u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, _DWORD, int))(*(_DWORD *)this + 148))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     0,
                     0,
                     a5);
          break;
        case 0x83u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 152))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x82u:
          (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 160))(this, *((_DWORD *)this + 1), a5);
          result = 0;
          break;
        case 0xA1u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 168))(
            this,
            *((_DWORD *)this + 1),
            0,
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA2u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 172))(
            this,
            *((_DWORD *)this + 1),
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA3u:
          (*(void (__thiscall **)(void *, _DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 176))(
            this,
            *((_DWORD *)this + 1),
            1,
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA4u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 180))(
            this,
            *((_DWORD *)this + 1),
            0,
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA5u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 184))(
            this,
            *((_DWORD *)this + 1),
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA7u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 188))(
            this,
            *((_DWORD *)this + 1),
            0,
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA8u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 192))(
            this,
            *((_DWORD *)this + 1),
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0xA0u:
          (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 196))(
            this,
            *((_DWORD *)this + 1),
            (signed __int16)hkl,
            SHIWORD(hkl),
            wParam,
            a5);
          result = 0;
          break;
        case 0x84u:
          result = (*(int (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 200))(
                     this,
                     *((_DWORD *)this + 1),
                     (signed __int16)hkl,
                     SHIWORD(hkl),
                     a5);
          break;
        case 0x85u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, int))(*(_DWORD *)this + 164))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            a5);
          result = 0;
          break;
        case 0x4Eu:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 204))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x11u:
          result = (unsigned __int16)(*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 220))(
                                       this,
                                       *((_DWORD *)this + 1),
                                       a5);
          break;
        case 7u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, int))(*(_DWORD *)this + 228))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            a5);
          result = 0;
          break;
        case 5u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, _DWORD, int))(*(_DWORD *)this + 232))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            (signed __int16)hkl,
            SHIWORD(hkl),
            a5);
          result = 0;
          break;
        case 0x18u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 244))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            hkl,
            a5);
          result = 0;
          break;
        case 0x3Du:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 284))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x4Au:
          result = (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 356))(
                     this,
                     *((_DWORD *)this + 1),
                     74,
                     wParam,
                     hkl,
                     a5);
          break;
        default:
          goto LABEL_110;
      }
      return result;
    }
LABEL_52:
    (*(void (__thiscall **)(void *, _DWORD, WPARAM, signed int, _DWORD, unsigned int, int))(*(_DWORD *)this + 88))(
      this,
      *((_DWORD *)this + 1),
      wParam,
      1,
      (signed __int16)hkl,
      (unsigned int)hkl >> 16,
      a5);
    return 0;
  }
  if ( Msg <= 0x200 )
  {
    if ( Msg == 512 )
    {
      (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 132))(
        this,
        *((_DWORD *)this + 1),
        (signed __int16)hkl,
        SHIWORD(hkl),
        wParam,
        a5);
      result = 0;
    }
    else
    {
      switch ( Msg )
      {
        case 0x102u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, int))(*(_DWORD *)this + 28))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            (signed __int16)hkl,
            a5);
          result = 0;
          break;
        case 0x110u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 84))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x101u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)this + 92))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            0,
            (signed __int16)hkl,
            (unsigned int)hkl >> 16,
            a5);
          result = 0;
          break;
        case 0x112u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, _DWORD, int))(*(_DWORD *)this + 240))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            (signed __int16)hkl,
            SHIWORD(hkl),
            a5);
          result = 0;
          break;
        case 0x104u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, signed int, _DWORD, unsigned int, int))(*(_DWORD *)this + 248))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            1,
            (signed __int16)hkl,
            (unsigned int)hkl >> 16,
            a5);
          result = 0;
          break;
        case 0x105u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)this + 252))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            0,
            (signed __int16)hkl,
            (unsigned int)hkl >> 16,
            a5);
          result = 0;
          break;
        case 0x106u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, int))(*(_DWORD *)this + 256))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            (signed __int16)hkl,
            a5);
          result = 0;
          break;
        case 0x117u:
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 276))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            (unsigned __int16)hkl,
            (unsigned int)hkl >> 16,
            a5);
          result = 0;
          break;
        case 0x125u:
          result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 272))(
                     this,
                     *((_DWORD *)this + 1),
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x10Du:
          result = (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 344))(
                     this,
                     *((_DWORD *)this + 1),
                     269,
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x10Eu:
          result = (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 348))(
                     this,
                     *((_DWORD *)this + 1),
                     270,
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x10Fu:
          result = (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 352))(
                     this,
                     *((_DWORD *)this + 1),
                     271,
                     wParam,
                     hkl,
                     a5);
          break;
        case 0x119u:
          (*(void (__thiscall **)(void *, _DWORD, UINT, WPARAM, HKL, int))(*(_DWORD *)this + 360))(
            this,
            *((_DWORD *)this + 1),
            Msg,
            wParam,
            hkl,
            a5);
          result = 0;
          break;
        case 0x11Au:
          (*(void (__thiscall **)(void *, _DWORD, UINT, WPARAM, HKL, int))(*(_DWORD *)this + 364))(
            this,
            *((_DWORD *)this + 1),
            Msg,
            wParam,
            hkl,
            a5);
          result = 0;
          break;
        default:
          goto LABEL_110;
      }
    }
    return result;
  }
  if ( Msg <= 0x300 )
  {
    if ( Msg == 768 )
    {
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 296))(this, *((_DWORD *)this + 1), a5);
      return 0;
    }
    switch ( Msg )
    {
      case 0x216u:
        (*(void (__thiscall **)(void *, _DWORD, HKL, int))(*(_DWORD *)this + 144))(this, *((_DWORD *)this + 1), hkl, a5);
        return 0;
      case 0x214u:
        (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 236))(
          this,
          *((_DWORD *)this + 1),
          wParam,
          hkl,
          a5);
        return 0;
      case 0x231u:
        return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 52))(this, *((_DWORD *)this + 1), a5);
      case 0x232u:
        return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 72))(this, *((_DWORD *)this + 1), a5);
      case 0x211u:
        v6 = *(int (__thiscall **)(void *, _DWORD, _DWORD, int))(*(_DWORD *)this + 48);
        return v6(this, *((_DWORD *)this + 1), wParam != 0, a5);
      case 0x212u:
        v6 = *(int (__thiscall **)(void *, _DWORD, _DWORD, int))(*(_DWORD *)this + 68);
        return v6(this, *((_DWORD *)this + 1), wParam != 0, a5);
      case 0x201u:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 100))(
          this,
          *((_DWORD *)this + 1),
          0,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x202u:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 104))(
          this,
          *((_DWORD *)this + 1),
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);   //=====================> 532BB68F/sub_532BB630
        return 0;
      case 0x203u:
        (*(void (__thiscall **)(void *, _DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 100))(
          this,
          *((_DWORD *)this + 1),
          1,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x204u:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 108))(
          this,
          *((_DWORD *)this + 1),
          0,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x205u:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 112))(
          this,
          *((_DWORD *)this + 1),
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x206u:
        (*(void (__thiscall **)(void *, _DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 108))(
          this,
          *((_DWORD *)this + 1),
          1,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x207u:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 116))(
          this,
          *((_DWORD *)this + 1),
          0,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x208u:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 120))(
          this,
          *((_DWORD *)this + 1),
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x209u:
        (*(void (__thiscall **)(void *, _DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 116))(
          this,
          *((_DWORD *)this + 1),
          1,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x2A3u:
        (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 128))(
          this,
          *((_DWORD *)this + 1),
          wParam,
          hkl,
          a5);
        return 0;
      case 0x20Au:
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 136))(
          this,
          *((_DWORD *)this + 1),
          (signed __int16)hkl,
          SHIWORD(hkl),
          SHIWORD(wParam),
          (signed __int16)wParam,
          a5);
        return 0;
      case 0x281u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 308))(
                 this,
                 *((_DWORD *)this + 1),
                 641,
                 wParam,
                 hkl,
                 a5);
      case 0x282u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 312))(
                 this,
                 *((_DWORD *)this + 1),
                 642,
                 wParam,
                 hkl,
                 a5);
      case 0x283u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 316))(
                 this,
                 *((_DWORD *)this + 1),
                 643,
                 wParam,
                 hkl,
                 a5);
      case 0x284u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 320))(
                 this,
                 *((_DWORD *)this + 1),
                 644,
                 wParam,
                 hkl,
                 a5);
      case 0x285u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 324))(
                 this,
                 *((_DWORD *)this + 1),
                 645,
                 wParam,
                 hkl,
                 a5);
      case 0x286u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 328))(
                 this,
                 *((_DWORD *)this + 1),
                 646,
                 wParam,
                 hkl,
                 a5);
      case 0x288u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 332))(
                 this,
                 *((_DWORD *)this + 1),
                 648,
                 wParam,
                 hkl,
                 a5);
      case 0x290u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 336))(
                 this,
                 *((_DWORD *)this + 1),
                 656,
                 wParam,
                 hkl,
                 a5);
      case 0x291u:
        return (*(int (__thiscall **)(void *, _DWORD, signed int, WPARAM, HKL, int))(*(_DWORD *)this + 340))(
                 this,
                 *((_DWORD *)this + 1),
                 657,
                 wParam,
                 hkl,
                 a5);
      default:
        break;
    }
LABEL_110:
    if ( Msg - 1024 <= 0x7BFF )
      return (*(int (__thiscall **)(void *, _DWORD, UINT, WPARAM, HKL, int))(*(_DWORD *)this + 260))(
               this,
               *((_DWORD *)this + 1),
               Msg,
               wParam,
               hkl,
               a5);
    if ( Msg - 0x8000 <= 0x3FFF )
      return (*(int (__thiscall **)(void *, _DWORD, UINT, WPARAM, HKL, int))(*(_DWORD *)this + 264))(
               this,
               *((_DWORD *)this + 1),
               Msg,
               wParam,
               hkl,
               a5);
    if ( Msg - 49152 <= 0x3FFF )
      return (*(int (__thiscall **)(void *, _DWORD, UINT, WPARAM, HKL, int))(*(_DWORD *)this + 268))(
               this,
               *((_DWORD *)this + 1),
               Msg,
               wParam,
               hkl,
               a5);
    return 0;
  }
  switch ( Msg )
  {
    case 0x312u:
      (*(void (__thiscall **)(void *, _DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 80))(
        this,
        *((_DWORD *)this + 1),
        wParam,
        (unsigned __int16)hkl,
        (unsigned int)hkl >> 16,
        a5);
      result = 0;
      break;
    case 0x31Eu:
      result = (*(int (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 280))(
                 this,
                 *((_DWORD *)this + 1),
                 wParam,
                 hkl,
                 a5);
      break;
    case 0x301u:
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 288))(this, *((_DWORD *)this + 1), a5);
      result = 0;
      break;
    case 0x302u:
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 292))(this, *((_DWORD *)this + 1), a5);
      result = 0;
      break;
    case 0x303u:
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 300))(this, *((_DWORD *)this + 1), a5);
      result = 0;
      break;
    case 0x304u:
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 304))(this, *((_DWORD *)this + 1), a5);
      result = 0;
      break;
    default:
      goto LABEL_110;
  }
  return result;
} 
 
 
 
 	  
	  
//==================================================================================================================================
0019F0CC 5328110C 532B9D5C 50       gf.532B9D5C                用户模块

int __thiscall sub_532B9D30(void *this, int a2, unsigned int a3, int a4, int a5, int *a6, signed int a7)
{
  int v7; // eax@3
  int v8; // eax@3
  bool v9; // zf@3
  int result; // eax@4

  result = 0;
  if ( !a7 && a3 <= 0xFFFF )
  {
    v7 = *(_DWORD *)this;
    a7 = 1;
    v8 = (*(int (__stdcall **)(unsigned int, int, int, signed int *))(v7 + 16))(a3, a4, a5, &a7); //=====================> 532BA702/sub_532B9EF0
    v9 = a7 == 0;
    *a6 = v8;
    if ( !v9 )
      result = 1;
  }
  return result;
}
 
 
 
 	  
	  
//==================================================================================================================================
0019F11C 5FF120CF 5328110C 20       gf.5328110C                系统模块

LRESULT CALLBACK WindowProc(
	HWND hwnd,		//发送方的窗口句柄
	UINT msg,		//消息id，即消息的种类
	WPARAM wparam,	//详细信息
	LPARAM lparam)；//详细信息


int __stdcall sub_532810A0(int a1, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  WPARAM v4; // edx@1
  int v5; // esi@1
  int v6; // edi@1
  int v7; // ebx@1
  LPARAM v8; // ST0C_4@1
  int v9; // ecx@1
  WPARAM v10; // ST08_4@1
  int (__thiscall **v11)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax@1
  HWND v12; // eax@2
  LONG v13; // eax@5
  int v14; // eax@8
  int v15; // edx@10
  int (__thiscall **v16)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax@10
  int result; // eax@10
  int v18; // [sp+Ch] [bp-24h]@1
  int v19; // [sp+10h] [bp-20h]@1
  WPARAM v20; // [sp+14h] [bp-1Ch]@1
  LPARAM v21; // [sp+18h] [bp-18h]@1
  int v22; // [sp+1Ch] [bp-14h]@1
  int v23; // [sp+20h] [bp-10h]@1
  int v24; // [sp+24h] [bp-Ch]@1
  int v25; // [sp+28h] [bp-8h]@1
  int v26; // [sp+2Ch] [bp-4h]@1

  v4 = wParam;
  v5 = a1;
  v6 = Msg;
  v7 = *(_DWORD *)(a1 + 24);
  v18 = *(_DWORD *)(a1 + 4);
  v8 = lParam;
  v9 = *(_DWORD *)(a1 + 4);
  v21 = lParam;
  v10 = wParam;
  *(_DWORD *)(a1 + 24) = &v18;
  v11 = *(int (__thiscall ***)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v5;
  v25 = 36;
  v26 = 1;
  v19 = v6;
  v20 = v4;
  v22 = 0;
  v24 = 0;
  v23 = 0;
  a1 = 0;
  if ( !(*v11)(v5, v9, v6, v10, v8, &a1, 0) )   //=====================> 532B9D5C/sub_532B9D30
  {
    v12 = *(HWND *)(v5 + 4);
    if ( v6 == 130 )
    {
      Msg = GetWindowLongW(v12, -4);
      a1 = CallWindowProcW(*(WNDPROC *)(v5 + 32), *(HWND *)(v5 + 4), 0x82u, wParam, lParam);
      if ( *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 32) != DefWindowProcW )
      {
        v13 = GetWindowLongW(*(HWND *)(v5 + 4), -4);
        if ( v13 == Msg )
          SetWindowLongW(*(HWND *)(v5 + 4), -4, *(_DWORD *)(v5 + 32));
      }
      *(_DWORD *)(v5 + 28) |= 1u;
    }
    else
    {
      a1 = CallWindowProcW(*(WNDPROC *)(v5 + 32), v12, v6, wParam, lParam);
    }
  }
  v14 = *(_DWORD *)(v5 + 28);
  if ( !(v14 & 1) || v7 )
  {
    result = a1;
    *(_DWORD *)(v5 + 24) = v7;
  }
  else
  {
    v15 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 28) = v14 & 0xFFFFFFFE;
    v16 = *(int (__thiscall ***)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v5;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 24) = 0;
    ((void (__thiscall *)(int, int))v16[3])(v5, v15);
    result = a1;
  }
  return result;
} 
 
 
 
 
 	  
	  
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
    DispatchMessageW(lpMsg); //=====================> 5328110C/sub_532810A0
    AsyncTask::MessagePumpWin::DidProcessMessage(v2, lpMsg);
  }
  return 1;
}
 
 
typedef struct tagMSG {
    HWND        hwnd;
    UINT        message;
    WPARAM      wParam;
    LPARAM      lParam;
    DWORD       time;
    POINT       pt;
#ifdef _MAC
    DWORD       lPrivate;
#endif
} MSG, *PMSG, NEAR *NPMSG, FAR *LPMSG;

 
 
 
 	  
	  
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

 
 
 
 
 
 