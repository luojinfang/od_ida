/*
https://docs.microsoft.com/zh-cn/windows/win32/winmsg/about-messages-and-message-queues?redirectedfrom=MSDN
https://docs.microsoft.com/en-us/windows/win32/inputdev/mouse-input  // (Winuser.h) win32鼠标事件
 
#define WM_MOUSEMOVE 0x0200
#define WM_LBUTTONDOWN 0x0201
#define WM_LBUTTONUP 0x0202
#define WM_LBUTTONDBLCLK 0x0203
  
 
 
 
 
 
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







