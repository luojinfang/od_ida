
/*
修改版


movzx 是将源操作数的内容拷贝到目的操作数，并将该值用0扩展至16位或者32位。但是它只适用于无符号整数。 他大致下面的三种格式。
		movzx 32位通用寄存器, 8位通用寄存器/内存单元
		movzx 32位通用寄存器, 16位通用寄存器/内存单元
		movzx 16位通用寄存器, 8位通用寄存器/内存单元
		若执行 movzx eax, ax 后 eax = 00004000h.
		若执行 movzx eax, ah 后 eax = 00000040h.

__fastcall 是一种快速调用方式。
	调用约定(Calling Convention)
	规定将前两个参数由寄存器ecx和edx来传递,其余参数还是通过堆栈传递(从右到左)。
	不同编译器编译的程序规定的寄存器不同。在Intel 386平台上，使用ECX和EDX寄存器。
	使用 __fastcall 方式无法用作跨编译器的接口。
	
__cdecl 是C Declaration的缩写,__cdecl是C和C++程序的缺省调用方式
	表示C语言默认的函数调用方法：所有参数从右到左依次入栈，这些参数由调用者清除,称为手动清栈。
	被调用函数不会要求调用者传递多少参数,调用者传递过多或者过少的参数,甚至完全不同的参数都不会产生编译阶段的错误。


1、修饰名(Decoration name)："C"或者"C++"函数在内部（编译和链接）通过修饰名识别
2、C编译时函数名修饰约定规则：
	__stdcall 调用约定在输出函数名前加上一个下划线前缀，后面加上一个"@"符号和其参数的字节数，格式为 _functionname@number,例如 ：function(int a, int b)，其修饰名为：_function@8
	__cdecl 调用约定仅在输出函数名前加上一个下划线前缀，格式为 _functionname。
	__fastcall 调用约定在输出函数名前加上一个 "@" 符号，后面也是一个"@"符号和其参数的字节数，格式为 @functionname@number。
 

//栈平衡
//https://bbs.huaweicloud.com/blogs/101007
__cdecl   ：函数调用结束后由函数调用者清除栈内数据。  
__stdcall ：函数调用结束后由被调用函数清除栈内数据。
__fastcall：函数调用结束后由被调用函数清除栈内数据。


//IDA
 https://blog.csdn.net/xkdlzy/article/details/107786348
 
IDA中支持用户自定义函数调用约定，用户可以显式指定参数和返回值的位置，
例如：
	int __usercall func@<ebx>(int x, int y@<esi>);
	表示函数有两个参数:第一个参数通过堆栈传递，第二个参数通过esi寄存器传递，返回值保存在ebx寄存器中。用户自定义函数调用约定的一般规则如下：

	返回值必须位于寄存器中
	如果返回值类型是 void，不能指定返回值的位置
	如果参数的位置没有指定，假设参数通过堆栈传递
	可以允许嵌套声明，如: int **__usercall func16@<eax>(int *(__usercall *x)@<ebx> (int, long@<ecx>, int)@<esi>);
	用于指定位置名的寄存器必须在当前处理器中有效
	寄存器对可以像这样 <edx:eax> 用冒号的形式指定
	IDA也支持 __userpurge 调用约定，它和 __usercall 相同，唯一的区别是 __userpurge 表示由被调用者清理堆栈。

	IDA中函数声明也可以使用__spoils关键字，它用于指明被函数破坏的寄存器列表，语法如下：

	int __spoils<eax, bh> func(int x);

	如果存在__spoils关键字，指定的列表会覆盖标准的寄存器破坏列表。在x86处理器中标准的破坏列表是<eax, edx, ecx>,破坏列表也可以为空。



-------------
//common

 
CTXCommPack::GrowBuffer
CTXCommPack::AddBuf 
CCmdCodecBase::CodeBuffer


CTXCommPack::CreatePack(void) / 523CDD90 

Util::Network::CreateUDP(int,ITXUDP * *) 			/ 52386390  
Util::Network::CreateUDP(ITXDataRead *,ITXUDP * *)  / 52386490  

Util::Data::CreateTXBuffer(ITXBuffer * *) 	/ 522F4890  	// CTXBuffer
Util::Data::CreateTXArray(ITXArray * *) 	/ 522F5080  
Util::Data::CreateTXData(ITXData * *) 		/ 522F4920  	//消息实例 ,大量使用...

CTXData::Create(void) 	/ 522FAFE0  
CTXArray::Create(void)  / 522F9870  

UtilOPCall::TXCreateObject(ulong,CTXStringW,ITXOPCallObject *) / 523F11F0  
Util::CoreCenter::SetCreateObjectFactory(long (*)(_GUID const &,_GUID const &,void * *)) / 522DF7E0 



//CTXCommPack  
struct CTXCommPack *__cdecl CTXCommPack::CreatePack()
{
  struct CTXCommPack *result; // eax@1

  result = (struct CTXCommPack *)sub_5247994C(0x28u); //40字节
  *(_DWORD *)result = &CTXCommPack::`vftable'; //虚表
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = 0;
  *((_DWORD *)result + 7) = 512;
  *((_DWORD *)result + 8) = 0;
  *((_DWORD *)result + 9) = 0;
  return result;
}

//Util::Data
int __cdecl Util::Data::CreateTXData(Util::Data *this)
{
  void *v1; // eax@2
  int v2; // ecx@2
  int v3; // eax@3
  int v4; // ebx@3
  int result; // eax@7

  if ( !this )
    goto LABEL_11;
  *(_DWORD *)this = 0;
  v1 = sub_52479F28(0xCu); //12字节
  if ( v1 )
  {
    v3 = sub_522E76F0((int)v1, v2); //构造方法?
    v4 = v3;
    if ( v3 )
    {
      InterlockedIncrement((volatile LONG *)(v3 + 4));
      InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( (**(int (__stdcall ***)(int, GUID *, Util::Data *))v4)(v4, &CLSID_ITXData, this) )
        (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v4 + 436))(v4, 1);
    }
  }
  if ( *(_DWORD *)this )
    result = 1;
  else
LABEL_11:
    result = 0;
  return result;
}

//CTXBuffer
int __cdecl Util::Data::CreateTXBuffer(Util::Data *this)
{
  int v1; // eax@2
  int v2; // esi@2
  int v3; // ecx@3
  void (*v4)(void); // eax@3
  int result; // eax@8

  if ( !this )
    goto LABEL_13;
  *(_DWORD *)this = 0;
  v1 = sub_52479F28(0x10u); //16字节
  v2 = v1;
  if ( v1 )
  {
    v3 = dword_5252BF2C;
    *(_DWORD *)(v1 + 4) = 0;
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)v1 = &off_524AB9EC; //虚表
    v4 = *(void (**)(void))(*(_DWORD *)v3 + 4);
    if ( (char *)v4 == (char *)sub_522ADAD0 )
      InterlockedIncrement((volatile LONG *)(v3 + 8));
    else
      v4();
    if ( (**(int (__stdcall ***)(int, GUID *, Util::Data *))v2)(v2, &rguid, this) )  //执行虚表第一个方法
      (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v2 + 96))(v2, 1);
  }
  if ( *(_DWORD *)this )
    result = 1;
  else
LABEL_13:
    result = 0;
  return result;
}


-------------


	=> memcpy 前缀? "MSG"
1712FC7C 55796F68 523CE153 74  common.523CE153            用户模块  //CTXCommPack::AddBuf(CTXCommPack *this, const unsigned __int8 *Src, unsigned int Size)
1712FCF0 55795407 55796F68 18  kernelutil.55796F68        用户模块  //sub_55796DC3
1712FD08 54C99925 55795407 10  kernelutil.55795407        用户模块	//Util::Msg::TranslateMsgPackToBuddyMsg
1712FD18 54C99969 54C99925 20  im.54C99925                用户模块
1712FD38 54A6B0C6 54C99969 1C  im.54C99969                用户模块
1712FD54 54B47A90 54A6B0C6 40  im.54A6B0C6                用户模块
1712FD94 51B224EE 54B47A90 28  im.54B47A90                用户模块
1712FDBC 51B22591 51B224EE C   asynctask.51B224EE         用户模块
1712FDC8 51B227CF 51B22591 38  asynctask.51B22591         用户模块
1712FE00 51B24321 51B227CF 2C  asynctask.51B227CF         用户模块
1712FE2C 51B2207A 51B24321 24  asynctask.51B24321         用户模块
1712FE50 51B25FE7 51B2207A 8   asynctask.51B2207A         用户模块
1712FE58 51B26082 51B25FE7 114 asynctask.51B25FE7         用户模块
1712FF6C 51B25E47 51B26082 8   asynctask.51B26082         用户模块
1712FF74 74F70419 51B25E47 10  asynctask.51B25E47         系统模块
1712FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
1712FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
1712FFF0 00000000 771666AD     ntdll.771666AD             用户模块



	=> memcpy 发送框内容
1712FBFC 55786729 523CE14E 1C  common.523CE153             用户模块 //CTXCommPack::AddBuf(CTXCommPack *this, const unsigned __int8 *Src, unsigned int Size)
1712FC18 55797954 55786729 60  kernelutil.55786729         用户模块	//sub_5578662C
1712FC78 55797223 55797954 78  kernelutil.55797954         用户模块	//sub_557978E9
1712FCF0 55795407 55797223 18  kernelutil.55797223         用户模块	//sub_55796DC3
1712FD08 54C99925 55795407 10  kernelutil.55795407         用户模块 //Util::Msg::TranslateMsgPackToBuddyMsg
1712FD18 54C99969 54C99925 20  im.54C99925                 用户模块
1712FD38 54A6B0C6 54C99969 1C  im.54C99969                 用户模块
1712FD54 54B47A90 54A6B0C6 40  im.54A6B0C6                 用户模块
1712FD94 51B224EE 54B47A90 28  im.54B47A90                 用户模块
1712FDBC 51B22591 51B224EE C   asynctask.51B224EE          用户模块
1712FDC8 51B227CF 51B22591 38  asynctask.51B22591          用户模块
1712FE00 51B24321 51B227CF 2C  asynctask.51B227CF          用户模块
1712FE2C 51B2207A 51B24321 24  asynctask.51B24321          用户模块
1712FE50 51B25FE7 51B2207A 8   asynctask.51B2207A          用户模块
1712FE58 51B26082 51B25FE7 114 asynctask.51B25FE7          用户模块
1712FF6C 51B25E47 51B26082 8   asynctask.51B26082          用户模块
1712FF74 74F70419 51B25E47 10  asynctask.51B25E47          系统模块
1712FF84 771666DD 74F70419 5C  kernel32.74F70419           系统模块
1712FFE0 771666AD 771666DD 10  ntdll.771666DD              系统模块
1712FFF0 00000000 771666AD     ntdll.771666AD              用户模块



	=> memcpy 发送框内容结束符？
1712FC00 523CE41C 523CE153 1C  common.523CE153            用户模块
1712FC1C 55797A63 523CE41C 5C  common.523CE41C            用户模块
1712FC78 55797223 55797A63 78  kernelutil.55797A63        用户模块
1712FCF0 55795407 55797223 18  kernelutil.55797223        用户模块
1712FD08 54C99925 55795407 10  kernelutil.55795407        用户模块
1712FD18 54C99969 54C99925 20  im.54C99925                用户模块
1712FD38 54A6B0C6 54C99969 1C  im.54C99969                用户模块
1712FD54 54B47A90 54A6B0C6 40  im.54A6B0C6                用户模块
1712FD94 51B224EE 54B47A90 28  im.54B47A90                用户模块
1712FDBC 51B22591 51B224EE C   asynctask.51B224EE         用户模块
1712FDC8 51B227CF 51B22591 38  asynctask.51B22591         用户模块
1712FE00 51B24321 51B227CF 2C  asynctask.51B227CF         用户模块
1712FE2C 51B2207A 51B24321 24  asynctask.51B24321         用户模块
1712FE50 51B25FE7 51B2207A 8   asynctask.51B2207A         用户模块
1712FE58 51B26082 51B25FE7 114 asynctask.51B25FE7         用户模块
1712FF6C 51B25E47 51B26082 8   asynctask.51B26082         用户模块
1712FF74 74F70419 51B25E47 10  asynctask.51B25E47         系统模块
1712FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
1712FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
1712FFF0 00000000 771666AD     ntdll.771666AD             用户模块


	=> memcpy 整个消息拷贝了一次?
0019EFFC 523CE1DC 523CE153 1C  common.523CE153            用户模块	//CTXCommPack::AddBuf(CTXCommPack *this, const unsigned __int8 *Src, unsigned int Size)
0019F018 523CA69F 523CE1DC 1C  common.523CE1DC            用户模块	//int __thiscall CTXCommPack::AddBuf(CTXCommPack *this, const struct CTXBuffer *Src)
0019F034 523C9324 523CA69F 30  common.523CA69F            用户模块
0019F064 54C9B82D 523C9324 34  common.523C9324            用户模块
0019F098 54D60B00 54C9B82D 3C  im.54C9B82D                用户模块
0019F0D4 54D5C69D 54D60B00 28  im.54D60B00                用户模块
0019F0FC 54C98AC4 54D5C69D C4  im.54D5C69D                用户模块
0019F1C0 54C99727 54C98AC4 8C  im.54C98AC4                用户模块
0019F24C 54B196FC 54C99727 20  im.54C99727                用户模块
0019F26C 54B22591 54B196FC 40  im.54B196FC                用户模块
0019F2AC 51B224EE 54B22591 28  im.54B22591                用户模块
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE         用户模块
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591         用户模块
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF         用户模块
0019F340 51B2207A 51B24321 24  asynctask.51B24321         用户模块
0019F364 53920B86 51B2207A 69C asynctask.51B2207A         用户模块
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86      用户模块
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B      用户模块
0019FF1C 004012C6 0040289B C   qq.0040289B                用户模块
0019FF28 00403365 004012C6 4C  qq.004012C6                用户模块
0019FF74 74F70419 00403365 10  qq.00403365                系统模块
0019FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
0019FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
0019FFF0 00000000 771666AD     ntdll.771666AD             用户模块



//多调试几次后，发送消息走这个流程?
Address  To       From     Siz Comment               Party 
0019F0E4 55795526 523CE14E C4  common.523CE14E       User
0019F1A8 54C93F1D 55795526 74  kernelutil.55795526   User
0019F21C 54C99405 54C93F1D 34  im.54C93F1D           User
0019F250 54A6B0C6 54C99405 1C  im.54C99405           User
0019F26C 54B47A90 54A6B0C6 40  im.54A6B0C6           User
0019F2AC 51B224EE 54B47A90 28  im.54B47A90           User
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE    User
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591    User
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF    User
0019F340 51B2207A 51B24321 24  asynctask.51B24321    User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 75BD6359 00403365 10  qq.00403365           System
0019FF84 77CB8944 75BD6359 5C  kernel32.75BD6359     System
0019FFE0 77CB8914 77CB8944 10  ntdll.77CB8944        System
0019FFF0 00000000 77CB8914     ntdll.77CB8914        User




522A0000 common.dll
54A10000 im.dll 
51B20000 asynctask.dll 
556B0000 kernelutil.dll  


*/

//kernelutil
int __usercall Util::Msg::TranslateMsgPackToBuddyMsg@<eax>(struct ITXMsgImage *a1@<edi>, Util::Msg *this, struct ITXMsgPack *a3)
{
  return sub_55796DC3(a1, (int)this, a3, 0, 0);
}

//kernelutil
//@a2  Util::Msg*
signed int __usercall sub_55796DC3@<eax>(struct ITXMsgImage *a1@<edi>, int a2, struct CTXBuffer *a3, int a4, int a5)
{
  signed int v5; // ebx@3
  unsigned int v6; // eax@4
  _DWORD *v7; // esi@4
  unsigned int v8; // ecx@6
  int v9; // eax@7
  int v10; // eax@9
  wchar_t *v11; // esi@11
  Util::Msg *v12; // eax@11
  int v13; // edx@18
  unsigned int v14; // edi@18
  bool i; // zf@20
  int v16; // eax@23
  int v17; // esi@24
  int v18; // esi@25
  wchar_t *v19; // eax@25
  LPSTR v20; // esi@25
  wchar_t *v22; // edi@32
  int v23; // esi@33
  unsigned int v24; // ecx@33
  int *v25; // edi@35
  int v26; // eax@37
  char *v27; // ecx@37
  CHAR *v28; // esi@38
  int v29; // eax@52
  signed int v30; // ecx@52
  wchar_t *v31; // ecx@67
  signed int v32; // [sp-20h] [bp-78h]@47
  const wchar_t *v33; // [sp-1Ch] [bp-74h]@47
  const wchar_t *v34; // [sp-14h] [bp-6Ch]@47
  const char *v35; // [sp-10h] [bp-68h]@47
  const wchar_t *v36; // [sp-Ch] [bp-64h]@47
  struct ITXMsgImage *v37; // [sp-8h] [bp-60h]@4
  int v38; // [sp+0h] [bp-58h]@3
  int v39; // [sp+28h] [bp-30h]@34
  int v40; // [sp+2Ch] [bp-2Ch]@34
  int v41; // [sp+30h] [bp-28h]@34
  _DWORD *v42; // [sp+34h] [bp-24h]@4
  unsigned int v43; // [sp+38h] [bp-20h]@4
  int v44; // [sp+3Ch] [bp-1Ch]@4
  unsigned int v45; // [sp+40h] [bp-18h]@6
  LPSTR lpMultiByteStr; // [sp+44h] [bp-14h]@11
  int v47; // [sp+48h] [bp-10h]@23
  int v48; // [sp+4Ch] [bp-Ch]@6
  wchar_t *v49; // [sp+50h] [bp-8h]@9
  char v50; // [sp+57h] [bp-1h]@7

  if ( *(_DWORD *)a3 )
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)a3 + 32))(*(_DWORD *)a3);
  CTXCommPack::CTXCommPack((CTXCommPack *)&v38);
  v5 = a2;
  if ( !a2 )
    goto LABEL_31;
  v6 = 0;
  v44 = 0;
  v7 = 0;
  v43 = 0;
  v37 = a1;
  v42 = 0;
  if ( !a4 && !a5 )
  {
    v45 = 0;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)a2 + 64))(a2, (int *)&v45);
    v8 = 0;
    v48 = 0;
    if ( v45 )
    {
      do
      {
        v9 = *(_DWORD *)v5;
        v50 = 0;
        if ( (*(int (__stdcall **)(signed int, unsigned int, char *))(v9 + 68))(v5, v8, &v50) >= 0 && v50 == 3 )
        {
          v10 = *(_DWORD *)v5;
          v49 = 0;
          if ( (*(int (__stdcall **)(signed int, int, void *, wchar_t **))(v10 + 72))(v5, v48, &unk_558206A4, &v49) >= 0
            && v49 )
          {
            CTXBSTR::CTXBSTR((CTXBSTR *)&lpMultiByteStr, L"C2C");
            v11 = v49;
            v12 = (Util::Msg *)CTXBSTR::operator wchar_t *(&lpMultiByteStr);
            if ( !Util::Msg::PreTranslateMsgImage(v12, v11, v37) )
            {
              sub_556B2C12(
                L"file",
                8424,
                L"func",
                2,
                L"UtilMsg",
                (const char *)L"PreTranslateMsgImage Fail, Index = [%d]",
                v48);
              sub_556C2027(&v48);
            }
            CTXBSTR::~CTXBSTR((CTXBSTR *)&lpMultiByteStr);
          }
          sub_556B23B0(&v49);
        }
        v8 = v48 + 1;
        v48 = v8;
      }
      while ( v8 < v45 );
      v7 = v42;
    }
    v6 = v43;
  }
  v13 = 0;
  v14 = (v6 - (unsigned int)v7 + 3) >> 2;
  if ( (unsigned int)v7 > v6 )
    v14 = 0;
  for ( i = v14 == 0; ; i = v45 + 1 == v14 )
  {
    v45 = v13;
    if ( i )
      break;
    (*(void (__stdcall **)(signed int, int))(*(_DWORD *)v5 + 76))(v5, *v7 - v13);
    ++v7;
    v13 = v45 + 1;
  }
  v16 = *(_DWORD *)v5;
  v47 = 0;
  if ( (*(int (__stdcall **)(signed int, int *))(v16 + 24))(v5, &v47) < 0 //-----------------------------------> 557EF0F9 获得内容
    || (v17 = sub_556B28B5(&v47),   //-----------------------------------> 获得内容
        v48 = v17,
        lpMultiByteStr = (LPSTR)(v17 + sub_556B28D6(&v47) - 1),
        v17 + 23 > (unsigned int)lpMultiByteStr) )
  {
LABEL_27:
    v5 = 0;
    goto LABEL_28;
  }
  CTXCommPack::AddBuf((CTXCommPack *)&v38, (const unsigned __int8 *)v17, 4u);  //55796F68 =========================> CTXCommPack::AddBuf  添加前缀 "MSG" ..
  v5 = 1;
  CTXCommPack::AddDWord((CTXCommPack *)&v38, *(_DWORD *)(v17 + 4), 1);
  CTXCommPack::AddDWord((CTXCommPack *)&v38, *(_DWORD *)(v48 + 8), 1);
  CTXCommPack::AddDWord((CTXCommPack *)&v38, *(_DWORD *)(v48 + 12), 1);
  CTXCommPack::AddDWord((CTXCommPack *)&v38, *(_DWORD *)(v48 + 16), 1);
  v18 = v48 + 20;
  CTXCommPack::AddBuf((CTXCommPack *)&v38, (const unsigned __int8 *)(v48 + 20), 4u);
  v19 = (wchar_t *)(v18 + 4);
  v20 = lpMultiByteStr;
  v49 = v19;
  if ( !sub_5578662C((int)&v49, lpMultiByteStr, (int)&v38) )  //------->
  {
    sub_556B2C12(
      L"file",
      8508,
      L"func",
      1,
      L"Msg",
      (const char *)L"%s",
      L"TranslateMsgPackToSessionMsg font name error");
    goto LABEL_27;
  }
  v22 = v49;
  if ( (char *)v49 + 1 > v20 )
    goto LABEL_27;
  v23 = *v49;
  CTXCommPack::AddWord((CTXCommPack *)&v38, 0, 1);
  v24 = (unsigned int)v22 + v23 + 2;
  if ( v24 - 1 > (unsigned int)lpMultiByteStr )
    goto LABEL_27;
  v49 = (wchar_t *)((char *)v22 + v23 + 2);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( v24 > (unsigned int)lpMultiByteStr )
  {
LABEL_79:
    CTXCommPack::GetBufferOut((CTXCommPack *)&v38, a3); //合并buf 到 struct CTXBuffer *a3?
    goto LABEL_80;
  }
  v25 = (int *)a2;
  while ( 1 )
  {
    LOBYTE(v45) = *(_BYTE *)v49;
    if ( v49 + 1 > (wchar_t *)lpMultiByteStr )  //同一个源字符串上的指针对比
      break;
    v26 = *(wchar_t *)((char *)v49 + 1);
    v27 = (char *)v49 + 3;
    v49 = (wchar_t *)((char *)v49 + 3);
    if ( !(_WORD)v26 )
      goto LABEL_78;
    a2 = v26;
    v28 = &v27[v26 - 1];
    if ( (unsigned __int8)v45 > 0xDu )
    {
      switch ( (unsigned __int8)v45 )
      {
        case 0xEu:
          if ( !sub_5579939C(&v49, v28, &v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgPublicGroupInfoToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8639;
            goto LABEL_83;
          }
          break;
        case 0xFu:
          if ( !sub_55797435((int)&v49, v28, (int)&v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgPublicGroupInfoToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8648;
            goto LABEL_83;
          }
          break;
        case 0x14u:
          if ( !sub_55797613(&v49, v28, &v38, v45) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgStructMsgToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8657;
            goto LABEL_83;
          }
          break;
        case 0x16u:
          if ( !sub_55793883(&v49, v28, &v38, v45) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgStructMsgToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8666;
            goto LABEL_83;
          }
          break;
        default:
          if ( (unsigned __int8)v45 != 25 )
          {
LABEL_67:
            v31 = (wchar_t *)&v27[a2];
            if ( (char *)v31 - 1 > lpMultiByteStr )
              goto LABEL_84;
            v49 = v31;
            break;
          }
          if ( !sub_557937A1(&v49, v28, &v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgCommonToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8676;
            goto LABEL_83;
          }
          break;
      }
    }
    else
    {
      switch ( (unsigned __int8)v45 )
      {
        case 0xDu:
          if ( !sub_55793961((int)&v49, v28, (int)&v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgEmojiFaceToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8578;
            goto LABEL_83;
          }
          break;
        case 1u:
          if ( !sub_557978E9((int)&v49, v28, (int)&v38) )   // 55797223 =====================> sub_557978E9  添加输入框内容 v28 到 buf
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgTextToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8569;
            goto LABEL_83;
          }
          break;
        case 2u:
          if ( !sub_55797746(&v49, v28, &v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgSysFaceToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8596;
            goto LABEL_83;
          }
          break;
        case 3u:
          v29 = *v25;
          a2 = 0;
          (*(void (__stdcall **)(int *, int *))(v29 + 40))(v25, &a2);
          v30 = 1;
          v48 = 1;
          if ( a2 )
          {
            (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bOnlySendFileName", &v48);
            v30 = v48;
          }
          if ( !sub_55794346(&v49, v28, &v38, &v39, a4, a5, v30) )
          {
            sub_556B2C12(
              L"file",
              8612,
              L"func",
              1,
              L"Msg",
              (const char *)L"%s",
              L"TranslateMsgPackToSessionMsg TranslateMsgImageToSessionMsg error");
            sub_556B23B0(&a2);
            goto LABEL_84;
          }
          sub_556B23B0(&a2);
          break;
        case 8u:
          if ( !sub_55793F3B(&v49, v28, &v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgFlagsToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8621;
            goto LABEL_83;
          }
          break;
        case 9u:
          if ( !sub_55793A16(&v49, v28, &v38, a5) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgFileObjectToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8630;
            goto LABEL_83;
          }
          break;
        default:
          if ( (unsigned __int8)v45 != 12 )
            goto LABEL_67;
          if ( !sub_557974EB((int)&v49, v28, (int)&v38) )
          {
            v36 = L"TranslateMsgPackToSessionMsg TranslateMsgStoreToSessionMsg error";
            v35 = (const char *)L"%s";
            v34 = L"Msg";
            v33 = L"func";
            v32 = 8587;
LABEL_83:
            sub_556B2C12(L"file", v32, v33, 1, v34, v35, v36);
            goto LABEL_84;
          }
          break;
      }
    }
LABEL_78:
    if ( v49 > (wchar_t *)lpMultiByteStr )
      goto LABEL_79;
  }
LABEL_84:
  v5 = 0;
LABEL_80:
  sub_556D6147(&v39);
LABEL_28:
  if ( v47 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v47 + 8))(v47);
    v47 = 0;
  }
  sub_556B5255(&v42);
LABEL_31:
  CTXCommPack::~CTXCommPack((CTXCommPack *)&v38);
  return v5;
}


int __cdecl sub_5578662C(int a1, LPSTR lpMultiByteStr, int a3)
{
  LPCWSTR *v3; // ebx@1
  _WORD *v4; // ecx@1
  unsigned __int16 v5; // ax@2
  signed int v7; // eax@6
  int v8; // edi@6
  size_t v9; // esi@6
  unsigned __int16 v10; // ax@6
  unsigned int v11; // edi@6
  DWORD v12; // eax@7
  CTXCommPack *v13; // ecx@10
  int v14; // [sp+14h] [bp+8h]@2

  v3 = (LPCWSTR *)a1;
  v4 = *(_WORD **)a1;
  if ( *(_DWORD *)a1 + 1 <= (unsigned int)lpMultiByteStr )
  {
    v5 = *v4;
    v14 = *v4;
    *v3 = v4 + 1;
    if ( !v5 )
    {
      CTXCommPack::AddWord((CTXCommPack *)a3, 0, 1);
      return 1;
    }
    if ( (char *)v4 + v5 + 1 <= lpMultiByteStr )
    {
      v7 = (signed int)floor((double)v5 * 1.5);
      v8 = (unsigned __int16)v7;
      v9 = (unsigned __int16)v7 + 1;
      lpMultiByteStr = (LPSTR)sub_557FC521(v9);
      memset(lpMultiByteStr, 0, v9);
      v10 = WideCharToMultiByte(0xFDE9u, 0, *v3, (unsigned int)(unsigned __int16)v14 >> 1, lpMultiByteStr, v8, 0, 0);
      v11 = v10;
      if ( v10 )
      {
        v13 = (CTXCommPack *)a3;
        *v3 = (LPCWSTR)((char *)*v3 + (unsigned __int16)v14);
        CTXCommPack::AddWord(v13, v10, 1);
        CTXCommPack::AddBuf((CTXCommPack *)a3, (const unsigned __int8 *)lpMultiByteStr, v11);
        sub_55743CD0((volatile LONG *)&lpMultiByteStr);
        return 1;
      }
      sub_55743CD0((volatile LONG *)&lpMultiByteStr);
      *v3 = (LPCWSTR)((char *)*v3 + (unsigned __int16)v14);
      v12 = GetLastError();
      sub_556B2C12(L"file", 2404, L"func", 1, L"Msg", (const char *)L"AppendUTF8LenValueFromUTF16 error:%u", v12);
    }
  }
  return 0;
}

//lpMultiByteStr 为发送内容字符串
int __cdecl sub_557978E9(int a1, LPSTR lpMultiByteStr, int a3)
{
  CHAR *v3; // ebx@1
  void (__thiscall *v4)(CTXCommPack *, unsigned __int8); // edx@1
  signed int v5; // esi@1
  const unsigned __int8 *v6; // eax@1
  unsigned __int8 v7; // cl@4
  _WORD *v8; // edx@9
  int v9; // eax@10
  int v10; // edx@10
  int v11; // eax@12
  unsigned int v12; // esi@17
  int v14; // [sp+Ch] [bp-40h]@1
  _DWORD (__thiscall *v15)(CTXCommPack *__hidden, const unsigned __int8 *, unsigned int); // [sp+34h] [bp-18h]@2
  int v16; // [sp+38h] [bp-14h]@4
  int v17; // [sp+3Ch] [bp-10h]@11
  int (__thiscall *v18)(CTXCommPack *__hidden, const struct CTXBuffer *); // [sp+40h] [bp-Ch]@2
  _DWORD (__thiscall *v19)(CTXCommPack *__hidden, unsigned __int16, signed int); // [sp+44h] [bp-8h]@2
  int v20; // [sp+48h] [bp-4h]@20

  v3 = lpMultiByteStr;
  CTXCommPack::CTXCommPack((CTXCommPack *)&v14);
  v4 = (void (__thiscall *)(CTXCommPack *, unsigned __int8))CTXCommPack::AddByte;
  v5 = 1;
  v6 = *(const unsigned __int8 **)a1;
  if ( *(_DWORD *)a1 <= (unsigned int)v3 )
  {
    v19 = CTXCommPack::AddWord;
    v15 = CTXCommPack::AddBuf;
    v18 = CTXCommPack::AddBuf;
    while ( 1 )
    {
      v7 = *v6;
      LOBYTE(v16) = v7;
      if ( v7 == 1 )
      {
        v4((CTXCommPack *)&v14, v5);
        ++*(_DWORD *)a1;
		//v3 为内容字符串
        if ( !sub_5578662C(a1, v3, (int)&v14) ) //55797954 ================> sub_5578662C
          goto LABEL_6;
      }
      else if ( v7 == 6 || v7 == 7 )
      {
        v4((CTXCommPack *)&v14, v16);
        if ( ++*(_DWORD *)a1 + 1 > (unsigned int)v3
          || (v12 = **(_WORD **)a1,
              v19((CTXCommPack *)&v14, v12, 1),
              *(_DWORD *)a1 += 2,
              v12 + *(_DWORD *)a1 - 1 > (unsigned int)v3) )
        {
LABEL_6:
          v5 = 0;
          goto LABEL_22;
        }
        v15((CTXCommPack *)&v14, *(const unsigned __int8 **)a1, v12);
        *(_DWORD *)a1 += v12;
        v5 = 1;
      }
      else
      {
        v8 = v6 + 1;
        *(_DWORD *)a1 = v6 + 1;
        if ( v6 + 2 > (const unsigned __int8 *)v3 )
          goto LABEL_6;
        v9 = *v8;
        v10 = (int)(v8 + 1);
        *(_DWORD *)a1 = v10;
        if ( v7 == 8 )
        {
          v17 = v9;
          if ( v10 + v9 - 1 > (unsigned int)v3 )
            goto LABEL_6;
          lpMultiByteStr = 0;
          sub_556B267E(v10, v9);
          CTXCommPack::AddByte((CTXCommPack *)&v14, 11u);
          v11 = sub_556B28D6(&lpMultiByteStr);
          v19((CTXCommPack *)&v14, v11, 1);
          v18((CTXCommPack *)&v14, (const struct CTXBuffer *)&lpMultiByteStr);
          *(_DWORD *)a1 += v17;
          if ( lpMultiByteStr )
            (*(void (__stdcall **)(LPSTR))(*(_DWORD *)lpMultiByteStr + 8))(lpMultiByteStr);
        }
        else
        {
          if ( v10 + v9 - 1 > (unsigned int)v3 )
            goto LABEL_6;
          *(_DWORD *)a1 = v10 + v9;
        }
      }
      v6 = *(const unsigned __int8 **)a1;
      if ( *(_DWORD *)a1 > (unsigned int)v3 )
        break;
      v4 = (void (__thiscall *)(CTXCommPack *, unsigned __int8))CTXCommPack::AddByte;
    }
  }
  v20 = 0;
  CTXCommPack::GetBufferOut((CTXCommPack *)&v14, (struct CTXBuffer *)&v20);
  CTXCommPack::AddByte((CTXCommPack *)a3, 1u);
  CTXCommPack::AddBufLenWord((CTXCommPack *)a3, (const struct CTXBuffer *)&v20, 1);
  if ( v20 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v20 + 8))(v20);
    v20 = 0;
  }
LABEL_22:
  CTXCommPack::~CTXCommPack((CTXCommPack *)&v14);
  return v5;
}


//lpMultiByteStr  为内容字符串  dump [ebp+0x8], dump [edi] 在x64dbg里用 地址显示数据,注释栏可看到文本
int __cdecl sub_5578662C(int a1, LPSTR lpMultiByteStr, int a3)
{
  LPCWSTR *v3; // ebx@1
  _WORD *v4; // ecx@1
  unsigned __int16 v5; // ax@2
  signed int v7; // eax@6
  int v8; // edi@6
  size_t v9; // esi@6
  unsigned __int16 v10; // ax@6
  unsigned int v11; // edi@6
  DWORD v12; // eax@7
  CTXCommPack *v13; // ecx@10
  int v14; // [sp+14h] [bp+8h]@2

  v3 = (LPCWSTR *)a1;
  v4 = *(_WORD **)a1;
  if ( *(_DWORD *)a1 + 1 <= (unsigned int)lpMultiByteStr )
  {
    v5 = *v4;
    v14 = *v4;
    *v3 = v4 + 1;
    if ( !v5 )
    {
      CTXCommPack::AddWord((CTXCommPack *)a3, 0, 1);
      return 1;
    }
    if ( (char *)v4 + v5 + 1 <= lpMultiByteStr )
    {
      v7 = (signed int)floor((double)v5 * 1.5);
      v8 = (unsigned __int16)v7;
      v9 = (unsigned __int16)v7 + 1;
      lpMultiByteStr = (LPSTR)sub_557FC521(v9);
      memset(lpMultiByteStr, 0, v9);	 
      v10 = WideCharToMultiByte(0xFDE9u, 0, *v3, (unsigned int)(unsigned __int16)v14 >> 1, lpMultiByteStr, v8, 0, 0); // lpMultiByteStr 放入 a1?
      v11 = v10;
      if ( v10 )
      {
        v13 = (CTXCommPack *)a3;
        *v3 = (LPCWSTR)((char *)*v3 + (unsigned __int16)v14);
        CTXCommPack::AddWord(v13, v10, 1);
		//lpMultiByteStr,第二次调用时是消息框内容   dump [ebp+c] 
        CTXCommPack::AddBuf((CTXCommPack *)a3, (const unsigned __int8 *)lpMultiByteStr, v11);  //55786729 =========> CTXCommPack::AddBuf(CTXCommPack *this, const unsigned __int8 *Src, unsigned int Size)
        sub_55743CD0((volatile LONG *)&lpMultiByteStr);
        return 1;
      }
      sub_55743CD0((volatile LONG *)&lpMultiByteStr);
      *v3 = (LPCWSTR)((char *)*v3 + (unsigned __int16)v14);
      v12 = GetLastError();
      sub_556B2C12(L"file", 2404, L"func", 1, L"Msg", (const char *)L"AppendUTF8LenValueFromUTF16 error:%u", v12);
    }
  }
  return 0;
}

int __thiscall CTXCommPack::AddBuf(CTXCommPack *this, const unsigned __int8 *Src, unsigned int Size)
{
  CTXCommPack *v3; // esi@1
  int v4; // eax@1

  v3 = this;
  v4 = *((_DWORD *)this + 9);
  if ( v4 )
  {
    if ( v4 != 1 )
      return 0;
  }
  else
  {
    *((_DWORD *)this + 9) = 1;
  }
  if ( !Size )
    return 1;
  if ( Src && CTXCommPack::CheckBuffer(this, Size) )
  {
    memcpy((void *)(*((_DWORD *)v3 + 1) + *((_DWORD *)v3 + 3)), Src, Size);
    *((_DWORD *)v3 + 1) += Size;
    return 1;
  }
  return 0;
}


 





//=============================================================================================
//557978E9

557978FE 8B 7D 08                                mov     edi, [ebp+arg_0]

55797947 FF 07                                   inc     dword ptr [edi]   //inc arg_0 = arg_1

5579794E | 57                  | push edi                                  | edi  //内容
5579794F | E8 D8ECFEFF         | call kernelutil.5578662C                  | 

//============================================================================================= 


5579705F 8B 4D F8                                mov     ecx, [ebp+var_8]
55797062 8B 55 EC                                mov     edx, [ebp+lpMultiByteStr]
55797065 8A 01                                   mov     al, [ecx]
55797067 88 45 E8                                mov     byte ptr [ebp+var_18], al
5579706A 8D 41 02                                lea     eax, [ecx+2]
5579706D 3B C2                                   cmp     eax, edx
5579706F 0F 87 BC 03 00 00                       ja      loc_55797431
55797075 0F B7 41 01                             movzx   eax, word ptr [ecx+1]
55797079 83 C1 03                                add     ecx, 3
5579707C 89 4D F8                                mov     [ebp+var_8], ecx
5579707F 66 85 C0                                test    ax, ax
55797082 0F 84 2C 03 00 00                       jz      loc_557973B4
55797088 8D 70 FF                                lea     esi, [eax-1]
5579708B 89 45 08                                mov     [ebp+arg_0], eax
5579708E 0F B6 45 E8                             movzx   eax, byte ptr [ebp+var_18]
55797092 03 F1                                   add     esi, ecx
 
5579721C | 56                  | push esi                                  | arg_1  //内容
5579721D | 50                  | push eax                                  | arg_0
5579721E | E8 C6060000         | call kernelutil.557978E9                  |  



 
//-------------------
{
.text:55796DC3                         sub_55796DC3    proc near               ; CODE XREF: Util::Msg::TranslateMsgPackToBuddyMsg(ITXMsgPack *,CTXBuffer &)+Dp
.text:55796DC3                                                                 ; Util::Msg::TranslateMsgPackToBuddyMsgWithOfflinePic(ITXMsgPack *,CTXBuffer &,ITXArray *)+Ep ...
.text:55796DC3
.text:55796DC3                         var_58          = dword ptr -58h
.text:55796DC3                         var_30          = dword ptr -30h
.text:55796DC3                         var_2C          = dword ptr -2Ch
.text:55796DC3                         var_28          = dword ptr -28h
.text:55796DC3                         var_24          = dword ptr -24h
.text:55796DC3                         var_20          = dword ptr -20h
.text:55796DC3                         var_1C          = dword ptr -1Ch
.text:55796DC3                         var_18          = dword ptr -18h
.text:55796DC3                         lpMultiByteStr  = dword ptr -14h
.text:55796DC3                         var_10          = dword ptr -10h
.text:55796DC3                         var_C           = dword ptr -0Ch
.text:55796DC3                         var_8           = dword ptr -8
.text:55796DC3                         var_1           = byte ptr -1
.text:55796DC3                         arg_0           = dword ptr  8
.text:55796DC3                         arg_4           = dword ptr  0Ch
.text:55796DC3                         arg_8           = dword ptr  10h
.text:55796DC3                         arg_C           = dword ptr  14h
.text:55796DC3
.text:55796DC3 55                                      push    ebp
.text:55796DC4 8B EC                                   mov     ebp, esp
.text:55796DC6 8B 4D 0C                                mov     ecx, [ebp+arg_4]
.text:55796DC9 83 EC 58                                sub     esp, 58h
.text:55796DCC 8B 09                                   mov     ecx, [ecx]
.text:55796DCE 85 C9                                   test    ecx, ecx
.text:55796DD0 74 06                                   jz      short loc_55796DD8
.text:55796DD2 8B 01                                   mov     eax, [ecx]
.text:55796DD4 51                                      push    ecx
.text:55796DD5 FF 50 20                                call    dword ptr [eax+20h]
.text:55796DD8
.text:55796DD8                         loc_55796DD8:                           ; CODE XREF: sub_55796DC3+Dj
.text:55796DD8 53                                      push    ebx
.text:55796DD9 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796DDC FF 15 EC 12 80 55                       call    ds:??0CTXCommPack@@QAE@XZ ; CTXCommPack::CTXCommPack(void)
.text:55796DE2 8B 5D 08                                mov     ebx, [ebp+arg_0] //ebx .......................................................................................................>  
.text:55796DE5 85 DB                                   test    ebx, ebx
.text:55796DE7 0F 84 21 02 00 00                       jz      loc_5579700E
.text:55796DED 33 C0                                   xor     eax, eax
.text:55796DEF 21 45 E4                                and     [ebp+var_1C], eax
.text:55796DF2 56                                      push    esi
.text:55796DF3 33 F6                                   xor     esi, esi
.text:55796DF5 89 45 E0                                mov     [ebp+var_20], eax
.text:55796DF8 57                                      push    edi             ; struct ITXMsgImage *
.text:55796DF9 89 75 DC                                mov     [ebp+var_24], esi
.text:55796DFC 39 45 10                                cmp     [ebp+arg_8], eax
.text:55796DFF 0F 85 E7 00 00 00                       jnz     loc_55796EEC
.text:55796E05 39 45 14                                cmp     [ebp+arg_C], eax
.text:55796E08 0F 85 DE 00 00 00                       jnz     loc_55796EEC
.text:55796E0E 21 45 E8                                and     [ebp+var_18], eax
.text:55796E11 8D 4D E8                                lea     ecx, [ebp+var_18]
.text:55796E14 8B 03                                   mov     eax, [ebx] // [2000] .......................................................................................................>  
.text:55796E16 51                                      push    ecx
.text:55796E17 53                                      push    ebx
.text:55796E18 FF 50 40                                call    dword ptr [eax+40h]
.text:55796E1B 33 C9                                   xor     ecx, ecx
.text:55796E1D 89 4D F4                                mov     [ebp+var_C], ecx
.text:55796E20 39 4D E8                                cmp     [ebp+var_18], ecx
.text:55796E23 0F 86 C0 00 00 00                       jbe     loc_55796EE9
.text:55796E29 8B 3D D8 16 80 55                       mov     edi, ds:??1CTXBSTR@@QAE@XZ ; CTXBSTR::~CTXBSTR(void)
.text:55796E2F
.text:55796E2F                         loc_55796E2F:                           ; CODE XREF: sub_55796DC3+11Dj
.text:55796E2F 8B 03                                   mov     eax, [ebx] // [2010] .......................................................................................................>  
.text:55796E31 8D 55 FF                                lea     edx, [ebp+var_1]
.text:55796E34 52                                      push    edx
.text:55796E35 51                                      push    ecx
.text:55796E36 53                                      push    ebx
.text:55796E37 C6 45 FF 00                             mov     [ebp+var_1], 0
.text:55796E3B FF 50 44                                call    dword ptr [eax+44h]
.text:55796E3E 85 C0                                   test    eax, eax
.text:55796E40 0F 88 90 00 00 00                       js      loc_55796ED6
.text:55796E46 80 7D FF 03                             cmp     [ebp+var_1], 3
.text:55796E4A 0F 85 86 00 00 00                       jnz     loc_55796ED6
.text:55796E50 8B 03                                   mov     eax, [ebx]	// [2020] .......................................................................................................>  
.text:55796E52 8D 4D F8                                lea     ecx, [ebp+var_8]
.text:55796E55 83 65 F8 00                             and     [ebp+var_8], 0
.text:55796E59 51                                      push    ecx
.text:55796E5A 68 A4 06 82 55                          push    offset unk_558206A4
.text:55796E5F FF 75 F4                                push    [ebp+var_C]
.text:55796E62 53                                      push    ebx
.text:55796E63 FF 50 48                                call    dword ptr [eax+48h]
.text:55796E66 85 C0                                   test    eax, eax
.text:55796E68 78 64                                   js      short loc_55796ECE
.text:55796E6A 83 7D F8 00                             cmp     [ebp+var_8], 0
.text:55796E6E 74 5E                                   jz      short loc_55796ECE
.text:55796E70 68 E8 68 82 55                          push    offset aC2c     ; "C2C"
.text:55796E75 8D 4D EC                                lea     ecx, [ebp+lpMultiByteStr]
.text:55796E78 FF 15 08 11 80 55                       call    ds:??0CTXBSTR@@QAE@PB_W@Z ; CTXBSTR::CTXBSTR(wchar_t const *)
.text:55796E7E 8B 75 F8                                mov     esi, [ebp+var_8]	 // [3010] .......................................................................................................>  	 
.text:55796E81 8D 4D EC                                lea     ecx, [ebp+lpMultiByteStr]
.text:55796E84 FF 15 94 13 80 55                       call    ds:??BCTXBSTR@@QBEPA_WXZ ; CTXBSTR::operator wchar_t *(void)

.text:55796E8A 56                                      push    esi             ; wchar_t *
.text:55796E8B 50                                      push    eax             ; this
.text:55796E8C E8 FF AE FF FF                          call    ?PreTranslateMsgImage@Msg@Util@@YAHPA_WPAUITXMsgImage@@@Z ; Util::Msg::PreTranslateMsgImage(wchar_t *,ITXMsgImage *)
.text:55796E91 59                                      pop     ecx  // esi  [3020] .......................................................................................................>  	
.text:55796E92 59                                      pop     ecx


.text:55796E93 85 C0                                   test    eax, eax
.text:55796E95 75 32                                   jnz     short loc_55796EC9
.text:55796E97 FF 75 F4                                push    [ebp+var_C]
.text:55796E9A 68 F0 68 82 55                          push    offset aPretranslatems ; "PreTranslateMsgImage Fail, Index = [%d]"
.text:55796E9F 68 E4 41 82 55                          push    offset aUtilmsg ; "UtilMsg"
.text:55796EA4 6A 02                                   push    2
.text:55796EA6 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55796EAB 68 E8 20 00 00                          push    20E8h
.text:55796EB0 68 70 26 80 55                          push    offset aFile    ; "file"
.text:55796EB5 E8 58 BD F1 FF                          call    sub_556B2C12
.text:55796EBA 83 C4 1C                                add     esp, 1Ch
.text:55796EBD 8D 45 F4                                lea     eax, [ebp+var_C] // [2030] .......................................................................................................>  
.text:55796EC0 8D 4D DC                                lea     ecx, [ebp+var_24]
.text:55796EC3 50                                      push    eax
.text:55796EC4 E8 5E B1 F2 FF                          call    sub_556C2027
.text:55796EC9
.text:55796EC9                         loc_55796EC9:                           ; CODE XREF: sub_55796DC3+D2j
.text:55796EC9 8D 4D EC                                lea     ecx, [ebp+lpMultiByteStr]
.text:55796ECC FF D7                                   call    edi ; CTXBSTR::~CTXBSTR(void) ; CTXBSTR::~CTXBSTR(void)
.text:55796ECE
.text:55796ECE                         loc_55796ECE:                           ; CODE XREF: sub_55796DC3+A5j
.text:55796ECE                                                                 ; sub_55796DC3+ABj
.text:55796ECE 8D 4D F8                                lea     ecx, [ebp+var_8]	//.......................................................................................................>  
.text:55796ED1 E8 DA B4 F1 FF                          call    sub_556B23B0
.text:55796ED6
.text:55796ED6                         loc_55796ED6:                           ; CODE XREF: sub_55796DC3+7Dj
.text:55796ED6                                                                 ; sub_55796DC3+87j
.text:55796ED6 8B 4D F4                                mov     ecx, [ebp+var_C]
.text:55796ED9 41                                      inc     ecx
.text:55796EDA 89 4D F4                                mov     [ebp+var_C], ecx
.text:55796EDD 3B 4D E8                                cmp     ecx, [ebp+var_18]
.text:55796EE0 0F 82 49 FF FF FF                       jb      loc_55796E2F
.text:55796EE6 8B 75 DC                                mov     esi, [ebp+var_24] // [3030] .......................................................................................................>  
.text:55796EE9
.text:55796EE9                         loc_55796EE9:                           ; CODE XREF: sub_55796DC3+60j
.text:55796EE9 8B 45 E0                                mov     eax, [ebp+var_20] // [2040] .......................................................................................................>  
.text:55796EEC
.text:55796EEC                         loc_55796EEC:                           ; CODE XREF: sub_55796DC3+3Cj
.text:55796EEC                                                                 ; sub_55796DC3+45j
.text:55796EEC 8B F8                                   mov     edi, eax
.text:55796EEE 33 C9                                   xor     ecx, ecx
.text:55796EF0 2B FE                                   sub     edi, esi
.text:55796EF2 33 D2                                   xor     edx, edx
.text:55796EF4 83 C7 03                                add     edi, 3
.text:55796EF7 C1 EF 02                                shr     edi, 2
.text:55796EFA 3B F0                                   cmp     esi, eax
.text:55796EFC 0F 47 F9                                cmova   edi, ecx
.text:55796EFF 85 FF                                   test    edi, edi
.text:55796F01 EB 14                                   jmp     short loc_55796F17
.text:55796F03                         ; ---------------------------------------------------------------------------
.text:55796F03
.text:55796F03                         loc_55796F03:                           ; CODE XREF: sub_55796DC3+157j
.text:55796F03 8B 06                                   mov     eax, [esi] // [2050] .......................................................................................................>  
.text:55796F05 8B 0B                                   mov     ecx, [ebx]
.text:55796F07 2B C2                                   sub     eax, edx // [2060] .......................................................................................................>  
.text:55796F09 50                                      push    eax
.text:55796F0A 53                                      push    ebx
.text:55796F0B FF 51 4C                                call    dword ptr [ecx+4Ch]
.text:55796F0E 8B 55 E8                                mov     edx, [ebp+var_18]
.text:55796F11 8D 76 04                                lea     esi, [esi+4] // [3040] .......................................................................................................>  
.text:55796F14 42                                      inc     edx
.text:55796F15 3B D7                                   cmp     edx, edi
.text:55796F17
.text:55796F17                         loc_55796F17:                           ; CODE XREF: sub_55796DC3+13Ej
.text:55796F17 89 55 E8                                mov     [ebp+var_18], edx
.text:55796F1A 75 E7                                   jnz     short loc_55796F03
.text:55796F1C 8B 03                                   mov     eax, [ebx]  // 未触发 [2070] .......................................................................................................>  

.text:55796F1E 8D 4D F0                                lea     ecx, [ebp+var_10]  //ecx 引用 ebp-10
.text:55796F21 83 65 F0 00                             and     [ebp+var_10], 0
.text:55796F25 51                                      push    ecx
.text:55796F26 53                                      push    ebx
																//传入 ecx 获得源内容
.text:55796F27 FF 50 18                                call    dword ptr [eax+18h]  //   => 557EF0F9   获得内容 ebp-10  //dump [[ebp-10]+8] +27   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
.text:55796F2A 85 C0                                   test    eax, eax
.text:55796F2C 0F 88 BF 00 00 00                       js      loc_55796FF1
.text:55796F32 8D 4D F0                                lea     ecx, [ebp+var_10] // =======================>  dump [[ebp-10]+8]  实例
.text:55796F35 E8 7B B9 F1 FF                          call    sub_556B28B5  // =======================> 获得内容  dump eax+17 / dump [[ebp-10]+8] +17 /dump [[ebp-10]+8] +27
.text:55796F3A 8B F0                                   mov     esi, eax	// eax [3050] .......................................................................................................>  
.text:55796F3C 8D 4D F0                                lea     ecx, [ebp+var_10]
.text:55796F3F 89 75 F4                                mov     [ebp+var_C], esi // .......................................................................................................>  
.text:55796F42 E8 8F B9 F1 FF                          call    sub_556B28D6
.text:55796F47 8D 48 FF                                lea     ecx, [eax-1]
.text:55796F4A 03 CE                                   add     ecx, esi
.text:55796F4C 8D 46 17                                lea     eax, [esi+17h]// dump esi+17 内容    [2080] .......................................................................................................>  
.text:55796F4F 89 4D EC                                mov     [ebp+lpMultiByteStr], ecx
.text:55796F52 3B C1                                   cmp     eax, ecx
.text:55796F54 0F 87 97 00 00 00                       ja      loc_55796FF1
.text:55796F5A 8B 3D FC 12 80 55                       mov     edi, ds:?AddBuf@CTXCommPack@@QAEHPBEI@Z ; CTXCommPack::AddBuf(uchar const *,uint)
.text:55796F60 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796F63 6A 04                                   push    4
.text:55796F65 56                                      push    esi
.text:55796F66 FF D7                                   call    edi ; CTXCommPack::AddBuf(uchar const *,uint) ; CTXCommPack::AddBuf(uchar const *,uint)
.text:55796F68 33 DB                                   xor     ebx, ebx
.text:55796F6A 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796F6D 43                                      inc     ebx
.text:55796F6E 53                                      push    ebx
.text:55796F6F FF 76 04                                push    dword ptr [esi+4]
.text:55796F72 8B 35 6C 15 80 55                       mov     esi, ds:?AddDWord@CTXCommPack@@QAEHKH@Z ; CTXCommPack::AddDWord(ulong,int)
.text:55796F78 FF D6                                   call    esi ; CTXCommPack::AddDWord(ulong,int) ; CTXCommPack::AddDWord(ulong,int)
.text:55796F7A 8B 45 F4                                mov     eax, [ebp+var_C]
.text:55796F7D 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796F80 53                                      push    ebx
.text:55796F81 FF 70 08                                push    dword ptr [eax+8]
.text:55796F84 FF D6                                   call    esi ; CTXCommPack::AddDWord(ulong,int) ; CTXCommPack::AddDWord(ulong,int)
.text:55796F86 8B 45 F4                                mov     eax, [ebp+var_C]
.text:55796F89 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796F8C 53                                      push    ebx
.text:55796F8D FF 70 0C                                push    dword ptr [eax+0Ch]
.text:55796F90 FF D6                                   call    esi ; CTXCommPack::AddDWord(ulong,int) ; CTXCommPack::AddDWord(ulong,int)
.text:55796F92 8B 45 F4                                mov     eax, [ebp+var_C] // [2090] .......................................................................................................>  
.text:55796F95 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796F98 53                                      push    ebx
.text:55796F99 FF 70 10                                push    dword ptr [eax+10h]
.text:55796F9C FF D6                                   call    esi ; CTXCommPack::AddDWord(ulong,int) ; CTXCommPack::AddDWord(ulong,int)
.text:55796F9E 8B 75 F4                                mov     esi, [ebp+var_C] // .......................................................................................................>  
.text:55796FA1 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55796FA4 6A 04                                   push    4
.text:55796FA6 83 C6 14                                add     esi, 14h   
.text:55796FA9 56                                      push    esi
.text:55796FAA FF D7                                   call    edi ; CTXCommPack::AddBuf(uchar const *,uint) ; CTXCommPack::AddBuf(uchar const *,uint)
.text:55796FAC 8D 46 04                                lea     eax, [esi+4]	// [2100] .......................................................................................................>  
.text:55796FAF 8B 75 EC                                mov     esi, [ebp+lpMultiByteStr]


													[ 000000000000 ]
.text:55796FB2 89 45 F8                                mov     [ebp+var_8], eax		// 赋值  dump eax .......................................................................................................>  
.text:55796FB5 8D 45 A8                                lea     eax, [ebp+var_58]   		
.text:55796FB8 50                                      push    eax             ; int
.text:55796FB9 8D 45 F8                                lea     eax, [ebp+var_8]		//.......................................................................................................>  
.text:55796FBC 56                                      push    esi             ; lpMultiByteStr
.text:55796FBD 50                                      push    eax             ; int
.text:55796FBE E8 69 F6 FE FF                          call    sub_5578662C
.text:55796FC3 83 C4 0C                                add     esp, 0Ch
.text:55796FC6 85 C0                                   test    eax, eax
.text:55796FC8 75 52                                   jnz     short loc_5579701C
.text:55796FCA 68 D8 3A 82 55                          push    offset aTranslatemsgpa ; "TranslateMsgPackToSessionMsg font name "...
.text:55796FCF 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55796FD4 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55796FD9 53                                      push    ebx
.text:55796FDA 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55796FDF 68 3C 21 00 00                          push    213Ch
.text:55796FE4 68 70 26 80 55                          push    offset aFile    ; "file"
.text:55796FE9 E8 24 BC F1 FF                          call    sub_556B2C12
.text:55796FEE 83 C4 1C                                add     esp, 1Ch
.text:55796FF1
.text:55796FF1                         loc_55796FF1:                           ; CODE XREF: sub_55796DC3+169j
.text:55796FF1                                                                 ; sub_55796DC3+191j ...
.text:55796FF1 33 DB                                   xor     ebx, ebx
.text:55796FF3
.text:55796FF3                         loc_55796FF3:                           ; CODE XREF: sub_55796DC3+611j
.text:55796FF3 8B 45 F0                                mov     eax, [ebp+var_10]
.text:55796FF6 5F                                      pop     edi
.text:55796FF7 5E                                      pop     esi
.text:55796FF8 85 C0                                   test    eax, eax
.text:55796FFA 74 0A                                   jz      short loc_55797006
.text:55796FFC 8B 08                                   mov     ecx, [eax]
.text:55796FFE 50                                      push    eax
.text:55796FFF FF 51 08                                call    dword ptr [ecx+8]
.text:55797002 83 65 F0 00                             and     [ebp+var_10], 0
.text:55797006
.text:55797006                         loc_55797006:                           ; CODE XREF: sub_55796DC3+237j
.text:55797006 8D 4D DC                                lea     ecx, [ebp+var_24]
.text:55797009 E8 47 E2 F1 FF                          call    sub_556B5255
.text:5579700E
.text:5579700E                         loc_5579700E:                           ; CODE XREF: sub_55796DC3+24j
.text:5579700E 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:55797011 FF 15 F0 12 80 55                       call    ds:??1CTXCommPack@@UAE@XZ ; CTXCommPack::~CTXCommPack(void)
.text:55797017 8B C3                                   mov     eax, ebx
.text:55797019 5B                                      pop     ebx
.text:5579701A C9                                      leave
.text:5579701B C3                                      retn
.text:5579701C                         ; ---------------------------------------------------------------------------
.text:5579701C
.text:5579701C                         loc_5579701C:                           ; CODE XREF: sub_55796DC3+205j
.text:5579701C 8B 7D F8                                mov     edi, [ebp+var_8]	//  dump [[ebp+8]] 赋值 ...............................> edi
.text:5579701F 8D 47 01                                lea     eax, [edi+1]
.text:55797022 3B C6                                   cmp     eax, esi
.text:55797024 77 CB                                   ja      short loc_55796FF1
.text:55797026 0F B7 37                                movzx   esi, word ptr [edi] 	//...............................> esi
.text:55797029 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:5579702C 53                                      push    ebx
.text:5579702D 6A 00                                   push    0
.text:5579702F FF 15 68 15 80 55                       call    ds:?AddWord@CTXCommPack@@QAEHGH@Z ; CTXCommPack::AddWord(ushort,int)

.text:55797035 8B C6                                   mov     eax, esi		//...............................>  eax,esi 为内容偏移量 	

.text:55797037 8D 4F 02                                lea     ecx, [edi+2]	//...............................> dump edi  //内容
.text:5579703A 8B 7D EC                                mov     edi, [ebp+lpMultiByteStr]
.text:5579703D 03 C8                                   add     ecx, eax			//...............................> [ecx] //内容
.text:5579703F 8D 41 FF                                lea     eax, [ecx-1]
.text:55797042 3B C7                                   cmp     eax, edi
.text:55797044 77 AB                                   ja      short loc_55796FF1
.text:55797046 33 C0                                   xor     eax, eax
.text:55797048 89 4D F8                                mov     [ebp+var_8], ecx		 //...............................>dump ecx//内容
.text:5579704B 89 45 D0                                mov     [ebp+var_30], eax
.text:5579704E 89 45 D4                                mov     [ebp+var_2C], eax
.text:55797051 89 45 D8                                mov     [ebp+var_28], eax
.text:55797054 3B CF                                   cmp     ecx, edi
.text:55797056 0F 87 64 03 00 00                       ja      loc_557973C0
.text:5579705C 8B 7D 08                                mov     edi, [ebp+arg_0] 
.text:5579705F
.text:5579705F                         loc_5579705F:                           ; CODE XREF: sub_55796DC3+5F7j  //dump ecx
.text:5579705F 8B 4D F8                                mov     ecx, [ebp+var_8] //...............................>[ebp+var_8], ecx//内容
.text:55797062 8B 55 EC                                mov     edx, [ebp+lpMultiByteStr]
.text:55797065 8A 01                                   mov     al, [ecx]
.text:55797067 88 45 E8                                mov     byte ptr [ebp+var_18], al
.text:5579706A 8D 41 02                                lea     eax, [ecx+2]
.text:5579706D 3B C2                                   cmp     eax, edx
.text:5579706F 0F 87 BC 03 00 00                       ja      loc_55797431			
.text:55797075 0F B7 41 01                             movzx   eax, word ptr [ecx+1] //...............................>[eax-1], ecx//内容
.text:55797079 83 C1 03                                add     ecx, 3 //...............................>dump ecx//内容
.text:5579707C 89 4D F8                                mov     [ebp+var_8], ecx
.text:5579707F 66 85 C0                                test    ax, ax
.text:55797082 0F 84 2C 03 00 00                       jz      loc_557973B4
.text:55797088 8D 70 FF                                lea     esi, [eax-1]	//...............................>esi= arg_1  //内容
.text:5579708B 89 45 08                                mov     [ebp+arg_0], eax
.text:5579708E 0F B6 45 E8                             movzx   eax, byte ptr [ebp+var_18]
.text:55797092 03 F1                                   add     esi, ecx   //...............................>esi= arg_1  //内容




.text:55797094 83 F8 0D                                cmp     eax, 0Dh
.text:55797097 0F 87 E8 01 00 00                       ja      loc_55797285
.text:5579709D 0F 84 AA 01 00 00                       jz      loc_5579724D
.text:557970A3 83 E8 01                                sub     eax, 1
.text:557970A6 0F 84 69 01 00 00                       jz      loc_55797215
.text:557970AC 83 E8 01                                sub     eax, 1
.text:557970AF 0F 84 28 01 00 00                       jz      loc_557971DD
.text:557970B5 83 E8 01                                sub     eax, 1
.text:557970B8 0F 84 C2 00 00 00                       jz      loc_55797180
.text:557970BE 83 E8 05                                sub     eax, 5
.text:557970C1 0F 84 81 00 00 00                       jz      loc_55797148
.text:557970C7 83 E8 01                                sub     eax, 1
.text:557970CA 74 41                                   jz      short loc_5579710D
.text:557970CC 83 E8 03                                sub     eax, 3
.text:557970CF 0F 85 D6 01 00 00                       jnz     loc_557972AB
.text:557970D5 8D 45 A8                                lea     eax, [ebp+var_58]
.text:557970D8 50                                      push    eax             ; int
.text:557970D9 8D 45 F8                                lea     eax, [ebp+var_8]
.text:557970DC 56                                      push    esi             ; lpMultiByteStr
.text:557970DD 50                                      push    eax             ; int
.text:557970DE E8 08 04 00 00                          call    sub_557974EB
.text:557970E3 83 C4 0C                                add     esp, 0Ch
.text:557970E6 85 C0                                   test    eax, eax
.text:557970E8 0F 85 C6 02 00 00                       jnz     loc_557973B4
.text:557970EE 68 48 3C 82 55                          push    offset aTranslatemsg_0 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:557970F3 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:557970F8 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:557970FD 53                                      push    ebx
.text:557970FE 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55797103 68 8B 21 00 00                          push    218Bh
.text:55797108 E9 17 03 00 00                          jmp     loc_55797424
.text:5579710D                         ; ---------------------------------------------------------------------------
.text:5579710D
.text:5579710D                         loc_5579710D:                           ; CODE XREF: sub_55796DC3+307j
.text:5579710D FF 75 14                                push    [ebp+arg_C]
.text:55797110 8D 45 A8                                lea     eax, [ebp+var_58]
.text:55797113 50                                      push    eax
.text:55797114 8D 45 F8                                lea     eax, [ebp+var_8]
.text:55797117 56                                      push    esi
.text:55797118 50                                      push    eax
.text:55797119 E8 F8 C8 FF FF                          call    sub_55793A16
.text:5579711E 83 C4 10                                add     esp, 10h
.text:55797121 85 C0                                   test    eax, eax
.text:55797123 0F 85 8B 02 00 00                       jnz     loc_557973B4
.text:55797129 68 E0 3D 82 55                          push    offset aTranslatemsg_8 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:5579712E 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55797133 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55797138 53                                      push    ebx
.text:55797139 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:5579713E 68 B6 21 00 00                          push    21B6h
.text:55797143 E9 DC 02 00 00                          jmp     loc_55797424
.text:55797148                         ; ---------------------------------------------------------------------------
.text:55797148
.text:55797148                         loc_55797148:                           ; CODE XREF: sub_55796DC3+2FEj
.text:55797148 8D 45 A8                                lea     eax, [ebp+var_58]
.text:5579714B 50                                      push    eax
.text:5579714C 8D 45 F8                                lea     eax, [ebp+var_8]
.text:5579714F 56                                      push    esi
.text:55797150 50                                      push    eax
.text:55797151 E8 E5 CD FF FF                          call    sub_55793F3B
.text:55797156 83 C4 0C                                add     esp, 0Ch
.text:55797159 85 C0                                   test    eax, eax
.text:5579715B 0F 85 53 02 00 00                       jnz     loc_557973B4
.text:55797161 68 70 3E 82 55                          push    offset aTranslatemsg_1 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:55797166 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:5579716B 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55797170 53                                      push    ebx
.text:55797171 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55797176 68 AD 21 00 00                          push    21ADh
.text:5579717B E9 A4 02 00 00                          jmp     loc_55797424
.text:55797180                         ; ---------------------------------------------------------------------------
.text:55797180
.text:55797180                         loc_55797180:                           ; CODE XREF: sub_55796DC3+2F5j
.text:55797180 8B 07                                   mov     eax, [edi]
.text:55797182 8D 4D 08                                lea     ecx, [ebp+arg_0]
.text:55797185 83 65 08 00                             and     [ebp+arg_0], 0
.text:55797189 51                                      push    ecx
.text:5579718A 57                                      push    edi
.text:5579718B FF 50 28                                call    dword ptr [eax+28h]
.text:5579718E 8B 45 08                                mov     eax, [ebp+arg_0]
.text:55797191 8B CB                                   mov     ecx, ebx
.text:55797193 89 4D F4                                mov     [ebp+var_C], ecx
.text:55797196 85 C0                                   test    eax, eax
.text:55797198 74 12                                   jz      short loc_557971AC
.text:5579719A 8B 08                                   mov     ecx, [eax]
.text:5579719C 8D 55 F4                                lea     edx, [ebp+var_C]
.text:5579719F 52                                      push    edx
.text:557971A0 68 40 69 82 55                          push    offset aBonlysendfilen ; "bOnlySendFileName"
.text:557971A5 50                                      push    eax
.text:557971A6 FF 51 20                                call    dword ptr [ecx+20h]
.text:557971A9 8B 4D F4                                mov     ecx, [ebp+var_C]
.text:557971AC
.text:557971AC                         loc_557971AC:                           ; CODE XREF: sub_55796DC3+3D5j
.text:557971AC 51                                      push    ecx
.text:557971AD FF 75 14                                push    [ebp+arg_C]
.text:557971B0 8D 45 D0                                lea     eax, [ebp+var_30]
.text:557971B3 FF 75 10                                push    [ebp+arg_8]
.text:557971B6 50                                      push    eax
.text:557971B7 8D 45 A8                                lea     eax, [ebp+var_58]
.text:557971BA 50                                      push    eax
.text:557971BB 8D 45 F8                                lea     eax, [ebp+var_8]
.text:557971BE 56                                      push    esi
.text:557971BF 50                                      push    eax
.text:557971C0 E8 81 D1 FF FF                          call    sub_55794346
.text:557971C5 83 C4 1C                                add     esp, 1Ch
.text:557971C8 85 C0                                   test    eax, eax
.text:557971CA 0F 84 09 02 00 00                       jz      loc_557973D9
.text:557971D0 8D 4D 08                                lea     ecx, [ebp+arg_0]
.text:557971D3 E8 D8 B1 F1 FF                          call    sub_556B23B0
.text:557971D8 E9 D7 01 00 00                          jmp     loc_557973B4
.text:557971DD                         ; ---------------------------------------------------------------------------
.text:557971DD
.text:557971DD                         loc_557971DD:                           ; CODE XREF: sub_55796DC3+2ECj
.text:557971DD 8D 45 A8                                lea     eax, [ebp+var_58]
.text:557971E0 50                                      push    eax
.text:557971E1 8D 45 F8                                lea     eax, [ebp+var_8]
.text:557971E4 56                                      push    esi
.text:557971E5 50                                      push    eax
.text:557971E6 E8 5B 05 00 00                          call    sub_55797746
.text:557971EB 83 C4 0C                                add     esp, 0Ch
.text:557971EE 85 C0                                   test    eax, eax
.text:557971F0 0F 85 BE 01 00 00                       jnz     loc_557973B4
.text:557971F6 68 D0 3C 82 55                          push    offset aTranslatemsg_2 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:557971FB 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55797200 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55797205 53                                      push    ebx
.text:55797206 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:5579720B 68 94 21 00 00                          push    2194h
.text:55797210 E9 0F 02 00 00                          jmp     loc_55797424
.text:55797215                         ; ---------------------------------------------------------------------------
.text:55797215
.text:55797215                         loc_55797215:                           ; CODE XREF: sub_55796DC3+2E3j
.text:55797215 8D 45 A8                                lea     eax, [ebp+var_58]
.text:55797218 50                                      push    eax             ; int
.text:55797219 8D 45 F8                                lea     eax, [ebp+var_8]
.text:5579721C 56                                      push    esi             ; lpMultiByteStr     //.............> arg_1  //内容
.text:5579721D 50                                      push    eax             ; int
.text:5579721E E8 C6 06 00 00                          call    sub_557978E9    
.text:55797223 83 C4 0C                                add     esp, 0Ch
.text:55797226 85 C0                                   test    eax, eax
.text:55797228 0F 85 86 01 00 00                       jnz     loc_557973B4
.text:5579722E 68 38 3B 82 55                          push    offset aTranslatemsg_3 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:55797233 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55797238 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:5579723D 53                                      push    ebx
.text:5579723E 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55797243 68 79 21 00 00                          push    2179h
.text:55797248 E9 D7 01 00 00                          jmp     loc_55797424
.text:5579724D                         ; ---------------------------------------------------------------------------
.text:5579724D
.text:5579724D                         loc_5579724D:                           ; CODE XREF: sub_55796DC3+2DAj
.text:5579724D 8D 45 A8                                lea     eax, [ebp+var_58]
.text:55797250 50                                      push    eax             ; int
.text:55797251 8D 45 F8                                lea     eax, [ebp+var_8]
.text:55797254 56                                      push    esi             ; lpMultiByteStr
.text:55797255 50                                      push    eax             ; int
.text:55797256 E8 06 C7 FF FF                          call    sub_55793961
.text:5579725B 83 C4 0C                                add     esp, 0Ch
.text:5579725E 85 C0                                   test    eax, eax
.text:55797260 0F 85 4E 01 00 00                       jnz     loc_557973B4
.text:55797266 68 B8 3B 82 55                          push    offset aTranslatemsg_4 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:5579726B 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55797270 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55797275 53                                      push    ebx
.text:55797276 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:5579727B 68 82 21 00 00                          push    2182h
.text:55797280 E9 9F 01 00 00                          jmp     loc_55797424
.text:55797285                         ; ---------------------------------------------------------------------------
.text:55797285
.text:55797285                         loc_55797285:                           ; CODE XREF: sub_55796DC3+2D4j
.text:55797285 83 E8 0E                                sub     eax, 0Eh
.text:55797288 0F 84 11 01 00 00                       jz      loc_5579739F
.text:5579728E 83 E8 01                                sub     eax, 1
.text:55797291 0F 84 D4 00 00 00                       jz      loc_5579736B
.text:55797297 83 E8 05                                sub     eax, 5
.text:5579729A 0F 84 94 00 00 00                       jz      loc_55797334
.text:557972A0 48                                      dec     eax
.text:557972A1 83 E8 01                                sub     eax, 1
.text:557972A4 74 53                                   jz      short loc_557972F9
.text:557972A6 83 E8 03                                sub     eax, 3
.text:557972A9 74 16                                   jz      short loc_557972C1
.text:557972AB
.text:557972AB                         loc_557972AB:                           ; CODE XREF: sub_55796DC3+30Cj
.text:557972AB 03 4D 08                                add     ecx, [ebp+arg_0]
.text:557972AE 8D 41 FF                                lea     eax, [ecx-1]
.text:557972B1 3B C2                                   cmp     eax, edx
.text:557972B3 0F 87 78 01 00 00                       ja      loc_55797431
.text:557972B9 89 4D F8                                mov     [ebp+var_8], ecx
.text:557972BC E9 F3 00 00 00                          jmp     loc_557973B4
.text:557972C1                         ; ---------------------------------------------------------------------------
.text:557972C1
.text:557972C1                         loc_557972C1:                           ; CODE XREF: sub_55796DC3+4E6j
.text:557972C1 8D 45 A8                                lea     eax, [ebp+var_58]
.text:557972C4 50                                      push    eax
.text:557972C5 8D 45 F8                                lea     eax, [ebp+var_8]
.text:557972C8 56                                      push    esi
.text:557972C9 50                                      push    eax
.text:557972CA E8 D2 C4 FF FF                          call    sub_557937A1
.text:557972CF 83 C4 0C                                add     esp, 0Ch
.text:557972D2 85 C0                                   test    eax, eax
.text:557972D4 0F 85 DA 00 00 00                       jnz     loc_557973B4
.text:557972DA 68 18 40 82 55                          push    offset aTranslatemsg_5 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:557972DF 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:557972E4 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:557972E9 53                                      push    ebx
.text:557972EA 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:557972EF 68 E4 21 00 00                          push    21E4h
.text:557972F4 E9 2B 01 00 00                          jmp     loc_55797424
.text:557972F9                         ; ---------------------------------------------------------------------------
.text:557972F9
.text:557972F9                         loc_557972F9:                           ; CODE XREF: sub_55796DC3+4E1j
.text:557972F9 FF 75 E8                                push    [ebp+var_18]
.text:557972FC 8D 45 A8                                lea     eax, [ebp+var_58]
.text:557972FF 50                                      push    eax
.text:55797300 8D 45 F8                                lea     eax, [ebp+var_8]
.text:55797303 56                                      push    esi
.text:55797304 50                                      push    eax
.text:55797305 E8 79 C5 FF FF                          call    sub_55793883
.text:5579730A 83 C4 10                                add     esp, 10h
.text:5579730D 85 C0                                   test    eax, eax
.text:5579730F 0F 85 9F 00 00 00                       jnz     loc_557973B4
.text:55797315 68 58 69 82 55                          push    offset aTranslatems_14 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:5579731A 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:5579731F 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55797324 53                                      push    ebx
.text:55797325 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:5579732A 68 DA 21 00 00                          push    21DAh
.text:5579732F E9 F0 00 00 00                          jmp     loc_55797424
.text:55797334                         ; ---------------------------------------------------------------------------
.text:55797334
.text:55797334                         loc_55797334:                           ; CODE XREF: sub_55796DC3+4D7j
.text:55797334 FF 75 E8                                push    [ebp+var_18]
.text:55797337 8D 45 A8                                lea     eax, [ebp+var_58]
.text:5579733A 50                                      push    eax
.text:5579733B 8D 45 F8                                lea     eax, [ebp+var_8]
.text:5579733E 56                                      push    esi
.text:5579733F 50                                      push    eax
.text:55797340 E8 CE 02 00 00                          call    sub_55797613
.text:55797345 83 C4 10                                add     esp, 10h
.text:55797348 85 C0                                   test    eax, eax
.text:5579734A 75 68                                   jnz     short loc_557973B4
.text:5579734C 68 58 69 82 55                          push    offset aTranslatems_14 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:55797351 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55797356 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:5579735B 53                                      push    ebx
.text:5579735C 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55797361 68 D1 21 00 00                          push    21D1h
.text:55797366 E9 B9 00 00 00                          jmp     loc_55797424
.text:5579736B                         ; ---------------------------------------------------------------------------
.text:5579736B
.text:5579736B                         loc_5579736B:                           ; CODE XREF: sub_55796DC3+4CEj
.text:5579736B 8D 45 A8                                lea     eax, [ebp+var_58]
.text:5579736E 50                                      push    eax             ; int
.text:5579736F 8D 45 F8                                lea     eax, [ebp+var_8]
.text:55797372 56                                      push    esi             ; lpMultiByteStr
.text:55797373 50                                      push    eax             ; int
.text:55797374 E8 BC 00 00 00                          call    sub_55797435
.text:55797379 83 C4 0C                                add     esp, 0Ch
.text:5579737C 85 C0                                   test    eax, eax
.text:5579737E 75 34                                   jnz     short loc_557973B4
.text:55797380 68 F8 3E 82 55                          push    offset aTranslatemsg_7 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:55797385 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:5579738A 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:5579738F 53                                      push    ebx
.text:55797390 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:55797395 68 C8 21 00 00                          push    21C8h
.text:5579739A E9 85 00 00 00                          jmp     loc_55797424
.text:5579739F                         ; ---------------------------------------------------------------------------
.text:5579739F
.text:5579739F                         loc_5579739F:                           ; CODE XREF: sub_55796DC3+4C5j
.text:5579739F 8D 45 A8                                lea     eax, [ebp+var_58]
.text:557973A2 50                                      push    eax
.text:557973A3 8D 45 F8                                lea     eax, [ebp+var_8]
.text:557973A6 56                                      push    esi
.text:557973A7 50                                      push    eax
.text:557973A8 E8 EF 1F 00 00                          call    sub_5579939C
.text:557973AD 83 C4 0C                                add     esp, 0Ch
.text:557973B0 85 C0                                   test    eax, eax
.text:557973B2 74 56                                   jz      short loc_5579740A
.text:557973B4
.text:557973B4                         loc_557973B4:                           ; CODE XREF: sub_55796DC3+2BFj
.text:557973B4                                                                 ; sub_55796DC3+325j ...
.text:557973B4 8B 45 EC                                mov     eax, [ebp+lpMultiByteStr]
.text:557973B7 39 45 F8                                cmp     [ebp+var_8], eax
.text:557973BA 0F 86 9F FC FF FF                       jbe     loc_5579705F
.text:557973C0
.text:557973C0                         loc_557973C0:                           ; CODE XREF: sub_55796DC3+293j
.text:557973C0 FF 75 0C                                push    [ebp+arg_4]
.text:557973C3 8D 4D A8                                lea     ecx, [ebp+var_58]
.text:557973C6 FF 15 F4 12 80 55                       call    ds:?GetBufferOut@CTXCommPack@@QAEHAAVCTXBuffer@@@Z ; CTXCommPack::GetBufferOut(CTXBuffer &)
.text:557973CC
.text:557973CC                         loc_557973CC:                           ; CODE XREF: sub_55796DC3+670j
.text:557973CC 8D 4D D0                                lea     ecx, [ebp+var_30]
.text:557973CF E8 73 ED F3 FF                          call    sub_556D6147
.text:557973D4 E9 1A FC FF FF                          jmp     loc_55796FF3
.text:557973D9                         ; ---------------------------------------------------------------------------
.text:557973D9
.text:557973D9                         loc_557973D9:                           ; CODE XREF: sub_55796DC3+407j
.text:557973D9 68 58 3D 82 55                          push    offset aTranslatemsg_9 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:557973DE 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:557973E3 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:557973E8 53                                      push    ebx
.text:557973E9 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:557973EE 68 A4 21 00 00                          push    21A4h
.text:557973F3 68 70 26 80 55                          push    offset aFile    ; "file"
.text:557973F8 E8 15 B8 F1 FF                          call    sub_556B2C12
.text:557973FD 83 C4 1C                                add     esp, 1Ch
.text:55797400 8D 4D 08                                lea     ecx, [ebp+arg_0]
.text:55797403 E8 A8 AF F1 FF                          call    sub_556B23B0
.text:55797408 EB 27                                   jmp     short loc_55797431
.text:5579740A                         ; ---------------------------------------------------------------------------
.text:5579740A
.text:5579740A                         loc_5579740A:                           ; CODE XREF: sub_55796DC3+5EFj
.text:5579740A 68 F8 3E 82 55                          push    offset aTranslatemsg_7 ; "TranslateMsgPackToSessionMsg TranslateM"...
.text:5579740F 68 D0 25 80 55                          push    offset aS       ; "%s"
.text:55797414 68 B4 9B 80 55                          push    offset aMsg     ; "Msg"
.text:55797419 53                                      push    ebx
.text:5579741A 68 64 26 80 55                          push    offset aFunc    ; "func"
.text:5579741F 68 BF 21 00 00                          push    21BFh
.text:55797424
.text:55797424                         loc_55797424:                           ; CODE XREF: sub_55796DC3+345j
.text:55797424                                                                 ; sub_55796DC3+380j ...
.text:55797424 68 70 26 80 55                          push    offset aFile    ; "file"
.text:55797429 E8 E4 B7 F1 FF                          call    sub_556B2C12
.text:5579742E 83 C4 1C                                add     esp, 1Ch
.text:55797431
.text:55797431                         loc_55797431:                           ; CODE XREF: sub_55796DC3+2ACj
.text:55797431                                                                 ; sub_55796DC3+4F0j ...
.text:55797431 33 DB                                   xor     ebx, ebx
.text:55797433 EB 97                                   jmp     short loc_557973CC
.text:55797433                         sub_55796DC3    endp
.text:55797433
}

//=============================================================================================

//高频调用,可在 sub_55796DC3 先断
int __thiscall sub_556B28B5(void *this)
{
  int v1; // ecx@1
  int result; // eax@2
  int v3; // [sp+0h] [bp-4h]@1

  v3 = (int)this;
  v1 = *(_DWORD *)this;
  if ( v1 )
  {
    v3 = 0;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v1 + 48))(v1, &v3);  //=============> common.522E8A40/sub_522E8A40
    result = v3;
  }
  else
  {
    result = 0;
  }
  return result;
}

1136FC70 556B28D1 522E8A40 14       common.522E8A40            用户模块
1136FC84 55796F3A 556B28D1 6C       kernelutil.556B28D1        用户模块
1136FCF0 55795407 55796F3A 18       kernelutil.55796F3A        用户模块
1136FD08 54C99925 55795407 10       kernelutil.55795407        用户模块
1136FD18 54C99969 54C99925 20       im.54C99925                用户模块
1136FD38 54A6B0C6 54C99969 1C       im.54C99969                用户模块
1136FD54 54B47A90 54A6B0C6 40       im.54A6B0C6                用户模块
1136FD94 51B224EE 54B47A90 28       im.54B47A90                用户模块
1136FDBC 51B22591 51B224EE C        asynctask.51B224EE         用户模块
1136FDC8 51B227CF 51B22591 38       asynctask.51B22591         用户模块
1136FE00 51B24321 51B227CF 2C       asynctask.51B227CF         用户模块
1136FE2C 51B2207A 51B24321 24       asynctask.51B24321         用户模块
1136FE50 51B25FE7 51B2207A 8        asynctask.51B2207A         用户模块
1136FE58 51B26082 51B25FE7 114      asynctask.51B25FE7         用户模块
1136FF6C 51B25E47 51B26082 8        asynctask.51B26082         用户模块
1136FF74 75FE0419 51B25E47 10       asynctask.51B25E47         系统模块
1136FF84 770566DD 75FE0419 5C       kernel32.75FE0419          系统模块
1136FFE0 770566AD 770566DD 10       ntdll.770566DD             系统模块
1136FFF0 00000000 770566AD          ntdll.770566AD             用户模块

//=============================================================================================
signed int __stdcall sub_522E8A40(int a1, _DWORD *a2)
{
  signed int result; // eax@2

  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 8);
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}



//(int (__stdcall **)(signed int, int *))(v16 + 24))(v5, &v47)
//创建 a3 发送框内容
signed int __userpurge sub_557EF0F9@<eax>(struct ITXBuffer **a1@<edi>, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi@1
  signed int result; // eax@2
  struct ITXBuffer **v5; // ST04_4@3
  signed int v6; // edi@3
  _DWORD *v7; // eax@5

  v3 = a3;
  if ( a3 )
  {
    v5 = a1;
    v6 = 0;
    a3 = 0;
    Util::Data::CreateTXBuffer((Util::Data *)&a3, v5);
    (*(void (__stdcall **)(_DWORD *))(*a3 + 88))(a3);
    if ( sub_557F0C92(&a3) && sub_557F0B3D(&a3) )
    {
      v7 = a3;
      if ( !a3 )
      {
        Util::Data::CreateTXBuffer((Util::Data *)&a3, (struct ITXBuffer **)0x200);
        v7 = a3;
      }
      *v3 = v7;
      (*(void (__stdcall **)(_DWORD *))(*v7 + 4))(v7);
    }
    else
    {
      v6 = -2147467259;
    }
    if ( a3 )
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3);
    result = v6;
  }
  else
  {
    result = -2147024809;
  }
  return result;
}


//创建 a3 发送框内容 => arg_4
{
.text:557EF0F9
.text:557EF0F9                         sub_557EF0F9    proc near               ; DATA XREF: .rdata:55809D04o
.text:557EF0F9
.text:557EF0F9                         var_8           = dword ptr -8
.text:557EF0F9                         arg_0           = dword ptr  8
.text:557EF0F9                         arg_4           = dword ptr  0Ch
.text:557EF0F9
.text:557EF0F9 55                                      push    ebp
.text:557EF0FA 8B EC                                   mov     ebp, esp
.text:557EF0FC 56                                      push    esi
.text:557EF0FD 8B 75 0C                                mov     esi, [ebp+arg_4]  // dump ebp+c
.text:557EF100 85 F6                                   test    esi, esi
.text:557EF102 75 07                                   jnz     short loc_557EF10B
.text:557EF104 B8 57 00 07 80                          mov     eax, 80070057h
.text:557EF109 EB 74                                   jmp     short loc_557EF17F
.text:557EF10B                         ; ---------------------------------------------------------------------------
.text:557EF10B
.text:557EF10B                         loc_557EF10B:                           ; CODE XREF: sub_557EF0F9+9j
.text:557EF10B 57                                      push    edi
.text:557EF10C 8D 45 0C                                lea     eax, [ebp+arg_4]
.text:557EF10F 33 FF                                   xor     edi, edi
.text:557EF111 50                                      push    eax
.text:557EF112 89 7D 0C                                mov     [ebp+arg_4], edi
.text:557EF115 FF 15 FC 16 80 55                       call    ds:?CreateTXBuffer@Data@Util@@YAHPAPAUITXBuffer@@@Z ; Util::Data::CreateTXBuffer(ITXBuffer * *)
.text:557EF11B 8B 45 0C                                mov     eax, [ebp+arg_4]
.text:557EF11E C7 04 24 00 02 00 00                    mov     [esp+8+var_8], 200h
.text:557EF125 50                                      push    eax
.text:557EF126 8B 08                                   mov     ecx, [eax]	// 	
.text:557EF128 FF 51 58                                call    dword ptr [ecx+58h]    //[5001] eax 引用了 arg_4,  call ========> 522E8E00   eax=0
.text:557EF12B 8B 4D 08                                mov     ecx, [ebp+arg_0]	//[] -----------------		
.text:557EF12E 8D 45 0C                                lea     eax, [ebp+arg_4]
.text:557EF131 50                                      push    eax
.text:557EF132 E8 5B 1B 00 00                          call    sub_557F0C92  //[5002] eax 引用了 arg_4,  call ========> sub_557F0C92   调用方法后 dump [ebp+c] 有了 MSG . dump [[ebp+c]+8]
.text:557EF137 85 C0                                   test    eax, eax
.text:557EF139 74 2F                                   jz      short loc_557EF16A
.text:557EF13B 8B 4D 08                                mov     ecx, [ebp+arg_0]  //[] -----------------
.text:557EF13E 8D 45 0C                                lea     eax, [ebp+arg_4]  //dump [ebp+c]; dump [[ebp+c]+8] 发送内容
.text:557EF141 50                                      push    eax				//dump eax; dump [eax+8] 发送内容
.text:557EF142 E8 F6 19 00 00                          call    sub_557F0B3D  //[5003] eax 引用了 arg_4,  call ========> sub_557F0B3D   调用方法后 dump [ebp+c] 有了发送框的文本内容 . dump [[ebp+c]+8]
.text:557EF147 85 C0                                   test    eax, eax   		//dump eax; dump [eax+8] 发送内容
.text:557EF149 74 1F                                   jz      short loc_557EF16A
.text:557EF14B 8B 45 0C                                mov     eax, [ebp+arg_4]
.text:557EF14E 85 C0                                   test    eax, eax
.text:557EF150 75 0E                                   jnz     short loc_557EF160
.text:557EF152 8D 45 0C                                lea     eax, [ebp+arg_4]
.text:557EF155 50                                      push    eax
.text:557EF156 FF 15 FC 16 80 55                       call    ds:?CreateTXBuffer@Data@Util@@YAHPAPAUITXBuffer@@@Z ; Util::Data::CreateTXBuffer(ITXBuffer * *) //[5004] eax 引用了 arg_4 
.text:557EF15C 8B 45 0C                                mov     eax, [ebp+arg_4]
.text:557EF15F 59                                      pop     ecx	//[] -----------------
.text:557EF160
.text:557EF160                         loc_557EF160:                           ; CODE XREF: sub_557EF0F9+57j
.text:557EF160 89 06                                   mov     [esi], eax
.text:557EF162 8B 08                                   mov     ecx, [eax] //[] -----------------
.text:557EF164 50                                      push    eax
.text:557EF165 FF 51 04                                call    dword ptr [ecx+4] 	//[5005] eax 引用了 arg_4  call ========>  
.text:557EF168 EB 05                                   jmp     short loc_557EF16F
.text:557EF16A                         ; ---------------------------------------------------------------------------
.text:557EF16A
.text:557EF16A                         loc_557EF16A:                           ; CODE XREF: sub_557EF0F9+40j
.text:557EF16A                                                                 ; sub_557EF0F9+50j
.text:557EF16A BF 05 40 00 80                          mov     edi, 80004005h
.text:557EF16F
.text:557EF16F                         loc_557EF16F:                           ; CODE XREF: sub_557EF0F9+6Fj
.text:557EF16F 8B 4D 0C                                mov     ecx, [ebp+arg_4] //[] -----------------
.text:557EF172 85 C9                                   test    ecx, ecx
.text:557EF174 74 06                                   jz      short loc_557EF17C
.text:557EF176 8B 11                                   mov     edx, [ecx]
.text:557EF178 51                                      push    ecx					//dump eax; dump [eax+8] 发送内容
.text:557EF179 FF 52 08                                call    dword ptr [edx+8]  //[5006] ecx 引用了 arg_4 call ========>  
.text:557EF17C
.text:557EF17C                         loc_557EF17C:                           ; CODE XREF: sub_557EF0F9+7Bj
.text:557EF17C 8B C7                                   mov     eax, edi
.text:557EF17E 5F                                      pop     edi
.text:557EF17F
.text:557EF17F                         loc_557EF17F:                           ; CODE XREF: sub_557EF0F9+10j
.text:557EF17F 5E                                      pop     esi
.text:557EF180 5D                                      pop     ebp
.text:557EF181 C2 08 00                                retn    8
.text:557EF181                         sub_557EF0F9    endp
}

1 2 3 6
//=============================================================================================

signed int __userpurge sub_557F0B3D@<eax>(int a1@<ecx>, int a2@<ebx>, Util::Data *a3)
{
  int v3; // edi@1
  int *v4; // esi@1
  int v5; // ebx@3
  int v6; // ecx@4
  int v8; // [sp-4h] [bp-1Ch]@2
  char v9; // [sp+8h] [bp-10h]@1
  void (__stdcall *v10)(int); // [sp+Ch] [bp-Ch]@4
  int v11; // [sp+10h] [bp-8h]@1
  char v12; // [sp+17h] [bp-1h]@1

  v11 = 0;
  v3 = a1;
  v12 = 0;
  Util::CTXAutoSpinLock::CTXAutoSpinLock((Util::CTXAutoSpinLock *)&v9, (struct Util::CTXSpinLock *)(a1 + 56));
  v4 = *(int **)(v3 + 40);
  if ( v4 != *(int **)(v3 + 44) )
  {
    v8 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        (*(void (__stdcall **)(int, char *, int))(*(_DWORD *)v5 + 12))(v5, &v12, v8);
        sub_556BA464(&v12, 1);
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v5 + 20))(v5, &v11);
        sub_556BA464(&v11, 2);
        v10 = *(void (__stdcall **)(int))(*(_DWORD *)v5 + 24);
        v6 = *(_DWORD *)a3;
        if ( !*(_DWORD *)a3 )
        {
          Util::Data::CreateTXBuffer(a3);
          v6 = *(_DWORD *)a3;
        }
        v8 = v6;
        v10(v5); // ==> sub_557F0F90
      }
      ++v4;
    }
    while ( v4 != *(int **)(v3 + 44) );
  }
  Util::CTXAutoSpinLock::~CTXAutoSpinLock((Util::CTXAutoSpinLock *)&v9);
  return 1;
}

{ 	
.text:557F0B3D                         sub_557F0B3D    proc near               ; CODE XREF: sub_557EF0F9+49p
.text:557F0B3D
.text:557F0B3D                         var_10          = byte ptr -10h
.text:557F0B3D                         var_C           = dword ptr -0Ch
.text:557F0B3D                         var_8           = dword ptr -8
.text:557F0B3D                         var_1           = byte ptr -1
.text:557F0B3D                         arg_0           = dword ptr  8
.text:557F0B3D
.text:557F0B3D 55                                      push    ebp
.text:557F0B3E 8B EC                                   mov     ebp, esp
.text:557F0B40 83 EC 10                                sub     esp, 10h     // dump ebp+8 有值
.text:557F0B43 83 65 F8 00                             and     [ebp+var_8], 0
.text:557F0B47 56                                      push    esi
.text:557F0B48 57                                      push    edi
.text:557F0B49 8B F9                                   mov     edi, ecx
.text:557F0B4B C6 45 FF 00                             mov     [ebp+var_1], 0
.text:557F0B4F 8D 4D F0                                lea     ecx, [ebp+var_10]
.text:557F0B52 8D 47 38                                lea     eax, [edi+38h]
.text:557F0B55 50                                      push    eax
.text:557F0B56 FF 15 68 11 80 55                       call    ds:??0CTXAutoSpinLock@Util@@QAE@AAVCTXSpinLock@1@@Z ; Util::CTXAutoSpinLock::CTXAutoSpinLock(Util::CTXSpinLock &)
.text:557F0B5C 8B 77 28                                mov     esi, [edi+28h]
.text:557F0B5F 3B 77 2C                                cmp     esi, [edi+2Ch]
.text:557F0B62 74 63                                   jz      short loc_557F0BC7
.text:557F0B64 53                                      push    ebx
.text:557F0B65
.text:557F0B65                         loc_557F0B65:                           ; CODE XREF: sub_557F0B3D+87j
.text:557F0B65 8B 1E                                   mov     ebx, [esi]
.text:557F0B67 85 DB                                   test    ebx, ebx
.text:557F0B69 74 53                                   jz      short loc_557F0BBE
.text:557F0B6B 8B 03                                   mov     eax, [ebx]
.text:557F0B6D 8D 4D FF                                lea     ecx, [ebp+var_1]
.text:557F0B70 51                                      push    ecx
.text:557F0B71 53                                      push    ebx
.text:557F0B72 FF 50 0C                                call    dword ptr [eax+0Ch]
.text:557F0B75 8B 4D 08                                mov     ecx, [ebp+arg_0]  //[5101] ebp+8
.text:557F0B78 8D 45 FF                                lea     eax, [ebp+var_1]
.text:557F0B7B 6A 01                                   push    1
.text:557F0B7D 50                                      push    eax
.text:557F0B7E E8 E1 98 EC FF                          call    sub_556BA464
.text:557F0B83 8B 03                                   mov     eax, [ebx]
.text:557F0B85 8D 4D F8                                lea     ecx, [ebp+var_8]
.text:557F0B88 51                                      push    ecx
.text:557F0B89 53                                      push    ebx
.text:557F0B8A FF 50 14                                call    dword ptr [eax+14h]
.text:557F0B8D 8B 4D 08                                mov     ecx, [ebp+arg_0] //[5102] ebp+8
.text:557F0B90 8D 45 F8                                lea     eax, [ebp+var_8]
.text:557F0B93 6A 02                                   push    2
.text:557F0B95 50                                      push    eax
.text:557F0B96 E8 C9 98 EC FF                          call    sub_556BA464   // eax 获得 "MSG"
.text:557F0B9B 8B 03                                   mov     eax, [ebx]	//dump eax, .faq 此时 eax会丢失,找到 eax 引用的地方 dump [[[ebp+8]]+8]
.text:557F0B9D 8B 40 18                                mov     eax, [eax+18h]
.text:557F0BA0 89 45 F4                                mov     [ebp+var_C], eax
.text:557F0BA3 8B 45 08                                mov     eax, [ebp+arg_0] //[5103] ebp+8
.text:557F0BA6 8B 08                                   mov     ecx, [eax]
.text:557F0BA8 85 C9                                   test    ecx, ecx
.text:557F0BAA 75 0D                                   jnz     short loc_557F0BB9
.text:557F0BAC 50                                      push    eax
.text:557F0BAD FF 15 FC 16 80 55                       call    ds:?CreateTXBuffer@Data@Util@@YAHPAPAUITXBuffer@@@Z ; Util::Data::CreateTXBuffer(ITXBuffer * *)
.text:557F0BB3 8B 45 08                                mov     eax, [ebp+arg_0] //[5104]
.text:557F0BB6 59                                      pop     ecx
.text:557F0BB7 8B 08                                   mov     ecx, [eax]
.text:557F0BB9
.text:557F0BB9                         loc_557F0BB9:                           ; CODE XREF: sub_557F0B3D+6Dj
.text:557F0BB9 51                                      push    ecx  // ecx 引用   ebp+8
.text:557F0BBA 53                                      push    ebx
.text:557F0BBB FF 55 F4                                call    [ebp+var_C]   //[5105]  ====================> 557F0F90   获得内容,调用后 dump [[[ebp+8]]+8]
.text:557F0BBE
.text:557F0BBE                         loc_557F0BBE:                           ; CODE XREF: sub_557F0B3D+2Cj
.text:557F0BBE 83 C6 04                                add     esi, 4
.text:557F0BC1 3B 77 2C                                cmp     esi, [edi+2Ch]
.text:557F0BC4 75 9F                                   jnz     short loc_557F0B65
.text:557F0BC6 5B                                      pop     ebx
.text:557F0BC7
.text:557F0BC7                         loc_557F0BC7:                           ; CODE XREF: sub_557F0B3D+25j
.text:557F0BC7 8D 4D F0                                lea     ecx, [ebp+var_10]
.text:557F0BCA FF 15 6C 11 80 55                       call    ds:??1CTXAutoSpinLock@Util@@QAE@XZ ; Util::CTXAutoSpinLock::~CTXAutoSpinLock(void)
.text:557F0BD0 33 C0                                   xor     eax, eax
.text:557F0BD2 5F                                      pop     edi
.text:557F0BD3 40                                      inc     eax   //dump eax
.text:557F0BD4 5E                                      pop     esi 
.text:557F0BD5 C9                                      leave
.text:557F0BD6 C2 04 00                                retn    4
.text:557F0BD6                         sub_557F0B3D    endp  
	
}
//=============================================================================================

int __userpurge sub_557F0F90@<eax>(int a1@<ebx>, int a2, int a3)
{
  int v3; // esi@1
  int v4; // edi@1
  int v5; // ecx@3
  int v6; // eax@3
  void (__stdcall *v7)(int, int); // ebx@3
  int v8; // eax@3
  int v10; // [sp+8h] [bp-4h]@3

  v3 = a2;
  v4 = a3;
  if ( *(_DWORD *)(a2 + 4)
    && !Util::Data::EqualBool(*(Util::Data **)(a2 + 4), (struct ITXDataRead *)"bSkipStream", (const char *)1) )
  {
    v5 = *(_DWORD *)(v3 + 4);
    a3 = 0;
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v5 + 164))(v5, &a3, a1);
    v6 = *(_DWORD *)v4;
    BYTE3(a2) = 0;
    (*(void (__stdcall **)(int, char *, signed int, _DWORD))(v6 + 80))(v4, (char *)&a2 + 3, 1, 0);
    v10 = (unsigned __int16)sub_556B28D6(&a3);
    (*(void (__stdcall **)(int, int *, signed int, _DWORD))(*(_DWORD *)v4 + 80))(v4, &v10, 2, 0);
    v7 = *(void (__stdcall **)(int, int))(*(_DWORD *)v4 + 84);
    v8 = a3;
    if ( !a3 )
    {
      Util::Data::CreateTXBuffer((Util::Data *)&a3);
      v8 = a3;
    }
    v7(v4, v8);
    if ( a3 )
      (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 8))(a3);
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 100))(v3, v4);
}

{
	
.text:557F0F90	    sub_557F0F90    proc near               ; DATA XREF: .rdata:5583664Co
.text:557F0F90                                                                 ; .rdata:55838000o
.text:557F0F90
.text:557F0F90                         var_4           = dword ptr -4
.text:557F0F90                         arg_0           = dword ptr  8
.text:557F0F90                         arg_4           = dword ptr  0Ch
.text:557F0F90
.text:557F0F90 55                                      push    ebp
.text:557F0F91 8B EC                                   mov     ebp, esp
.text:557F0F93 51                                      push    ecx
.text:557F0F94 56                                      push    esi
.text:557F0F95 8B 75 08                                mov     esi, [ebp+arg_0]
.text:557F0F98 57                                      push    edi
.text:557F0F99 8B 7D 0C                                mov     edi, [ebp+arg_4]
.text:557F0F9C 83 7E 04 00                             cmp     dword ptr [esi+4], 0
.text:557F0FA0 0F 84 86 00 00 00                       jz      loc_557F102C
.text:557F0FA6 6A 01                                   push    1
.text:557F0FA8 68 04 8F 80 55                          push    offset aBskipstream ; "bSkipStream"
.text:557F0FAD FF 76 04                                push    dword ptr [esi+4]
.text:557F0FB0 FF 15 70 11 80 55                       call    ds:?EqualBool@Data@Util@@YAHPAUITXDataRead@@PBDH@Z ; Util::Data::EqualBool(ITXDataRead *,char const *,int)
.text:557F0FB6 83 C4 0C                                add     esp, 0Ch
.text:557F0FB9 85 C0                                   test    eax, eax
.text:557F0FBB 75 6F                                   jnz     short loc_557F102C
.text:557F0FBD 8B 4E 04                                mov     ecx, [esi+4]
.text:557F0FC0 8D 55 0C                                lea     edx, [ebp+arg_4]
.text:557F0FC3 53                                      push    ebx
.text:557F0FC4 33 DB                                   xor     ebx, ebx
.text:557F0FC6 89 5D 0C                                mov     [ebp+arg_4], ebx
.text:557F0FC9 8B 01                                   mov     eax, [ecx]
.text:557F0FCB 52                                      push    edx
.text:557F0FCC 51                                      push    ecx
.text:557F0FCD FF 90 A4 00 00 00                       call    dword ptr [eax+0A4h]
.text:557F0FD3 8B 07                                   mov     eax, [edi]
.text:557F0FD5 8D 4D 0B                                lea     ecx, [ebp+arg_0+3]
.text:557F0FD8 53                                      push    ebx
.text:557F0FD9 6A 01                                   push    1
.text:557F0FDB 51                                      push    ecx
.text:557F0FDC 57                                      push    edi
.text:557F0FDD 88 5D 0B                                mov     byte ptr [ebp+arg_0+3], bl
.text:557F0FE0 FF 50 50                                call    dword ptr [eax+50h]
.text:557F0FE3 8D 4D 0C                                lea     ecx, [ebp+arg_4]
.text:557F0FE6 E8 EB 18 EC FF                          call    sub_556B28D6
.text:557F0FEB 53                                      push    ebx
.text:557F0FEC 0F B7 C0                                movzx   eax, ax
.text:557F0FEF 8D 4D FC                                lea     ecx, [ebp+var_4]
.text:557F0FF2 6A 02                                   push    2
.text:557F0FF4 89 45 FC                                mov     [ebp+var_4], eax
.text:557F0FF7 8B 07                                   mov     eax, [edi]
.text:557F0FF9 51                                      push    ecx
.text:557F0FFA 57                                      push    edi
.text:557F0FFB FF 50 50                                call    dword ptr [eax+50h]
.text:557F0FFE 8B 07                                   mov     eax, [edi]
.text:557F1000 8B 58 54                                mov     ebx, [eax+54h]
.text:557F1003 8B 45 0C                                mov     eax, [ebp+arg_4]
.text:557F1006 85 C0                                   test    eax, eax
.text:557F1008 75 0E                                   jnz     short loc_557F1018
.text:557F100A 8D 45 0C                                lea     eax, [ebp+arg_4]
.text:557F100D 50                                      push    eax
.text:557F100E FF 15 FC 16 80 55                       call    ds:?CreateTXBuffer@Data@Util@@YAHPAPAUITXBuffer@@@Z ; Util::Data::CreateTXBuffer(ITXBuffer * *)
.text:557F1014 8B 45 0C                                mov     eax, [ebp+arg_4]
.text:557F1017 59                                      pop     ecx
.text:557F1018
.text:557F1018                         loc_557F1018:                           ; CODE XREF: sub_557F0F90+78j
.text:557F1018 6A 00                                   push    0
.text:557F101A 50                                      push    eax
.text:557F101B 57                                      push    edi
.text:557F101C FF D3                                   call    ebx
.text:557F101E 8B 45 0C                                mov     eax, [ebp+arg_4]
.text:557F1021 5B                                      pop     ebx
.text:557F1022 85 C0                                   test    eax, eax
.text:557F1024 74 06                                   jz      short loc_557F102C
.text:557F1026 8B 10                                   mov     edx, [eax]
.text:557F1028 50                                      push    eax
.text:557F1029 FF 52 08                                call    dword ptr [edx+8]
.text:557F102C
.text:557F102C                         loc_557F102C:                           ; CODE XREF: sub_557F0F90+10j
.text:557F102C                                                                 ; sub_557F0F90+2Bj ...
.text:557F102C 8B 06                                   mov     eax, [esi]
.text:557F102E 8B CE                                   mov     ecx, esi
.text:557F1030 57                                      push    edi
.text:557F1031 FF 50 64                                call    dword ptr [eax+64h]
.text:557F1034 5F                                      pop     edi
.text:557F1035 5E                                      pop     esi
.text:557F1036 C9                                      leave
.text:557F1037 C2 08 00                                retn    8
.text:557F1037                         sub_557F0F90    endp
	
}
//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================






















