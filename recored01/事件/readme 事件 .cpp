/*
https://docs.microsoft.com/zh-cn/windows/win32/winmsg/about-messages-and-message-queues?redirectedfrom=MSDN
https://docs.microsoft.com/en-us/windows/win32/inputdev/mouse-input  // (Winuser.h) win32鼠标事件
 
#define WM_MOUSEMOVE 0x0200
#define WM_LBUTTONDOWN 0x0201
#define WM_LBUTTONUP 0x0202
#define WM_LBUTTONDBLCLK 0x0203
  
 
//202u
 
 
 
//C:\Program Files (x86)\Windows Kits\10\Include\10.0.18362.0\um\WinUser.h 
#define WM_TIMER                        0x0113


0x113,0x47B,0x374,0x7B5,0x801,0x503






用 WM_TIMER 来设置定时器

先请看SetTimer这个API函数的原型

UINT_PTR SetTimer(
	HWND hWnd, // 窗口句柄
	UINT_PTR nIDEvent, // 定时器ID，多个定时器时，可以通过该ID判断是哪个定时器
	UINT uElapse, // 时间间隔,单位为毫秒
	TIMERPROC lpTimerFunc // 回调函数
);

void CALLBACK TimerProc(HWND hWnd,UINT nMsg,UINT nTimerid,DWORD dwTime);


 


*/




/*
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



*/







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
      case 0x201u:  //#define WM_LBUTTONDOWN 0x0201
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 100))(
          this,
          *((_DWORD *)this + 1),
          0,
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);
        return 0;
      case 0x202u:  //#define WM_LBUTTONUP 0x0202
        (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 104))(
          this,
          *((_DWORD *)this + 1),
          (signed __int16)hkl,
          SHIWORD(hkl),
          wParam,
          a5);   //=====================> 532BB68F/gf.sub_532BB630
        return 0;
      case 0x203u: //#define WM_LBUTTONDBLCLK 0x0203
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
 
 
 
 



