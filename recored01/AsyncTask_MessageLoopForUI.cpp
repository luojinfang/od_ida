/*
	//弹出错误框 
	0019EE88 532E7071 753A71F0 4C  user32.753A71F0            用户模块
	0019EED4 5320DD3D 532E7071 14  gf.532E7071                用户模块
	0019EEE8 532E75C5 5320DD3D 144 gf.5320DD3D                用户模块
	0019F02C 53200E24 532E75C5 10  gf.532E75C5                用户模块
	0019F03C 5021E6F1 53200E24 14  gf.53200E24                用户模块
	0019F050 50346E09 5021E6F1 40  afctrl.5021E6F1            用户模块
	0019F090 50346CB7 50346E09 1C  afctrl.50346E09            用户模块	
	0019F0AC 51105408 50346CB7 40  afctrl.50346CB7            用户模块
	0019F0EC 52376F70 51105408 10  apputil.51105408           用户模块	//sub_5110525A
	0019F0FC 52381992 52376F70 10  common.52376F70            用户模块	//sub_52376F60
	0019F10C 5237D150 52381992 1C  common.52381992            用户模块	//sub_52381950
	0019F128 523780E0 5237D150 14  common.5237D150            用户模块	//sub_5237D0D0
	0019F13C 753A5CAB 523780E0 2C  common.523780E0            系统模块	//sub_52378040
	0019F168 753967BC 753A5CAB E4  user32.753A5CAB            系统模块
	0019F24C 753958FB 753967BC 74  user32.753967BC            系统模块
	0019F2C0 753956D0 753958FB C   user32.753958FB            系统模块
	0019F2CC 51B24578 753956D0 18  user32.753956D0            用户模块	
	0019F2E4 51B244FB 51B24578 30  asynctask.51B24578         用户模块	// AsyncTask::MessagePumpForUI::ProcessMessageHelper
	0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB         用户模块	//AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage
	0019F340 51B2207A 51B2437C 24  asynctask.51B2437C         用户模块  //AsyncTask::MessagePumpForUI::DoRunLoop //循环
	0019F364 53920B86 51B2207A 69C asynctask.51B2207A         用户模块	//AsyncTask::MessageLoopForUI::Run((AsyncTask::MessageLoopForUI *)&v113);
	0019FA00 53927E8B 53920B86 80  hummerengine.53920B86      用户模块	//sub_5391F82B
	0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B      用户模块  //RunQQHummerEngine()
	0019FF1C 004012C6 0040289B C   qq.0040289B                用户模块
	0019FF28 00403365 004012C6 4C  qq.004012C6                用户模块
	0019FF74 74FB0419 00403365 10  qq.00403365                系统模块
	0019FF84 778966DD 74FB0419 5C  kernel32.74FB0419          系统模块
	0019FFE0 778966AD 778966DD 10  ntdll.778966DD             系统模块
	0019FFF0 00000000 778966AD     ntdll.778966AD             用户模块
*/

--------------
AsyncTask::MessageLoopForUI::Run() =>处理循环事件.使用相应系统方法处理事件. //获得 TranslateMessage, DispatchMessageW,PeekMessageW, 发送 PostMessageW,SendMessageW

//界面事件多用 sendmessage, 逻辑事件多用 PostMessage?

LRESULT 	SendMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM IParam)  
BOOL WINAPI PostMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) 


SendMessage 将指定的消息发送到一个或多个窗口。 此函数为指定的窗口调用窗口程序，直到窗口程序处理完消息再返回。  //.faq 底层怎样的调用过程？
PostMessage 是将一个消息寄送到一个线程的消息队列后就立即返回。 消息队列里的消息通过调用 GetMessage 和 PeekMessage 取得

PeekMessage 非阻碍,线程不会挂起.不管有没有消息都会返回一个值，有消息是非零值，没有消息则是零值。
			消息可设置是否从消息队列中将其删除
GetMessage  阻碍,线程会挂起.在没有产生消息的时候并不返回，而是一直在等待，直到一个消息返回.
			消息被取出以后，就从消息队列中将其删除 
			
TranslateMessage 该函数将虚拟键消息转换为字符消息。字符消息被寄送到调用线程的消息队列里，当下一次线程调用函数GetMessage或PeekMessage时被读出。

	
--------------
//初始化
AsyncTask::MessageLoopForUI::MessageLoopForUI((AsyncTask::MessageLoopForUI *)&v116);
AsyncTask::MessageLoopForUI::AddObserver(
    (AsyncTask::MessageLoopForUI *)&v116,
    (struct AsyncTask::MessagePumpWin::Observer *)&v85);
AsyncTask::Thread::Thread((AsyncTask::Thread *)&v129, "Logical");
AsyncTask::Thread::StartWithOptions((AsyncTask::Thread *)&v129, (const struct AsyncTask::Thread::Options *)&v82);
AsyncTask::MessageLoop::SetWorkerFactory(v130, (struct AsyncTask::MessageLoop::WorkerFactory *)&v102);

Util::Misc::SetMainAndLogicMsgLoop((Util::Misc *)&v116, v130, v76); 
Util::Misc::SetMainAndLogicThreadId(v6, v5, (unsigned __int32)v76);

AsyncTask::MessageLoopForUI::Run((AsyncTask::MessageLoopForUI *)&v116);
--------------

void __thiscall AsyncTask::MessageLoop::ReloadWorkQueue(AsyncTask::MessageLoop *this)



AsyncTask::TaskQueue::TaskQueue(AsyncTask::TaskQueue const &) /51B25181  
AsyncTask::TaskQueue::TaskQueue(void) /51B2527B 

AsyncTask::TaskQueue::Push  /51B2534F  
AsyncTask::TaskQueue::Run(void) /51B252C1  
AsyncTask::TaskQueue::IsEmpty(void) /51B25370 
AsyncTask::TaskQueue::Clear(void) /51B25368 
--------------



//hummerengine
signed int RunQQHummerEngine()
{
  wchar_t *v0; // esi@1
  int v1; // ST18_4@1
  signed int result; // eax@5
  char v3; // [sp+8h] [bp-68h]@6

  v0 = 0;
  TXLog::SetWriteFileOpt(0);
  if ( (unsigned __int8)sub_53928035(v1) )
  {
    sub_53911B89((int)L"file", 47, (int)L"func", 2, (int)L"PerfStand.Startup.Begin", (const char *)L"%d", 1);
    v0 = (wchar_t *)GetTickCount();
  }
  else
  {
    sub_53911B89((int)L"file", 52, (int)L"func", 2, (int)L"PerfStand.StartupEx.Begin", (const char *)L"%d", 1);
  }
  if ( Util::Sys::CheckVistaAndStartSelfMediumLevel() )
  {
    result = 1;
  }
  else
  {
    sub_53927CC0();
    sub_5391F472(&v3);
    sub_5391F82B(&v3, v0);
    TXLog::SetWriteFileOpt((TXLog *)1);
    Util::ExitInfo::UpdateExitInfo(180);
    sub_5391F6FE(&v3);
    result = 0;
  }
  return result;
}

//hummerengine
signed int __thiscall sub_5391F82B(void *this, wchar_t *a2)
{
  void *v2; // edi@1
  int v3; // ecx@1
  signed int v4; // ebx@4
  unsigned __int32 v5; // esi@4
  Util::Misc *v6; // eax@4
  const wchar_t *v7; // esi@4
  int v8; // esi@4
  loginstatistics::CTXLoginStatistic *v9; // eax@13
  int v10; // eax@13
  int v11; // ecx@13
  const struct _GUID *v12; // esi@13
  char v13; // al@14
  void *v15; // eax@16
  const char *v16; // esi@20
  int v17; // edx@22
  int v18; // edx@25
  int v19; // ecx@31
  char v20; // al@34
  signed int v21; // ebx@48
  volatile LONG *v22; // edi@48
  int v23; // eax@55
  PerfDataReportUtil *v24; // eax@55
  unsigned __int32 v25; // edi@55
  unsigned __int32 v26; // esi@55
  __int16 v27; // ax@55
  wchar_t *v28; // esi@55
  const wchar_t *v29; // eax@55
  const wchar_t *v30; // eax@55
  int v31; // eax@55
  Util::HostResolve *v32; // eax@55
  int v33; // esi@55
  int v34; // eax@65
  int v35; // ecx@65
  int v36; // eax@67
  int v37; // ecx@67
  HMODULE v38; // eax@78
  FARPROC v39; // eax@79
  int v40; // eax@80
  const char *v41; // edi@81
  const wchar_t *v42; // eax@85
  const wchar_t *v43; // eax@85
  int v44; // esi@86
  void (__stdcall *v45)(int, int); // edi@86
  int v46; // eax@86
  int v47; // eax@86
  int v48; // esi@86
  void (__stdcall *v49)(int, wchar_t *); // edi@86
  wchar_t *v50; // eax@86
  int v51; // esi@86
  void (__thiscall *v52)(int, int, const wchar_t *); // edi@86
  const wchar_t *v53; // eax@86
  const wchar_t *v54; // eax@86
  int v55; // ST38_4@86
  int v56; // edx@88
  int v57; // eax@91
  int v58; // eax@94
  int v59; // ecx@101
  int v60; // esi@103
  int v61; // eax@103
  HMODULE v62; // esi@112
  int v63; // ST38_4@126
  int v64; // eax@131
  int v65; // eax@136
  const wchar_t *v66; // ecx@136
  int v67; // ecx@138
  wchar_t *v68; // esi@141
  int v69; // eax@141
  unsigned __int32 v70; // eax@141
  char v71; // al@143
  int v72; // ecx@143
  int v73; // ecx@147
  void *v74; // eax@148
  Util::MsgIndex *v75; // ST34_4@156
  Util::FS *v76; // [sp+0h] [bp-694h]@2
  bool Dst; // [sp+10h] [bp-684h]@13
  bool v78; // [sp+11h] [bp-683h]@13
  const wchar_t *v79; // [sp+14h] [bp-680h]@13
  unsigned __int32 v80; // [sp+18h] [bp-67Ch]@13
  DWORDLONG v81; // [sp+20h] [bp-674h]@13
  int v82; // [sp+2Ch] [bp-668h]@4
  int v83; // [sp+30h] [bp-664h]@4
  int v84; // [sp+34h] [bp-660h]@55
  int (__thiscall **v85)(void *, char); // [sp+38h] [bp-65Ch]@4
  int v86; // [sp+3Ch] [bp-658h]@4
  int v87; // [sp+40h] [bp-654h]@4
  int v88; // [sp+44h] [bp-650h]@4
  char v89; // [sp+48h] [bp-64Ch]@4
  int v90; // [sp+4Ch] [bp-648h]@4
  int v91; // [sp+50h] [bp-644h]@4
  __int64 v92; // [sp+58h] [bp-63Ch]@4
  LARGE_INTEGER Frequency; // [sp+60h] [bp-634h]@4
  char v94; // [sp+6Ch] [bp-628h]@4
  char v95; // [sp+78h] [bp-61Ch]@4
  char v96; // [sp+7Ch] [bp-618h]@4
  char v97; // [sp+88h] [bp-60Ch]@4
  int v98; // [sp+8Ch] [bp-608h]@65
  int v99; // [sp+90h] [bp-604h]@65
  LONG v100; // [sp+94h] [bp-600h]@156
  LONG Target; // [sp+98h] [bp-5FCh]@37
  int (__thiscall **v102)(void *, char); // [sp+9Ch] [bp-5F8h]@4
  int v103; // [sp+A0h] [bp-5F4h]@60
  int v104; // [sp+A4h] [bp-5F0h]@62
  int v105; // [sp+A8h] [bp-5ECh]@62
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [sp+ACh] [bp-5E8h]@85
  int v107; // [sp+B4h] [bp-5E0h]@42
  int v108; // [sp+B8h] [bp-5DCh]@4
  void *v109; // [sp+BCh] [bp-5D8h]@1
  LONG v110; // [sp+C0h] [bp-5D4h]@13
  PerfDataReportUtil *v111; // [sp+C4h] [bp-5D0h]@85
  struct ITXArray *v112; // [sp+C8h] [bp-5CCh]@38
  int v113; // [sp+CCh] [bp-5C8h]@85
  unsigned __int32 v114; // [sp+D0h] [bp-5C4h]@4
  const wchar_t *v115; // [sp+D4h] [bp-5C0h]@4
  int (__thiscall **v116)(void *, char); // [sp+D8h] [bp-5BCh]@4
  int v117; // [sp+1C8h] [bp-4CCh]@4
  int v118; // [sp+1CCh] [bp-4C8h]@4
  int v119; // [sp+1D0h] [bp-4C4h]@4
  int v120; // [sp+1D4h] [bp-4C0h]@4
  int v121; // [sp+1D8h] [bp-4BCh]@4
  int v122; // [sp+1DCh] [bp-4B8h]@4
  int v123; // [sp+1E0h] [bp-4B4h]@4
  int v124; // [sp+1E4h] [bp-4B0h]@4
  int v125; // [sp+1E8h] [bp-4ACh]@4
  int v126; // [sp+1ECh] [bp-4A8h]@4
  int v127; // [sp+1F0h] [bp-4A4h]@4
  struct _MEMORYSTATUSEX Buffer; // [sp+1F8h] [bp-49Ch]@4
  int (__thiscall **v129)(void *, char); // [sp+23Ch] [bp-458h]@4
  AsyncTask::MessageLoop *v130; // [sp+24Ch] [bp-448h]@4
  unsigned __int32 v131; // [sp+254h] [bp-440h]@4
  Util::Misc *Caption[132]; // [sp+270h] [bp-424h]@5
  Util::Misc *Filename[60]; // [sp+480h] [bp-214h]@5
  struct _OSVERSIONINFOW VersionInformation; // [sp+570h] [bp-124h]@105

  v2 = this;
  v109 = this;
  sub_5392183C();
  if ( (unsigned __int8)sub_53928035(v3) )
    Util::FS::StartAddCache(v76);
  else
    Util::Misc::LogTaskCheckDead(v76);
  sub_53911B89(
    (int)L"file",
    2007,
    (int)L"func",
    2,
    (int)L"ExitInfo",
    (const char *)L"Hook PostQuitMessage,cmdline:%s",
    Str);
  v85 = &off_5393A2E8;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v4 = 1;
  v89 = 0;
  v90 = 1000;
  v91 = 1;
  _mm_storel_pd((double *)&v92, 0i64);
  AsyncTask::MessageLoopForUI::MessageLoopForUI((AsyncTask::MessageLoopForUI *)&v116);
  v116 = &off_5393A178;
  v117 = 0;
  v118 = 200;
  v119 = 200;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  AsyncTask::MessageLoopForUI::AddObserver(
    (AsyncTask::MessageLoopForUI *)&v116,
    (struct AsyncTask::MessagePumpWin::Observer *)&v85);
  v82 = 0;
  v83 = 0;
  v102 = &off_539396E0;
  AsyncTask::Thread::Thread((AsyncTask::Thread *)&v129, "Logical");
  v129 = &off_53939750;
  AsyncTask::Thread::StartWithOptions((AsyncTask::Thread *)&v129, (const struct AsyncTask::Thread::Options *)&v82);
  AsyncTask::MessageLoop::SetWorkerFactory(v130, (struct AsyncTask::MessageLoop::WorkerFactory *)&v102);
  Util::Misc::SetMainAndLogicMsgLoop((Util::Misc *)&v116, v130, v76);
  v5 = v131;
  v6 = (Util::Misc *)GetCurrentThreadId();
  Util::Misc::SetMainAndLogicThreadId(v6, v5, (unsigned __int32)v76);
  CTXStringW::CTXStringW((CTXStringW *)&v95);
  CTXStringW::CTXStringW((CTXStringW *)&v96);
  CTXStringW::CTXStringW((CTXStringW *)&v97);
  Version::GetVersionExW((Version *)&v94, v76);
  CTXStringW::CTXStringW(&v76);
  sub_539187AF(L"file", 166, L"func", 2, L"TXPerf", &unk_539388E8, (unsigned int)&v95);
  Frequency.QuadPart = 0i64;
  QueryPerformanceFrequency(&Frequency);
  v7 = (const wchar_t *)Util::Misc::GetCPUCores(v76);
  v115 = v7;
  v114 = Util::Misc::GetCPUFrequency(v76);
  sub_53911B89(
    (int)L"file",
    177,
    (int)L"func",
    2,
    (int)L"TXPerf",
    (const char *)L"CPU\u6709%d\u4e2a\uff0c\u4e3b\u9891\uff1a%lu\uff0c\u9ad8\u6027\u80fd\u8ba1\u6570\u5668\u9891\u7387\u9a"
                   "d8\u4f4d%lu\uff0c\u4f4e\u4f4d%lu",
    v7,
    v114,
    Frequency.s.HighPart,
    Frequency.s.LowPart);
  Buffer.dwLength = 64;
  memset(&Buffer.dwMemoryLoad, 0, 0x3Cu);
  GlobalMemoryStatusEx(&Buffer);
  sub_53911B89(
    (int)L"file",
    183,
    (int)L"func",
    2,
    (int)L"TXPerf",
    (const char *)&unk_53938958,
    Buffer.dwMemoryLoad,
    Buffer.ullTotalPhys,
    Buffer.ullAvailPhys,
    Buffer.ullTotalPageFile,
    Buffer.ullAvailPageFile);
  v108 = 0;
  v8 = 0;
  if ( OSVersion::IsWin7OrGreater(v76) )
  {
    LOWORD(Caption[0]) = 0;
    LOWORD(Filename[0]) = 0;
    GetWindowsDirectoryW((LPWSTR)Caption, 0x104u);
    GetModuleFileNameW(0, (LPWSTR)Filename, 0x104u);
    if ( LOWORD(Caption[0]) == LOWORD(Filename[0]) )
    {
      if ( 0 != LOWORD(Caption[0]) )
      {
        v8 = Util::Misc::IsSupoortTrim(Caption[0], (wchar_t)v76);
        v108 = v8;
LABEL_12:
        sub_53911B89(
          (int)L"file",
          218,
          (int)L"func",
          2,
          (int)L"TXPerf",
          (const char *)&unk_53938A28,
          Caption[0],
          v108,
          LOWORD(Filename[0]),
          v8);
        goto LABEL_13;
      }
    }
    else if ( 0 != LOWORD(Caption[0]) )
    {
      v108 = Util::Misc::IsSupoortTrim(Caption[0], (wchar_t)v76);
    }
    if ( LOWORD(Filename[0]) )
      v8 = Util::Misc::IsSupoortTrim(Filename[0], (wchar_t)v76);
    goto LABEL_12;
  }
LABEL_13:
  memset(&Dst, 0, 0x18u);
  v79 = v115;
  Dst = v108 != 0;
  v80 = v114;
  v81 = Buffer.ullTotalPhys;
  v78 = v8 != 0;
  v9 = (loginstatistics::CTXLoginStatistic *)loginstatistics::CTXLoginStatistic::instance();
  loginstatistics::CTXLoginStatistic::setMachineInfo(v9, (struct loginstatistics::LoginMachineInfo *)&Dst);
  v10 = sub_53930F19(0x28u);
  v12 = (const struct _GUID *)sub_5391D152(v10);
  v110 = (LONG)v12;
  if ( v12 )
  {
    v13 = sub_53928035(v11);
    if ( !sub_5391E58A(v12, v13) )
      goto LABEL_15;
  }
  v115 = 0;
  v15 = (void *)sub_53915257();
  if ( !sub_5391683E(v15, (const wchar_t *)&v115) )
  {
    dword_53945770 = 1;
    Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
    AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
    sub_539216F1((LONG)v12);
LABEL_15:
    CTXStringW::~CTXStringW((CTXStringW *)&v97);
    CTXStringW::~CTXStringW((CTXStringW *)&v96);
    CTXStringW::~CTXStringW((CTXStringW *)&v95);
    AsyncTask::Thread::~Thread((AsyncTask::Thread *)&v129);
    v102 = &off_539396EC;
    sub_53925242(&v116);
    v85 = &off_5393A2E8;
    sub_53925959(&v86);
    return 0;
  }
  if ( TXUpdateCfg::IsNeedRestore(v76) )
  {
    v115 = L"Need restore";
    v16 = (const char *)L"%s";
    sub_539124B3(291, (int)L"file", (int)L"func", 2, (int)L"TXUPD", (const char *)L"%s");
    v115 = L"InitTXUpdate(false)";
    sub_539124B3(294, (int)L"file", (int)L"func", 2, (int)L"txupd", (const char *)L"%s");
    if ( v110 && !sub_5391D470(0) )
    {
      v115 = L"InitTXUpdate(false) succeeded.";
      v17 = 298;
LABEL_23:
      sub_539124B3(v17, (int)L"file", (int)L"func", 2, (int)L"txupd", v16);
LABEL_24:
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
      sub_539216F1(v110);
      goto LABEL_15;
    }
    v115 = L"InitTXUpdate(false) failed.";
    v18 = 307;
LABEL_31:
    sub_539124B3(v18, (int)L"file", (int)L"func", 2, (int)L"txupd", v16);
    goto LABEL_34;
  }
  v16 = (const char *)L"%s";
  if ( TXUpdateCfg::IsNeedRestorePatch(v76) )
  {
    v115 = L"Need restore patch";
    sub_539124B3(314, (int)L"file", (int)L"func", 2, (int)L"TXUPD", (const char *)L"%s");
    v115 = L"InitTXUpdate(true)";
    sub_539124B3(316, (int)L"file", (int)L"func", 2, (int)L"txupd", (const char *)L"%s");
    if ( v110 && !sub_5391D470(1) )
    {
      v115 = L"InitTXUpdate(true) succeeded.";
      v17 = 320;
      goto LABEL_23;
    }
    v115 = L"InitTXUpdate(true) failed.";
    v18 = 329;
    goto LABEL_31;
  }
  v115 = L"Do not need restore";
  sub_539124B3(334, (int)L"file", (int)L"func", 2, (int)L"TXUPD", (const char *)L"%s");
  v115 = L"InitAutoUpdate";
  sub_539124B3(337, (int)L"file", (int)L"func", 2, (int)L"txupd", (const char *)L"%s");
  if ( v110 && !sub_5391D2C0() )
    goto LABEL_24;
LABEL_34:
  v20 = sub_53928035(v19);
  v114 = 0;
  if ( v20 )
  {
    sub_53911DC3(&unk_53938120, &v114);
    sub_5391164A(&v114);
  }
  else
  {
    sub_53911DC3(&unk_53938130, &v114);
    sub_5391164A(&v114);
  }
  Target = 0;
  sub_53911DC3(&unk_539396B8, &Target);
  if ( Target )
  {
    v114 = 0;
    (*(void (__stdcall **)(LONG, int *))(*(_DWORD *)Target + 12))(Target, (int *)&v114);
    v112 = 0;
    (*(void (__stdcall **)(LONG, int *))(*(_DWORD *)Target + 32))(Target, (int *)&v112);
    HttpClientUtil::SetPtLogin2HttpsUrlConfig(v114, v112);
    if ( Target )
      sub_53911956(&Target, 0);
    sub_5391164A(&v112);
  }
  if ( sub_539217DD() )
  {
    v107 = 0;
    sub_53911DC3(&unk_53935110, &v107);
    if ( v107 )
      (*(void (__stdcall **)(int, _DWORD, signed int, _DWORD))(*(_DWORD *)v107 + 24))(v107, 0, 8, 0);
    v112 = 0;
    v114 = 2;
    sub_53911DC3(&unk_539396A8, &v112);
    if ( v112 )
    {
      (*(void (__stdcall **)(struct ITXArray *, int *))(*(_DWORD *)v112 + 60))(v112, (int *)&v114);
      if ( !v114 )
        Util::GF::DPI::SetDPIAdaptFlag(0, v76);
    }
    if ( (unsigned __int8)sub_5392801C() )
    {
      sub_53925AE3((char *)v2 + 60);
      v21 = 0;
      v22 = (volatile LONG *)((char *)v2 + 69);
      do
      {
        if ( InterlockedExchangeAdd(v22, 0) )
          break;
        Sleep(0x3E8u);
        ++v21;
      }
      while ( v21 < 5 );
      Util::Misc::SetEnablePreload(0, v76);
      sub_53925BE0((char *)v109 + 60);
      v4 = 1;
    }
    sub_53911B89((int)L"file", 424, (int)L"func", 2, (int)L"Startup", v16, L"background startup");
    sub_5391164A(&v112);
    sub_5391164A(&v107);
  }
  if ( sub_53920E8D() )
  {
    v23 = sub_53918B55(&v115, "wStartToShowLP");
    v24 = (PerfDataReportUtil *)CTXBSTR::operator wchar_t *(v23);
    PerfDataReportUtil::SetPerfReportDataForWord(v24, a2, 0, v76);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v115);
    v25 = Version::GetBuildVer(v76);
    v26 = Version::GetPubNo();
    v27 = sub_53914ED8();
    sub_53911B89(
      (int)L"file",
      439,
      (int)L"func",
      2,
      (int)L"ConnectionLost",
      (const char *)&unk_53938C78,
      (unsigned __int16)v27,
      v26,
      v25);
    v84 = 0;
    v28 = (wchar_t *)*((_DWORD *)v109 + 19);
    CTXStringW::CTXStringW(&v114, L"platform");
    v29 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v114);
    v30 = TXLoadString(L"HttpDataReportDomainName", v29);
    v31 = CTXBSTR::CTXBSTR(&v115, v30);
    v32 = (Util::HostResolve *)CTXBSTR::operator wchar_t *(v31);
    Util::HostResolve::Resolve(v32, v28, (struct ITXHostResolverSink *)&v84, (unsigned __int32 *)v76);
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v115);
    CTXStringW::~CTXStringW((CTXStringW *)&v114);
    v33 = (int)v109;
    if ( !sub_539264C8((char *)v109 + 44) )
    {
      v41 = (const char *)L"%s";
LABEL_153:
      Util::ExitInfo::UpdateExitInfo(100);
      Util::GF::ClosePopupWindows(v76);
      TraceGuidReg.RegHandle = &unk_53938F24;
      sub_539124B3(787, (int)L"file", (int)L"func", 2, (int)L"TBH|AddrSearch", v41);
      sub_53911B89((int)L"file", 788, (int)L"func", 2, (int)L"ExitFlow", v41, L"exit message loop");
      if ( (unsigned __int8)sub_5392801C() )
      {
        Util::Misc::SetEnablePreload(0, v76);
        if ( !InterlockedExchangeAdd((volatile LONG *)(v33 + 68), 0) )
        {
          sub_53911B89((int)L"file", 799, (int)L"func", 2, (int)L"ExitFlow", v41, L"Begin Exit Set PreThreadExit.");
          sub_53925BE0(v33 + 60);
        }
      }
      Util::ExitInfo::UpdateExitInfo(120);
      sub_5392539F(&v116);
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
      Util::MsgIndex::StopThread(v75);
      Util::ExitInfo::UpdateExitInfo(130);
      Util::Msg::StopMsgThread(v76);
      Util::Msg::CloseMsgStorage(v76);
      Util::ExitInfo::UpdateExitInfo(135);
      sub_5392539F(&v116);
      TraceGuidReg.RegHandle = L"Close info.db begin";
      sub_539124B3(839, (int)L"file", (int)L"func", 2, (int)L"Exit", v41);
      v100 = 0;
      sub_53911DC3(&unk_53939648, &v100);
      if ( v100 )
      {
        (*(void (__stdcall **)(LONG))(*(_DWORD *)v100 + 28))(v100);
        FS::RemoveFileSystem((FS *)L"UserDataInfoStorage:", (const wchar_t *)v76);
        if ( v100 )
          sub_53911956(&v100, 0);
      }
      TraceGuidReg.RegHandle = L"Close info.db end";
      sub_539124B3(848, (int)L"file", (int)L"func", 2, (int)L"Exit", v41);
      NewRegistry::OnExitProcess(v76);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
      sub_539216F1(v110);
      sub_5391164A(&v100);
      goto LABEL_160;
    }
    if ( (unsigned __int8)sub_53927A44() )
      sub_53926F8E(&byte_53946805);
    if ( byte_53946805 )
      goto LABEL_59;
    v103 = 0;
    sub_53911DC3(&unk_53939698, &v103);
    if ( v103 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v103 + 16))(v103);
    v104 = 0;
    v105 = 0;
    sub_53911DC3(&unk_53935110, &v104);
    if ( v104 )
    {
      (*(void (__stdcall **)(int, const wchar_t *, _DWORD, signed int, int *))(*(_DWORD *)v104 + 32))(
        v104,
        L"PCMgrInstaller_Domain",
        0,
        1,
        &v105);
      if ( v105 )
      {
        v108 = 0;
        (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v105 + 16))(v105, "PCMgrInstaller_Setting", &v108);
        if ( v108 )
        {
          v99 = 0;
          v98 = 0;
          v34 = (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)v108 + 56))(v108, "StrongLogic", &v99);
          v35 = v99;
          if ( v34 )
            v35 = 0;
          v99 = v35;
          v36 = (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)v108 + 56))(v108, "WeakLogic", &v98);
          v37 = v98;
          if ( v36 )
            v37 = 0;
          v98 = v37;
          if ( v99 || v37 )
          {
            v107 = 0;
            sub_53911DC3(&unk_53939688, &v107);
            if ( v107 && (*(int (__stdcall **)(int))(*(_DWORD *)v107 + 12))(v107) < 0 )
            {
              Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
              AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
              sub_539216F1(v110);
              sub_5391164A(&v107);
              sub_5391164A(&v108);
LABEL_74:
              sub_5391164A(&v105);
              sub_5391164A(&v104);
              sub_5391164A(&v103);
              v4 = 0;
              goto LABEL_160;
            }
            sub_5391164A(&v107);
          }
        }
        sub_5391164A(&v108);
      }
    }
    if ( !Util::Misc::IsOverWindowVista(v76) )
      goto LABEL_81;
    v38 = Util::Sys::SafeLoadLibrary((Util::Sys *)L"user32.dll", (const wchar_t *)v76);
    if ( v38 )
    {
      v39 = GetProcAddress(v38, "ChangeWindowMessageFilter");
      if ( v39 )
      {
        v40 = ((int (__stdcall *)(signed int, signed int))v39)(74, 1);
        sub_53911B89(
          (int)L"file",
          529,
          (int)L"func",
          3,
          (int)L"QQProtect",
          (const char *)L"ChangeWindowMessageFilter :%u",
          v40);
LABEL_81:
        v41 = (const char *)L"%s";
        goto LABEL_82;
      }
      v115 = L"ChangeWindowMessageFilter fail";
      v56 = 533;
    }
    else
    {
      v115 = L"load user32.dll fail";
      v56 = 538;
    }
    v41 = (const char *)L"%s";
    sub_539124B3(v56, (int)L"file", (int)L"func", 2, (int)L"QQProtect", (const char *)L"%s");
LABEL_82:
    v112 = 0;
    sub_53911DC3(&unk_53939678, &v112);
    if ( v112 )
      (*(void (__stdcall **)(struct ITXArray *))(*(_DWORD *)v112 + 28))(v112);
    sub_5391164A(&v112);
    v112 = 0;
    sub_53911DC3(&unk_53939668, &v112);
    if ( !v112 )
    {
      CTXStringW::CTXStringW(&v111, L"platform");
      v42 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v111);
      v43 = TXLoadString(L"MsgBox_Text_FileBroken", v42);
      CTXStringW::CTXStringW(&v115, v43);
      CTXStringW::~CTXStringW((CTXStringW *)&v111);
      v113 = 0;
      sub_53911BAE(&v113);
      TraceGuidReg.RegHandle = 0;
      if ( v113 )
      {
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v113 + 28))(v113, 0, 0);
        v44 = v113;
        v45 = *(void (__stdcall **)(int, int))(*(_DWORD *)v113 + 176);
        v46 = CTXBSTR::CTXBSTR(&v111, L"MsgBoxEx");
        v47 = CTXBSTR::operator wchar_t *(v46);
        v45(v44, v47);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v111);
        v48 = v113;
        v49 = *(void (__stdcall **)(int, wchar_t *))(*(_DWORD *)v113 + 1304);
        v50 = CTXStringW::GetBSTR((CTXStringW *)&v115);
        v49(v48, v50);
        v51 = v113;
        v52 = *(void (__thiscall **)(int, int, const wchar_t *))(*(_DWORD *)v113 + 1144);
        CTXStringW::CTXStringW(&v111, L"platform");
        v53 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v111);
        v54 = TXLoadString(L"CF_MESSAGE_TITLE", v53);
        v52(v55, v51, v54);
        CTXStringW::~CTXStringW((CTXStringW *)&v111);
        (*(void (__stdcall **)(int, signed int))(*(_DWORD *)v113 + 1312))(v113, 262192);
        (*(void (__stdcall **)(int, _DWORD, HANDLE *, _DWORD))(*(_DWORD *)v113 + 1288))(
          v113,
          0,
          &TraceGuidReg.RegHandle,
          0);
      }
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
      sub_539216F1(v110);
      sub_5391164A(&v113);
      CTXStringW::~CTXStringW((CTXStringW *)&v115);
      sub_5391164A(&v112);
      goto LABEL_74;
    }
    sub_5391164A(&v112);
    v57 = sub_539217DD();
    if ( !sub_5391D4DC(v57) )
    {
      memset(Caption, 0, 0x20Au);
      GetModuleFileNameW(0, (LPWSTR)Caption, 0x104u);
      TraceGuidReg.RegHandle = L"Initialization failure: 0x00000030";
      sub_539124B3(604, (int)L"file", (int)L"func", 2, (int)L"Initialize", v41);
      v4 = 0;
      MessageBoxW(0, L"Initialization failure: 0x00000030", (LPCWSTR)Caption, 0x10u);
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
      sub_539216F1(v110);
      sub_5391164A(&v105);
      sub_5391164A(&v104);
      sub_5391164A(&v103);
      goto LABEL_160;
    }
    sub_5392801C();
    if ( (unsigned __int8)sub_5392801C() )
    {
      v58 = sub_539217DD();
      sub_5391D84B(v58);
    }
    sub_53926DA9(v33 + 44);
    if ( (unsigned __int8)sub_5392801C() )
    {
      if ( sub_539217DD() )
        Util::Misc::SetEnablePreload((Util::Misc *)1, v76);
      TXTimer::SetIdleCallback(*(TXTimer **)(v33 + 8), 0, (unsigned int)v76);
    }
    if ( Util::Window::AddIdleCallback((Util::Window *)v33, v76) )
    {
      Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
      AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
      sub_539216F1(v110);
      sub_5391164A(&v105);
      sub_5391164A(&v104);
      sub_5391164A(&v103);
      v4 = 0;
      goto LABEL_160;
    }
    if ( !Util::Sys::IsVista(v76) || !(unsigned __int8)sub_53928035(v59) )
      goto LABEL_135;
    v60 = qword_53946968;
    v61 = *(&qword_53946968 + 1) | qword_53946968;
    if ( *(_QWORD *)&qword_53946968 )
    {
LABEL_125:
      if ( byte_53946980 & 1 )
      {
        sub_5391F411(v59, v59);
        v60 = qword_53946968;
        v59 = v63;
      }
      if ( byte_5394698D )
      {
        v59 = *(&qword_53946968 + 1);
        if ( *(&qword_53946968 + 1) | v60 )
        {
          if ( byte_5394698C )
          {
            UnregisterTraceGuids(*(_QWORD *)v60);
            v64 = *(_WORD *)(v60 + 42);
            v59 = 0;
            *(_DWORD *)(v60 + 32) = 0;
            *(_BYTE *)(v60 + 40) = 0;
            *(_DWORD *)(v60 + 8) = 0;
            *(_DWORD *)(v60 + 12) = 0;
            if ( (_WORD)v64 )
            {
              memset(*(void **)(v60 + 44), 0, 4 * ((v64 - 1) / 32) + 4);
              v59 = 0;
            }
            *(_DWORD *)v60 = 0;
            *(_DWORD *)(v60 + 4) = 0;
          }
          else
          {
            dword_53946984(v60, *(&qword_53946968 + 1));
          }
          _mm_storel_pd((double *)&qword_53946968, 0i64);
        }
      }
LABEL_135:
      if ( (unsigned __int8)sub_53928035(v59) )
      {
        v65 = 682;
        v66 = L"PerfStand.Startup.End";
      }
      else
      {
        v65 = 686;
        v66 = L"PerfStand.StartupEx.End";
      }
      sub_53911B89((int)L"file", v65, (int)L"func", 2, (int)v66, (const char *)L"%d", 1);
      if ( (unsigned __int8)sub_53928035(v67) )
      {
        v113 = 0;
        sub_53911DC3(&unk_53938120, &v113);
        if ( v113 )
        {
          v111 = 0;
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v113 + 16))(v113, (int *)&v111);
          if ( v111 )
          {
            v68 = (wchar_t *)(GetTickCount() - (_DWORD)a2);
            v69 = sub_53918B55(&TraceGuidReg.RegHandle, "wStartToShowLP");
            v70 = CTXBSTR::operator wchar_t *(v69);
            PerfDataReportUtil::SetPerfOPReportDataForWord(v111, v70, v68, 5u, v76);
            CTXBSTR::~CTXBSTR((CTXBSTR *)&TraceGuidReg.RegHandle);
          }
        }
        sub_5391164A(&v113);
      }
      sub_539256A9(&v85);
      v71 = sub_5392801C();
      v33 = (int)v109;
      if ( v71 )
        sub_53918C42(v72, *((_DWORD *)v109 + 21));
      v114 = 0;
      sub_53911DC3(&unk_53939658, &v114);
      if ( v114 )
      {
        (*(void (__stdcall **)(unsigned __int32))(*(_DWORD *)v114 + 12))(v114);
        v111 = 0;
        sub_53911DC3(&unk_53939658, &v111);
        (*(void (__stdcall **)(PerfDataReportUtil *, void *))(*(_DWORD *)v111 + 16))(v111, &unk_53945268);
        sub_5391164A(&v111);
      }
      AsyncTask::MessageLoopForUI::Run((AsyncTask::MessageLoopForUI *)&v116);
      if ( (unsigned __int8)sub_5392801C() )
      {
        v74 = *(void **)(v33 + 84);
        v109 = 0;
        TraceGuidReg.RegHandle = v74;
        Util::Core::GetPlatformCore((Util::Core *)&v109, (struct ITXCore **)v76);
        if ( v109 )
          (*(void (__stdcall **)(void *, void *, HANDLE))(*(_DWORD *)v109 + 52))(
            v109,
            &unk_539396F8,
            TraceGuidReg.RegHandle);
        sub_5391164A(&v109);
      }
      sub_53928035(v73);
      dword_53945770 = 1;
      sub_53925844(&v85);
      sub_5391164A(&v114);
      sub_5391164A(&v105);
      sub_5391164A(&v104);
      sub_5391164A(&v103);
      goto LABEL_153;
    }
    v113 &= v61;
    if ( byte_5394698D != (_BYTE)v61 )
    {
LABEL_121:
      if ( byte_5394698C )
      {
        TraceGuidReg.Guid = &ControlGuid;
        *(_QWORD *)&qword_53946968 = (signed int)&RequestContext;
        TraceGuidReg.RegHandle = 0;
        RegisterTraceGuidsW(RequestAddress, &RequestContext, &ControlGuid, 1u, &TraceGuidReg, 0, 0, &RequestContext);
      }
      else
      {
        off_539452C8(&ControlGuid, sub_5391F123, &RequestContext, &qword_53946968);
      }
      v60 = qword_53946968;
      goto LABEL_125;
    }
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation)
      || ((byte_5394698C = VersionInformation.dwMajorVersion < 6, VersionInformation.dwMajorVersion > 6)
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 ? (v113 = 1) : (v113 = 0),
          VersionInformation.dwMajorVersion >= 6) )
    {
      v62 = GetModuleHandleW(L"advapi32.dll");
      if ( v62 || v113 && (v62 = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0 )
      {
        dword_53946988 = (int)GetProcAddress(v62, "EventWrite");
        if ( dword_53946988 )
        {
          off_539452C8 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v62, "EventRegister");
          if ( off_539452C8 )
          {
            dword_53946984 = (int (__stdcall *)(_DWORD, _DWORD))GetProcAddress(v62, "EventUnregister");
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
  Util::Misc::SetMainAndLogicMsgLoop(0, 0, v76);
  AsyncTask::Thread::Stop((AsyncTask::Thread *)&v129);
  sub_539216F1(v110);
LABEL_160:
  sub_5391164A(&Target);
  CTXStringW::~CTXStringW((CTXStringW *)&v97);
  CTXStringW::~CTXStringW((CTXStringW *)&v96);
  CTXStringW::~CTXStringW((CTXStringW *)&v95);
  AsyncTask::Thread::~Thread((AsyncTask::Thread *)&v129);
  v102 = &off_539396EC;
  sub_53925242(&v116);
  v85 = &off_5393A2E8;
  sub_53925959(&v86);
  return v4;
}




void __thiscall AsyncTask::MessageLoopForUI::Run(AsyncTask::MessageLoopForUI *this)
{
  AsyncTask::MessageLoop *v1; // esi@1
  char v2; // [sp+4h] [bp-10h]@1
  int v3; // [sp+Ch] [bp-8h]@1
  int v4; // [sp+10h] [bp-4h]@1

  v1 = this;
  AsyncTask::MessageLoop::AutoRunState::AutoRunState((AsyncTask::MessageLoop::AutoRunState *)&v2, this);
  AsyncTask::MessageLoop::RunHandler(v1);
  *(_DWORD *)(v3 + 160) = v4;
}

----------------------------------
void __thiscall AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
  JUMPOUT(*((_BYTE *)this + 89), 0, AsyncTask::MessageLoop::RunInternalInSEHFrame);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 4))(this); // act AsyncTask::MessagePumpForUI::DoRunLoop  循环
}

.text:51B22065                 mov     edx, ecx
.text:51B22067                 cmp     byte ptr [edx+89], 0
.text:51B2206B                 jnz     ?RunInternalInSEHFrame@MessageLoop@AsyncTask@@IAEXXZ ; AsyncTask::MessageLoop::RunInternalInSEHFrame(void)
.text:51B22071                 mov     ecx, [edx+64]
.text:51B22074                 push    edx
.text:51B22075                 mov     eax, [ecx]
.text:51B22077                 call    dword ptr [eax+4]
.text:51B2207A                 retn
----------------------------------

void __thiscall AsyncTask::MessageLoopForUI::AddObserver(AsyncTask::MessageLoopForUI *this, struct AsyncTask::MessagePumpWin::Observer *a2)
{
  AsyncTask::MessagePumpWin::AddObserver(*((AsyncTask::MessagePumpWin **)this + 16), a2);
}

void __thiscall AsyncTask::MessagePumpWin::AddObserver(AsyncTask::MessagePumpWin *this, struct AsyncTask::MessagePumpWin::Observer *a2)
{
  struct AsyncTask::MessagePumpWin::Observer **v2; // eax@1
  char *v3; // ecx@1
  struct AsyncTask::MessagePumpWin::Observer **i; // edx@1

  v2 = (struct AsyncTask::MessagePumpWin::Observer **)*((_DWORD *)this + 3);
  v3 = (char *)this + 8;
  for ( i = *(struct AsyncTask::MessagePumpWin::Observer ***)v3; i != v2 && *i != a2; ++i )
    ;
  if ( i == v2 )
  {
    if ( *((struct AsyncTask::MessagePumpWin::Observer ***)v3 + 2) == v2 )
    {
      sub_51B23579(v2, &a2);
    }
    else
    {
      *v2 = a2;
      *((_DWORD *)v3 + 1) += 4;
    }
  }
}

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



//hummerengine
int __thiscall sub_53925242(AsyncTask::MessageLoop *this)
{
  AsyncTask::MessageLoop *v1; // esi@1
  signed int v2; // edi@1

  v1 = this;
  v2 = 0;
  *(_DWORD *)this = &off_5393A178; //MessageLoopForUI 实例?
  do
  {
    sub_539253CE(0);
    AsyncTask::MessageLoop::ReloadWorkQueue(v1);
    if ( !(unsigned __int8)sub_539253CE(0) )
      break;
    ++v2;
  }
  while ( v2 < 100 );
  return AsyncTask::MessageLoopForUI::~MessageLoopForUI(v1);
}

//循环
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
    v4 = (*(int (**)(void))(**(_DWORD **)i + 4))();  //.faq 
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


bool __thiscall AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // edi@1
  DWORD v2; // esi@1
  bool result; // al@2
  struct tagMSG Msg; // [sp+8h] [bp-1Ch]@1

  v1 = this;
  
	// DWORD GetQueueStatus(UINT flags); 
	//	flags,表示消息类型的队列状态标志, 枚举定义在 WinUser.h,  QS_ALLEVENTS, QS_ALLINPUT 等等, QS_SENDMESSAGE,由其他线程或应用程序发送的消息在消息队列里。
	//	返回值: 高位字表示队列里当前消息的类型。低位字表示上次调用 GetQueuestatus, GetMessage 或 PeekMessBge 以来加入队列并仍然在队列里的消息的类型。  
  v2 = (GetQueueStatus(0x40u) >> 16) & 0x40;   //#define QS_SENDMESSAGE  0x0040 , v2 为是否有 QS_SENDMESSAGE 的消息在队例里
 
  if ( PeekMessageW(&Msg, 0, 0, 0, 1u) )
    result = AsyncTask::MessagePumpForUI::ProcessMessageHelper(v1, &Msg);
  else
    result = (_WORD)v2 != 0;
  return result;
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
    return AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(this);   //=> ProcessMessageHelper
  if ( !CallMsgFilterW(lpMsg, 20481) )
  {
    AsyncTask::MessagePumpWin::WillProcessMessage(v2, lpMsg);
    TranslateMessage(lpMsg);
    if ( lpMsg->message == 36863 && lpMsg->hwnd == (HWND)*((_DWORD *)v2 + 12) )
    {
      this = v2;
      return AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(this);  //=> ProcessMessageHelper
    }
    DispatchMessageW(lpMsg); //=> winproc ?   
    AsyncTask::MessagePumpWin::DidProcessMessage(v2, lpMsg);
  }
  return 1;
}

//common.dll  winproc?
LRESULT __stdcall sub_52378040(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  _DWORD *v4; // eax@2
  LRESULT result; // eax@7
  void (__cdecl *v6)(_DWORD); // eax@10

  if ( Msg - 1973 > 1 )
  {
    result = DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  else
  {
    v4 = (_DWORD *)::lParam; //原先的操作实例指针 
    if ( !::lParam )
    {
      v4 = sub_5247994C(4u);
      ::lParam = (LPARAM)v4;
      *v4 = 0;
    }
    if ( (_DWORD *)lParam == v4 )
    {
      if ( Msg == 1973 || Msg == 1974 )
      { //wParam 操作类实例指针
        v6 = *(void (__cdecl **)(_DWORD))(wParam + 4);
        if ( v6 )
          v6(*(_DWORD *)wParam);  //  AsyncTask::MessagePumpForUI::ProcessMessageHelper  => sub_52378040  act here?   => sub_5237D0D0
        sub_5247993E((void *)wParam);
      }
      result = 0;
    }
    else
    {
      if ( !v4 )
      {
        v4 = sub_5247994C(4u);
        ::lParam = (LPARAM)v4;
        *v4 = 0;
      }
      sub_522A5990(
        (int)L"file",
        549,
        (int)L"func",
        2,
        (int)L"HttpClient",
        (const char *)L"ThreadSyncHelper, this pointer is invalid, ptr=%p-%p",
        lParam,
        v4);
      result = 0;
    }
  }
  return result;
}

char __thiscall AsyncTask::MessagePumpForUI::ProcessPumpReplacementMessage(AsyncTask::MessagePumpForUI *this)
{
  AsyncTask::MessagePumpForUI *v1; // edi@1
  BOOL v2; // esi@1
  UINT v3; // eax@2
  struct tagMSG Msg; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = PeekMessageW(&Msg, 0, 0, 0, 1u);
  InterlockedExchange((volatile LONG *)v1 + 10, 0);
  if ( !v2 )
    return 0;
  v3 = Msg.message;
  if ( Msg.message == 37886 )
  {
    PostMessageW(Msg.hwnd, 0x93FEu, Msg.wParam, Msg.lParam);
    PeekMessageW(&Msg, 0, 0, 0, 0);
    if ( Msg.message != 37886 )
    {
      PeekMessageW(&Msg, 0, 0, 0, 1u);
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

//common.dll
void __cdecl sub_5237D0D0(LONG Target)
{
  LONG v1; // edi@1
  LONG v2; // eax@1
  LONG v3; // esi@1
  void (__stdcall *v4)(LONG); // eax@2
  int v5; // esi@5
  int v6; // ecx@6
  int v7; // edx@8

  v1 = Target;
  Target = 0;
  v2 = InterlockedExchange(&Target, *(_DWORD *)(v1 + 4));
  v3 = v2;
  if ( v2 )
  {
    v4 = *(void (__stdcall **)(LONG))(*(_DWORD *)v2 + 8);
    if ( *(__int32 (__stdcall ***)(CCmdCodecBase *, const struct _GUID *, void **))v3 == &off_524B1BE0 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (*(void (__thiscall **)(LONG, signed int))(*(_DWORD *)v3 + 12))(v3, 1);
    }
    else
    {
      v4(v3);
    }
  }
  *(_DWORD *)(Target + 76) |= 4u;
  *(_DWORD *)(Target + 76) &= 0xFFFFFFFE;
  v5 = *(_DWORD *)(Target + 8);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 76) & 6) == 4 )
      {
        v7 = *(_DWORD *)(v6 + 56);
        if ( v7 )
          (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v7 + 12))(v7, *(_DWORD *)v5, *(_DWORD *)(v6 + 20)); // call sub_52381950 ?
      }
    }
  }
  sub_52381200(&Target);
  sub_5247993E((void *)v1);
}

//common.dll
int __stdcall sub_52381950(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int v4; // edx@2
  signed int v6; // edx@6
  int v7; // ecx@7
  int v8; // esi@9
  int v9; // ecx@12

  v3 = *(_DWORD *)(a1 + 12);
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( !v4 || !*(_DWORD *)(v4 + 4) || !*(_DWORD *)(a1 + 20) )
      return -2147418113;
  }
  v6 = -2147467263;
  if ( v3 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 )
      return (*(int (__fastcall **)(int, signed int, int, int))(*(_DWORD *)v7 + 4))(v7, -2147467263, a2, a3);  //call sub_52376F60?
  }
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 || !*(_DWORD *)(v8 + 4) )
  {
LABEL_14:
    if ( *(_DWORD *)(a1 + 20) && (!v8 || !*(_DWORD *)(v8 + 4)) )
      v6 = -2147418113;
    return v6;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    v9 = *(_DWORD *)(a1 + 24);
    if ( v9 )
      return (*(int (__fastcall **)(int, signed int, int, int))(*(_DWORD *)v9 + 4))(v9, -2147467263, a2, a3);
    goto LABEL_14;
  }
  return v6;
}

//common.dll
int __thiscall sub_52376F60(void *this, int a2, int a3)
{
  (*(void (__stdcall **)(int, int))(**(_DWORD **)this + 20))(a2, a3);  //apputil.sub_5110525A
  return 0;
} 


void __thiscall AsyncTask::TaskQueue::Push(void *this, struct AsyncTask::Task *a2)
{
  if ( a2 )
    sub_51B22C1F((int)this + 4, (int *)&a2);
}















//===============================================
//apputil.dll
int __thiscall sub_5110525A(const wchar_t *this, int a2, int a3)
{
  const wchar_t *v3; // edi@1
  const wchar_t *v4; // eax@2
  const wchar_t *v5; // esi@2
  int v6; // eax@2
  int v7; // esi@3
  void (__stdcall *v8)(int, int); // edi@3
  int v9; // eax@3
  int v10; // eax@3
  int v11; // esi@3
  void (__stdcall *v12)(int, wchar_t *); // edi@3
  wchar_t *v13; // eax@3
  int v14; // esi@3
  void (__thiscall *v15)(int, int, const wchar_t *); // edi@3
  const wchar_t *v16; // eax@3
  const wchar_t *v17; // eax@3
  int v18; // ST3C_4@3
  int v19; // esi@3
  void (__thiscall *v20)(int, int, const char *, const wchar_t *); // edi@3
  const wchar_t *v21; // eax@3
  const wchar_t *v22; // eax@3
  int v23; // ST3C_4@3
  const wchar_t *v24; // eax@4
  const wchar_t *v25; // eax@4
  const wchar_t *v27; // [sp+48h] [bp-1Ch]@1
  int v28; // [sp+4Ch] [bp-18h]@2
  char v29; // [sp+50h] [bp-14h]@2
  char v30; // [sp+54h] [bp-10h]@4
  char v31; // [sp+58h] [bp-Ch]@3
  int v32; // [sp+5Ch] [bp-8h]@4
  int v33; // [sp+60h] [bp-4h]@2

  v3 = this;
  v27 = this;
  sub_510B6699(&L"file", 237, &L"func", 2, L"crsignv", L"OnDownloadComplete error code is %d", a3);
  if ( *((_DWORD *)v3 + 3) )
  {
    CTXStringW::CTXStringW((CTXStringW *)&v33, L"platform");
    v4 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v33);
    v5 = TXLoadString(L"EnablePluginFailed", v4);
    v6 = Util::Contact::GetSelfUin();
    Util::ErrorCodeReport::LoginErrorStringAndReport(&v29, v6, v5, 32769, 1, 0, 0, 0);
    CTXStringW::~CTXStringW((CTXStringW *)&v33);
    a3 = 0;
    sub_510EC4BD(&a3);
    v28 = 0;
    if ( a3 )
    {
      (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, 0, 0);
      v7 = a3;
      v8 = *(void (__stdcall **)(int, int))(*(_DWORD *)a3 + 176);
      v9 = CTXBSTR::CTXBSTR((CTXBSTR *)&v31, L"MsgBoxEx");
      v10 = CTXBSTR::operator wchar_t *(v9);
      v8(v7, v10);
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v31);
      v11 = a3;
      v12 = *(void (__stdcall **)(int, wchar_t *))(*(_DWORD *)a3 + 1304);
      v13 = CTXStringW::GetBSTR((CTXStringW *)&v29);
      v12(v11, v13);
      v14 = a3;
      v15 = *(void (__thiscall **)(int, int, const wchar_t *))(*(_DWORD *)a3 + 1144);
      CTXStringW::CTXStringW((CTXStringW *)&v31, L"platform");
      v16 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v31);
      v17 = TXLoadString(L"CF_MESSAGE_TITLE", v16);
      v15(v18, v14, v17);
      CTXStringW::~CTXStringW((CTXStringW *)&v31);
      (*(void (__stdcall **)(int, signed int))(*(_DWORD *)a3 + 1312))(a3, 48);
      v33 = 0;
      Util::Data::CreateTXData((Util::Data *)&v33);
      v19 = v33;
      v20 = *(void (__thiscall **)(int, int, const char *, const wchar_t *))(*(_DWORD *)v33 + 320);
      CTXStringW::CTXStringW((CTXStringW *)&v31, L"platform");
      v21 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v31);
      v22 = TXLoadString(L"download_and_exit_QQ_btnText", v21);
      v20(v23, v19, "buttonText_1", v22);
      CTXStringW::~CTXStringW((CTXStringW *)&v31);
      (*(void (__stdcall **)(int, int))(*(_DWORD *)a3 + 56))(a3, v33);
      (*(void (__stdcall **)(int, _DWORD, int *, _DWORD))(*(_DWORD *)a3 + 1288))(a3, 0, &v28, 0);
      sub_510B6B2B((unsigned int *)&v33);
      v3 = v27;
    }
    CTXStringW::CTXStringW((CTXStringW *)&v31, L"platform");
    v24 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v31);
    v25 = TXLoadString(L"PluginError_Url", v24);
    CTXStringW::CTXStringW((CTXStringW *)&v30, v25);
    CTXStringW::~CTXStringW((CTXStringW *)&v31);
    CTXStringW::CTXStringW((CTXStringW *)&v31, &word_5118B9D0);
    Util::URL::OpenUrlInIM(&v30, 15, &v31);
    CTXStringW::~CTXStringW((CTXStringW *)&v31);
    sub_510B6699(
      &L"file",
      261,
      &L"func",
      2,
      L"callexit",
      L"ForceExit func=%s;lines=%d ",
      (unsigned int)L"d:\\devops\\workspace\\p-37d34ce895ed4865ac95061b653d796f\\source\\app\\apputil\\pluginsecuritycheckreport.cpp");
    v32 = 0;
    sub_510ECB38(&v32);
    if ( v32 )
    {
      v27 = L"plugin security check fail! Start Exit Flow!";
      sub_510B7B3E(&L"file", 267, &L"func", 2, L"plc", (const char *)L"%s", &v27);
      (*(void (__stdcall **)(int))(*(_DWORD *)v32 + 36))(v32);
    }
    sub_510B6B2B((unsigned int *)&v32);
    CTXStringW::~CTXStringW((CTXStringW *)&v30);
    sub_510B6B2B((unsigned int *)&a3);
    CTXStringW::~CTXStringW((CTXStringW *)&v29);
  }
  dword_51211798 = 0;
  return (**(int (__thiscall ***)(const wchar_t *, signed int))v3)(v3, 1);
}






