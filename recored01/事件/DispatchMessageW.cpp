
//log "tid: 0x{tid()} ,DispatchMessageW messageid: 0x{[[ebp+8]+4]}" 
条件断点
[[ebp+8]+4]!=0x113 && [[ebp+8]+4] != 0x47B && [[ebp+8]+4] != 0x374  && [[ebp+8]+4] != 0x801 && [[ebp+8]+4] != 0x465 && [[ebp+8]+4] != 0x373 && [[ebp+8]+4] != 0x7b5 && [[ebp+8]+4] != 0x7eb && [[ebp+8]+4] != 0x31f && [[ebp+8]+4] != 0x503

[[ebp+8]+4]!=0x113 && [[ebp+8]+4] != 0x47B && [[ebp+8]+4] != 0x374  && [[ebp+8]+4] != 0x801 && [[ebp+8]+4] != 0x465 && [[ebp+8]+4] != 0x373 && [[ebp+8]+4] != 0x7b5 && [[ebp+8]+4] != 0x7eb && [[ebp+8]+4] != 0x31f

//tid: DA84 ,DispatchMessageW messageid: 47B
55940                                                                
      0019F2CC 51B24578 761B56C5 18       user32.761B56C5            用户模块
      0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块
      0019FF74 760C0419 00403365 10       qq.00403365                系统模块
      0019FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
      0019FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
      0019FFF0 00000000 779766AD          ntdll.779766AD             用户模块
	  
	  
//tid: EB90 ,DispatchMessageW messageid: 31F	  
60304                                                                
      0FB7FDA8 51B24578 761B56C5 18       user32.761B56C5            用户模块
      0FB7FDC0 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0FB7FDF0 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0FB7FE1C 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0FB7FE40 51B25FE7 51B2207A 8        asynctask.51B2207A         用户模块
      0FB7FE48 5391EF8E 51B25FE7 10       asynctask.51B25FE7         用户模块
      0FB7FE58 51B26082 5391EF8E 114      hummerengine.5391EF8E      用户模块
      0FB7FF6C 51B25E47 51B26082 8        asynctask.51B26082         用户模块
      0FB7FF74 760C0419 51B25E47 10       asynctask.51B25E47         系统模块
      0FB7FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
      0FB7FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
      0FB7FFF0 00000000 779766AD          ntdll.779766AD             用户模块	


//tid: DA84 ,DispatchMessageW messageid: 47B	  
55940                                                                
      0019F284 51B24578 761B56C5 18       user32.761B56C5            用户模块
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
      0019FF74 760C0419 00403365 10       qq.00403365                系统模块
      0019FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
      0019FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
      0019FFF0 00000000 779766AD          ntdll.779766AD             用户模块
	  
//tid: DA84 ,DispatchMessageW messageid: 7B5	  
55940                                                                
      0019F2CC 51B24578 761B56C5 18       user32.761B56C5            用户模块
      0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块
      0019FF74 760C0419 00403365 10       qq.00403365                系统模块
      0019FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
      0019FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
      0019FFF0 00000000 779766AD          ntdll.779766AD             用户模块



	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
//=======================================================================================================
      0019F2CC 51B24578 761B56C5 18       user32.761B56C5            用户模块   //log "tid: 0x{tid()} ,DispatchMessageW messageid: 0x{[[ebp+8]+4]}" 
//tid: DA84 ,DispatchMessageW messageid: 47B	  
	  
	  
	  
	  
//=======================================================================================================	  
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
	  
//=======================================================================================================	  
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
	  
//=======================================================================================================	  
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
	  
//=======================================================================================================	  
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
void __thiscall AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
{
  JUMPOUT(*((_BYTE *)this + 89), 0, AsyncTask::MessageLoop::RunInternalInSEHFrame);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 4))(this);
}	  
	  
	  
	  
	  
//=======================================================================================================	  
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块 
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块  
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块  
      0019FF74 760C0419 00403365 10       qq.00403365                系统模块
      0019FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块  
      0019FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块  
      0019FFF0 00000000 779766AD          ntdll.779766AD             用户模块	  
	  
	  
	  
	  
	  

 	  
//tid: 0x14578 ,DispatchMessageW messageid: 0x400
{
83320                                                                
      0019F2CC 51B24578 761B56C5 18       user32.761B56C5            用户模块
      0019F2E4 51B244FB 51B24578 30       asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C       asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24       asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C      asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80       hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C      hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C        qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C       qq.004012C6                用户模块
      0019FF74 760C0419 00403365 10       qq.00403365                系统模块
      0019FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
      0019FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
      0019FFF0 00000000 779766AD          ntdll.779766AD             用户模块	
	
	
}
	  
	  
	  
	  
	  
	  
	  
	  