
//================================================================================================================

//================================================================================================================
/*
//todo 
有几个线程调用 uv_run 
uv_async_send 和  TranslateMsgPackToBuddyMsg 在不在同一线程调用
 
*/
//================================================================================================================
Address  To       From     Siz Comment               Party 
0019CBDC 52985B28 557EF13B 554 kernelutil.557EF13B   User  //dump [[[ebp+8]+28]]
0019D130 5296569E 52985B28 18  customface.52985B28   User
0019D148 528FF58D 5296569E 438 customface.5296569E   User
0019D580 528FF7DD 528FF58D 14  customface.528FF58D   User
0019D594 0D7B029F 528FF7DD 458 customface.528FF7DD   User
0019D9EC 0D7AAFB8 0D7B029F 28  appframework.0D7B029F User
0019DA14 0D7AA71D 0D7AAFB8 18  appframework.0D7AAFB8 User
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
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578    User//AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg)
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB    User//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C    User//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944 10  ntdll.77808944        System
0019FFF0 00000000 77808914     ntdll.77808914        User



Address  To       From     Siz Comment               Party 
0019D57C 0D7AB454 557EF13B 46C kernelutil.557EF13B   User  //dump [[[ebp+8]+28]]
0019D9E8 0D7AAFC8 0D7AB454 2C  appframework.0D7AB454 User
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
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB    User  	//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C    User  	//AsyncTask::MessagePumpForUI::DoRunLoop  
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User	//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User 	//sub_5391F82B = > AsyncTask::MessageLoopForUI::Run((AsyncTask::MessageLoopForUI *)&v110);
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User 	//signed int RunQQHummerEngine()
0019FF1C 004012C6 0040289B C   qq.0040289B           User	
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944 10  ntdll.77808944        System
0019FFF0 00000000 77808914     ntdll.77808914        User




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
0019F2E4 51B244FB 51B24578 30  asynctask.51B24578    User//AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg)
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB    User//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C    User //AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User //AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944     ntdll.77808944        System




//--------------------------------
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
1108FE58 51B26082 51B25FE7 114 asynctask.51B25FE7  User
1108FF6C 51B25E47 51B26082 8   asynctask.51B26082  User
1108FF74 759F6359 51B25E47 10  asynctask.51B25E47  System
1108FF84 77808944 759F6359 5C  kernel32.759F6359   System
1108FFE0 77808914 77808944 10  ntdll.77808944      System
1108FFF0 00000000 77808914     ntdll.77808914      User

//--------------------------------

 

Address  To       From     Siz Comment               Party 
0019EC6C 54B3BDD2 557EF13B B4  kernelutil.557EF13B   User
0019ED20 54CC2D4F 54B3BDD2 48  im.54B3BDD2           User
0019ED68 54CC3485 54CC2D4F 468 im.54CC2D4F           User
0019F1D0 54C99792 54CC3485 7C  im.54CC3485           User
0019F24C 54B196FC 54C99792 20  im.54C99792           User
0019F26C 54B22591 54B196FC 40  im.54B196FC           User
0019F2AC 51B224EE 54B22591 28  im.54B22591           User
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE    User//AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591    User//AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF    User//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
0019F340 51B2207A 51B24321 24  asynctask.51B24321    User//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 759F6359 00403365 10  qq.00403365           System
0019FF84 77808944 759F6359 5C  kernel32.759F6359     System
0019FFE0 77808914 77808944 10  ntdll.77808944        System
0019FFF0 00000000 77808914     ntdll.77808914        User


Address  To       From     Siz Comment             Party 
0F34FCA8 54B4E068 557EF13B 7C  kernelutil.557EF13B User
0F34FD24 54B4C0DC 54B4E068 3C  im.54B4E068         User
0F34FD60 54A5F456 54B4C0DC 34  im.54B4C0DC         User
0F34FD94 51B224EE 54A5F456 28  im.54A5F456         User
0F34FDBC 51B22591 51B224EE C   asynctask.51B224EE  User//AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
0F34FDC8 51B227CF 51B22591 38  asynctask.51B22591  User//AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
0F34FE00 51B24321 51B227CF 2C  asynctask.51B227CF  User//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
0F34FE2C 51B2207A 51B24321 24  asynctask.51B24321  User//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0F34FE50 51B25FE7 51B2207A 8   asynctask.51B2207A  User//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0F34FE58 51B26082 51B25FE7 114 asynctask.51B25FE7  User
0F34FF6C 51B25E47 51B26082 8   asynctask.51B26082  User
0F34FF74 759F6359 51B25E47 10  asynctask.51B25E47  System
0F34FF84 77808944 759F6359 5C  kernel32.759F6359   System
0F34FFE0 77808914 77808944 10  ntdll.77808944      System
0F34FFF0 00000000 77808914     ntdll.77808914      User


 
//================================================================================================================

557EF13B                         | 8B4D 08               | mov ecx,dword ptr ss:[ebp+8]                                    | [5202] dump [[[ebp+8]+28]]
557EF13E                         | 8D45 0C               | lea eax,dword ptr ss:[ebp+C]                                    | [5202]  dump [[ecx+28]];dump [[ecx+28]]+1c  消息内容



//================================================================================================================
1108FD08 54C99925 55795407 10  kernelutil.55795407   
{
	

.text:557953F5                         ; int __cdecl Util::Msg::TranslateMsgPackToBuddyMsg(Util::Msg *this, struct ITXMsgPack *, struct CTXBuffer *)
.text:557953F5                                         public ?TranslateMsgPackToBuddyMsg@Msg@Util@@YAHPAUITXMsgPack@@AAVCTXBuffer@@@Z
.text:557953F5                         ?TranslateMsgPackToBuddyMsg@Msg@Util@@YAHPAUITXMsgPack@@AAVCTXBuffer@@@Z proc near
.text:557953F5                                                                 ; DATA XREF: .rdata:off_5583FEE8o
.text:557953F5
.text:557953F5                         this            = dword ptr  8
.text:557953F5                         arg_4           = dword ptr  0Ch
.text:557953F5
.text:557953F5 55                                      push    ebp
.text:557953F6 8B EC                                   mov     ebp, esp
.text:557953F8 6A 00                                   push    0   //此时查看发送内容  dump [[[ebp+8]+28]];dump [[[ebp+8]+28]]+1c  消息内容
.text:557953FA 6A 00                                   push    0
.text:557953FC FF 75 0C                                push    [ebp+arg_4]
.text:557953FF FF 75 08                                push    [ebp+this]
.text:55795402 E8 BC 19 00 00                          call    sub_55796DC3
.text:55795407 83 C4 10                                add     esp, 10h
.text:5579540A 5D                                      pop     ebp
.text:5579540B C3                                      retn
}
//================================================================================================================
1108FD18 54C99969 54C99925 20  im.54C99925         User

//注意,多线程调用. 要找 调用到 TranslateMsgPackToBuddyMsg 的线程分析
{
	
.text:54C99916 sub_54C99916    proc near               ; CODE XREF: sub_54C9431D+3Cp
.text:54C99916                                         ; sub_54C99931+33p ...
.text:54C99916
.text:54C99916 arg_0           = dword ptr  8
.text:54C99916 arg_4           = dword ptr  0Ch
.text:54C99916
.text:54C99916                 push    ebp
.text:54C99917                 mov     ebp, esp
.text:54C99919                 push    [ebp+arg_4]
.text:54C9991C                 push    [ebp+arg_0]  //   dump [[[ebp+8]+28]];dump [[[ebp+8]+28]]+1c  消息内容
.text:54C9991F                 call    ds:?TranslateMsgPackToBuddyMsg@Msg@Util@@YAHPAUITXMsgPack@@AAVCTXBuffer@@@Z ; Util::Msg::TranslateMsgPackToBuddyMsg(ITXMsgPack *,CTXBuffer &)
.text:54C99925                 neg     eax
.text:54C99927                 pop     ecx
.text:54C99928                 sbb     eax, eax
.text:54C9992A                 pop     ecx
.text:54C9992B                 neg     eax
.text:54C9992D                 pop     ebp
.text:54C9992E                 retn    8
.text:54C9992E sub_54C99916    endp	
	
}

//================================================================================================================
1108FD38 54A6B0C6 54C99969 1C  im.54C99969         User
//注意,多线程调用. 要找 调用到 TranslateMsgPackToBuddyMsg 的线程分析
{
.text:54C99931 sub_54C99931    proc near               ; DATA XREF: sub_54C93E33+A4o
.text:54C99931
.text:54C99931 var_10          = dword ptr -10h
.text:54C99931 var_C           = dword ptr -0Ch
.text:54C99931 var_8           = dword ptr -8
.text:54C99931 var_4           = dword ptr -4
.text:54C99931 arg_0           = dword ptr  8
.text:54C99931 arg_4           = dword ptr  0Ch
.text:54C99931 arg_8           = dword ptr  10h
.text:54C99931 arg_C           = byte ptr  14h
.text:54C99931 arg_10          = byte ptr  18h  //dump [[[esp+4]+28]]
.text:54C99931
.text:54C99931                 push    ebp 			
.text:54C99932                 mov     ebp, esp  
.text:54C99934                 sub     esp, 0Ch
.text:54C99937                 and     [ebp+var_4], 0
.text:54C9993B                 lea     eax, [ebp+var_4]
.text:54C9993E                 push    esi
.text:54C9993F                 push    eax
.text:54C99940                 mov     [ebp+var_8], ecx
.text:54C99943                 call    ds:?CreateTXBuffer@Data@Util@@YAHPAPAUITXBuffer@@@Z ; Util::Data::CreateTXBuffer(ITXBuffer * *)
.text:54C99949                 mov     eax, [ebp+var_4]
.text:54C9994C                 mov     [esp+10h+var_10], 200h
.text:54C99953                 push    eax
.text:54C99954                 mov     ecx, [eax]
.text:54C99956                 call    dword ptr [ecx+58h]
.text:54C99959                 mov     esi, [ebp+arg_0]  // --------------------->   dump [[[ebp+8]+28]];dump [[[ebp+8]+28]]+1c  消息内容 -----------
//54C99959                         | 8B75 08               | mov esi,dword ptr ss:[ebp+8]                                    |
.text:54C9995C                 lea     eax, [ebp+var_4]
.text:54C9995F                 mov     ecx, [ebp+var_8]
.text:54C99962                 push    eax
.text:54C99963                 push    esi  // dump [[esi+28]];   dump [[esi+28]]+1c  消息内容
.text:54C99964                 call    sub_54C99916	
	
	
}


//================================================================================================================

1108FD54 54B47A90 54A6B0C6 40  im.54A6B0C6         User
//注意,多线程调用. 要找 调用到 TranslateMsgPackToBuddyMsg 的线程分析

{
.text:54A6B0A9
.text:54A6B0A9 sub_54A6B0A9    proc near               ; CODE XREF: sub_54A6C034+76p
.text:54A6B0A9                                         ; sub_54B47A13+78p ...
.text:54A6B0A9
.text:54A6B0A9 arg_0           = dword ptr  8
.text:54A6B0A9 arg_4           = dword ptr  0Ch
.text:54A6B0A9 arg_8           = dword ptr  10h
.text:54A6B0A9 arg_C           = dword ptr  14h
.text:54A6B0A9
.text:54A6B0A9                 push    ebp
.text:54A6B0AA                 mov     ebp, esp
.text:54A6B0AC                 mov     eax, [ebp+arg_C] //--------> 消息内容  dump [[[[ebp+14]]+28]]; dump [[[[ebp+14]]+28]]+1c
//54A6B0AC                         | 8B45 14               | mov eax,dword ptr ss:[ebp+14]                                   |
.text:54A6B0AF                 mov     ecx, [ebp+arg_0]
.text:54A6B0B2                 add     ecx, [ebp+arg_8]
.text:54A6B0B5                 push    dword ptr [eax+10h]
.text:54A6B0B8                 push    dword ptr [eax+0Ch]
.text:54A6B0BB                 push    dword ptr [eax+8]
.text:54A6B0BE                 push    dword ptr [eax+4]
.text:54A6B0C1                 push    dword ptr [eax]  //--------> 消息内容 dump [[[eax]+28]]
.text:54A6B0C3                 call    [ebp+arg_4]  
.text:54A6B0C6                 pop     ebp
.text:54A6B0C7                 retn
.text:54A6B0C7 sub_54A6B0A9    endp	

	
}


//================================================================================================================
1108FD94 51B224EE 54B47A90 28  im.54B47A90         User
//注意,多线程调用. 要找 调用到 TranslateMsgPackToBuddyMsg 的线程分析

{
.text:54B47A13 sub_54B47A13    proc near               ; DATA XREF: .rdata:54E2AD04o
.text:54B47A13                                         ; .rdata:54E2C070o ...
.text:54B47A13
.text:54B47A13 var_20          = dword ptr -20h
.text:54B47A13 var_1C          = byte ptr -1Ch
.text:54B47A13 var_4           = dword ptr -4
.text:54B47A13
.text:54B47A13                 push    ebp
.text:54B47A14                 mov     ebp, esp
.text:54B47A16                 sub     esp, 20h
.text:54B47A19                 mov     eax, ___security_cookie
.text:54B47A1E                 xor     eax, ebp
.text:54B47A20                 mov     [ebp+var_4], eax
.text:54B47A23                 mov     edx, [ecx+4]
.text:54B47A26                 xor     eax, eax
.text:54B47A28                 mov     [ebp+var_20], ecx //----------------->dump [[[ecx+18]+28]]
.text:54B47A2B                 test    edx, edx
.text:54B47A2D                 jz      short loc_54B47A37
.text:54B47A2F                 cmp     [edx+4], eax
.text:54B47A32                 jz      short loc_54B47A37
.text:54B47A34                 mov     eax, [ecx+8]
.text:54B47A37
.text:54B47A37 loc_54B47A37:                           ; CODE XREF: sub_54B47A13+1Aj
.text:54B47A37                                         ; sub_54B47A13+1Fj
.text:54B47A37                 test    eax, eax
.text:54B47A39                 jz      short loc_54B47A9C
.text:54B47A3B                 push    esi
.text:54B47A3C                 push    edi
.text:54B47A3D                 push    6
.text:54B47A3F                 pop     ecx
.text:54B47A40                 xor     eax, eax //eax清0
.text:54B47A42                 lea     edi, [ebp+var_1C] //-----------------> 
//54B47A42                         | 8D7D E4               | lea edi,dword ptr ss:[ebp-1C]                            |
.text:54B47A45                 rep stosd     //stosd:将 eax 的内容复制到edi的内存空间，复制四个字节,  置 0
.text:54B47A47                 mov     edi, [ebp+var_20] //-----------------> 最初的 ecx 赋值给 edi 
//54B47A47                         | 8B7D E0               | mov edi,dword ptr ss:[ebp-20]                                   |
.text:54B47A4A                 lea     eax, [ebp+var_1C]   //dump [[[[ebp-20]+18]+28]]
.text:54B47A4D                 push    dword ptr [edi+14h]
.text:54B47A50                 push    dword ptr [edi+10h]
.text:54B47A53                 push    offset aP       ; "%p"
.text:54B47A58                 push    0Ch
.text:54B47A5A                 push    eax
.text:54B47A5B                 call    sub_54A375DC
.text:54B47A60                 lea     eax, [ebp+var_1C]
.text:54B47A63                 push    eax
.text:54B47A64                 call    ds:?LogTaskStart@Misc@Util@@YAKPB_W@Z ; Util::Misc::LogTaskStart(wchar_t const *)
.text:54B47A6A                 mov     esi, eax
.text:54B47A6C                 add     esp, 18h
.text:54B47A6F                 mov     eax, [edi+4]
.text:54B47A72                 xor     ecx, ecx
.text:54B47A74                 test    eax, eax
.text:54B47A76                 jz      short loc_54B47A80
.text:54B47A78                 cmp     [eax+4], ecx
.text:54B47A7B                 jz      short loc_54B47A80
.text:54B47A7D                 mov     ecx, [edi+8]
.text:54B47A80
.text:54B47A80 loc_54B47A80:                           ; CODE XREF: sub_54B47A13+63j
.text:54B47A80                                         ; sub_54B47A13+68j
.text:54B47A80                 lea     eax, [edi+18h]  // dump [[[edi+18]+28]]
.text:54B47A83                 push    eax				//dump [[[eax]+28]]
.text:54B47A84                 push    dword ptr [edi+14h]
.text:54B47A87                 push    dword ptr [edi+10h]
.text:54B47A8A                 push    ecx
.text:54B47A8B                 call    sub_54A6B0A9	  //dump [[[[esp+c]]+28]] 
	
	
}

//================================================================================================================
//高频调用
1108FDBC 51B22591 51B224EE C   asynctask.51B224EE  User//AsyncTask::MessageLoop::RunTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
{
	
51B223C7 <asynctask.?RunTask@Mes | push ebp                                                        |
51B223C8                         | mov ebp,esp                                                     |
51B223CA                         | and esp,FFFFFFF8                                                |
51B223CD                         | sub esp,14                                                      |
51B223D0                         | push ebx                                                        |
51B223D1                         | push esi                                                        | esi:"Üƒ²Q"
51B223D2                         | push edi                                                        |
51B223D3                         | mov esi,ecx                                                     | esi:"Üƒ²Q"
51B223D5                         | call <asynctask.?is_dispatcher@MessageLoop@AsyncTask@@QAE_NXZ>  |
51B223DA                         | test al,al                                                      |
51B223DC                         | je asynctask.51B22497                                           |
51B223E2                         | push dword ptr ss:[ebp+8]                                       | [ebp+8]:"ÀîçTðÜö\x14"
51B223E5                         | mov ecx,dword ptr ds:[esi+E8]                                   |
51B223EB                         | call <asynctask.?PostTask@MessageLoop@AsyncTask@@QAEXPAVTask@2@ |
51B223F0                         | mov eax,dword ptr ds:[esi+E8]                                   |
51B223F6                         | mov ecx,dword ptr ds:[eax+EC]                                   |
51B223FC                         | test ecx,ecx                                                    |
51B223FE                         | je asynctask.51B2255D                                           |
51B22404                         | lea eax,dword ptr ss:[esp+10]                                   |
51B22408                         | mov dword ptr ss:[esp+10],1388                                  |
51B22410                         | xor ebx,ebx                                                     |
51B22412                         | push eax                                                        |
51B22413                         | mov dword ptr ss:[esp+18],ebx                                   |
51B22417                         | call <asynctask.?TimedWait@WaitableEvent@AsyncTask@@QAE_NABVTim |
51B2241C                         | test al,al                                                      |
51B2241E                         | jne asynctask.51B2255D                                          |
51B22424                         | cmp dword ptr ds:[esi+E0],3                                     |
51B2242B                         | jae asynctask.51B2255D                                          |
51B22431                         | mov ecx,dword ptr ds:[esi+CC]                                   |
51B22437                         | mov eax,dword ptr ds:[ecx]                                      |
51B22439                         | call dword ptr ds:[eax+4]                                       |
51B2243C                         | mov edi,eax                                                     |
51B2243E                         | mov dword ptr ss:[esp+10],edi                                   |
51B22442                         | test edi,edi                                                    |
51B22444                         | je asynctask.51B2255D                                           |
51B2244A                         | mov ecx,dword ptr ds:[esi+E8]                                   |
51B22450                         | mov dword ptr ds:[ecx+E4],ebx                                   |
51B22456                         | call <asynctask.?Quit@MessageLoop@AsyncTask@@QAEXXZ>            |
51B2245B                         | lea eax,dword ptr ss:[esp+10]                                   |
51B2245F                         | push eax                                                        |
51B22460                         | lea ecx,dword ptr ds:[esi+D0]                                   |
51B22466                         | call asynctask.51B22C1F                                         |
51B2246B                         | mov eax,dword ptr ds:[edi+10]                                   |
51B2246E                         | mov dword ptr ds:[esi+E8],eax                                   |
51B22474                         | mov byte ptr ds:[eax+C8],1                                      |
51B2247B                         | mov eax,dword ptr ds:[esi+E8]                                   |
51B22481                         | mov dword ptr ds:[eax+E4],esi                                   | esi:"Üƒ²Q"
51B22487                         | mov ecx,dword ptr ds:[esi+E8]                                   |
51B2248D                         | call <asynctask.?create_work_event@MessageLoop@AsyncTask@@QAEXX |
51B22492                         | jmp asynctask.51B2255D                                          |
51B22497                         | lea edi,dword ptr ds:[esi+B4]                                   |
51B2249D                         | xor ebx,ebx                                                     |
51B2249F                         | mov dword ptr ss:[esp+10],edi                                   |
51B224A3                         | mov dword ptr ss:[esp+14],ebx                                   |
51B224A7                         | cmp dword ptr ds:[edi+10],ebx                                   |
51B224AA                         | jne asynctask.51B224B3                                          |
51B224AC                         | or dword ptr ss:[esp+18],FFFFFFFF                               |
51B224B1                         | jmp asynctask.51B224BF                                          |
51B224B3                         | mov eax,dword ptr ds:[edi+4]                                    |
51B224B6                         | sub eax,dword ptr ds:[edi]                                      |
51B224B8                         | sar eax,2                                                       |
51B224BB                         | mov dword ptr ss:[esp+18],eax                                   |
51B224BF                         | inc dword ptr ds:[edi+C]                                        |
51B224C2                         | jmp asynctask.51B224CA                                          |
51B224C4                         | mov edx,dword ptr ds:[eax]                                      |
51B224C6                         | mov ecx,eax                                                     |
51B224C8                         | call dword ptr ds:[edx]                                         |
51B224CA                         | lea ecx,dword ptr ss:[esp+10]                                   |
51B224CE                         | call asynctask.51B22A3D                                         |
51B224D3                         | test eax,eax                                                    |
51B224D5                         | jne asynctask.51B224C4                                          |
51B224D7                         | mov ecx,dword ptr ss:[esp+10]                                   |
51B224DB                         | sub dword ptr ds:[ecx+C],1                                      |
51B224DF                         | jne asynctask.51B224E6                                          |
51B224E1                         | call asynctask.51B22C9B                                         |
51B224E6                         | mov ecx,dword ptr ss:[ebp+8]                                    | //dump [[[[ebp+8]+18]+28]]
51B224E9                         | mov eax,dword ptr ds:[ecx]                                      |
51B224EB                         | call dword ptr ds:[eax+4]                                       |	
	
}
 
//todo 打印的地址怎样切换了？  追踪 RunTask 参数  struct AsyncTask::Task *a2
{
51B22536                         | 8B4D 08               | mov ecx,dword ptr ss:[ebp+8]                                    |
51B22539                         | 6A 01                 | push 1                                                          |
51B2253B                         | 8B01                  | mov eax,dword ptr ds:[ecx]                                      |
51B2253D                         | FF10                  | call dword ptr ds:[eax]  //===>IM.54C93CF9                                      |	 
}




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
    (*(void (**)(void))(*(_DWORD *)a2 + 4))();  //===================================> im.54B47A90
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
{
51B22566 <asynctask.?DeferOrRunP | push ebp                                                        |
51B22567                         | mov ebp,esp                                                     |
51B22569                         | mov edx,dword ptr ss:[ebp+8]                                    |
51B2256C                         | cmp byte ptr ds:[edx+14],0                                      |
51B22570                         | jne asynctask.51B2258A                                          |
51B22572                         | mov eax,dword ptr ds:[ecx+A0]                                   |
51B22578                         | cmp dword ptr ds:[eax],1                                        |
51B2257B                         | je asynctask.51B2258A                                           |
51B2257D                         | push edx                                                        |
51B2257E                         | add ecx,2C                                                      |
51B22581                         | call asynctask.51B23198                                         |
51B22586                         | xor al,al                                                       |
51B22588                         | jmp asynctask.51B22593                                          |  
51B2258A                         | push dword ptr ds:[edx]                                         | 
51B2258C                         | call <asynctask.?RunTask@MessageLoop@AsyncTask@@IAEXPAVTask@2@@ |	
	
	
}
 
 
 
//asynctask.51B23198
{
.text:51B23198 sub_51B23198    proc near               ; CODE XREF: AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::Task *,__int64,bool,bool)+162p
.text:51B23198                                         ; AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop::PendingTask const &)+1Bp ...
.text:51B23198
.text:51B23198 arg_0           = dword ptr  8
.text:51B23198
.text:51B23198                 push    ebp
.text:51B23199                 mov     ebp, esp
.text:51B2319B                 push    ebx
.text:51B2319C                 mov     ebx, ecx
.text:51B2319E                 push    esi
.text:51B2319F                 push    edi
.text:51B231A0                 mov     eax, [ebx+10h]
.text:51B231A3                 mov     ecx, [ebx+8]
.text:51B231A6                 inc     eax
.text:51B231A7                 cmp     ecx, eax
.text:51B231A9                 ja      short loc_51B231B6
.text:51B231AB                 push    ecx
.text:51B231AC                 mov     ecx, ebx
.text:51B231AE                 call    sub_51B233BE
.text:51B231B3                 mov     ecx, [ebx+8]
.text:51B231B6
.text:51B231B6 loc_51B231B6:                           ; CODE XREF: sub_51B23198+11j
.text:51B231B6                 lea     eax, [ecx-1]
.text:51B231B9                 and     [ebx+0Ch], eax
.text:51B231BC                 mov     edi, [ebx+10h]
.text:51B231BF                 add     edi, [ebx+0Ch]
.text:51B231C2                 mov     eax, [ebx+8]
.text:51B231C5                 dec     eax
.text:51B231C6                 and     edi, eax
.text:51B231C8                 mov     eax, [ebx+4]
.text:51B231CB                 cmp     dword ptr [eax+edi*4], 0
.text:51B231CF                 jnz     short loc_51B231E2
.text:51B231D1                 push    18h
.text:51B231D3                 pop     ecx             ; Size
.text:51B231D4                 call    sub_51B2147F
.text:51B231D9                 mov     ecx, [ebx+4]
.text:51B231DC                 mov     [ecx+edi*4], eax
.text:51B231DF                 mov     eax, [ebx+4]
.text:51B231E2
.text:51B231E2 loc_51B231E2:                           ; CODE XREF: sub_51B23198+37j
.text:51B231E2                 mov     edi, [eax+edi*4]
.text:51B231E5                 mov     esi, [ebp+arg_0]
.text:51B231E8                 push    6
.text:51B231EA                 pop     ecx
.text:51B231EB                 rep movsd  // 从 esi 复制 ecx 个 dword 到 edi
.text:51B231ED                 inc     dword ptr [ebx+10h]
.text:51B231F0                 pop     edi
.text:51B231F1                 pop     esi
.text:51B231F2                 pop     ebx
.text:51B231F3                 pop     ebp
.text:51B231F4                 retn    4
.text:51B231F4 sub_51B23198    endp	
	
}



//------------------
//PendingTask 构造类
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



//================================================================================================================
1108FE00 51B24321 51B227CF 2C  asynctask.51B227CF  User//AsyncTask::MessageLoop::DoWork(AsyncTask::MessageLoop *this)
{
	
	
	
}
 

//================================================================================================================
1108FE2C 51B2207A 51B24321 24  asynctask.51B24321  User//AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
{
	
	
	
}
 

//================================================================================================================
1108FE50 51B25FE7 51B2207A 8   asynctask.51B2207A  User//AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
	
	
	
}
 

//================================================================================================================
1108FE58 51B26082 51B25FE7 114 asynctask.51B25FE7  User
{
	
	
	
}
 

//================================================================================================================
1108FF6C 51B25E47 51B26082 8   asynctask.51B26082  User
{
	
	
	
}
 



//================================================================================================================
1108FF74 759F6359 51B25E47 10  asynctask.51B25E47  System




//================================================================================================================




//================================================================================================================



//================================================================================================================