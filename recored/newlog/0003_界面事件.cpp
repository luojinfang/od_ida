========================================================================================================================================================================================================================================================================================================
IDA 查找 DefWindowProcW  / GF.dll
                                                                   

Address         Function     Instruction                                                                          
-------         --------     -----------                                                                          
.text:67FC0F92  sub_67FC0F80                 call    ds:DefWindowProcW                                            
.text:680E115C  sub_680E10A0                 cmp     eax, ds:DefWindowProcW                                       
.text:680FEBF4  sub_680FEBD0                 jmp     ds:DefWindowProcW                                            
.text:681183C7  sub_681183A0                 call    ds:DefWindowProcW                                            
.text:68119D80  sub_68119D80                 mov     eax, ds:DefWindowProcW                                       
.text:68119F37  sub_68119EF0                 call    ds:DefWindowProcW       //控件事件,通用接口？                                               
.text:681490B2  sub_68149090                 mov     ecx, ds:DefWindowProcW                                       
.idata:681555FC              ; LRESULT __stdcall DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
.rdata:681A273A                              db 'DefWindowProcW',0                                                



//od 加载的基地址会和IDA默认的不一样
Base=67FB0000
Module=gf.dll
Party=User
Path=D:\Program Files (x86)\Tencent\QQ\Bin\GF.dll
Status=Unloaded



//控件事件,通用接口？
.rdata:6818D248 off_6818D248    dd offset sub_68119D30  ; DATA XREF: sub_68119D80+30o
.rdata:6818D248                                         ; sub_68119DE0+Bo
.rdata:6818D24C                 dd offset sub_68119DE0
.rdata:6818D250                 dd offset sub_680E11C0
.rdata:6818D254                 dd offset sub_6811B2F0
.rdata:6818D258                 dd offset sub_68119EF0
.rdata:6818D25C                 dd offset sub_6811B330
.rdata:6818D260                 dd offset sub_6811B350
.rdata:6818D264                 dd offset sub_6811B370
.rdata:6818D268                 dd offset sub_6811B390
.rdata:6818D26C                 dd offset sub_6811B3E0
.rdata:6818D270                 dd offset sub_6811B400
.rdata:6818D274                 dd offset sub_6811BDC0
.rdata:6818D278                 dd offset sub_67FBFBD0
.rdata:6818D27C                 dd offset sub_6811B410
.rdata:6818D280                 dd offset sub_6811B450
.rdata:6818D284                 dd offset loc_6811BFA0
.rdata:6818D288                 dd offset sub_6811B4D0
.rdata:6818D28C                 dd offset sub_67FBFBD0
.rdata:6818D290                 dd offset sub_6811B490
.rdata:6818D294                 dd offset sub_6811B510
.rdata:6818D298                 dd offset sub_6811B530
.rdata:6818D29C                 dd offset sub_6811B550
.rdata:6818D2A0                 dd offset sub_6811B560
.rdata:6818D2A4                 dd offset sub_6811B580
.rdata:6818D2A8                 dd offset sub_6811B5A0
.rdata:6818D2AC                 dd offset sub_6811B5C0
.rdata:6818D2B0                 dd offset sub_6811B630
.rdata:6818D2B4                 dd offset sub_6811B6A0
.rdata:6818D2B8                 dd offset sub_6811B710
.rdata:6818D2BC                 dd offset sub_6811B780
.rdata:6818D2C0                 dd offset sub_6811B7F0
.rdata:6818D2C4                 dd offset sub_6811AD90
.rdata:6818D2C8                 dd offset sub_6811B860
.rdata:6818D2CC                 dd offset sub_6811B880
.rdata:6818D2D0                 dd offset sub_6811B8F0
.rdata:6818D2D4                 dd offset sub_6811B910
.rdata:6818D2D8                 dd offset sub_6811B930
.rdata:6818D2DC                 dd offset sub_6811B950
.rdata:6818D2E0                 dd offset sub_6811B9A0
.rdata:6818D2E4                 dd offset sub_6811B9F0
.rdata:6818D2E8                 dd offset nullsub_127
.rdata:6818D2EC                 dd offset sub_6811BB80
.rdata:6818D2F0                 dd offset sub_6811BA00
.rdata:6818D2F4                 dd offset sub_6811BA20
.rdata:6818D2F8                 dd offset sub_6811BA40
.rdata:6818D2FC                 dd offset sub_6811BA70
.rdata:6818D300                 dd offset sub_6811BAA0
.rdata:6818D304                 dd offset sub_6811BAC0
.rdata:6818D308                 dd offset sub_6811BAF0
.rdata:6818D30C                 dd offset sub_6811BB10
.rdata:6818D310                 dd offset sub_6811BB30
.rdata:6818D314                 dd offset sub_6811C100
.rdata:6818D318                 dd offset sub_6811BBA0
.rdata:6818D31C                 dd offset sub_6811BD70
.rdata:6818D320                 dd offset sub_6811BDF0
.rdata:6818D324                 dd offset loc_6811BE40
.rdata:6818D328                 dd offset sub_6811BBC0
.rdata:6818D32C                 dd offset sub_6811BC30
.rdata:6818D330                 dd offset sub_6811BC50
.rdata:6818D334                 dd offset sub_6811BC70
.rdata:6818D338                 dd offset sub_6811BC90
.rdata:6818D33C                 dd offset sub_6811BCB0

.rdata:6818D340                 dd offset sub_6811BCD0
.rdata:6818D344                 dd offset sub_6811BCF0
.rdata:6818D348                 dd offset sub_6811BD30
.rdata:6818D34C                 dd offset sub_6811BD50
.rdata:6818D350                 dd offset sub_680590B0
.rdata:6818D354                 dd offset sub_680590B0
.rdata:6818D358                 dd offset sub_6811AE60
.rdata:6818D35C                 dd offset nullsub_128
.rdata:6818D360                 dd offset sub_6811AEA0
.rdata:6818D364                 dd offset sub_6811AF00
.rdata:6818D368                 dd offset sub_6811AF50
.rdata:6818D36C                 dd offset sub_6811AF70
.rdata:6818D370                 dd offset sub_6811AF90
.rdata:6818D374                 dd offset sub_6811AFB0
.rdata:6818D378                 dd offset sub_6811AFD0
.rdata:6818D37C                 dd offset sub_6811B010
.rdata:6818D380                 dd offset sub_6811B060
.rdata:6818D384                 dd offset sub_6811B0B0
.rdata:6818D388                 dd offset sub_6811B0F0
.rdata:6818D38C                 dd offset sub_6811B110
.rdata:6818D390                 dd offset sub_6811B140
.rdata:6818D394                 dd offset sub_6811B180
.rdata:6818D398                 dd offset sub_6811B1D0
.rdata:6818D39C                 dd offset sub_6811B210
.rdata:6818D3A0                 dd offset sub_6811B260
.rdata:6818D3A4                 dd offset sub_6811B280
.rdata:6818D3A8                 dd offset sub_6811B2A0
.rdata:6818D3AC                 dd offset sub_6811B2C0
.rdata:6818D3B0                 dd offset sub_6811ADE0
.rdata:6818D3B4                 dd offset sub_6811AE00
.rdata:6818D3B8                 dd offset sub_68119EA0


========================================================================================================================================================================================================================================================================================================
//特别事件? msg = 1025 
int __stdcall sub_681183A0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG v5; // eax@7
  LONG v6; // ebx@7

  if ( Msg == 1 )
  {
    SetWindowLongW(hWnd, 0, *(_DWORD *)lParam);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( Msg == 2 )
  {
    SetWindowLongW(hWnd, 0, 0);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( Msg != 1025 )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  v5 = GetWindowLongW(hWnd, 0);
  v6 = v5;
  if ( !v5 || !IsWindow(*(HWND *)(v5 + 52)) )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  return (*(int (__thiscall **)(LONG, WPARAM))(*(_DWORD *)v6 + 148))(v6, wParam);
}

========================================================================================================================================================================================================================================================================================================
//
int __stdcall sub_67FC0F80(int a1, UINT Msg, WPARAM wParam, LPARAM lParam, int a5)
{
  *(_DWORD *)a5 = DefWindowProcW(*(HWND *)(a1 + 16), Msg, wParam, lParam);
  return 0;
}

========================================================================================================================================================================================================================================================================================================
void __cdecl sub_680FEBD0(HWND hWnd, int a2, int a3)
{
  GetWindowLongW(hWnd, -21);
  if ( a2 == 1225 )
    sub_680FF1F0(a3);
  JUMPOUT(&DefWindowProcW);
}

========================================================================================================================================================================================================================================================================================================
//
int __stdcall sub_680E10A0(int a1, UINT Msg, WPARAM wParam, LPARAM lParam)
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
  if ( !(*v11)(v5, v9, v6, v10, v8, &a1, 0) )
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


========================================================================================================================================================================================================================================================================================================

int __thiscall sub_68119D80(int this)
{
  int v1; // esi@1

  v1 = this;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 32) = DefWindowProcW;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)this = &off_6818D248;
  *(_DWORD *)(this + 36) = 0;
  *(_WORD *)(this + 56) = 0;
  *(_OWORD *)(this + 40) = 0i64;
  *(_DWORD *)(this + 40) = 16;
  SystemParametersInfoW(0x66u, 0, (PVOID)(this + 52), 0);
  return v1;
}

========================================================================================================================================================================================================================================================================================================

void *__thiscall sub_68119DE0(void *Memory, char a2)
{
  void *v2; // edi@1
  HWND v3; // ecx@1
  unsigned int v4; // ecx@4
  HWND v6; // [sp-10h] [bp-1Ch]@2
  signed int v7; // [sp-Ch] [bp-18h]@2
  int v8; // [sp-8h] [bp-14h]@2
  HWND v9; // [sp-4h] [bp-10h]@1
  int v10; // [sp+0h] [bp-Ch]@3
  int *v11; // [sp+8h] [bp-4h]@3

  v2 = Memory;
  v9 = (HWND)*((_DWORD *)Memory + 1);
  *(_DWORD *)Memory = &off_6818D248;
  if ( IsWindow(v9) )
  {
    v9 = v3;
    v8 = 0;
    v7 = 25;
    v6 = v3;
    CTXStringW::CTXStringW((CTXStringW *)&v6, (const wchar_t *)"|");
    Util::Sys::GetCurrentCallStack(&v9, v6, v7, v8);
    sub_67FBFBA0(
      L"file",
      23,
      L"func",
      2,
      L"Crash.Expection",
      L"WinMsgReceiver\u9500\u6bc1\uff0c\u4f46\u662f\u7a97\u53e3\u6ca1\u6709\u9500\u6bc1\u3002\n"
       " \u5f53\u524d\u5806\u6808\u4e3a: \n"
       " %s",
      (char)v9);
  }
  v11 = &v10;
  if ( &v10 )
  {
    v4 = *((_DWORD *)v2 + 9);
    if ( v4 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*((_DWORD *)v2 + 9));
      v4 = *((_DWORD *)v2 + 9);
    }
    if ( v4 < 0x80000000 )
      *((_DWORD *)v2 + 9) = v4 + 2147483648;
  }
  if ( *((_DWORD *)v2 + 5) )
  {
    v9 = (HWND)*((_DWORD *)v2 + 5);
    sub_6814F7C3(v9);
  }
  if ( a2 & 1 )
  {
    v9 = (HWND)60;
    sub_6814FC66(v2);
  }
  return v2;
}

========================================================================================================================================================================================================================================================================================================
/*
Msg 
	= 0x113 .faq 未处理, 循环触发 [主窗口最小化时]
	= 0x1cu  循环触发 [主窗口显示时]
	= 0x18u  双击右下角最小化图标
	= 0x46u	双击右下角最小化图标
	
*/

  
//前面没有 0x 的数值为十进制
//this = off_6818D248
LRESULT __thiscall sub_68119EF0(void *this, UINT Msg, WPARAM wParam, HKL hkl, int a5)
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
        case 0x1Cu:  //循环触发 [主窗口显示时]   .text:6811A018                 call    dword ptr [eax+18h]
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
        case 0x18u: //   .text:6811A3AA                 call    dword ptr [eax+0F4h]   =>  6811BCB0 | 55                  | push ebp                                        |
          (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 244))(
            this,
            *((_DWORD *)this + 1),
            wParam,
            hkl,
            a5);   //=> sub_6811BCB0()  // this = off_6818D248.[244] => .rdata:6818D33C  =>  dd offset sub_6811BCB0  
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
          a5);
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
========================================================================================================================================================================================================================================================================================================
//LRESULT __thiscall sub_68119EF0(void *this, UINT Msg, WPARAM wParam, HKL hkl, int a5)

//  (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 244))(
//            this,
//            *((_DWORD *)this + 1),
//            wParam,
//            hkl,
//            a5);   //=> sub_6811BCB0()  // this = off_6818D248.[244] => .rdata:6818D33C  =>  dd offset sub_6811BCB0  


int __thiscall sub_6811BCB0(int this, int a2, int a3, int a4, int a5)
{
  int v5; // ecx@1
  int result; // eax@2

  v5 = *(_DWORD *)(this + 36);  //  this.[36]  =>  off_6818D248.[36] => .rdata:6818D26C  => dd offset sub_6811B3E0  
  if ( v5 ) //v5 =  6818D26C
    result = (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v5 + 308))(v5, a3, a4, a5);   //.faq  sub_68113AE0 怎么来的
	//6811BCC0 | FFA0 34010000       | jmp dword ptr ds:[eax+134]  => sub_68113AE0 | 55                  | push ebp                                        |
  return result;
}
 0026D4A0  68113B7C  return to gf.68113B7C from gf.67FEA430
0026D500  6811A3B0  return to gf.6811A3B0 from ???


.text:6811BCB0
.text:6811BCB0 sub_6811BCB0    proc near               ; DATA XREF: .rdata:6818D33Co
.text:6811BCB0
.text:6811BCB0 arg_0           = dword ptr  8
.text:6811BCB0
.text:6811BCB0                 push    ebp
.text:6811BCB1                 mov     ebp, esp
.text:6811BCB3                 mov     ecx, [ecx+24h]
.text:6811BCB6                 test    ecx, ecx
.text:6811BCB8                 jz      short loc_6811BCC6
.text:6811BCBA                 mov     eax, [ecx]
.text:6811BCBC                 mov     [ebp+arg_0], ecx
.text:6811BCBF                 pop     ebp
.text:6811BCC0                 jmp     dword ptr [eax+134h]
.text:6811BCC6 ; ---------------------------------------------------------------------------
.text:6811BCC6
.text:6811BCC6 loc_6811BCC6:                           ; CODE XREF: sub_6811BCB0+8j
.text:6811BCC6                 pop     ebp
.text:6811BCC7                 retn    10h
.text:6811BCC7 sub_6811BCB0    endp
========================================================================================================================================================================================================================================================================================================
------ 
//LRESULT __thiscall sub_68119EF0(void *this, UINT Msg, WPARAM wParam, HKL hkl, int a5)
------

//  (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 244))(
//            this,
//            *((_DWORD *)this + 1),
//            wParam,
//            hkl,
//            a5);   

//int __thiscall sub_6811BCB0(int this, int a2, int a3, int a4, int a5)
-------		
//	result = (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v5 + 308))(v5, a3, a4, a5); 

 							 
-------							 
 
signed int __stdcall sub_68113AE0(int a1, int a2, int a3, struct tagBaseArg *a4)
{
  Util::GF *v4; // esi@2
  signed int result; // eax@5
  char v6; // [sp+8h] [bp-38h]@3
  int v7; // [sp+Ch] [bp-34h]@3
  int v8; // [sp+10h] [bp-30h]@3
  __int64 v9; // [sp+14h] [bp-2Ch]@3
  __int64 v10; // [sp+1Ch] [bp-24h]@3
  int v11; // [sp+24h] [bp-1Ch]@3
  int v12; // [sp+28h] [bp-18h]@3
  __int64 v13; // [sp+2Ch] [bp-14h]@3
  int v14; // [sp+34h] [bp-Ch]@3

  if ( a4
    && (v4 = *(Util::GF **)(a1 + 16)) != 0
    && (v14 = 0,
        _mm_storel_pd((double *)&v9, 0i64),
        _mm_storel_pd((double *)&v10, 0i64),
        _mm_storel_pd((double *)&v13, 0i64),
        sub_67FF41A0(&v8),
        v11 = a2,
        v8 = 929,
        v12 = a3,
        v7 = 0,
        (*(int (__stdcall **)(Util::GF *, char *))(*(_DWORD *)v4 + 44))(v4, &v6) >= 0)
    && *(_DWORD *)&v6 )
  {
    result = Util::GF::DispatchFrameMsg(v4, (struct IGFFrame *)&v8, a4, &v7, 0);
		// Util::GF::DispatchFrameMsg = 67FEA430 | 55                  | push ebp      
  }
  else
  {
    result = -2147467259;
  }
  return result;
}
========================================================================================================================================================================================================================================================================================================

------ 
//LRESULT __thiscall sub_68119EF0(void *this, UINT Msg, WPARAM wParam, HKL hkl, int a5)
------

//  (*(void (__thiscall **)(void *, _DWORD, WPARAM, HKL, int))(*(_DWORD *)this + 244))(
//            this,
//            *((_DWORD *)this + 1),
//            wParam,
//            hkl,
//            a5);   

//int __thiscall sub_6811BCB0(int this, int a2, int a3, int a4, int a5)
-------		
//	result = (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v5 + 308))(v5, a3, a4, a5); 

//signed int __stdcall sub_68113AE0(int a1, int a2, int a3, struct tagBaseArg *a4)
							 
-------		
//     result = Util::GF::DispatchFrameMsg(v4, (struct IGFFrame *)&v8, a4, &v7, 0);

-------

//67FEA430
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
  int v14; // ecx@25
  char *v15; // esi@27
  _BYTE *v16; // edx@29
  unsigned int v17; // ecx@30
  int v18; // ecx@31
  struct tagBaseArg *v20; // [sp+0h] [bp-54h]@8
  void *Memory; // [sp+10h] [bp-44h]@8
  char *v22; // [sp+14h] [bp-40h]@8
  char *v23; // [sp+18h] [bp-3Ch]@8
  int v24; // [sp+1Ch] [bp-38h]@9
  int v25; // [sp+20h] [bp-34h]@9
  void *v26; // [sp+24h] [bp-30h]@18
  char *v27; // [sp+28h] [bp-2Ch]@18
  char *v28; // [sp+2Ch] [bp-28h]@18
  int v29; // [sp+30h] [bp-24h]@11
  int v30; // [sp+34h] [bp-20h]@2
  struct tagBaseArg **v31; // [sp+38h] [bp-1Ch]@34
  int v32; // [sp+3Ch] [bp-18h]@22
  int v33; // [sp+40h] [bp-14h]@21
  int v34; // [sp+44h] [bp-10h]@5
  int v35; // [sp+48h] [bp-Ch]@4
  int v36; // [sp+4Ch] [bp-8h]@24
  int v37; // [sp+50h] [bp-4h]@18

  v5 = this;
  if ( !this || (*(int (__stdcall **)(Util::GF *, int *))(*(_DWORD *)this + 44))(this, &v30) < 0 || !v30 )
    return -2147467259;
  (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v5 + 4))(v5);
  v35 = 0;
  sub_67FEE450((struct ITXCore *)&v35);  //取 ITXCore 实例
  v6 = a2;
  if ( !v35 )
    goto LABEL_8;
  v34 = 0;
  
  // ITXCore 事件处理入口?
  v7 = (*(int (__stdcall **)(int, Util::GF *, struct IGFFrame *, struct tagBaseArg *, int *, int *))(*(_DWORD *)v35 + 40))(
         v35,
         v5,
         a2,
         a3,
         a4,
         &v34);
  if ( !v34 )
  {
    v6 = a2;
LABEL_8:
    Util::GF::DPI::HandleMessageScale(v6, v20);
    Memory = 0;
    v22 = 0;
    v23 = 0;
    if ( a5 )
      goto LABEL_21;
    v25 = 0x3FFFFFFF;
    v24 = 0x7FFFFFFF;
    sub_67FED820(v8);
    v9 = v5;
    do
    {
      this = 0;
      (*(void (__stdcall **)(Util::GF *, Util::GF **))(*(_DWORD *)v9 + 264))(v9, &this);
      if ( !this )
        break;
      if ( (*(int (__stdcall **)(Util::GF *, int *))(*(_DWORD *)this + 44))(this, &v29) >= 0 && v29 )
      {
        if ( v23 == v22 )
        {
          ((void (__thiscall *)(void **, char *, Util::GF **))sub_67FEEE10)(&Memory, v22, &this);
        }
        else
        {
          *(_DWORD *)v22 = this;
          v22 += 4;
        }
      }
      else
      {
        (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)this + 8))(this);
      }
      v9 = this;
    }
    while ( this );
    v10 = v22;
    v37 = 1;
    v28 = v22;
    v27 = v22;
    v26 = Memory;
    if ( v22 == Memory )
    {
LABEL_21:
      v12 = a4;
      v33 = 1;
      v7 = sub_67FF03D0(v6, a3, a4, &v33);
      if ( v33 )
      {
        v32 = 1;
        v7 = sub_67FF0930(a2, a3, v12, &v32);
        if ( v32 )
        {
          if ( !a5 )
          {
            v13 = (char *)Memory;
            v36 = 1;
            if ( Memory != v22 )
            {
              do
              {
                v36 = 1;
                v14 = *(_DWORD *)v13;
                v7 = sub_67FF0930(a2, a3, a4, &v36);
                if ( !v36 )
                  break;
                v13 += 4;
              }
              while ( v13 != v22 );
            }
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v37 = 1;
        v11 = *((_DWORD *)v10 - 1);
        v10 -= 4;
        v7 = sub_67FF03D0(v6, a3, a4, &v37);
        if ( !v37 )
          break;
        v6 = a2;
        v28 = v10;
        v27 = v10;
        v26 = Memory;
        if ( v10 == Memory )
          goto LABEL_21;
      }
    }
    v15 = (char *)Memory;
    if ( Memory != v22 )
    {
      do
      {
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v15 + 8))(*(_DWORD *)v15);
        v15 += 4;
      }
      while ( v15 != v22 );
    }
    (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v5 + 8))(v5);
    v16 = Memory;
    if ( Memory )
    {
      v17 = (v23 - (_BYTE *)Memory) & 0xFFFFFFFC;
      if ( v17 >= 0x1000 )
      {
        v16 = (_BYTE *)*((_DWORD *)Memory - 1);
        v18 = v17 + 35;
        if ( (unsigned int)((_BYTE *)Memory - v16 - 4) > 0x1F )
          invalid_parameter_noinfo_noreturn(v18);
      }
      sub_6814FC66(v16);
      Memory = 0;
      v22 = 0;
      v23 = 0;
    }
    goto LABEL_34;
  }
  (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v5 + 8))(v5);
LABEL_34:
  v31 = &v20;
  if ( &v20 )
  {
    if ( v35 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v35 + 8))(v35);
  }
  return v7;
}

========================================================================================================================================================================================================================================================================================================
 
//取 ITXCore 实例
int __thiscall sub_67FEE450(struct ITXCore *this)
{
  int v1; // ebx@1
  struct ITXCore *v2; // esi@1
  Util::CoreCenter *v3; // edi@3
  int v4; // ebx@6
  int result; // eax@9
  struct ITXCore **v6; // [sp+0h] [bp-20h]@6
  void *v7; // [sp+10h] [bp-10h]@5
  char v8; // [sp+14h] [bp-Ch]@3
  struct ITXCore ***v9; // [sp+18h] [bp-8h]@6
  struct _GUID *v10; // [sp+1Ch] [bp-4h]@6

  v1 = dword_681A7F68;
  v2 = this;
  if ( !(dword_681A7F68 & 1) )
  {
    dword_681A7F60 = 0;
    dword_681A7F68 |= 1u;
    dword_681A7F64 = 0;
    dword_681A7F60 = (void *)sub_67FDADA0();
    sub_6814FC51(sub_68153AD0);
    v1 = dword_681A7F68;
  }
  v3 = (Util::CoreCenter *)sub_67FEF070(&v8, &unk_6815F820);
  if ( !(v1 & 1) )
  {
    dword_681A7F60 = 0;
    dword_681A7F68 = v1 | 1;
    dword_681A7F64 = 0;
    dword_681A7F60 = (void *)sub_67FDADA0();
    sub_6814FC51(sub_68153AD0);
  }
  v7 = dword_681A7F60;
  if ( *(void **)v3 == dword_681A7F60 )
  {
    result = Util::GF::GetService(v3, (int)v2, (Util::GF *)&unk_6815F820, 0, v2) >= 0;
  }
  else
  {
    v10 = 0;
    Util::Core::GetPlatformCore((Util::Core *)&v10, v6);  //v10 为 truct _GUID， 取界面信息? 
    v4 = Util::GF::GetService(v3, (int)v2, (Util::GF *)&unk_6815F820, v10, v2) >= 0;
    v9 = &v6;
    if ( &v6 )
    {
      if ( v10 )
        (*(void (__stdcall **)(struct _GUID *))(v10->Data1 + 8))(v10);
    }
    result = v4;
  }
  return result;
}

========================================================================================================================================================================================================================================================================================================

//.text:67FF4E40
// this = unk_6815F820 大块数据
// unk_6815A5EC GUID 相关数据
signed int __usercall Util::GF::GetService@<eax>(Util::CoreCenter *a1@<edi>, int esi0@<esi>, Util::GF *this, const struct _GUID *a2, struct ITXCore *a3)
{
  int v5; // ebp@0
  int v6; // edi@6
  int v7; // eax@6
  int v8; // ecx@6
  int v9; // eax@6
  int v10; // edx@6
  int v11; // esi@6
  int v12; // edi@6
  int v13; // ecx@6
  int v14; // eax@8
  int v15; // edi@23
  LONG v16; // esi@24
  volatile LONG *v17; // eax@25
  int v19; // edi@28
  int v20; // eax@28
  int v21; // ecx@28
  int v22; // eax@28
  int v23; // edx@28
  int v24; // esi@28
  int v25; // edi@28
  int v26; // ecx@28
  int v27; // eax@30
  int (__cdecl *v28)(struct ITXCore *); // eax@45
  struct ITXCore *v29; // esi@45
  int v30; // edi@45
  void (__stdcall *v31)(const struct _GUID *, int); // esi@48
  int v32; // eax@48
  void (__stdcall ***v33)(_DWORD, _DWORD, _DWORD); // ecx@49
  LONG v34; // esi@52
  volatile LONG *v35; // eax@52
  unsigned int v36; // eax@55
  int v37; // ecx@56
  unsigned int v38; // [sp+14h] [bp-3Ch]@52
  Util::CoreCenter *v39; // [sp+18h] [bp-38h]@2
  unsigned int v40; // [sp+24h] [bp-2Ch]@49
  int v41; // [sp+28h] [bp-28h]@5
  Util::CoreCenter **v42; // [sp+2Ch] [bp-24h]@54
  int v43; // [sp+30h] [bp-20h]@8
  int v44; // [sp+34h] [bp-1Ch]@30
  int v45; // [sp+38h] [bp-18h]@6
  int v46; // [sp+3Ch] [bp-14h]@19
  int v47; // [sp+40h] [bp-10h]@20
  int v48; // [sp+44h] [bp-Ch]@28
  int v49; // [sp+48h] [bp-8h]@41
  int v50; // [sp+4Ch] [bp-4h]@42

  if ( !a3 || Util::CoreCenter::IsStopped(v39) )
    return -2147467259;
  if ( !(dword_681A85C0 & 1) )
  {
    dword_681A85C0 |= 1u;
    Util::CTXSpinLock::CTXSpinLock((Util::CTXSpinLock *)&unk_681A85C4);
    sub_6814FC51(sub_68153CF0);
  }
  Util::CTXSpinLock::Lock((Util::CTXSpinLock *)&unk_681A85C4);
  v41 = sub_67FF5140((int *)a2, (int)this, v5, a1, esi0, (int **)a3);
  if ( v41 != -2147023728 )
    goto LABEL_65;
  v6 = sub_67FF4A00();
  v7 = sub_67FF6070((int)this);
  v8 = *(_DWORD *)(v6 + 12);
  v9 = *(_DWORD *)(v6 + 24) & v7;
  v10 = *(_DWORD *)(v6 + 4);
  v45 = *(_DWORD *)(v6 + 4);
  v11 = *(_DWORD *)(v8 + 8 * v9);
  v12 = v8 + 8 * v9;
  v13 = *(_DWORD *)(v8 + 8 * v9);
  while ( 1 )
  {
    if ( v13 == v10 )
    {
      v43 = v10;
      v14 = v10;
    }
    else
    {
      v14 = **(_DWORD **)(v12 + 4);
      v43 = **(_DWORD **)(v12 + 4);
    }
    if ( v11 == v14 )
      break;
    if ( *(_DWORD *)(v11 + 8) == *(_DWORD *)this
      && *(_DWORD *)(v11 + 12) == *((_DWORD *)this + 1)
      && *(_DWORD *)(v11 + 16) == *((_DWORD *)this + 2)
      && *(_DWORD *)(v11 + 20) == *((_DWORD *)this + 3) )
    {
      if ( *((_DWORD *)this + 1) == *(_DWORD *)(v11 + 12)
        && *((_DWORD *)this + 2) == *(_DWORD *)(v11 + 16)
        && *((_DWORD *)this + 3) == *(_DWORD *)(v11 + 20) )
      {
        v46 = v11;
        goto LABEL_22;
      }
      v47 = v10;
      break;
    }
    v11 = *(_DWORD *)v11;
  }
  v11 = v10;
LABEL_22:
  if ( v11 != *(_DWORD *)(sub_67FF4A00() + 4) )
  {
    v15 = (*(int (__cdecl **)(struct ITXCore *))(v11 + 24))(a3);
    if ( v15 >= 0 )
    {
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
      {
        sub_67FF4D70();
        v17 = (volatile LONG *)sub_67FF56F0(this);
        if ( *v17 != v16 )
          sub_67FB42D0(v17, v16);
      }
    }
    Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)&unk_681A85C4);
    return v15;
  }
  v19 = sub_67FF4AA0();
  v20 = sub_67FF6070((int)this);
  v21 = *(_DWORD *)(v19 + 12);
  v22 = *(_DWORD *)(v19 + 24) & v20;
  v23 = *(_DWORD *)(v19 + 4);
  v48 = *(_DWORD *)(v19 + 4);
  v24 = *(_DWORD *)(v21 + 8 * v22);
  v25 = v21 + 8 * v22;
  v26 = *(_DWORD *)(v21 + 8 * v22);
  while ( 1 )
  {
    if ( v26 == v23 )
    {
      v44 = v23;
      v27 = v23;
    }
    else
    {
      v27 = **(_DWORD **)(v25 + 4);
      v44 = **(_DWORD **)(v25 + 4);
    }
    if ( v24 == v27 )
      break;
    if ( *(_DWORD *)(v24 + 8) == *(_DWORD *)this
      && *(_DWORD *)(v24 + 12) == *((_DWORD *)this + 1)
      && *(_DWORD *)(v24 + 16) == *((_DWORD *)this + 2)
      && *(_DWORD *)(v24 + 20) == *((_DWORD *)this + 3) )
    {
      if ( *((_DWORD *)this + 1) == *(_DWORD *)(v24 + 12)
        && *((_DWORD *)this + 2) == *(_DWORD *)(v24 + 16)
        && *((_DWORD *)this + 3) == *(_DWORD *)(v24 + 20) )
      {
        v49 = v24;
        goto LABEL_44;
      }
      v50 = v23;
      break;
    }
    v24 = *(_DWORD *)v24;
  }
  v24 = v23;
LABEL_44:
  if ( v24 == *(_DWORD *)(sub_67FF4AA0() + 4) )
  {
LABEL_65:
    Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)&unk_681A85C4);
    return v41;
  }
  v28 = *(int (__cdecl **)(struct ITXCore *))(v24 + 24);
  v29 = a3;
  v30 = v28(a3);
  if ( v30 >= 0 && *(_DWORD *)a3 )
  {
    CTXBSTR::CTXBSTR((CTXBSTR *)&v41);
    if ( a2 )
    {
      v31 = *(void (__stdcall **)(const struct _GUID *, int))(a2->Data1 + 76);
      v32 = CTXBSTR::operator&(&v41);
      v31(a2, v32);
      v29 = a3;
    }
    v33 = *(void (__stdcall ****)(_DWORD, _DWORD, _DWORD))v29;
    v40 = 0;
    if ( v33 )
    {
      (**v33)(v33, &unk_6815A5EC, &v40);
      if ( v40 )
        (*(void (__stdcall **)(unsigned int, const struct _GUID *))(*(_DWORD *)v40 + 28))(v40, a2);
    }
    v34 = *(_DWORD *)v29;
    v38 = (unsigned int)v33;
    CTXBSTR::CTXBSTR(&v38, &v41);
    sub_67FF4BE0(v38);
    v35 = (volatile LONG *)sub_67FF56F0(this);
    if ( *v35 != v34 )
      sub_67FB42D0(v35, v34);
    v42 = &v39;
    if ( &v39 )
    {
      v36 = v40;
      if ( v40 )
      {
        v37 = *(_DWORD *)v40;
        v38 = v40;
        (*(void (__stdcall **)(unsigned int))(v37 + 8))(v40);
        v36 = v40;
      }
      if ( v36 < 0x80000000 )
        v40 = v36 + 2147483648;
    }
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v41);
  }
  Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)&unk_681A85C4);
  return v30;
}

========================================================================================================================================================================================================================================================================================================
signed int __usercall sub_67FF5140@<eax>(int *a1@<edx>, int a2@<ecx>, int a3@<ebp>, Util::CoreCenter *a4@<edi>, int a5@<esi>, int **a6)
{
  int v6; // edi@1
  int v7; // ecx@5
  int v8; // edx@5
  int **v9; // eax@5
  int v10; // esi@5
  int v11; // ecx@5
  int v12; // eax@7
  int v13; // edi@22
  int v14; // eax@22
  int v15; // ecx@22
  int **v16; // esi@22
  int **v17; // edx@22
  int ****v18; // eax@22
  int **v19; // eax@24
  int *v20; // ST00_4@37
  signed int result; // eax@37
  int v22; // edi@38
  int v23; // eax@38
  int v24; // ecx@38
  int ***v25; // esi@38
  int ***v26; // edx@38
  int **v27; // eax@38
  int ***v28; // eax@40
  int v29; // ecx@53
  void (__stdcall *v30)(int *, int); // esi@54
  int v31; // eax@54
  int v32; // edi@55
  int v33; // eax@55
  int v34; // ecx@55
  int *v35; // esi@55
  int *v36; // edx@55
  int ***v37; // eax@55
  int *v38; // eax@57
  char v39; // ST00_1@69
  int *v40; // ST00_4@70
  Util::CoreCenter *v41; // [sp-18h] [bp-24h]@1
  int v42; // [sp-14h] [bp-20h]@1
  int *v43; // [sp-10h] [bp-1Ch]@1
  int ***j; // [sp-Ch] [bp-18h]@22
  int **i; // [sp-8h] [bp-14h]@5
  int v46; // [sp-4h] [bp-10h]@1
  int v47; // [sp+0h] [bp-Ch]@1
  int v48; // [sp+4h] [bp-8h]@1
  int retaddr; // [sp+Ch] [bp+0h]@1

  v47 = a3;
  v48 = retaddr;
  v42 = a5;
  v41 = a4;
  v6 = a2;
  v43 = a1;
  v46 = a2;
  if ( !a6 || Util::CoreCenter::IsStopped(v41) )
  {
    result = -2147467259;
  }
  else
  {
    if ( !(dword_681A8508 & 1) )
    {
      dword_681A8508 |= 1u;
      sub_67FF56A0(&dword_681A8510);
      sub_6814FC51(&byte_68153C80);
    }
    v7 = 8 * (dword_681A8528 & sub_67FF6070(v6));
    v8 = *(_DWORD *)(v7 + dword_681A851C);
    v9 = (int **)(v7 + dword_681A851C + 4);
    v10 = *(_DWORD *)(v7 + dword_681A851C);
    v11 = dword_681A8514;
    for ( i = v9; ; v9 = i )
    {
      if ( v8 == dword_681A8514 )
        v12 = dword_681A8514;
      else
        v12 = **v9;
      if ( v10 == v12 )
        goto LABEL_18;
      if ( *(_DWORD *)(v10 + 8) == *(_DWORD *)v6
        && *(_DWORD *)(v10 + 12) == *(_DWORD *)(v6 + 4)
        && *(_DWORD *)(v10 + 16) == *(_DWORD *)(v6 + 8)
        && *(_DWORD *)(v10 + 20) == *(_DWORD *)(v6 + 12) )
      {
        break;
      }
      v10 = *(_DWORD *)v10;
    }
    if ( *(_DWORD *)(v6 + 4) != *(_DWORD *)(v10 + 12)
      || *(_DWORD *)(v6 + 8) != *(_DWORD *)(v10 + 16)
      || *(_DWORD *)(v6 + 12) != *(_DWORD *)(v10 + 20) )
    {
LABEL_18:
      v10 = dword_681A8514;
    }
    if ( !(dword_681A8508 & 1) )
    {
      dword_681A8508 |= 1u;
      sub_67FF56A0(&dword_681A8510);
      sub_6814FC51(&byte_68153C80);
      v11 = dword_681A8514;
    }
    if ( v10 == v11 )
    {
      v22 = sub_67FF4AA0();
      v23 = *(_DWORD *)(v22 + 24) & sub_67FF6070(v46);
      v24 = *(_DWORD *)(v22 + 12);
      j = *(int ****)(v24 + 8 * v23);
      v25 = j;
      v26 = *(int ****)(v22 + 4);
      v27 = (int **)(v24 + 8 * v23 + 4);
      for ( i = v27; ; v27 = i )
      {
        if ( j == v26 )
          v28 = v26;
        else
          v28 = (int ***)**v27;
        if ( v25 == v28 )
          goto LABEL_51;
        if ( v25[2] == *(int ***)v46
          && v25[3] == *(int ***)(v46 + 4)
          && v25[4] == *(int ***)(v46 + 8)
          && v25[5] == *(int ***)(v46 + 12) )
        {
          break;
        }
        v25 = (int ***)*v25;
      }
      if ( *(int ***)(v46 + 4) != v25[3] || *(int ***)(v46 + 8) != v25[4] || *(int ***)(v46 + 12) != v25[5] )
LABEL_51:
        v25 = v26;
      if ( v25 != *(int ****)(sub_67FF4AA0() + 4) )
      {
        CTXBSTR::CTXBSTR((CTXBSTR *)&i);
        if ( v43 )
        {
          v30 = *(void (__stdcall **)(int *, int))(*v43 + 76);
          v31 = CTXBSTR::operator&(&i);
          v30(v43, v31);
        }
        v42 = v29;
        CTXBSTR::CTXBSTR(&v42, &i);
        v32 = sub_67FF4BE0((char)v41);
        v33 = *(_DWORD *)(v32 + 24) & sub_67FF6070(v46);
        v34 = *(_DWORD *)(v32 + 12);
        v43 = *(int **)(v34 + 8 * v33);
        v35 = v43;
        v36 = *(int **)(v32 + 4);
        v37 = (int ***)(v34 + 8 * v33 + 4);
        for ( j = v37; ; v37 = j )
        {
          if ( v43 == v36 )
            v38 = v36;
          else
            v38 = **v37;
          if ( v35 == v38 )
            goto LABEL_68;
          if ( v35[2] == *(_DWORD *)v46
            && v35[3] == *(_DWORD *)(v46 + 4)
            && v35[4] == *(_DWORD *)(v46 + 8)
            && v35[5] == *(_DWORD *)(v46 + 12) )
          {
            break;
          }
          v35 = (int *)*v35;
        }
        if ( *(_DWORD *)(v46 + 4) != v35[3] || *(_DWORD *)(v46 + 8) != v35[4] || *(_DWORD *)(v46 + 12) != v35[5] )
LABEL_68:
          v35 = v36;
        v41 = (Util::CoreCenter *)v46;
        CTXBSTR::CTXBSTR(&v41, &i);
        if ( v35 != *(int **)(sub_67FF4BE0(v39) + 4) )
        {
          v40 = (int *)v35[6];
          *a6 = v40;
          (*(void (__stdcall **)(int *, Util::CoreCenter *, int, int *))(*v40 + 4))(v40, v41, v42, v43);
          CTXBSTR::~CTXBSTR((CTXBSTR *)&i);
          return 0;
        }
        CTXBSTR::~CTXBSTR((CTXBSTR *)&i);
      }
    }
    else
    {
      v13 = sub_67FF4D70();
      v14 = *(_DWORD *)(v13 + 24) & sub_67FF6070(v46);
      v15 = *(_DWORD *)(v13 + 12);
      i = *(int ***)(v15 + 8 * v14);
      v16 = i;
      v17 = *(int ***)(v13 + 4);
      v18 = (int ****)(v15 + 8 * v14 + 4);
      for ( j = (int ***)v18; ; v18 = (int ****)j )
      {
        if ( i == v17 )
          v19 = v17;
        else
          v19 = **v18;
        if ( v16 == v19 )
          goto LABEL_35;
        if ( v16[2] == *(int **)v46
          && v16[3] == *(int **)(v46 + 4)
          && v16[4] == *(int **)(v46 + 8)
          && v16[5] == *(int **)(v46 + 12) )
        {
          break;
        }
        v16 = (int **)*v16;
      }
      if ( *(int **)(v46 + 4) != v16[3] || *(int **)(v46 + 8) != v16[4] || *(int **)(v46 + 12) != v16[5] )
LABEL_35:
        v16 = v17;
      if ( v16 != *(int ***)(sub_67FF4D70() + 4) )
      {
        v20 = v16[6];
        *a6 = v20;
        (*(void (__stdcall **)(int *, Util::CoreCenter *, int, int *))(*v20 + 4))(v20, v41, v42, v43);
        return 0;
      }
    }
    result = -2147023728;
  }
  return result;
}


----------------------------------------------------
int __stdcall sub_67FF6070(int a1)
{
  int v1; // esi@1
  unsigned int v2; // edi@1
  unsigned int v3; // edi@1
  unsigned int v4; // edi@1
  unsigned int v5; // edi@1
  unsigned int v6; // edi@1
  int v7; // edi@1

  v1 = *(_WORD *)(a1 + 2);
  v2 = (v1 + 32 * ((v1 - 527251831) ^ 0x4E67C6A7) + (((v1 - 527251831) ^ 0x4E67C6A7u) >> 2)) ^ (v1 - 527251831) ^ 0x4E67C6A7;
  v3 = (v1 + 32 * v2 + (v2 >> 2)) ^ v2;
  v4 = (v1 + 32 * v3 + (v3 >> 2)) ^ v3;
  v5 = (v1 + 32 * v4 + (v4 >> 2)) ^ v4;
  v6 = (v1 + 32 * v5 + (v5 >> 2)) ^ v5;
  v7 = (v1 + 32 * v6 + (v6 >> 2)) ^ v6;
  return v7 & 0x7FFFFFFF;
}


========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================



========================================================================================================================================================================================================================================================================================================


