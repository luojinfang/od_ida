
/*
修改版

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
  if ( (*(int (__stdcall **)(signed int, int *))(v16 + 24))(v5, &v47) < 0
    || (v17 = sub_556B28B5(&v47),
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




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================




//=============================================================================================






















