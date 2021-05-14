
//log "tid: 0x{tid()} ,PostMessageW messageid: 0x{[ebp+c]}"

//条件断点  [ebp+0xc] != 0x8fff
[ebp+0xc] != 0x8fff && [ebp+0xc] != 0x47b

[ebp+0xc] != 0x8fff && [ebp+0xc] != 0x47b && [ebp+0xc] != 0x465 && [ebp+0xc] != 0x10 && [ebp+0xc] != 0x7B5

/*
tid: 0xE968 ,PostMessageW messageid: 0xE8D0000
tid: 0xE968 ,PostMessageW messageid: 0x19E67E
tid: 0xE968 ,PostMessageW messageid: 0x19E674
tid: 0xE968 ,PostMessageW messageid: 0x19E678
tid: 0xE968 ,PostMessageW messageid: 0x80

tid: 0x12058 ,PostMessageW messageid: 0x503

*/

/*
//挂机时自动触发
tid: 0x22C8 ,PostMessageW messageid: 0x8FFF
tid: 0x23FC ,PostMessageW messageid: 0x8FFF
tid: 0x136B4 ,PostMessageW messageid: 0x8FFF
tid: 0x125B0 ,PostMessageW messageid: 0x8FFF

tid: 0xE278 ,PostMessageW messageid: 0x465
tid: 0xEF24 ,PostMessageW messageid: 0x465

tid: 0x11CAC ,PostMessageW messageid: 0x10
tid: 0x133C8 ,PostMessageW messageid: 0x10

tid: 0x125B0 ,PostMessageW messageid: 0x47B
tid: 0x136B4 ,PostMessageW messageid: 0x47B

tid: 0x13730 ,PostMessageW messageid: 0x7B5





tid: 0xF874 ,PostMessageW messageid: 0x374

*/


/*
 //双点最小化图标显示主窗口
tid: 0xF874 ,PostMessageW messageid: 0x7F1 
tid: 0xF874 ,PostMessageW messageid: 0x7F0
//todo

*/


//tid: 0xF874 ,PostMessageW messageid: 0x7F1 
{

0019C724 13237846 761C31C5 18       user32.761C31C5            系统模块
0019C73C 13237B69 13237846 18       sogouwb.13237846           系统模块
0019C754 1323E37B 13237B69 14       sogouwb.13237B69           系统模块
0019C768 1323337B 1323E37B 60       sogouwb.1323E37B           系统模块
0019C7C8 132B3614 1323337B FFE6383C sogouwb.1323337B           系统模块
00000004 00000000 132B3614          sogouwb.132B3614           用户模块
}


//tid: 0xF874 ,PostMessageW messageid: 0x7F0
{                                                                
0019EE5C 1323B62C 761C31C5 FFE611A8 user32.761C31C5            系统模块
00000004 00000000 1323B62C          sogouwb.1323B62C           用户模块	
}

 


{
	
	
	
	
}



{
	
	
	
	
}



{
	
	
	
	
}






//=============================================
{
58776                                                                
      04A3FCD8 51B26198 761C31C5 1C       user32.761C31C5            用户模块 //log "tid: 0x{tid()} ,PostMessageW messageid: 0x{[ebp+c]}"  / PostMessageW messageid: 0x8FFF
      04A3FCF4 51B24254 51B26198 64       asynctask.51B26198         用户模块
      04A3FD58 51B22169 51B24254 20       asynctask.51B24254         用户模块
      04A3FD78 51B223F0 51B22169 2C       asynctask.51B22169         用户模块
      04A3FDA4 51B22591 51B223F0 C        asynctask.51B223F0         用户模块
      04A3FDB0 51B2287F 51B22591 3C       asynctask.51B22591         用户模块
      04A3FDEC 51B24339 51B2287F 30       asynctask.51B2287F         用户模块
      04A3FE1C 51B2207A 51B24339 24       asynctask.51B24339         用户模块
      04A3FE40 51B25FE7 51B2207A 8        asynctask.51B2207A         用户模块
      04A3FE48 5391EF8E 51B25FE7 10       asynctask.51B25FE7         用户模块
      04A3FE58 51B26082 5391EF8E 114      hummerengine.5391EF8E      用户模块
      04A3FF6C 51B25E47 51B26082 8        asynctask.51B26082         用户模块
      04A3FF74 760C0419 51B25E47 10       asynctask.51B25E47         系统模块
      04A3FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
      04A3FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
      04A3FFF0 00000000 779766AD          ntdll.779766AD             用户模块 

//=============================================================================
 04A3FCD8 51B26198 761C31C5 1C       user32.761C31C5            用户模块  //PostMessageW
 
 
 //=============================================================================
 04A3FCF4 51B24254 51B26198 64       asynctask.51B26198         用户模块 
 void __thiscall AsyncTask::CThreadSwitch::PostToHandler(AsyncTask::CThreadSwitch *this, WPARAM wParam, void *lParam)
{
  AsyncTask::CThreadSwitch *v3; // esi@1

  v3 = this;
  if ( IsWindow(*((HWND *)this + 1)) )
    PostMessageW(*((HWND *)v3 + 1), 0x8FFFu, wParam, (LPARAM)lParam);
}

{
	
.text:51B26184                 push    [ebp+lParam]    ; lParam
.text:51B26187                 push    [ebp+wParam]    ; wParam
.text:51B2618A                 push    8FFFh           ; Msg
.text:51B2618F                 push    dword ptr [esi+4] ; hWnd
.text:51B26192                 call    ds:PostMessageW
	
} 
 
{
//PostMessageW 
761C31C0 | 8BFF                | mov edi,edi                                                   |
761C31C2 | 55                  | push ebp                                                      |
761C31C3 | 8BEC                | mov ebp,esp                                                   |
761C31C5 | 53                  | push ebx                                                      | //log "tid: 0x{tid()} ,PostMessageW messageid: 0x{[ebp+c]}"  
	 
}

 //=============================================================================
 04A3FD58 51B22169 51B24254 20       asynctask.51B24254         用户模块 
 void __thiscall AsyncTask::MessagePumpForUI::ScheduleWork(WPARAM wParam)
{
  WPARAM v1; // esi@1

  v1 = wParam;
  if ( !InterlockedExchange((volatile LONG *)(wParam + 40), 1) )
    AsyncTask::CThreadSwitch::PostToHandler(*(AsyncTask::CThreadSwitch **)(v1 + 52), v1, (void *)0x401); //========================>51B26198/AsyncTask::CThreadSwitch::PostToHandler
}
 
 
 
 //=============================================================================
 04A3FD78 51B223F0 51B22169 2C       asynctask.51B22169         用户模块 
 void __thiscall AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
{
  AsyncTask::MessageLoop::PostTask_Helper(this, a2, 0i64, 1, 0);
}
 
 //=============================================================================
 04A3FDA4 51B22591 51B223F0 C        asynctask.51B223F0         用户模块 
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
 
 
 
 //=============================================================================
 04A3FDB0 51B2287F 51B22591 3C       asynctask.51B22591         用户模块 
 
 
 
 
 //=============================================================================
 04A3FDEC 51B24339 51B2287F 30       asynctask.51B2287F         用户模块 
 
 
 
 
 //=============================================================================
 04A3FE1C 51B2207A 51B24339 24       asynctask.51B24339         用户模块 
 
 
 
 
 //=============================================================================
 04A3FE40 51B25FE7 51B2207A 8        asynctask.51B2207A         用户模块 
 
 
 
 
 //=============================================================================
 04A3FE48 5391EF8E 51B25FE7 10       asynctask.51B25FE7         用户模块 
 
 
 
 
 //=============================================================================
 04A3FE58 51B26082 5391EF8E 114      hummerengine.5391EF8E      用户模块
 04A3FF6C 51B25E47 51B26082 8        asynctask.51B26082         用户模块
 04A3FF74 760C0419 51B25E47 10       asynctask.51B25E47         系统模块
 04A3FF84 779766DD 760C0419 5C       kernel32.760C0419          系统模块
 04A3FFE0 779766AD 779766DD 10       ntdll.779766DD             系统模块
 04A3FFF0 00000000 779766AD          ntdll.779766AD             用户模块



]


//PostMessageW messageid: 0x47B    
{
	
                                                       
      07F5FBD4 523E1E5E 761C31C5 38  user32.761C31C5            用户模块
      07F5FC0C 56DF8B3A 523E1E5E 18  common.523E1E5E            用户模块
      07F5FC24 56DFB7C9 56DF8B3A 20  preloginlogic.56DF8B3A     用户模块
      07F5FC44 56DFAFAD 56DFB7C9 60  preloginlogic.56DFB7C9     用户模块
      07F5FCA4 56DFABE2 56DFAFAD 2C  preloginlogic.56DFAFAD     用户模块
      07F5FCD0 56DFAB28 56DFABE2 20  preloginlogic.56DFABE2     用户模块
      07F5FCF0 56DF51C3 56DFAB28 80  preloginlogic.56DFAB28     用户模块
      07F5FD70 52AFA596 56DF51C3 38  preloginlogic.56DF51C3     用户模块
      07F5FDA8 52AFB936 52AFA596 20  arksocket.52AFA596         用户模块
      07F5FDC8 52AF6F09 52AFB936 34  arksocket.52AFB936         用户模块
      07F5FDFC 55EE554E 52AF6F09 C4  arksocket.52AF6F09         用户模块
      07F5FEC0 55ED3990 55EE554E 20  libuv.55EE554E             用户模块
      07F5FEE0 55ED3A9C 55ED3990 24  libuv.55ED3990             用户模块
      07F5FF04 52AF5696 55ED3A9C 20  libuv.55ED3A9C             用户模块
      07F5FF24 55EE0E29 52AF5696 18  arksocket.52AF5696         用户模块
      07F5FF3C 7643738F 55EE0E29 38  libuv.55EE0E29             系统模块
      07F5FF74 760C0419 7643738F 10  ucrtbase.7643738F          系统模块
      07F5FF84 779766DD 760C0419 5C  kernel32.760C0419          系统模块
      07F5FFE0 779766AD 779766DD 10  ntdll.779766DD             系统模块
      07F5FFF0 00000000 779766AD     ntdll.779766AD             用户模块	
	
	
}



//tid: 0xF874 ,PostMessageW messageid: 0x374	 
{

	
      0019EFE4 52393036 761C31C5 2C  user32.761C31C5            用户模块
      0019F010 52393B13 52393036 1C  common.52393036            用户模块
      0019F02C 5239C539 52393B13 1C  common.52393B13            用户模块
      0019F048 523899E6 5239C539 C   common.5239C539            用户模块
      0019F054 52302651 523899E6 14  common.523899E6            用户模块
      0019F068 522C0D54 52302651 10  common.52302651            用户模块
      0019F078 523A93E5 522C0D54 18  common.522C0D54            用户模块
      0019F090 523A9281 523A93E5 14  common.523A93E5            用户模块
      0019F0A4 5242B0EA 523A9281 34  common.523A9281            用户模块
      0019F0D8 523A9EB5 5242B0EA 1C  common.5242B0EA            用户模块
      0019F0F4 522C867F 523A9EB5 C   common.523A9EB5            用户模块
      0019F100 523DF356 522C867F 14  common.522C867F            用户模块
      0019F114 523DEE96 523DF356 28  common.523DF356            用户模块
      0019F13C 761C5CAB 523DEE96 2C  common.523DEE96            系统模块
      0019F168 761B67BC 761C5CAB E4  user32.761C5CAB            系统模块
      0019F24C 761B58FB 761B67BC 74  user32.761B67BC            系统模块
      0019F2C0 761B56D0 761B58FB C   user32.761B58FB            系统模块
      0019F2CC 51B24578 761B56D0 18  user32.761B56D0            用户模块
      0019F2E4 51B244FB 51B24578 30  asynctask.51B24578         用户模块
      0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB         用户模块
      0019F340 51B2207A 51B2437C 24  asynctask.51B2437C         用户模块
      0019F364 53920B86 51B2207A 69C asynctask.51B2207A         用户模块
      0019FA00 53927E8B 53920B86 80  hummerengine.53920B86      用户模块
      0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B      用户模块
      0019FF1C 004012C6 0040289B C   qq.0040289B                用户模块
      0019FF28 00403365 004012C6 4C  qq.004012C6                用户模块
      0019FF74 760C0419 00403365 10  qq.00403365                系统模块
      0019FF84 779766DD 760C0419 5C  kernel32.760C0419          系统模块
      0019FFE0 779766AD 779766DD 10  ntdll.779766DD             系统模块
      0019FFF0 00000000 779766AD     ntdll.779766AD             用户模块	
	
}

 
//PostMessageW messageid: 0x465
{
	
      03DBF804 6F88E0FB 761C31C5 7C  user32.761C31C5            系统模块
      03DBF880 6F8ECBE5 6F88E0FB 28  urlmon.6F88E0FB            系统模块
      03DBF8A8 6F8ECA60 6F8ECBE5 13C urlmon.6F8ECBE5            系统模块
      03DBF9E4 6F8EC4F1 6F8ECA60 48  urlmon.6F8ECA60            系统模块
      03DBFA2C 71BC28B7 6F8EC4F1 160 urlmon.6F8EC4F1            系统模块
      03DBFB8C 71C13077 71BC28B7 18  wininet.71BC28B7           系统模块
      03DBFBA4 71BBF2CF 71C13077 74  wininet.71C13077           系统模块
      03DBFC18 71BB628A 71BBF2CF 18  wininet.71BBF2CF           系统模块
      03DBFC30 71BB4C91 71BB628A 54  wininet.71BB628A           系统模块
      03DBFC84 71BB4339 71BB4C91 E0  wininet.71BB4C91           系统模块
      03DBFD64 71C16BE4 71BB4339 38  wininet.71BB4339           系统模块
      03DBFD9C 77943DEC 71C16BE4 24  wininet.71C16BE4           系统模块
      03DBFDC0 77960B73 77943DEC 1B4 ntdll.77943DEC             系统模块
      03DBFF74 760C0419 77960B73 10  ntdll.77960B73             系统模块
      03DBFF84 779766DD 760C0419 5C  kernel32.760C0419          系统模块
      03DBFFE0 779766AD 779766DD 10  ntdll.779766DD             系统模块
      03DBFFF0 00000000 779766AD     ntdll.779766AD             用户模块 

	
}



//PostMessageW messageid: 0x10
{
	

      1D0FFCAC 6F8DD863 761C31C5 2C  user32.761C31C5            系统模块
      1D0FFCD8 6F8DCBEE 6F8DD863 20  urlmon.6F8DD863            系统模块
      1D0FFCF8 6F8DC6FD 6F8DCBEE 14  urlmon.6F8DCBEE            系统模块
      1D0FFD0C 6F8FE531 6F8DC6FD 1C  urlmon.6F8DC6FD            系统模块
      1D0FFD28 6F8FCD9D 6F8FE531 60  urlmon.6F8FE531            系统模块
      1D0FFD88 77980646 6F8FCD9D 20  urlmon.6F8FCD9D            系统模块
      1D0FFDA8 7794F66C 77980646 4C  ntdll.77980646             系统模块
      1D0FFDF4 7795BAFE 7794F66C A8  ntdll.7794F66C             系统模块
      1D0FFE9C 7797940C 7795BAFE D8  ntdll.7795BAFE             系统模块
      1D0FFF74 760C0420 7797940C 10  ntdll.7797940C             系统模块
      1D0FFF84 779766DD 760C0420 5C  kernel32.760C0420          系统模块
      1D0FFFE0 779766AD 779766DD 10  ntdll.779766DD             系统模块
      1D0FFFF0 00000000 779766AD     ntdll.779766AD             用户模块
		
	
}


//PostMessageW messageid: 0x7B5	
{
      150FFED0 5237C117 761C31C5 2C  user32.761C31C5            用户模块
      150FFEFC 51A89B26 5237C117 40  common.5237C117            用户模块
      150FFF3C 7643738F 51A89B26 38  arkhttpclient.51A89B26     系统模块
      150FFF74 760C0419 7643738F 10  ucrtbase.7643738F          系统模块
      150FFF84 779766DD 760C0419 5C  kernel32.760C0419          系统模块
      150FFFE0 779766AD 779766DD 10  ntdll.779766DD             系统模块
      150FFFF0 00000000 779766AD     ntdll.779766AD             用户模块
	
	
}



