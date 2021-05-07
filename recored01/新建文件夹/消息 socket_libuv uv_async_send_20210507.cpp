

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

//-----------------------------------
struct AsyncTask::MessageLoop::PendingTask

//-----------------------------------
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
      1F23FE40 51B21BF4 51B265B4 18       asynctask.51B265B4         用户模块
      1F23FE58 51B26019 51B21BF4 114      asynctask.51B21BF4         用户模块	//AsyncTask::MessageLoop::MessageLoop(int this, int a2)
      1F23FF6C 51B25E47 51B26019 8        asynctask.51B26019         用户模块
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块

3424                                                                 
      1F23FE48 51B23C7C 51B265B4 10       asynctask.51B265B4         用户模块
      1F23FE58 51B26051 51B23C7C 114      asynctask.51B23C7C         用户模块
      1F23FF6C 51B25E47 51B26051 8        asynctask.51B26051         用户模块
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块
	  
3424                                                                 
      1F23FDE4 51B214B9 51B265B4 44       asynctask.51B265B4         用户模块
      1F23FE28 51B21EB8 51B214B9 14       asynctask.51B214B9         用户模块
      1F23FE3C 51B23AAA 51B21EB8 1C       asynctask.51B21EB8         用户模块
      1F23FE58 51B26051 51B23AAA 114      asynctask.51B23AAA         用户模块
      1F23FF6C 51B25E47 51B26051 8        asynctask.51B26051         用户模块
      1F23FF74 76660419 51B25E47 10       asynctask.51B25E47         系统模块
      1F23FF84 778C66DD 76660419 5C       kernel32.76660419          系统模块
      1F23FFE0 778C66AD 778C66DD 10       ntdll.778C66DD             系统模块
      1F23FFF0 00000000 778C66AD          ntdll.778C66AD             用户模块	  



44272                                                                
      0019D3C4 51B214B9 51B265B4 2C       asynctask.51B265B4         用户模块
      0019D3F0 51B231B3 51B214B9 18       asynctask.51B214B9         用户模块
      0019D408 51B2236B 51B231B3 58       asynctask.51B231B3         用户模块
      0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块
      0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块
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
      0019D3EC 51B214B9 51B265B4 1C       asynctask.51B265B4         用户模块
      0019D408 51B2236B 51B214B9 58       asynctask.51B214B9         用户模块
      0019D460 51B22169 51B2236B 20       asynctask.51B2236B         用户模块
      0019D480 54B186F3 51B22169 C        asynctask.51B22169         用户模块
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

//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================



//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================

//==================================================================================================================================


//==================================================================================================================================