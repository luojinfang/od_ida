/*
//todo 
1. 创建了多少线程? 线程生命周期? 

*/

/*


//创建 AsyncTask::MessageLoop

//创建 AsyncTask::Thread
//AsyncTask::Thread::Start 

*/

/*
栈

Address  To       From     Siz Comment               Party 
0019C7C8 5578991B 557EF13B 4C  kernelutil.557EF13B   User   //dump [[[ebp+8]+28]]
0019C814 0D7AC092 5578991B 47C kernelutil.5578991B   User	//Util::Msg::CopyNewToMsgPack(Util::Msg *this, struct ITXMsgPack *a2, struct ITXMsgPack *a3)
0019CC90 0D7ADD67 0D7AC092 2C  appframework.0D7AC092 User
0019CCBC 0D7B6B90 0D7ADD67 14  appframework.0D7ADD67 User
0019CCD0 0E1AD596 0D7B6B90 14  appframework.0D7B6B90 User
0019CCE4 0E1ABC0E 0E1AD596 448 chatframeapp.0E1AD596 User
0019D12C 0D7ABA90 0E1ABC0E 44C chatframeapp.0E1ABC0E User
0019D578 0D7AB9AD 0D7ABA90 470 appframework.0D7ABA90 User
0019D9E8 0D7AAFC8 0D7AB9AD 2C  appframework.0D7AB9AD User
0019DA14 0D7AA71D 0D7AAFC8 18  appframework.0D7AAFC8 User
0019DA2C 0D6D38EB 0D7AA71D 18  appframework.0D7AA71D User
0019DA44 0E1A808E 0D6D38EB 18  appframework.0D6D38EB User
0019DA5C 0E1AB747 0E1A808E 430 chatframeapp.0E1A808E User
0019DE8C 0D6DADDE 0E1AB747 538 chatframeapp.0E1AB747 User
0019E3C4 0D7EA86B 0D6DADDE 7C  appframework.0D6DADDE User
0019E440 0E12BFA8 0D7EA86B 18  appframework.0D7EA86B User
0019E458 0E1B51FF 0E12BFA8 450 chatframeapp.0E12BFA8 User
0019E8A8 0E1A590F 0E1B51FF 44C chatframeapp.0E1B51FF User
0019ECF4 0E0FDEA8 0E1A590F 20  chatframeapp.0E1A590F User
0019ED14 0E0FE189 0E0FDEA8 18  chatframeapp.0E0FDEA8 User
0019ED2C 532A9720 0E0FE189 80  chatframeapp.0E0FE189 User
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
0019F11C 74E11D3F 5328110C 20  gf.5328110C           System
0019F13C 771847AB 74E11D3F 2C  atlthunk.74E11D3F     System
0019F168 771652AC 771847AB E4  user32.771847AB       System
0019F24C 771643FE 771652AC 74  user32.771652AC       System
0019F2C0 771641E0 771643FE C   user32.771643FE       System
0019F2CC 51B24578 771641E0 18  user32.771641E0       User
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578    User	//AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg)
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB    User	//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C    User 	//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User 	//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User 	//sub_5391F82B = > AsyncTask::MessageLoopForUI::Run((AsyncTask::MessageLoopForUI *)&v110);
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User 	//signed int RunQQHummerEngine()
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944     ntdll.77808944        System




//重点断点  Util::Msg::TranslateMsgPackToBuddyMsg   再断点  kernelutil.557EF13B   User   //dump [[[ebp+8]+28]]

Address  To       From     Siz Comment             Party 
1108FC7C 55796F2A 557EF13B 74  kernelutil.557EF13B User
1108FCF0 55795407 55796F2A 18  kernelutil.55796F2A User //sub_55796DC3@<eax>(struct ITXMsgImage *a1@<edi>, int a2, struct CTXBuffer *a3, int a4, int a5)
1108FD08 54C99925 55795407 10  kernelutil.55795407 User // Util::Msg::TranslateMsgPackToBuddyMsg   
1108FD18 54C99969 54C99925 20  im.54C99925         User
1108FD38 54A6B0C6 54C99969 1C  im.54C99969         User
1108FD54 54B47A90 54A6B0C6 40  im.54A6B0C6         User
1108FD94 51B224EE 54B47A90 28  im.54B47A90         User
1108FDBC 51B22591 51B224EE C   asynctask.51B224EE  User//AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
1108FDC8 51B227CF 51B22591 38  asynctask.51B22591  User//AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
1108FE00 51B24321 51B227CF 2C  asynctask.51B227CF  User//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
1108FE2C 51B2207A 51B24321 24  asynctask.51B24321  User//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
1108FE50 51B25FE7 51B2207A 8   asynctask.51B2207A  User//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
1108FE58 51B26082 51B25FE7 114 asynctask.51B25FE7  User//AsyncTask::Thread::Run(struct AsyncTask::MessageLoop *a2)
1108FF6C 51B25E47 51B26082 8   asynctask.51B26082  User
1108FF74 759F6359 51B25E47 10  asynctask.51B25E47  System
1108FF84 77808944 759F6359 5C  kernel32.759F6359   System
1108FFE0 77808914 77808944 10  ntdll.77808944      System
1108FFF0 00000000 77808914     ntdll.77808914      User


*/
//================================================================================================================

//================================================================================================================
1108FDBC 51B22591 51B224EE C   asynctask.51B224EE  User//AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
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
          sub_51B22C1F(&v11);
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
    (*(void (**)(void))(*(_DWORD *)a2 + 4))();
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



//================================================================================================================
1108FDC8 51B227CF 51B22591 38  asynctask.51B22591  User//AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
char __thiscall AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
{
  char result; // al@3

  if ( *((_BYTE *)a2 + 20) || **((_DWORD **)this + 40) == 1 )
  {
    AsyncTask::MessageLoop::RunTask(this, *(struct AsyncTask::Task **)a2);//=======================>51B224EE/AsyncTask::MessageLoop::RunTask
    result = 1;
  }
  else
  {
    sub_51B23198(a2);
    result = 0;
  }
  return result;
}



//================================================================================================================
1108FE00 51B24321 51B227CF 2C  asynctask.51B227CF  User//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)

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
  AsyncTask::MessageLoop::ReloadWorkQueue(this);  //---------------------> //AsyncTask::MessageLoop::ReloadWorkQueue
  
  //51B22770
  if ( !*((_DWORD *)v1 + 6) ) //判断是否有 task? 
    return 0;
  v2 = (int)v1 + 8;// 51B22776
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
    if ( AsyncTask::MessageLoop::DeferOrRunPendingTask(v1, (const struct AsyncTask::MessageLoop::PendingTask *)&v5) )//=======================>51B22591/AsyncTask::MessageLoop::DeferOrRunPendingTask
      return 1;
LABEL_11:
    v2 = (int)v1 + 8;// 51B227D7, 51B22776,51B227E7 处的 v1,v2 是一样
    if ( !*((_DWORD *)v1 + 6) )
    {
      AsyncTask::MessageLoop::ReloadWorkQueue(v1);
      v2 = (int)v1 + 8; //51B227E7 
      if ( !*((_DWORD *)v1 + 6) )
        return 0;
    }
  }
}

//51B22B52
//@this  为封装 task队例 的类的指针？
int __thiscall sub_51B22B52(int this)
{
  int v1; // eax@1

  v1 = *(_DWORD *)this;  
  if ( *(_DWORD *)this )   
    v1 = *(_DWORD *)v1; //v1取了 this的第一个 dword 地址,为 task队例 类指针?
  return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * (*(_DWORD *)(this + 12) & (*(_DWORD *)(v1 + 8) - 1)));
  
  /*
	*(_DWORD *)(*(_DWORD *)(v1 + 4)  数组起始地址?
	(*(_DWORD *)(this + 12)  元素最大个数?
	*(_DWORD *)(v1 + 8) 当前处理到的数数？
  */
  
  
}
.text:51B22B52 sub_51B22B52    proc near               ; CODE XREF: AsyncTask::MessageLoop::ProcessNextDelayedNonNestableTask(void)+19p
.text:51B22B52                                         ; AsyncTask::MessageLoop::DeletePendingTasks(void)+1Fp ...
.text:51B22B52                 mov     eax, [ecx]
.text:51B22B54                 mov     edx, [ecx+0Ch]   //edx 需要处理的task个数
.text:51B22B57                 test    eax, eax
.text:51B22B59                 jz      short loc_51B22B5D
.text:51B22B5B                 mov     eax, [eax]
.text:51B22B5D
.text:51B22B5D loc_51B22B5D:                           ; CODE XREF: sub_51B22B52+7j
.text:51B22B5D                 mov     ecx, [eax+8]
.text:51B22B60                 mov     eax, [eax+4]
.text:51B22B63                 dec     ecx
.text:51B22B64                 and     ecx, edx		//ecx 需要处理的task个数
.text:51B22B66                 mov     eax, [eax+ecx*4]   //eax 数组起始地址, ecx 当前要获取的元索序号, 指针大小 4
.text:51B22B69                 retn
.text:51B22B69 sub_51B22B52    endp
	

{
.text:51B22753 ; bool __thiscall AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
.text:51B22753                 public ?DoWork@MessageLoop@AsyncTask@@MAE_NXZ
.text:51B22753 ?DoWork@MessageLoop@AsyncTask@@MAE_NXZ proc near
.text:51B22753                                         ; DATA XREF: .rdata:51B283E0o
.text:51B22753                                         ; .rdata:51B28444o ...
.text:51B22753
.text:51B22753 var_18          = dword ptr -18h
.text:51B22753 var_10          = qword ptr -10h
.text:51B22753
.text:51B22753                 push    ebp
.text:51B22754                 mov     ebp, esp
.text:51B22756                 and     esp, 0FFFFFFF8h
.text:51B22759                 sub     esp, 1Ch
.text:51B2275C                 push    ebx
.text:51B2275D                 mov     ebx, ecx
.text:51B2275F                 push    esi
.text:51B22760                 push    edi
.text:51B22761                 cmp     byte ptr [ebx+58h], 0
.text:51B22765                 jz      loc_51B227EC
.text:51B2276B                 call    ?ReloadWorkQueue@MessageLoop@AsyncTask@@IAEXXZ ; AsyncTask::MessageLoop::ReloadWorkQueue(void)
.text:51B22770                 cmp     dword ptr [ebx+18h], 0    //判断是否有 task? 
.text:51B22774                 jz      short loc_51B227EC
.text:51B22776                 lea     eax, [ebx+8] //eax  为封装 task队例 的类的指针？
.text:51B22779
.text:51B22779 loc_51B22779:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+87j
.text:51B22779                                         ; AsyncTask::MessageLoop::DoWork(void)+97j
.text:51B22779                 mov     ecx, eax
.text:51B2277B                 call    sub_51B22B52   //需要处理的task个数  dump eax+c  // 条件断点  [eax+c]>0
.text:51B22780                 push    6
.text:51B22782                 pop     ecx
.text:51B22783                 mov     esi, eax
.text:51B22785                 lea     edi, [esp+28h+var_18]
.text:51B22789                 rep movsd
.text:51B2278B                 sub     dword ptr [ebx+18h], 1  //处理数量减一
.text:51B2278F                 jnz     short loc_51B22797
.text:51B22791                 and     dword ptr [ebx+14h], 0
.text:51B22795                 jmp     short loc_51B2279A
.text:51B22797 ; ---------------------------------------------------------------------------
.text:51B22797
.text:51B22797 loc_51B22797:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+3Cj
.text:51B22797                 inc     dword ptr [ebx+14h]
.text:51B2279A
.text:51B2279A loc_51B2279A:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+42j
.text:51B2279A                 mov     eax, dword ptr [esp+28h+var_10]
.text:51B2279E                 mov     ecx, ebx        ; this
.text:51B227A0                 or      eax, dword ptr [esp+28h+var_10+4]
.text:51B227A4                 lea     eax, [esp+28h+var_18]
.text:51B227A8                 push    eax             ; struct AsyncTask::MessageLoop::PendingTask *
.text:51B227A9                 jz      short loc_51B227CA
.text:51B227AB                 call    ?AddToDelayedWorkQueue@MessageLoop@AsyncTask@@IAEXABUPendingTask@12@@Z ; AsyncTask::MessageLoop::AddToDelayedWorkQueue(AsyncTask::MessageLoop::PendingTask const &)
.text:51B227B0                 mov     eax, [ebx+1Ch]
.text:51B227B3                 mov     eax, [eax]
.text:51B227B5                 cmp     eax, [esp+28h+var_18]
.text:51B227B9                 jnz     short loc_51B227D3
.text:51B227BB                 mov     ecx, [ebx+40h]
.text:51B227BE                 lea     edx, [esp+28h+var_10]
.text:51B227C2                 push    edx
.text:51B227C3                 mov     eax, [ecx]
.text:51B227C5                 call    dword ptr [eax+10h]
.text:51B227C8                 jmp     short loc_51B227D3
.text:51B227CA ; ---------------------------------------------------------------------------
.text:51B227CA
.text:51B227CA loc_51B227CA:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+56j
.text:51B227CA                 call    ?DeferOrRunPendingTask@MessageLoop@AsyncTask@@IAE_NABUPendingTask@12@@Z ; AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop::PendingTask const &)
.text:51B227CF                 test    al, al
.text:51B227D1                 jnz     short loc_51B227F5
.text:51B227D3
.text:51B227D3 loc_51B227D3:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+66j
.text:51B227D3                                         ; AsyncTask::MessageLoop::DoWork(void)+75j
.text:51B227D3                 cmp     dword ptr [ebx+18h], 0
.text:51B227D7                 lea     eax, [ebx+8] //
.text:51B227DA                 jnz     short loc_51B22779
.text:51B227DC                 mov     ecx, ebx        ; this
.text:51B227DE                 call    ?ReloadWorkQueue@MessageLoop@AsyncTask@@IAEXXZ ; AsyncTask::MessageLoop::ReloadWorkQueue(void)
.text:51B227E3                 cmp     dword ptr [ebx+18h], 0
.text:51B227E7                 lea     eax, [ebx+8]
.text:51B227EA                 jnz     short loc_51B22779
.text:51B227EC
.text:51B227EC loc_51B227EC:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+12j
.text:51B227EC                                         ; AsyncTask::MessageLoop::DoWork(void)+21j
.text:51B227EC                 xor     al, al
.text:51B227EE
.text:51B227EE loc_51B227EE:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+A4j
.text:51B227EE                 pop     edi
.text:51B227EF                 pop     esi
.text:51B227F0                 pop     ebx
.text:51B227F1                 mov     esp, ebp
.text:51B227F3                 pop     ebp
.text:51B227F4                 retn
.text:51B227F5 ; ---------------------------------------------------------------------------
.text:51B227F5
.text:51B227F5 loc_51B227F5:                           ; CODE XREF: AsyncTask::MessageLoop::DoWork(void)+7Ej
.text:51B227F5                 mov     al, 1
.text:51B227F7                 jmp     short loc_51B227EE
.text:51B227F7 ?DoWork@MessageLoop@AsyncTask@@MAE_NXZ endp
	
	
}


//AsyncTask::MessageLoop::ReloadWorkQueue
void __thiscall AsyncTask::MessageLoop::ReloadWorkQueue(AsyncTask::MessageLoop *this)
{
  AsyncTask::MessageLoop *v1; // edi@1

  v1 = this;
  if ( !*((_DWORD *)this + 6) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    if ( *((_DWORD *)v1 + 33) )
      sub_51B2186B((char *)v1 + 8);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 136));
  }
}
int __thiscall sub_51B2186B(_DWORD *this, int a2)
{
  _DWORD *v2; // esi@1
  _DWORD *v3; // ecx@2
  int v4; // ecx@6
  int v5; // ecx@6
  int v6; // ecx@6
  int v7; // ecx@6
  int result; // eax@6

  v2 = this;
  if ( this != (_DWORD *)a2 )
  {
    v3 = (_DWORD *)*this;
    *v2 = *(_DWORD *)a2;
    *(_DWORD *)a2 = v3;
    if ( *v2 )
    {
      *(_DWORD *)*v2 = v2;
      v3 = *(_DWORD **)a2;
    }
    if ( v3 )
      *v3 = a2;
    v4 = v2[1];
    v2[1] = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = v4;
    v5 = v2[2];
    v2[2] = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = v5;
    v6 = v2[3];
    v2[3] = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 12) = v6;
    v7 = v2[4];
    result = *(_DWORD *)(a2 + 16);
    v2[4] = result;
    *(_DWORD *)(a2 + 16) = v7;
  }
  return result;
}



//================================================================================================================
1108FE2C 51B2207A 51B24321 24  asynctask.51B24321  User//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)

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
  
  //51B24313
  for ( i = *((_DWORD *)v1 + 11); !*(_BYTE *)(i + 4); i = *((_DWORD *)v1 + 11) )
  {
	// *(_BYTE *)(i + 4) 为  [[esi+2Ch] + 4] 结束标识 
	// ( **(_DWORD **)i ) 为 AsyncTask::MessageLoop 指针?
    v4 = (*(int (**)(void))(**(_DWORD **)i + 4))();//=======================>51B227CF/AsyncTask::MessageLoop::DoWork
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

{
.text:51B24305
.text:51B24305
.text:51B24305 ; void __thiscall AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
.text:51B24305                 public ?DoRunLoop@MessagePumpForUI@AsyncTask@@EAEXXZ
.text:51B24305 ?DoRunLoop@MessagePumpForUI@AsyncTask@@EAEXXZ proc near
.text:51B24305                                         ; DATA XREF: .rdata:51B28504o
.text:51B24305                                         ; .rdata:off_51B28F28o
.text:51B24305                 push    ebx
.text:51B24306                 push    esi
.text:51B24307                 mov     esi, ecx   // ecx / AsyncTask::MessagePumpForUI *this 
.text:51B24309                 call    ?ProcessNextWindowsMessage@MessagePumpForUI@AsyncTask@@AAE_NXZ ; AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(void)
.text:51B2430E                 mov     bl, al
.text:51B24310                 mov     eax, [esi+2Ch]  // [[esi+2Ch]] 为 AsyncTask::MessageLoop 指针
.text:51B24313                 cmp     byte ptr [eax+4], 0 //[[esi+2Ch] + 4] 结束标识 
.text:51B24317                 jnz     short loc_51B24388
.text:51B24319                 push    edi
.text:51B2431A
.text:51B2431A loc_51B2431A:                           ; CODE XREF: AsyncTask::MessagePumpForUI::DoRunLoop(void)+80j
.text:51B2431A                 mov     ecx, [eax]
.text:51B2431C                 mov     eax, [ecx]
.text:51B2431E                 call    dword ptr [eax+4] //=======================>51B227CF/AsyncTask::MessageLoop::DoWork
.text:51B24321                 mov     ecx, [esi+2Ch]  // 
.text:51B24324                 or      bl, al
.text:51B24326                 cmp     byte ptr [ecx+4], 0
.text:51B2432A                 jnz     short loc_51B24387
.text:51B2432C                 mov     ecx, [ecx]
.text:51B2432E                 lea     edi, [esi+20h]
.text:51B24331                 push    edi
.text:51B24332                 mov     eax, [ecx]
.text:51B24334                 mov     eax, [eax+8]
.text:51B24337                 call    eax
.text:51B24339                 or      bl, al
.text:51B2433B                 jz      short loc_51B2434E
.text:51B2433D                 mov     eax, [edi]
.text:51B2433F                 or      eax, [edi+4]
.text:51B24342                 jnz     short loc_51B2434E
.text:51B24344                 push    esi             ; uIDEvent
.text:51B24345                 push    dword ptr [esi+30h] ; hWnd
.text:51B24348                 call    ds:KillTimer
.text:51B2434E
.text:51B2434E loc_51B2434E:                           ; CODE XREF: AsyncTask::MessagePumpForUI::DoRunLoop(void)+36j
.text:51B2434E                                         ; AsyncTask::MessagePumpForUI::DoRunLoop(void)+3Dj
.text:51B2434E                 mov     ecx, [esi+2Ch]
.text:51B24351                 cmp     byte ptr [ecx+4], 0
.text:51B24355                 jnz     short loc_51B24387
.text:51B24357                 test    bl, bl
.text:51B24359                 jnz     short loc_51B24375
.text:51B2435B                 mov     ecx, [ecx]
.text:51B2435D                 mov     eax, [ecx]
.text:51B2435F                 call    dword ptr [eax+0Ch]
.text:51B24362                 mov     ecx, [esi+2Ch]
.text:51B24365                 cmp     [ecx+4], bl
.text:51B24368                 jnz     short loc_51B24387
.text:51B2436A                 test    al, al
.text:51B2436C                 jnz     short loc_51B24375
.text:51B2436E                 mov     ecx, esi        ; this
.text:51B24370                 call    ?WaitForWork@MessagePumpForUI@AsyncTask@@AAEXXZ ; AsyncTask::MessagePumpForUI::WaitForWork(void)
.text:51B24375
.text:51B24375 loc_51B24375:                           ; CODE XREF: AsyncTask::MessagePumpForUI::DoRunLoop(void)+54j
.text:51B24375                                         ; AsyncTask::MessagePumpForUI::DoRunLoop(void)+67j
.text:51B24375                 mov     ecx, esi        ; this
.text:51B24377                 call    ?ProcessNextWindowsMessage@MessagePumpForUI@AsyncTask@@AAE_NXZ ; AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(void)
.text:51B2437C                 mov     bl, al
.text:51B2437E                 mov     eax, [esi+2Ch]
.text:51B24381                 cmp     byte ptr [eax+4], 0 //结束标识
.text:51B24385                 jz      short loc_51B2431A
.text:51B24387
.text:51B24387 loc_51B24387:                           ; CODE XREF: AsyncTask::MessagePumpForUI::DoRunLoop(void)+25j
.text:51B24387                                         ; AsyncTask::MessagePumpForUI::DoRunLoop(void)+50j ...
.text:51B24387                 pop     edi
.text:51B24388
.text:51B24388 loc_51B24388:                           ; CODE XREF: AsyncTask::MessagePumpForUI::DoRunLoop(void)+12j
.text:51B24388                 pop     esi
.text:51B24389                 pop     ebx
.text:51B2438A                 retn
.text:51B2438A ?DoRunLoop@MessagePumpForUI@AsyncTask@@EAEXXZ endp	
	
	
}

//================================================================================================================
1108FE50 51B25FE7 51B2207A 8   asynctask.51B2207A  User//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)

void __thiscall AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
  JUMPOUT(*((_BYTE *)this + 89), 0, AsyncTask::MessageLoop::RunInternalInSEHFrame);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 4))(this);//=======================>51B24321/AsyncTask::MessageLoop::DoRunLoop
}


//================================================================================================================
1108FE58 51B26082 51B25FE7 114 asynctask.51B25FE7  User//AsyncTask::Thread::Run(struct AsyncTask::MessageLoop *a2)
void __stdcall AsyncTask::Thread::Run(struct AsyncTask::MessageLoop *a2)
{
  AsyncTask::MessageLoopForUI::Run(a2);//=======================>51B2207A/AsyncTask::MessageLoop::RunHandler
}



//================================================================================================================
1108FF6C 51B25E47 51B26082 8   asynctask.51B26082  User   
void __thiscall AsyncTask::Thread::ThreadMain(AsyncTask::Thread *this)
{
  AsyncTask::Thread *v1; // edi@1
  const char *v2; // eax@1
  LONG *v3; // eax@3
  char v4; // [sp+Ch] [bp-FCh]@3
  char v5; // [sp+10h] [bp-F8h]@1

  v1 = this;
  AsyncTask::MessageLoop::MessageLoop((int)&v5, ***((_DWORD ***)this + 2));//AsyncTask::MessageLoop 构造方法,  内存空间挂在 thread实例？
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
  (*(void (__thiscall **)(AsyncTask::Thread *, _DWORD))(*(_DWORD *)v1 + 12))(v1, *((_DWORD *)v1 + 4));//=======================> 51B25FE7/AsyncTask::Thread::Run
  (*(void (__thiscall **)(AsyncTask::Thread *))(*(_DWORD *)v1 + 16))(v1);
  *((_DWORD *)v1 + 4) = 0;
  sub_51B260BF((volatile LONG *)v1 + 5, 0);
  AsyncTask::MessageLoop::~MessageLoop((AsyncTask::MessageLoop *)&v5);
  (*(void (__thiscall **)(AsyncTask::Thread *))(*(_DWORD *)v1 + 20))(v1);
  *((_DWORD *)v1 + 6) = 0;
}


//================================================================================================================
1108FF74 759F6359 51B25E47 10  asynctask.51B25E47  System 
DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
  (*(void (**)(void))(*(_DWORD *)lpThreadParameter + 4))();  //==========>51B26082/AsyncTask::Thread::ThreadMain()
  return 0;
} 
  
 
//================================================================================================================








//================================================================================================================
//创建 AsyncTask::MessageLoop  构造方法
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
    v7 = AsyncTask::MessagePumpForUI::MessagePumpForUI(v6);
    sub_51B22A8B((volatile LONG *)(v2 + 64), v7);
  }
  return v2;
}





//================================================================================================================
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
	

//================================================================================================================




//================================================================================================================




//================================================================================================================




//================================================================================================================




//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



//================================================================================================================



//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================


//================================================================================================================



















