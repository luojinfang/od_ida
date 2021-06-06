/*
AsyncTask::MessageLoop::PostTask(AsyncTask::Task *)                             51B22154 187    
AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::Task *,__int64,bool,bool)    51B22204 190    
AsyncTask::MessageLoopProxyImpl::PostTask(AsyncTask::Task *)                    51B23AFE 188    
AsyncTask::MessageLoopProxyImpl::PostTaskHelper(AsyncTask::Task *,__int64,bool) 51B23B98 189  

*/



0019F0B0 532B9D5C 532BA702 1C       gf.532BA702                用户模块
//处理默认事件id
LRESULT __thiscall sub_532B9EF0(void *this, UINT Msg, WPARAM wParam, HKL hkl, int a5)
{
	  case 0x201u:  //#define WM_LBUTTONDOWN 0x0201
	  //界面控件 LBUTTONDOWN 触发
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 100))(
          this,
          *((_DWORD *)this + 1),
          0,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5); // 532BA6DC
        return 0;
      case 0x202u:  //#define WM_LBUTTONUP 0x0202
		//界面控件 LBUTTONUP 触发		
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 104))(
          this,
          *((_DWORD *)this + 1),
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);   //532BB689 =====================> gf.sub_532BB630
        return 0;
      case 0x203u: //#define WM_LBUTTONDBLCLK 0x0203
		//界面控件双击 触发
        (*(void (__thiscall **)(void *, _DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 100))(
          this,
          *((_DWORD *)this + 1),
          1,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5); //532BA724
        return 0;
}






{
	//点击发送消息时断点
	//再在 PostTask_Helper 处断点
Address  To       From     Siz Comment               Party 
04AEFB68 51B22169 51B22204 20  asynctask.51B22204    User //PostTask_Helper
04AEFB88 51B223F0 51B22169 2C  asynctask.51B22169    User
04AEFBB4 51B22591 51B223F0 C   asynctask.51B223F0    User
04AEFBC0 51B2287F 51B22591 40  asynctask.51B22591    User
04AEFC00 51B244AF 51B2287F 18  asynctask.51B2287F    User
04AEFC18 758547AB 51B244AF 2C  asynctask.51B244AF    System
04AEFC44 758352AC 758547AB E4  user32.758547AB       System
04AEFD28 758343FE 758352AC 74  user32.758352AC       System
04AEFD9C 758341E0 758343FE C   user32.758343FE       System
04AEFDA8 51B24578 758341E0 18  user32.758341E0       User
04AEFDC0 51B244FB 51B24578 30  asynctask.51B24578    User
04AEFDF0 51B2437C 51B244FB 2C  asynctask.51B244FB    User
04AEFE1C 51B2207A 51B2437C 24  asynctask.51B2437C    User
04AEFE40 51B25FE7 51B2207A 8   asynctask.51B2207A    User
04AEFE48 5391EF8E 51B25FE7 10  asynctask.51B25FE7    User
04AEFE58 51B26082 5391EF8E 114 hummerengine.5391EF8E User
04AEFF6C 51B25E47 51B26082 8   asynctask.51B26082    User
04AEFF74 76C46359 51B25E47 10  asynctask.51B25E47    System
04AEFF84 772A8944 76C46359 5C  kernel32.76C46359     System
04AEFFE0 772A8914 772A8944 10  ntdll.772A8944        System
04AEFFF0 00000000 772A8914     ntdll.772A8914        User



//========================================================================================================================= 
04AEFB68 51B22169 51B22204 20  asynctask.51B22204    User

04AEFB88 51B223F0 51B22169 2C  asynctask.51B22169    User

04AEFBB4 51B22591 51B223F0 C   asynctask.51B223F0    User

04AEFBC0 51B2287F 51B22591 40  asynctask.51B22591    User

04AEFC00 51B244AF 51B2287F 18  asynctask.51B2287F    User

//=========================================================================================================================
04AEFC18 758547AB 51B244AF 2C  asynctask.51B244AF    System
void __thiscall AsyncTask::MessagePumpForUI::HandleTimerMessage(UINT_PTR uIDEvent)
{
  UINT_PTR v1; // esi@1
  int v2; // ecx@1

  v1 = uIDEvent;
  KillTimer(*(HWND *)(uIDEvent + 48), uIDEvent);
  v2 = *(_DWORD *)(v1 + 44);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(**(_DWORD **)v2 + 8))(v1 + 32);
    if ( *(_QWORD *)(v1 + 32) )
      (*(void (__thiscall **)(UINT_PTR, int))(*(_DWORD *)v1 + 16))(v1, v1 + 32);
  }
}




//=========================================================================================================================
04AEFC44 758352AC 758547AB E4  user32.758547AB       System
04AEFD28 758343FE 758352AC 74  user32.758352AC       System
04AEFD9C 758341E0 758343FE C   user32.758343FE       System
04AEFDA8 51B24578 758341E0 18  user32.758341E0       User 


//=========================================================================================================================
04AEFDC0 51B244FB 51B24578 30  asynctask.51B24578    User // AsyncTask::MessagePumpForUI::ProcessMessageHelper(AsyncTask::MessagePumpForUI *this, LPMSG lpMsg)

	=>DispatchMessageW(lpMsg);



//=========================================================================================================================
04AEFDF0 51B2437C 51B244FB 2C  asynctask.51B244FB    User //bool __thiscall AsyncTask::MessagePumpForUI::ProcessNextWindowsMessage(AsyncTask::MessagePumpForUI *this)





//=========================================================================================================================
04AEFE1C 51B2207A 51B2437C 24  asynctask.51B2437C    User //void __thiscall AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
04AEFE40 51B25FE7 51B2207A 8   asynctask.51B2207A    User
04AEFE48 5391EF8E 51B25FE7 10  asynctask.51B25FE7    User
04AEFE58 51B26082 5391EF8E 114 hummerengine.5391EF8E User
04AEFF6C 51B25E47 51B26082 8   asynctask.51B26082    User
04AEFF74 76C46359 51B25E47 10  asynctask.51B25E47    System
04AEFF84 772A8944 76C46359 5C  kernel32.76C46359     System
04AEFFE0 772A8914 772A8944 10  ntdll.772A8944        System
04AEFFF0 00000000 772A8914     ntdll.772A8914        User


}

