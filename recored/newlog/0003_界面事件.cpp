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

//base 52180000  加载  gf.dll
int __thiscall sub_52242C80(HWND this, int a2, HWND a3, const struct CTXStringW **a4, const struct CTXStringW **a5, const struct CTXStringW **a6)
{
  int v6; // eax@1
  const struct CTXStringW **v7; // edx@1
  HWND v8; // esi@1
  const struct CTXStringW **v9; // ecx@1
  bool v10; // zf@6
  bool v11; // sf@6
  unsigned __int8 v12; // of@6
  HWND v13; // esi@6
  int result; // eax@11
  Util::UrlBase *v15; // eax@20
  int v16; // esi@31
  int v17; // esi@41
  int v18; // esi@43
  int v19; // esi@45
  int v20; // esi@47
  int v21; // esi@49
  int v22; // esi@59
  int v23; // ecx@61
  int v24; // ecx@67
  int (__fastcall *v25)(int, const struct CTXStringW **, int, signed int, int, int, const struct CTXStringW **); // eax@67
  struct tagRECT v26; // xmm0@72
  int v27; // edx@75
  int v28; // ST28_4@75
  int v29; // eax@77
  int v30; // eax@79
  int v31; // eax@81
  int v32; // eax@83
  int v33; // eax@85
  int v34; // eax@87
  int v35; // eax@89
  int v36; // eax@91
  int v37; // eax@93
  int v38; // eax@95
  int *v39; // esi@95
  int v40; // edi@95
  int v41; // edx@96
  int v42; // ecx@98
  int v43; // edx@98
  int v44; // eax@99
  int v45; // edx@102
  struct tagRECT v46; // [sp+2Ch] [bp-D0h]@75
  int v47; // [sp+30h] [bp-CCh]@67
  int v48; // [sp+34h] [bp-C8h]@67
  const struct CTXStringW **v49; // [sp+38h] [bp-C4h]@67
  const struct CTXStringW *v50; // [sp+3Ch] [bp-C0h]@20
  int v51; // [sp+48h] [bp-B4h]@1
  const struct CTXStringW **v52; // [sp+4Ch] [bp-B0h]@1
  const struct CTXStringW **v53; // [sp+50h] [bp-ACh]@1
  int v54; // [sp+54h] [bp-A8h]@6
  int v55; // [sp+58h] [bp-A4h]@20
  const struct CTXStringW **v56; // [sp+5Ch] [bp-A0h]@1
  HWND v57; // [sp+60h] [bp-9Ch]@1
  HWND v58; // [sp+64h] [bp-98h]@1
  int v59; // [sp+68h] [bp-94h]@1
  HWND hWnd; // [sp+6Ch] [bp-90h]@10
  HWND v61; // [sp+70h] [bp-8Ch]@13
  HWND v62; // [sp+74h] [bp-88h]@16
  HWND v63; // [sp+78h] [bp-84h]@26
  int v64; // [sp+7Ch] [bp-80h]@28
  HWND v65; // [sp+80h] [bp-7Ch]@30
  struct tagPOINT Point; // [sp+84h] [bp-78h]@10
  struct tagPOINT v67; // [sp+8Ch] [bp-70h]@13
  struct tagPOINT v68; // [sp+94h] [bp-68h]@16
  struct tagPOINT v69; // [sp+9Ch] [bp-60h]@23
  struct tagPOINT v70; // [sp+A4h] [bp-58h]@26
  struct tagPOINT v71[2]; // [sp+ACh] [bp-50h]@30
  struct tagRECT rc; // [sp+BCh] [bp-40h]@72
  struct tagRECT v73; // [sp+CCh] [bp-30h]@74
  struct tagRECT v74; // [sp+DCh] [bp-20h]@95

  v6 = a2;
  v7 = a5;
  v8 = this;
  v51 = a2;
  v9 = a4;
  v10 = *((_DWORD *)v8 + 1) == 0;
  v58 = a3;
  v52 = a6;
  v57 = v8;
  v56 = a4;
  v53 = a5;
  v59 = 0;
  if ( !v10 )
  {
    (***((void (__stdcall ****)(_DWORD, _DWORD, _DWORD))v8 + 1))(*((_DWORD *)v8 + 1), &unk_5232F180, &v59);
    if ( v59 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v59 + 8))(v59);
    v6 = v51;
    v9 = v56;
    v7 = v53;
  }
  if ( v6 != v59 )
    return sub_521C9120(v6, a3, v9, v7, v52);
  v12 = __OFSUB__(*(_DWORD *)a3, 901);
  v10 = *(_DWORD *)a3 == 901;
  v11 = *(_DWORD *)a3 - 901 < 0;
  v54 = *(_DWORD *)a3;
  v13 = v57;
  if ( !((unsigned __int8)(v11 ^ v12) | v10) )
  {
    if ( *(_DWORD *)a3 > 1003 )
    {
      v6 = v54;
      switch ( v54 )
      {
        case 1101:
          sub_521C9120(v51, a3, v9, v7, v52);
          if ( !*((_DWORD *)v57 + 93) )
            return 0;
          rc = 0i64;
          sub_521D4210(&rc);
          v26 = rc;
          goto LABEL_75;
        case 1102:
          sub_521C9120(v51, a3, v9, v7, v52);
          if ( !*((_DWORD *)v57 + 93) )
            return 0;
          v73 = 0i64;
          sub_521D4210(&v73);
          v26 = v73;
LABEL_75:
          v27 = **((_DWORD **)v57 + 93);
          v28 = *((_DWORD *)v57 + 93);
          v46 = v26;
          (*(void (__stdcall **)(int, LONG, int, LONG, LONG))(v27 + 44))(v28, v26.left, v47, v26.right, v26.bottom);
          return 0;
        case 1201:
          v29 = *((_DWORD *)v57 + 94);
          v55 = v29;
          if ( !v29 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v29 + 36))(
                   v55,
                   641,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1202:
          v30 = *((_DWORD *)v57 + 94);
          v55 = v30;
          if ( !v30 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v30 + 36))(
                   v55,
                   642,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1203:
          v31 = *((_DWORD *)v57 + 94);
          v55 = v31;
          if ( !v31 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v31 + 36))(
                   v55,
                   643,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1204:
          v32 = *((_DWORD *)v57 + 94);
          v55 = v32;
          if ( !v32 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v32 + 36))(
                   v55,
                   644,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1205:
          v33 = *((_DWORD *)v57 + 94);
          v55 = v33;
          if ( !v33 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v33 + 36))(
                   v55,
                   645,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1206:
          v34 = *((_DWORD *)v57 + 94);
          v55 = v34;
          if ( !v34 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v34 + 36))(
                   v55,
                   646,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1207:
          v35 = *((_DWORD *)v57 + 94);
          v55 = v35;
          if ( !v35 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v35 + 36))(
                   v55,
                   648,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1208:
          v36 = *((_DWORD *)v57 + 94);
          v55 = v36;
          if ( !v36 )
            goto LABEL_52;
          return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v36 + 36))(
                   v55,
                   656,
                   *((_DWORD *)a3 + 5),
                   *((_DWORD *)a3 + 6),
                   v7);
        case 1209:
          v37 = *((_DWORD *)v57 + 94);
          v55 = v37;
          if ( v37 )
            result = (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v37 + 36))(
                       v55,
                       657,
                       *((_DWORD *)a3 + 5),
                       *((_DWORD *)a3 + 6),
                       v7);
          else
LABEL_52:
            result = sub_521C9120(v51, a3, v9, v7, v52);
          return result;
        case 1109:
          v74 = 0i64;
          sub_521D4210(&v74);
          v38 = sub_521C9120(v51, a3, v56, v53, v52);
          v39 = (int *)*((_DWORD *)v57 + 93);
          v40 = v38;
          if ( v39 )
          {
            v41 = *v39;
            v46 = v74;
            (*(void (__stdcall **)(int *, LONG, int, LONG, LONG))(v41 + 44))(v39, v74.left, v47, v74.right, v74.bottom);
          }
          return v40;
        case 1110:
          v42 = *((_DWORD *)v57 + 93);
          v43 = *((_DWORD *)a3 + 5);
          v55 = *((_DWORD *)a3 + 5);
          if ( !v42 )
            return sub_521C9120(v51, a3, v56, v53, v52);
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v42 + 52))(v42, v43);
          v44 = v55 == 0;
          goto LABEL_100;
        case 1108:
          v45 = *((_DWORD *)v57 + 93);
          v57 = (HWND)*((_DWORD *)a3 + 5);
          if ( v45 )
          {
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v45 + 52))(v45, v57 == 0);
            v44 = v57 != 0;
LABEL_100:
            (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v13 + 93) + 56))(*((_DWORD *)v13 + 93), v44);
          }
          return sub_521C9120(v51, a3, v56, v53, v52);
        case 1103:
        case 1104:
        case 1105:
        case 1106:
        case 1107:
        case 1111:
        case 1112:
        case 1113:
        case 1114:
        case 1115:
        case 1116:
        case 1117:
        case 1118:
        case 1119:
        case 1120:
        case 1121:
        case 1122:
        case 1123:
        case 1124:
        case 1125:
        case 1126:
        case 1127:
        case 1128:
        case 1129:
        case 1130:
        case 1131:
        case 1132:
        case 1133:
        case 1134:
        case 1135:
        case 1136:
        case 1137:
        case 1138:
        case 1139:
        case 1140:
        case 1141:
        case 1142:
        case 1143:
        case 1144:
        case 1145:
        case 1146:
        case 1147:
        case 1148:
        case 1149:
        case 1150:
        case 1151:
        case 1152:
        case 1153:
        case 1154:
        case 1155:
        case 1156:
        case 1157:
        case 1158:
        case 1159:
        case 1160:
        case 1161:
        case 1162:
        case 1163:
        case 1164:
        case 1165:
        case 1166:
        case 1167:
        case 1168:
        case 1169:
        case 1170:
        case 1171:
        case 1172:
        case 1173:
        case 1174:
        case 1175:
        case 1176:
        case 1177:
        case 1178:
        case 1179:
        case 1180:
        case 1181:
        case 1182:
        case 1183:
        case 1184:
        case 1185:
        case 1186:
        case 1187:
        case 1188:
        case 1189:
        case 1190:
        case 1191:
        case 1192:
        case 1193:
        case 1194:
        case 1195:
        case 1196:
        case 1197:
        case 1198:
        case 1199:
        case 1200:
LABEL_104:
          v6 = v51;
          return sub_521C9120(v6, a3, v9, v7, v52);
        default:
          return sub_521C9120(v6, a3, v9, v7, v52);
      }
    }
    else if ( *(_DWORD *)a3 == 1003 )
    {
      v7 = v53;
      if ( *((_DWORD *)v57 + 94) )
      {
        v10 = *((_DWORD *)a3 + 5) == 0;
        v24 = *((_DWORD *)v57 + 94);
        v49 = v53;
        v48 = 0;
        v47 = 0;
        v25 = *(int (__fastcall **)(int, const struct CTXStringW **, int, signed int, int, int, const struct CTXStringW **))(*(_DWORD *)v24 + 36);
        if ( v10 )
          result = v25(v24, v53, v24, 8, v47, v48, v49);
        else
          result = v25(v24, v53, v24, 7, v47, v48, v49);
        return result;
      }
    }
    else
    {
      v54 -= 922;
      if ( !v54 )
        return 0;
      if ( !--v54 )
        return 0;
      if ( !--v54 )
      {
        v22 = *((_DWORD *)v57 + 18);
        if ( v22 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 4))(v22);
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v22 + 608))(v22, &v51);
          if ( v51 )
          {
            v23 = *((_DWORD *)v57 + 93);
            if ( v23 )
              (*(void (__stdcall **)(int, int))(*(_DWORD *)v23 + 40))(v23, v51);
          }
        }
        v52 = &v50;
        if ( &v50 && v22 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          return 0;
        }
        return 0;
      }
    }
    return sub_521C9120(v6, a3, v9, v7, v52);
  }
  if ( v10 )
  {
    result = sub_52243A60(v6, a3, v9, v7, v52);
  }
  else
  {
    v6 = v54;
    switch ( v54 )
    {
      case 101:
        if ( !*((_DWORD *)v57 + 94) )
          goto LABEL_21;
        *v9 = (const struct CTXStringW *)1;
        LODWORD(Point.x) = (HWND__)*(_DWORD *)(a3 + 5);
        Point.y = *(_DWORD *)(a3 + 6);
        hWnd = 0;
        if ( sub_521D4850(&hWnd) < 0 )
          goto LABEL_21;
        ScreenToClient(hWnd, &Point);
        return (*(int (__stdcall **)(_DWORD, signed int, _DWORD, int, const struct CTXStringW **))(**((_DWORD **)v13 + 94)
                                                                                                 + 36))(
                 *((_DWORD *)v13 + 94),
                 512,
                 *((_DWORD *)a3 + 7),
                 LOWORD(Point.x) | (LOWORD(Point.y) << 16),
                 v53);
      case 105:
        if ( !*((_DWORD *)v57 + 94) )
          goto LABEL_21;
        *v9 = 0;
        LODWORD(v67.x) = (HWND__)*(_DWORD *)(a3 + 5);
        v67.y = *(_DWORD *)(a3 + 6);
        v61 = 0;
        if ( sub_521D4850(&v61) < 0 )
          goto LABEL_21;
        ScreenToClient(v61, &v67);
        return (*(int (__stdcall **)(_DWORD, signed int, _DWORD, int, const struct CTXStringW **))(**((_DWORD **)v13 + 94)
                                                                                                 + 36))(
                 *((_DWORD *)v13 + 94),
                 513,
                 *((_DWORD *)a3 + 8),
                 LOWORD(v67.x) | (LOWORD(v67.y) << 16),
                 v53);
      case 106:
        if ( !*((_DWORD *)v57 + 94) )
          goto LABEL_21;
        *v9 = (const struct CTXStringW *)1;
        LODWORD(v68.x) = (HWND__)*(_DWORD *)(a3 + 5);
        v68.y = *(_DWORD *)(a3 + 6);
        v62 = 0;
        if ( sub_521D4850(&v62) < 0 )
          goto LABEL_21;
        ScreenToClient(v62, &v68);
        return (*(int (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD))(**((_DWORD **)v13 + 94) + 36))(
                 *((_DWORD *)v13 + 94),
                 514,
                 *((_DWORD *)a3 + 7),
                 LOWORD(v68.x) | (LOWORD(v68.y) << 16),
                 v53);
      case 109:
        if ( !*((_DWORD *)v57 + 93) && CTXBSTR::Length((CTXBSTR *)(v57 + 103)) )
        {
          v15 = (Util::UrlBase *)CTXStringW::CTXStringW((CTXStringW *)&v55, (const struct CTXBSTR *)(v57 + 103));
          Util::UrlBase::OpenUrlWithDefBrowser(v15, v50);
          CTXStringW::~CTXStringW((CTXStringW *)&v55);
        }
        goto LABEL_21;
      case 113:
        if ( !*((_DWORD *)v57 + 94) )
          goto LABEL_21;
        *v9 = (const struct CTXStringW *)1;
        LODWORD(v69.x) = (HWND__)*(_DWORD *)(a3 + 5);
        v69.y = *(_DWORD *)(a3 + 6);
        v58 = 0;
        if ( sub_521D4850(&v58) < 0 )
          goto LABEL_21;
        ScreenToClient(v58, &v69);
        return (*(int (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD))(**((_DWORD **)v13 + 94) + 36))(
                 *((_DWORD *)v13 + 94),
                 515,
                 *((_DWORD *)a3 + 7),
                 LOWORD(v69.x) | (LOWORD(v69.y) << 16),
                 v53);
      case 104:
        if ( *((_DWORD *)v57 + 94)
          && (*v9 = (const struct CTXStringW *)1,
              LODWORD(v70.x) = (HWND__)*(_DWORD *)(a3 + 5),
              v70.y = *(_DWORD *)(a3 + 6),
              v63 = 0,
              sub_521D4850(&v63) >= 0) )
        {
          ScreenToClient(v63, &v70);
          result = (*(int (__stdcall **)(_DWORD, signed int, int, int, const struct CTXStringW **))(**((_DWORD **)v13 + 94)
                                                                                                  + 36))(
                     *((_DWORD *)v13 + 94),
                     522,
                     *((_WORD *)v58 + 16) | (*((_WORD *)v58 + 14) << 16),
                     LOWORD(v70.x) | (LOWORD(v70.y) << 16),
                     v53);
        }
        else
        {
LABEL_21:
          result = sub_521C9120(v51, a3, v56, v53, v52);
        }
        return result;
      case 107:
        v54 = 0;
        Util::Data::CreateTXData((Util::Data *)&v54, (struct ITXData **)v50);
        (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v54 + 240))(v54, "bHandled", 1);
        (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v54 + 288))(v54, "nX", *((_DWORD *)a3 + 5));
        (*(void (__stdcall **)(int, void *, _DWORD))(*(_DWORD *)v54 + 288))(v54, &unk_52327B40, *((_DWORD *)a3 + 6));
        sub_522D9460(1, v54);
        v64 = 1;
        (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v54 + 32))(v54, "bHandled", &v64);
        if ( *((_DWORD *)v13 + 94)
          && v64
          && (v65 = 0,
              *v56 = (const struct CTXStringW *)1,
              LODWORD(v71[0].x) = (HWND__)*(_DWORD *)(a3 + 5),
              v71[0].y = *(_DWORD *)(a3 + 6),
              sub_521D4850(&v65) >= 0) )
        {
          ScreenToClient(v65, v71);
          v16 = (*(int (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD))(**((_DWORD **)v13 + 94) + 36))(
                  *((_DWORD *)v13 + 94),
                  516,
                  *((_DWORD *)a3 + 8),
                  LOWORD(v71[0].x) | (LOWORD(v71[0].y) << 16),
                  v53);
          v56 = &v50;
          if ( &v50 && v54 )
          {
            (*(void (__stdcall **)(int))(*(_DWORD *)v54 + 8))(v54);
            return v16;
          }
        }
        else
        {
          v16 = sub_521C9120(v51, a3, v56, v53, v52);
          v53 = &v50;
          if ( &v50 && v54 )
            (*(void (__stdcall **)(int))(*(_DWORD *)v54 + 8))(v54);
        }
        result = v16;
        break;
      case 108:
        if ( !*((_DWORD *)v57 + 94) )
          return sub_521C9120(v51, a3, v56, v53, v52);
        *v9 = (const struct CTXStringW *)1;
        v71[1].x = *(_DWORD *)(a3 + 5);
        v71[1].y = *(_DWORD *)(a3 + 6);
        v57 = 0;
        if ( sub_521D4850(&v57) < 0 )
          return sub_521C9120(v51, a3, v56, v53, v52);
        ScreenToClient(v57, &v71[1]);
        return (*(int (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD))(**((_DWORD **)v13 + 94) + 36))(
                 *((_DWORD *)v13 + 94),
                 517,
                 *((_DWORD *)a3 + 7),
                 LOWORD(v71[1].x) | (LOWORD(v71[1].y) << 16),
                 v53);
      case 203:
        v17 = *((_DWORD *)v57 + 94);
        if ( !v17 )
          return 0;
        return (*(int (__stdcall **)(int, signed int, _DWORD, int, const struct CTXStringW **))(*(_DWORD *)v17 + 36))(
                 v17,
                 256,
                 *((_DWORD *)a3 + 5),
                 *((_WORD *)a3 + 14) | (*((_WORD *)a3 + 16) << 16),
                 v53);
      case 204:
        v18 = *((_DWORD *)v57 + 94);
        if ( !v18 )
          return 0;
        return (*(int (__stdcall **)(int, signed int, _DWORD, int, const struct CTXStringW **))(*(_DWORD *)v18 + 36))(
                 v18,
                 257,
                 *((_DWORD *)a3 + 5),
                 *((_WORD *)a3 + 14) | (*((_WORD *)a3 + 16) << 16),
                 v53);
      case 201:
        v19 = *((_DWORD *)v57 + 94);
        if ( !v19 )
          return 0;
        return (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, const struct CTXStringW **))(*(_DWORD *)v19 + 36))(
                 v19,
                 258,
                 *((_WORD *)a3 + 10),
                 *((_DWORD *)a3 + 6),
                 v7);
      case 205:
        v20 = *((_DWORD *)v57 + 94);
        if ( !v20 )
          return 0;
        return (*(int (__stdcall **)(int, signed int, _DWORD, int, const struct CTXStringW **))(*(_DWORD *)v20 + 36))(
                 v20,
                 260,
                 *((_DWORD *)a3 + 5),
                 *((_WORD *)a3 + 14) | (*((_WORD *)a3 + 16) << 16),
                 v53);
      case 206:
        v21 = *((_DWORD *)v57 + 94);
        if ( !v21 )
          return 0;
        return (*(int (__stdcall **)(int, signed int, _DWORD, int, const struct CTXStringW **))(*(_DWORD *)v21 + 36))(
                 v21,
                 261,
                 *((_DWORD *)a3 + 5),
                 *((_WORD *)a3 + 14) | (*((_WORD *)a3 + 16) << 16),
                 v53);
      case 111:
        *v9 = (const struct CTXStringW *)1;
        goto LABEL_52;
      case 102:
      case 103:
      case 110:
      case 112:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 135:
      case 136:
      case 137:
      case 138:
      case 139:
      case 140:
      case 141:
      case 142:
      case 143:
      case 144:
      case 145:
      case 146:
      case 147:
      case 148:
      case 149:
      case 150:
      case 151:
      case 152:
      case 153:
      case 154:
      case 155:
      case 156:
      case 157:
      case 158:
      case 159:
      case 160:
      case 161:
      case 162:
      case 163:
      case 164:
      case 165:
      case 166:
      case 167:
      case 168:
      case 169:
      case 170:
      case 171:
      case 172:
      case 173:
      case 174:
      case 175:
      case 176:
      case 177:
      case 178:
      case 179:
      case 180:
      case 181:
      case 182:
      case 183:
      case 184:
      case 185:
      case 186:
      case 187:
      case 188:
      case 189:
      case 190:
      case 191:
      case 192:
      case 193:
      case 194:
      case 195:
      case 196:
      case 197:
      case 198:
      case 199:
      case 200:
      case 202:
        goto LABEL_104;
      default:
        return sub_521C9120(v6, a3, v9, v7, v52);
    }
  }
  return result;
}
========================================================================================================================================================================================================================================================================================================

//base 52180000  加载  gf.dll
signed int __thiscall sub_5220A240(int this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  signed int *v6; // esi@1
  int v7; // edi@1
  int v8; // eax@1
  int v9; // ecx@4
  int v10; // esi@5
  signed int v11; // eax@6
  signed int result; // eax@11
  int v13; // ecx@15
  int v14; // esi@16
  signed int v15; // eax@17
  int v16; // eax@22
  int v17; // eax@25
  unsigned int v18; // esi@27
  int v19; // eax@30
  int v20; // edx@30
  signed int v21; // eax@31
  int v22; // eax@38
  int (__thiscall *v23)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@38
  int v24; // eax@39
  int v25; // eax@42
  int v26; // eax@43
  LONG v27; // edx@43
  LONG v28; // ecx@43
  int v29; // eax@46
  int v30; // eax@47
  int (__thiscall *v31)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@47
  int v32; // eax@48
  int v33; // eax@51
  int (__thiscall *v34)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@51
  int v35; // eax@52
  int v36; // eax@54
  int v37; // esi@54
  int v38; // eax@60
  int v39; // eax@61
  int v40; // eax@62
  int (__thiscall *v41)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@62
  int v42; // eax@63
  int v43; // eax@67
  int (__thiscall *v44)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@67
  int v45; // eax@68
  int v46; // eax@71
  int (__thiscall *v47)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@71
  int v48; // eax@72
  SHORT v49; // ax@75
  bool v50; // zf@78
  int v51; // eax@79
  int v52; // eax@81
  int v53; // ecx@85
  int v54; // eax@85
  signed int v55; // esi@85
  int v56; // ecx@89
  int v57; // eax@96
  int v58; // esi@96
  int v59; // ecx@100
  int v60; // edi@104
  int v61; // edi@106
  int v62; // eax@108
  int v63; // eax@109
  int (__thiscall *v64)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *); // eax@109
  _DWORD *v65; // eax@110
  int v66; // ecx@110
  int v67; // ecx@114
  int v68; // esi@122
  unsigned int v69; // eax@123
  unsigned int v70; // eax@131
  int v71; // eax@136
  unsigned int v72; // eax@141
  int v73; // eax@146
  int v74; // eax@155
  int v75; // eax@155
  int v76; // eax@155
  int v77; // ecx@158
  unsigned int v78; // eax@168
  unsigned int v79; // eax@176
  unsigned int v80; // eax@183
  int v81; // ecx@189
  unsigned int v82; // eax@199
  unsigned int v83; // eax@207
  unsigned int v84; // eax@214
  int v85; // ecx@220
  int v86; // eax@229
  unsigned int v87; // eax@230
  unsigned int v88; // eax@238
  unsigned int v89; // eax@245
  int v90; // eax@251
  int v91; // ecx@251
  _DWORD *v92; // ST38_4@263
  _DWORD *v93; // ST38_4@264
  _DWORD *v94; // ST34_4@264
  int v95; // ecx@264
  _DWORD *v96; // ST30_4@264
  _DWORD *v97; // ST38_4@265
  _DWORD *v98; // ST38_4@267
  _DWORD *v99; // ST38_4@269
  _DWORD *v100; // ST38_4@271
  _DWORD *v101; // ST38_4@273
  _DWORD *v102; // ST38_4@275
  _DWORD *v103; // ST38_4@277
  _DWORD *v104; // ST38_4@279
  _DWORD *v105; // ST38_4@281
  _DWORD *v106; // ST38_4@283
  _DWORD *v107; // ST38_4@285
  int v108; // ecx@287
  int v109; // ecx@290
  _DWORD *v110; // [sp+38h] [bp-23Ch]@36
  struct ITXData **v111; // [sp+3Ch] [bp-238h]@8
  _DWORD *v112; // [sp+44h] [bp-230h]@1
  _DWORD *v113; // [sp+48h] [bp-22Ch]@1
  _DWORD *v114; // [sp+4Ch] [bp-228h]@1
  int v115; // [sp+50h] [bp-224h]@1
  unsigned int v116; // [sp+54h] [bp-220h]@118
  unsigned int v117; // [sp+58h] [bp-21Ch]@162
  unsigned int v118; // [sp+5Ch] [bp-218h]@193
  unsigned int v119; // [sp+60h] [bp-214h]@224
  int v120; // [sp+64h] [bp-210h]@75
  int v121; // [sp+68h] [bp-20Ch]@93
  signed int *v122; // [sp+6Ch] [bp-208h]@1
  int v123; // [sp+70h] [bp-204h]@118
  int v124; // [sp+74h] [bp-200h]@162
  int v125; // [sp+78h] [bp-1FCh]@193
  int v126; // [sp+7Ch] [bp-1F8h]@224
  int v127; // [sp+80h] [bp-1F4h]@54
  int v128; // [sp+84h] [bp-1F0h]@85
  struct tagPOINT Point; // [sp+88h] [bp-1ECh]@37
  struct tagPOINT v130; // [sp+90h] [bp-1E4h]@46
  struct tagPOINT v131; // [sp+98h] [bp-1DCh]@50
  struct tagPOINT v132; // [sp+A0h] [bp-1D4h]@61
  struct tagPOINT v133; // [sp+A8h] [bp-1CCh]@66
  struct tagPOINT v134; // [sp+B0h] [bp-1C4h]@70
  struct tagPOINT v135; // [sp+B8h] [bp-1BCh]@108
  int v136; // [sp+C0h] [bp-1B4h]@75
  struct tagPOINT v137; // [sp+C4h] [bp-1B0h]@42
  int v138; // [sp+CCh] [bp-1A8h]@155
  struct tagPOINT v139; // [sp+D0h] [bp-1A4h]@59
  struct ITXData ***v140; // [sp+D8h] [bp-19Ch]@55
  HWND v141; // [sp+DCh] [bp-198h]@59
  HWND v142; // [sp+E0h] [bp-194h]@61
  HWND v143; // [sp+E4h] [bp-190h]@66
  HWND v144; // [sp+E8h] [bp-18Ch]@70
  struct ITXData ***v145; // [sp+ECh] [bp-188h]@78
  struct ITXData ***v146; // [sp+F0h] [bp-184h]@79
  int v147; // [sp+F4h] [bp-180h]@88
  struct ITXData ***v148; // [sp+F8h] [bp-17Ch]@91
  int v149; // [sp+FCh] [bp-178h]@93
  struct ITXData ***v150; // [sp+100h] [bp-174h]@94
  int v151; // [sp+104h] [bp-170h]@99
  struct ITXData ***v152; // [sp+108h] [bp-16Ch]@102
  HWND v153; // [sp+10Ch] [bp-168h]@108
  int v154; // [sp+110h] [bp-164h]@115
  struct ITXData ***v155; // [sp+114h] [bp-160h]@122
  struct ITXData ***v156; // [sp+118h] [bp-15Ch]@127
  struct ITXData ***v157; // [sp+11Ch] [bp-158h]@130
  struct ITXData ***v158; // [sp+120h] [bp-154h]@135
  struct ITXData ***v159; // [sp+124h] [bp-150h]@140
  struct ITXData ***v160; // [sp+128h] [bp-14Ch]@145
  int v161; // [sp+12Ch] [bp-148h]@159
  struct ITXData ***v162; // [sp+130h] [bp-144h]@167
  struct ITXData ***v163; // [sp+134h] [bp-140h]@172
  struct ITXData ***v164; // [sp+138h] [bp-13Ch]@175
  struct ITXData ***v165; // [sp+13Ch] [bp-138h]@180
  struct ITXData ***v166; // [sp+140h] [bp-134h]@182
  struct ITXData ***v167; // [sp+144h] [bp-130h]@187
  int v168; // [sp+148h] [bp-12Ch]@190
  struct ITXData ***v169; // [sp+14Ch] [bp-128h]@198
  struct ITXData ***v170; // [sp+150h] [bp-124h]@203
  struct ITXData ***v171; // [sp+154h] [bp-120h]@206
  struct ITXData ***v172; // [sp+158h] [bp-11Ch]@211
  struct ITXData ***v173; // [sp+15Ch] [bp-118h]@213
  struct ITXData ***v174; // [sp+160h] [bp-114h]@218
  int v175; // [sp+164h] [bp-110h]@221
  struct ITXData ***v176; // [sp+168h] [bp-10Ch]@229
  struct ITXData ***v177; // [sp+16Ch] [bp-108h]@234
  struct ITXData ***v178; // [sp+170h] [bp-104h]@237
  struct ITXData ***v179; // [sp+174h] [bp-100h]@242
  struct ITXData ***v180; // [sp+178h] [bp-FCh]@244
  struct ITXData ***v181; // [sp+17Ch] [bp-F8h]@249
  struct ITXData ***v182; // [sp+180h] [bp-F4h]@8
  struct ITXData ***v183; // [sp+184h] [bp-F0h]@10
  struct ITXData ***v184; // [sp+188h] [bp-ECh]@19
  struct ITXData ***v185; // [sp+18Ch] [bp-E8h]@21
  struct ITXData ***v186; // [sp+190h] [bp-E4h]@26
  unsigned int v187; // [sp+194h] [bp-E0h]@25
  struct ITXData ***v188; // [sp+198h] [bp-DCh]@34
  HWND hWnd; // [sp+19Ch] [bp-D8h]@37
  HWND v190; // [sp+1A0h] [bp-D4h]@42
  HWND v191; // [sp+1A4h] [bp-D0h]@46
  HWND v192; // [sp+1A8h] [bp-CCh]@50
  int v193; // [sp+1ACh] [bp-C8h]@16
  int v194; // [sp+1B0h] [bp-C4h]@54
  int v195; // [sp+1B4h] [bp-C0h]@5
  __int128 v196; // [sp+1B8h] [bp-BCh]@6
  int v197; // [sp+1C8h] [bp-ACh]@155
  int v198; // [sp+1CCh] [bp-A8h]@155
  __int128 v199; // [sp+1D0h] [bp-A4h]@155
  __int128 v200; // [sp+1E0h] [bp-94h]@38
  _BYTE v201[32]; // [sp+1F0h] [bp-84h]@43
  _BYTE v202[32]; // [sp+210h] [bp-64h]@51
  _BYTE v203[32]; // [sp+230h] [bp-44h]@62
  _BYTE v204[32]; // [sp+250h] [bp-24h]@71

  v6 = a3;
  v7 = this;
  v113 = a4;
  v112 = a5;
  v114 = a6;
  v8 = *a3;
  v115 = a2;
  v122 = a3;
  if ( a2 == *(_DWORD *)(this + 532) )
  {
    if ( v8 == 109 || v8 == 1001 )
    {
      v9 = *(_DWORD *)(this + 472);
      if ( v9 )
      {
        (*(void (__stdcall **)(int, signed int))(*(_DWORD *)v9 + 168))(v9, 1);
        v10 = *(_DWORD *)(v7 + 472);
        v195 = v10;
        if ( v10 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10);
          v11 = dword_52377AC8;
          v50 = *(_DWORD *)(v7 + 576) == 0;
          DWORD1(v196) = 0;
          if ( v50 )
            v11 = 1;
          dword_52377AC8 = v11;
          (*(void (__stdcall **)(int, signed int, signed int, _DWORD, char *))(*(_DWORD *)v10 + 32))(
            v10,
            277,
            7,
            0,
            (char *)&v196 + 4);
          dword_52377AC8 = 0;
          v182 = &v111;
          if ( &v111 )
            (*(void (__stdcall **)(int))(*(_DWORD *)v195 + 8))(v195);
        }
        else
        {
          v183 = &v111;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 472) + 168))(*(_DWORD *)(v7 + 472), 0);
        *(_DWORD *)(v7 + 564) = 1;
        sub_52208330(v7);
        return 0;
      }
    }
    return 0;
  }
  if ( a2 == *(_DWORD *)(this + 528) )
  {
    if ( v8 == 109 || v8 == 1001 )
    {
      v13 = *(_DWORD *)(this + 472);
      if ( v13 )
      {
        (*(void (__stdcall **)(int, signed int))(*(_DWORD *)v13 + 168))(v13, 1);
        v14 = *(_DWORD *)(v7 + 472);
        v193 = v14;
        if ( v14 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 4))(v14);
          v15 = dword_52377AC8;
          v50 = *(_DWORD *)(v7 + 576) == 0;
          LODWORD(v196) = 0;
          if ( v50 )
            v15 = 1;
          dword_52377AC8 = v15;
          (*(void (__stdcall **)(int, signed int, signed int, _DWORD, __int128 *))(*(_DWORD *)v14 + 32))(
            v14,
            277,
            6,
            0,
            &v196);
          dword_52377AC8 = 0;
          v184 = &v111;
          if ( &v111 )
            (*(void (__stdcall **)(int))(*(_DWORD *)v193 + 8))(v193);
        }
        else
        {
          v185 = &v111;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 472) + 168))(*(_DWORD *)(v7 + 472), 0);
        v16 = sub_52208FE0(v7);
        *(_DWORD *)(v7 + 564) = v16 == 0;
        if ( !v16 )
        {
          sub_52208330(v7);
          return 0;
        }
      }
    }
    return 0;
  }
  if ( v8 == 1302 )
  {
    v17 = *(_DWORD *)(this + 472);
    v187 = v17;
    if ( !v17 )
    {
      v188 = &v111;
      return -2147467262;
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v17 + 4))(v17);
    sub_52206880(770, 0, 0, 0);
    v186 = &v111;
    if ( &v111 )
    {
      v18 = v187;
      (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v187 + 8))(v187);
      if ( v18 < 0x80000000 )
        v187 = v18 + 2147483648;
      v6 = v122;
    }
  }
  v19 = sub_521CD170(v7);
  v20 = v115;
  if ( v115 != v19 )
    goto LABEL_257;
  v21 = *v6;
  if ( *v6 <= 701 )
  {
    if ( *v6 != 701 )
    {
      switch ( v21 )
      {
        case 102:
          v110 = v114;
          return sub_521C9120(v20, v6, v113, v112, v110);
        case 101:
          hWnd = 0;
          *v113 = 1;
          Point.x = v6[5];
          Point.y = v6[6];
          if ( (*(int (__thiscall **)(int, HWND *))(*(_DWORD *)v7 + 456))(v7, &hWnd) < 0 )
            goto LABEL_41;
          ScreenToClient(hWnd, &Point);
          v22 = *(_DWORD *)v7;
          v200 = 0i64;
          (*(void (__thiscall **)(int, __int128 *))(v22 + 444))(v7, &v200);
          v23 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          Point.y -= DWORD1(v200);
          Point.x -= v200;
          if ( (unsigned __int8)v23(v7, Point.x, Point.y, v6, v113, v112) )
            return 0;
          v24 = *(_DWORD *)(v7 + 472);
          if ( v24 )
            (*(void (__stdcall **)(_DWORD, signed int, int, _DWORD *))(*(_DWORD *)v24 + 60))(
              *(_DWORD *)(v7 + 472),
              v6[7],
              LOWORD(Point.x) | (LOWORD(Point.y) << 16),
              v112);
          goto LABEL_41;
        case 103:
          v137.x = 0;
          v137.y = 0;
          GetCursorPos(&v137);
          v25 = *(_DWORD *)v7;
          v190 = 0;
          if ( (*(int (__thiscall **)(int, HWND *))(v25 + 456))(v7, &v190) < 0 )
            goto LABEL_41;
          ScreenToClient(v190, &v137);
          v26 = *(_DWORD *)v7;
          *(_OWORD *)v201 = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v26 + 444))(v7, v201);
          v27 = v137.x - *(_DWORD *)v201;
          v28 = v137.y - *(_DWORD *)&v201[4];
          v137.x -= *(_DWORD *)v201;
          v137.y -= *(_DWORD *)&v201[4];
          goto LABEL_44;
        case 105:
          *v113 = 0;
          sub_522D9460(449, 0);
          v130.x = v6[5];
          v130.y = v6[6];
          v29 = *(_DWORD *)v7;
          v191 = 0;
          if ( (*(int (__thiscall **)(int, HWND *))(v29 + 456))(v7, &v191) < 0 )
            goto LABEL_41;
          ScreenToClient(v191, &v130);
          v30 = *(_DWORD *)v7;
          *(_OWORD *)&v201[16] = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v30 + 444))(v7, &v201[16]);
          v31 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          v130.y -= *(_DWORD *)&v201[20];
          v130.x -= *(_DWORD *)&v201[16];
          if ( (unsigned __int8)v31(v7, v130.x, v130.y, v6, v113, v112) )
            return 0;
          (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(v7 + 472) + 168))(*(_DWORD *)(v7 + 472), 1);
          v32 = *(_DWORD *)(v7 + 472);
          if ( !v32 )
            goto LABEL_41;
          (*(void (__stdcall **)(_DWORD, signed int, int, _DWORD *, _DWORD))(*(_DWORD *)v32 + 44))(
            *(_DWORD *)(v7 + 472),
            v6[8],
            LOWORD(v130.x) | (LOWORD(v130.y) << 16),
            v112,
            *(_DWORD *)(v7 + 604));
          return sub_521C9120(v115, v6, v113, v112, v114);
        case 106:
          v192 = 0;
          *v113 = 1;
          v131.x = v6[5];
          v131.y = v6[6];
          if ( (*(int (__thiscall **)(int, HWND *))(*(_DWORD *)v7 + 456))(v7, &v192) < 0 )
            return sub_521C9120(v115, v6, v113, v112, v114);
          ScreenToClient(v192, &v131);
          v33 = *(_DWORD *)v7;
          *(_OWORD *)v202 = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v33 + 444))(v7, v202);
          v34 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          v131.y -= *(_DWORD *)&v202[4];
          v131.x -= *(_DWORD *)v202;
          if ( (unsigned __int8)v34(v7, v131.x, v131.y, v6, v113, v112) )
            return 0;
          (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 472) + 168))(*(_DWORD *)(v7 + 472), 0);
          v35 = sub_52208FE0(v7);
          *(_DWORD *)(v7 + 564) = v35 == 0;
          if ( !v35 )
            sub_52208330(v7);
          v36 = v6[7];
          v37 = *(_DWORD *)(v7 + 472);
          v194 = LOWORD(v131.x) | (LOWORD(v131.y) << 16);
          v127 = v36;
          if ( v37 )
          {
            (*(void (__stdcall **)(int))(*(_DWORD *)v37 + 4))(v37);
            (*(void (__stdcall **)(_DWORD, int, int, _DWORD *))(**(_DWORD **)(v7 + 472) + 48))(
              *(_DWORD *)(v7 + 472),
              v127,
              v194,
              v112);
            v140 = &v111;
            if ( &v111 )
              (*(void (__stdcall **)(int))(*(_DWORD *)v37 + 8))(v37);
          }
          v6 = v122;
          return sub_521C9120(v115, v6, v113, v112, v114);
        case 109:
          v141 = 0;
          *v113 = 0;
          v139.x = v6[5];
          v139.y = v6[6];
          if ( (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 456))(v7, &v141) < 0 )
            goto LABEL_41;
          ScreenToClient(v141, &v139);
          v38 = *(_DWORD *)v7;
          *(_OWORD *)&v202[16] = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v38 + 444))(v7, &v202[16]);
          v27 = v139.x - *(_DWORD *)&v202[16];
          v28 = v139.y - *(_DWORD *)&v202[20];
          v139.x -= *(_DWORD *)&v202[16];
          v139.y -= *(_DWORD *)&v202[20];
LABEL_44:
          if ( !(unsigned __int8)(*(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716))(
                                   v7,
                                   v27,
                                   v28,
                                   v6,
                                   v113,
                                   v112) )
            goto LABEL_41;
          return 0;
        case 113:
          *v113 = 1;
          sub_522D9460(450, 0);
          v132.x = v6[5];
          v132.y = v6[6];
          v39 = *(_DWORD *)v7;
          v142 = 0;
          if ( (*(int (__thiscall **)(int, HWND *))(v39 + 456))(v7, &v142) < 0 )
            goto LABEL_41;
          ScreenToClient(v142, &v132);
          v40 = *(_DWORD *)v7;
          *(_OWORD *)v203 = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v40 + 444))(v7, v203);
          v41 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          v132.y -= *(_DWORD *)&v203[4];
          v132.x -= *(_DWORD *)v203;
          if ( (unsigned __int8)v41(v7, v132.x, v132.y, v6, v113, v112) )
            return 0;
          v42 = *(_DWORD *)(v7 + 472);
          if ( !v42 )
            goto LABEL_41;
          (*(void (__stdcall **)(_DWORD, signed int, int, _DWORD *))(*(_DWORD *)v42 + 64))(
            *(_DWORD *)(v7 + 472),
            v6[7],
            LOWORD(v132.x) | (LOWORD(v132.y) << 16),
            v112);
          return sub_521C9120(v115, v6, v113, v112, v114);
        case 104:
          return sub_5220C870(v115, v6, v113, v112, v114);
        case 107:
          v143 = 0;
          *v113 = 1;
          v133.x = v6[5];
          v133.y = v6[6];
          if ( (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 456))(v7, &v143) < 0 )
            goto LABEL_41;
          ScreenToClient(v143, &v133);
          v43 = *(_DWORD *)v7;
          *(_OWORD *)&v203[16] = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v43 + 444))(v7, &v203[16]);
          v44 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          v133.y -= *(_DWORD *)&v203[20];
          v133.x -= *(_DWORD *)&v203[16];
          if ( (unsigned __int8)v44(v7, v133.x, v133.y, v6, v113, v112) )
            return 0;
          v45 = *(_DWORD *)(v7 + 472);
          if ( !v45 )
            goto LABEL_41;
          (*(void (__stdcall **)(_DWORD, signed int, int, _DWORD *))(*(_DWORD *)v45 + 52))(
            *(_DWORD *)(v7 + 472),
            v6[8],
            LOWORD(v133.x) | (LOWORD(v133.y) << 16),
            v112);
          return sub_521C9120(v115, v6, v113, v112, v114);
        case 108:
          v144 = 0;
          *v113 = 1;
          v134.x = v6[5];
          v134.y = v6[6];
          if ( (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 456))(v7, &v144) < 0 )
            goto LABEL_41;
          ScreenToClient(v144, &v134);
          v46 = *(_DWORD *)v7;
          *(_OWORD *)v204 = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v46 + 444))(v7, v204);
          v47 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          v134.y -= *(_DWORD *)&v204[4];
          v134.x -= *(_DWORD *)v204;
          if ( (unsigned __int8)v47(v7, v134.x, v134.y, v6, v113, v112) )
            return 0;
          v48 = *(_DWORD *)(v7 + 472);
          if ( v48 )
          {
            (*(void (__stdcall **)(_DWORD, signed int, int, _DWORD *))(*(_DWORD *)v48 + 56))(
              *(_DWORD *)(v7 + 472),
              v6[7],
              LOWORD(v134.x) | (LOWORD(v134.y) << 16),
              v112);
            result = sub_521C9120(v115, v6, v113, v112, v114);
          }
          else
          {
LABEL_41:
            result = sub_521C9120(v115, v6, v113, v112, v114);
          }
          return result;
        case 203:
          if ( !*(_DWORD *)(v7 + 472) )
            return -2147467262;
          v120 = 0;
          Util::Data::CreateTXData((Util::Data *)&v120, v111);
          v136 = 0;
          (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v120 + 280))(v120, "key", v6[5]);
          (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)v120 + 240))(v120, "handle", v136);
          sub_522D9460(453, v120);
          (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v120 + 32))(v120, "handle", &v136);
          v49 = GetKeyState(17);
          if ( *(_BYTE *)(v7 + 572) & 0x20 && v49 < 0 || v136 )
          {
            v145 = &v111;
            v50 = &v111 == 0;
          }
          else
          {
            (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
            (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(v7 + 472) + 168))(*(_DWORD *)(v7 + 472), 1);
            v51 = sub_52206050(v6[5], *((_WORD *)v6 + 14) | (*((_WORD *)v6 + 16) << 16), v112);
            *v113 = v51 != 1;
            (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 472) + 168))(*(_DWORD *)(v7 + 472), 0);
            v146 = &v111;
            v50 = &v111 == 0;
          }
          if ( v50 )
            return 0;
          v52 = v120;
          goto LABEL_82;
        case 204:
          v128 = 0;
          Util::Data::CreateTXData((Util::Data *)&v128, v111);
          (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v128 + 280))(v128, "key", v6[5]);
          sub_522D9460(454, v128);
          (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
          v53 = *((_WORD *)v6 + 16);
          v54 = *((_WORD *)v6 + 14);
          v55 = v6[5];
          v50 = *(_DWORD *)(v7 + 472) == 0;
          v127 = v54 | (v53 << 16);
          if ( v50 || (v55 == 13 || v55 == 32) && (v147 = 0, sub_52207C60(&v147), v147) )
            v56 = -2147467262;
          else
            v56 = (*(int (__stdcall **)(_DWORD, signed int, int, _DWORD *))(**(_DWORD **)(v7 + 472) + 88))(
                    *(_DWORD *)(v7 + 472),
                    v55,
                    v127,
                    v112);
          *v113 = v56 != 1;
          v148 = &v111;
          if ( !&v111 )
            return 0;
          v52 = v128;
          goto LABEL_82;
        case 201:
          v121 = 0;
          Util::Data::CreateTXData((Util::Data *)&v121, v111);
          v149 = 0;
          (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v121 + 240))(v121, "handle", 0);
          (*(void (__stdcall **)(int, const char *, signed int))(*(_DWORD *)v121 + 280))(v121, "key", v6[5]);
          sub_522D9460(451, v121);
          (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)v121 + 32))(v121, "handle", &v149);
          if ( v149 )
          {
            v150 = &v111;
            if ( !&v111 )
              return 0;
            v52 = v121;
          }
          else
          {
            (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
            v50 = *(_DWORD *)(v7 + 472) == 0;
            v57 = v6[6];
            v58 = *((_WORD *)v6 + 10);
            v127 = v57;
            if ( v50 || (v58 == 13 || v58 == 32) && (v151 = 0, sub_52207C60(&v151), v151) )
              v59 = -2147467262;
            else
              v59 = (*(int (__stdcall **)(_DWORD, int, int, _DWORD *))(**(_DWORD **)(v7 + 472) + 76))(
                      *(_DWORD *)(v7 + 472),
                      v58,
                      v127,
                      v112);
            *v113 = v59 != 1;
            v152 = &v111;
            if ( !&v111 )
              return 0;
            v52 = v121;
          }
LABEL_82:
          if ( v52 )
            (*(void (__stdcall **)(int))(*(_DWORD *)v52 + 8))(v52);
          break;
        case 205:
          v60 = *(_DWORD *)(v7 + 472);
          if ( !v60 )
            return 0;
          (*(void (__stdcall **)(int, signed int, int, _DWORD *))(*(_DWORD *)v60 + 92))(
            v60,
            v6[5],
            *((_WORD *)v6 + 14) | (*((_WORD *)v6 + 16) << 16),
            v112);
          return 0;
        case 206:
          (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
          v61 = *(_DWORD *)(v7 + 472);
          if ( !v61 )
            return 0;
          (*(void (__stdcall **)(int, signed int, int, _DWORD *))(*(_DWORD *)v61 + 96))(
            v61,
            v6[5],
            *((_WORD *)v6 + 14) | (*((_WORD *)v6 + 16) << 16),
            v112);
          return 0;
        case 111:
          v135.x = v6[6];
          v135.y = v6[7];
          v62 = *(_DWORD *)v7;
          v153 = 0;
          if ( (*(int (__thiscall **)(int, HWND *))(v62 + 456))(v7, &v153) < 0 )
            goto LABEL_112;
          ScreenToClient(v153, &v135);
          v63 = *(_DWORD *)v7;
          *(_OWORD *)&v204[16] = 0i64;
          (*(void (__thiscall **)(int, _BYTE *))(v63 + 444))(v7, &v204[16]);
          v64 = *(int (__thiscall **)(int, LONG, LONG, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 716);
          v135.y -= *(_DWORD *)&v204[20];
          v135.x -= *(_DWORD *)&v204[16];
          if ( (unsigned __int8)v64(v7, v135.x, v135.y, v6, v113, v112) )
            return 0;
          v65 = v113;
          *v113 = 1;
          v66 = *(_DWORD *)(v7 + 472);
          if ( v66 )
          {
            (*(void (__stdcall **)(int, _DWORD, LONG, LONG, _DWORD *))(*(_DWORD *)v66 + 68))(
              v66,
              *(_DWORD *)(v7 + 264),
              v135.x,
              v135.y,
              v112);
LABEL_112:
            v65 = v113;
          }
          return sub_521C9120(v115, v6, v65, v112, v114);
        default:
          goto LABEL_257;
      }
      return 0;
    }
    v67 = *(_DWORD *)(v7 + 472);
    if ( v67 )
    {
      v154 = 0;
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v67 + 144))(v67, &v154);
      if ( v154 || !*(_BYTE *)(v7 + 170) )
      {
        *(_DWORD *)v6[12] = 0;
        sub_522D9460(460, 0);
        return 0;
      }
    }
    v123 = 0;
    v116 = 0;
    *v114 = 0;
    sub_52209ED0(&v116);
    if ( !v116 || (*(int (__stdcall **)(int *))(*(_DWORD *)v116 + 72))(&v123) )
    {
      v159 = &v111;
      if ( &v111 )
      {
        v72 = v116;
        if ( v116 )
        {
          (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v116 + 8))(v116);
          v72 = v116;
        }
        if ( v72 < 0x80000000 )
          v116 = v72 + 2147483648;
      }
      v160 = &v111;
      if ( &v111 )
      {
        v73 = v123;
LABEL_147:
        if ( v73 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v73 + 8))(v73);
      }
      return -2147467262;
    }
    if ( v6[5] && sub_5220C5D0() )
    {
      v68 = (*(int (__stdcall **)(int, signed int, signed int, signed int, signed int, signed int))(*(_DWORD *)v123 + 12))(
              v123,
              v6[5],
              v6[9],
              v6[10],
              v6[11],
              v6[12]);
      *(_DWORD *)(v7 + 612) = v68 == 0;
      sub_522D9460(460, 0);
      v155 = &v111;
      if ( &v111 )
      {
        v69 = v116;
        if ( v116 )
        {
          (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v116 + 8))(v116);
          v69 = v116;
        }
        if ( v69 < 0x80000000 )
          v116 = v69 + 2147483648;
      }
      v156 = &v111;
      if ( &v111 && v123 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v123 + 8))(v123);
        return v68;
      }
      return v68;
    }
    *v114 = 1;
    sub_522D9460(460, 0);
    v157 = &v111;
    if ( &v111 )
    {
      v70 = v116;
      if ( v116 )
      {
        (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v116 + 8))(v116);
        v70 = v116;
      }
      if ( v70 < 0x80000000 )
        v116 = v70 + 2147483648;
    }
    v158 = &v111;
    if ( &v111 )
    {
      v71 = v123;
LABEL_137:
      if ( v71 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v71 + 8))(v71);
    }
    return 0;
  }
  if ( v21 <= 1003 )
  {
    if ( v21 != 1003 )
    {
      switch ( v21 )
      {
        case 901:
          return sub_5220C6A0(v115, v6, v113, v112, v114);
        case 803:
          v74 = *(_DWORD *)v7;
          *(__int128 *)((char *)&v196 + 8) = 0i64;
          (*(void (__thiscall **)(int, char *))(v74 + 444))(v7, (char *)&v196 + 8);
          v75 = *(_DWORD *)v7;
          v199 = 0i64;
          (*(void (__thiscall **)(int, __int128 *))(v75 + 160))(v7, &v199);
          DWORD2(v196) += v199 + *(_DWORD *)(v7 + 484);
          DWORD3(v196) += DWORD1(v199) + *(_DWORD *)(v7 + 488);
          v197 -= DWORD2(v199) + *(_DWORD *)(v7 + 492);
          v198 -= DWORD3(v199) + *(_DWORD *)(v7 + 496);
          v76 = *(_DWORD *)v7;
          v138 = 0;
          if ( (*(int (__thiscall **)(int, int *))(v76 + 456))(v7, &v138) >= 0 )
            *v112 = 1;
          *v113 = 1;
          return 0;
        case 703:
          v77 = *(_DWORD *)(v7 + 472);
          if ( v77 )
          {
            v161 = 0;
            (*(void (__stdcall **)(int, int *))(*(_DWORD *)v77 + 144))(v77, &v161);
            if ( v161 || !*(_BYTE *)(v7 + 170) )
            {
              *(_DWORD *)v6[10] = 0;
              sub_522D9460(461, 0);
              return 0;
            }
          }
          v124 = 0;
          v117 = 0;
          *v114 = 0;
          sub_52209ED0(&v117);
          if ( !v117 || (*(int (__stdcall **)(int *))(*(_DWORD *)v117 + 72))(&v124) )
          {
            v166 = &v111;
            if ( &v111 )
            {
              v80 = v117;
              if ( v117 )
              {
                (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v117 + 8))(v117);
                v80 = v117;
              }
              if ( v80 < 0x80000000 )
                v117 = v80 + 2147483648;
            }
            v167 = &v111;
            if ( &v111 )
            {
              v73 = v124;
              goto LABEL_147;
            }
            return -2147467262;
          }
          if ( v6[5] && sub_5220C5D0() && *(_DWORD *)(v7 + 612) )
          {
            v68 = (*(int (__stdcall **)(int, signed int, signed int, signed int, signed int))(*(_DWORD *)v124 + 16))(
                    v124,
                    v6[7],
                    v6[8],
                    v6[9],
                    v6[10]);
            sub_522D9460(461, 0);
            v162 = &v111;
            if ( &v111 )
            {
              v78 = v117;
              if ( v117 )
              {
                (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v117 + 8))(v117);
                v78 = v117;
              }
              if ( v78 < 0x80000000 )
                v117 = v78 + 2147483648;
            }
            v163 = &v111;
            if ( &v111 && v124 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v124 + 8))(v124);
              return v68;
            }
            return v68;
          }
          *v114 = 1;
          sub_522D9460(461, 0);
          v164 = &v111;
          if ( &v111 )
          {
            v79 = v117;
            if ( v117 )
            {
              (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v117 + 8))(v117);
              v79 = v117;
            }
            if ( v79 < 0x80000000 )
              v117 = v79 + 2147483648;
          }
          v165 = &v111;
          if ( &v111 )
          {
            v71 = v124;
            goto LABEL_137;
          }
          return 0;
        case 702:
          v81 = *(_DWORD *)(v7 + 472);
          if ( v81 )
          {
            v168 = 0;
            (*(void (__stdcall **)(int, int *))(*(_DWORD *)v81 + 144))(v81, &v168);
            if ( v168 || !*(_BYTE *)(v7 + 170) )
            {
              sub_522D9460(463, 0);
              return 0;
            }
          }
          v125 = 0;
          v118 = 0;
          *v114 = 0;
          sub_52209ED0(&v118);
          if ( !v118 || (*(int (__stdcall **)(int *))(*(_DWORD *)v118 + 72))(&v125) )
          {
            v173 = &v111;
            if ( &v111 )
            {
              v84 = v118;
              if ( v118 )
              {
                (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v118 + 8))(v118);
                v84 = v118;
              }
              if ( v84 < 0x80000000 )
                v118 = v84 + 2147483648;
            }
            v174 = &v111;
            if ( &v111 )
            {
              v73 = v125;
              goto LABEL_147;
            }
            return -2147467262;
          }
          if ( v6[5] && sub_5220C5D0() && *(_DWORD *)(v7 + 612) )
          {
            v68 = (*(int (__stdcall **)(int))(*(_DWORD *)v125 + 20))(v125);
            sub_522D9460(463, 0);
            v169 = &v111;
            if ( &v111 )
            {
              v82 = v118;
              if ( v118 )
              {
                (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v118 + 8))(v118);
                v82 = v118;
              }
              if ( v82 < 0x80000000 )
                v118 = v82 + 2147483648;
            }
            v170 = &v111;
            if ( &v111 && v125 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v125 + 8))(v125);
              return v68;
            }
            return v68;
          }
          *v114 = 1;
          sub_522D9460(463, 0);
          v171 = &v111;
          if ( &v111 )
          {
            v83 = v118;
            if ( v118 )
            {
              (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v118 + 8))(v118);
              v83 = v118;
            }
            if ( v83 < 0x80000000 )
              v118 = v83 + 2147483648;
          }
          v172 = &v111;
          if ( &v111 )
          {
            v71 = v125;
            goto LABEL_137;
          }
          return 0;
        case 704:
          v85 = *(_DWORD *)(v7 + 472);
          if ( v85 )
          {
            v175 = 0;
            (*(void (__stdcall **)(int, int *))(*(_DWORD *)v85 + 144))(v85, &v175);
            if ( v175 || !*(_BYTE *)(v7 + 170) )
            {
              *(_DWORD *)v6[10] = 0;
              sub_522D9460(462, 0);
              return 0;
            }
          }
          v126 = 0;
          *v114 = 0;
          sub_52209ED0(&v126);
          v119 = 0;
          if ( !v126 || (*(int (__stdcall **)(unsigned int *))(*(_DWORD *)v126 + 72))(&v119) )
          {
            v180 = &v111;
            if ( &v111 )
            {
              v89 = v119;
              if ( v119 )
              {
                (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v119 + 8))(v119);
                v89 = v119;
              }
              if ( v89 < 0x80000000 )
                v119 = v89 + 2147483648;
            }
            v181 = &v111;
            if ( &v111 )
            {
              v73 = v126;
              goto LABEL_147;
            }
            return -2147467262;
          }
          if ( v6[5] && sub_5220C5D0() && *(_DWORD *)(v7 + 612) )
          {
            v68 = (*(int (__stdcall **)(unsigned int, signed int, signed int, signed int, signed int, signed int))(*(_DWORD *)v119 + 24))(
                    v119,
                    v6[5],
                    v6[7],
                    v6[8],
                    v6[9],
                    v6[10]);
            v86 = sub_521CD130(v7);
            (*(void (__stdcall **)(int))(*(_DWORD *)v86 + 828))(v86);
            sub_522D9460(462, 0);
            v176 = &v111;
            if ( &v111 )
            {
              v87 = v119;
              if ( v119 )
              {
                (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v119 + 8))(v119);
                v87 = v119;
              }
              if ( v87 < 0x80000000 )
                v119 = v87 + 2147483648;
            }
            v177 = &v111;
            if ( &v111 && v126 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v126 + 8))(v126);
              return v68;
            }
            return v68;
          }
          *v114 = 1;
          sub_522D9460(462, 0);
          v178 = &v111;
          if ( &v111 )
          {
            v88 = v119;
            if ( v119 )
            {
              (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v119 + 8))(v119);
              v88 = v119;
            }
            if ( v88 < 0x80000000 )
              v119 = v88 + 2147483648;
          }
          v179 = &v111;
          if ( &v111 )
          {
            v71 = v126;
            goto LABEL_137;
          }
          break;
        default:
          goto LABEL_257;
      }
      return 0;
    }
    v90 = v6[5];
    v91 = *(_DWORD *)(v7 + 472);
    v138 = v90;
    if ( v90 )
    {
      *(_DWORD *)(v7 + 608) = v90;
      if ( !v91 )
        goto LABEL_257;
      (*(void (__stdcall **)(int, int, _DWORD *, signed int))(*(_DWORD *)v91 + 72))(
        v91,
        v90,
        v112,
        *(_DWORD *)(v7 + 604));
    }
    else
    {
      *(_DWORD *)(v7 + 608) = 0;
      if ( !v91 )
        goto LABEL_257;
      (*(void (__stdcall **)(int, int, _DWORD *, signed int))(*(_DWORD *)v91 + 72))(v91, 0, v112, 1);
    }
    v20 = v115;
LABEL_257:
    v110 = v114;
    return sub_521C9120(v20, v6, v113, v112, v110);
  }
  if ( v21 > 1600 )
    goto LABEL_257;
  if ( v21 == 1600 )
  {
    result = sub_5220CA60(v115, v6, v113, v112, v114);
  }
  else
  {
    switch ( v21 )
    {
      default:
        goto LABEL_257;
      case 1201:
        (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v92 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(int, signed int, signed int, signed int, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               641,
               v6[5],
               v6[6],
               v92) == 1 )
          goto LABEL_264;
        return 0;
      case 1202:
        (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v97 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(int, signed int, signed int, signed int, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               642,
               v6[5],
               v6[6],
               v97) == 1 )
          goto LABEL_264;
        return 0;
      case 1203:
        (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v98 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               643,
               v6[5],
               v6[6],
               v98) == 1 )
          goto LABEL_264;
        return 0;
      case 1204:
        (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v99 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               644,
               v6[5],
               v6[6],
               v99) == 1 )
          goto LABEL_264;
        return 0;
      case 1205:
        (*(void (__thiscall **)(int, signed int *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v100 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               645,
               v6[5],
               v6[6],
               v100) == 1 )
          goto LABEL_264;
        return 0;
      case 1206:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v101 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               646,
               v6[5],
               v6[6],
               v101) == 1 )
          goto LABEL_264;
        return 0;
      case 1207:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v102 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               648,
               v6[5],
               v6[6],
               v102) == 1 )
          goto LABEL_264;
        return 0;
      case 1208:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v103 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               656,
               v6[5],
               v6[6],
               v103) == 1 )
          goto LABEL_264;
        return 0;
      case 1209:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v104 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               657,
               v6[5],
               v6[6],
               v104) == 1 )
          goto LABEL_264;
        return 0;
      case 1210:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v105 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               269,
               v6[5],
               v6[6],
               v105) == 1 )
          goto LABEL_264;
        return 0;
      case 1211:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v106 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               270,
               v6[5],
               v6[6],
               v106) == 1 )
          goto LABEL_264;
        return 0;
      case 1212:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 724))(v7, v6, v113, v112);
        v107 = v112;
        *v113 = 1;
        if ( (*(int (__thiscall **)(_DWORD, signed int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v7 + 720))(
               v7,
               271,
               v6[5],
               v6[6],
               v107) == 1 )
        {
LABEL_264:
          v93 = v114;
          v94 = v112;
          v95 = v115;
          v96 = v113;
          *v113 = 0;
          result = sub_521C9120(v95, v6, v96, v94, v93);
        }
        else
        {
          result = 0;
        }
        return result;
      case 1101:
        v108 = *(_DWORD *)(v7 + 472);
        if ( v108 )
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v108 + 148))(*(_DWORD *)(v7 + 472));
          v20 = v115;
        }
        sub_521C9120(v20, v6, v113, v112, v114);
        return 0;
      case 1102:
        sub_521C9120(v115, v6, v113, v112, v114);
        v109 = *(_DWORD *)(v7 + 472);
        if ( !v109 )
          return 0;
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v109 + 148))(*(_DWORD *)(v7 + 472));
        result = 0;
        break;
    }
  }
  return result;
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


