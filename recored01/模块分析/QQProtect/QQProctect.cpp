/*

//加载 QQProtect.exe

//call LoadLibraryW

//CreateProcessW  L"C:\\Program Files (x86)\\Common Files\\Tencent\\QQProtect\\Bin\\QQProtect.exe"


*/





9.查看日志，发现会加载 QPSection.dll,QQProtect.exe, 想办法弄清关系，关闭保护.

//通过 LoadLibraryW 加载的
//断点已设置在 08A51750 (TLS回调函数 1 (qqprotect.exe)) ！
//DLL已载入： 08A50000 C:\Program Files (x86)\Common Files\Tencent\QQProtect\Bin\QQProtect.exe

{
	callstack: LoadLibraryW(L"C:\\Program Files (x86)\\Common Files\\Tencent\\QQProtect\\Bin\\QPSection.dll")
		Address  To       From     Siz Comment               Party 
		0019F0D0 52401C7E 7715F630 28  kernelbase.7715F630   User
		0019F0F8 53908F54 52401C7E 22C common.52401C7E       User
		0019F324 53908DF5 53908F54 3C  hummerengine.53908F54 User
		0019F360 5390FCFD 53908DF5 6A0 hummerengine.53908DF5 User
		0019FA00 53917E23 5390FCFD 80  hummerengine.5390FCFD User
		0019FA80 0040289B 53917E23 49C hummerengine.53917E23 User
		0019FF1C 004012C6 0040289B C   qq.0040289B           User
		0019FF28 00403365 004012C6 4C  qq.004012C6           User
		0019FF74 75BD6359 00403365 10  qq.00403365           System
		0019FF84 77CB8944 75BD6359 5C  kernel32.75BD6359     System
		0019FFE0 77CB8914 77CB8944 10  ntdll.77CB8944        System
		0019FFF0 00000000 77CB8914     ntdll.77CB8914        User


		//LoadLibraryExW 
		Address  To       From     Siz Comment               Party 
		0019F0BC 7715F641 77161A30 14  kernelbase.77161A30   System
		0019F0D0 52401C7E 7715F641 28  kernelbase.7715F641   User
		0019F0F8 53908F54 52401C7E 22C common.52401C7E       User
		0019F324 53908DF5 53908F54 3C  hummerengine.53908F54 User
		0019F360 5390FCFD 53908DF5 6A0 hummerengine.53908DF5 User
		0019FA00 53917E23 5390FCFD 80  hummerengine.5390FCFD User
		0019FA80 0040289B 53917E23 49C hummerengine.53917E23 User
		0019FF1C 004012C6 0040289B C   qq.0040289B           User
		0019FF28 00403365 004012C6 4C  qq.004012C6           User
		0019FF74 75BD6359 00403365 10  qq.00403365           System
		0019FF84 77CB8944 75BD6359 5C  kernel32.75BD6359     System
		0019FFE0 77CB8914 77CB8944 10  ntdll.77CB8944        System
		0019FFF0 00000000 77CB8914     ntdll.77CB8914        User
		
		
	callstack: LoadLibraryW(L"C:\\Program Files (x86)\\Common Files\\Tencent\\QQProtect\\Bin\\QQProtect.exe")
		Address  To       From     Size Comment               Party 
		0019DF08 5390BDF0 7715F630 10E4 kernelbase.7715F630   User
		0019EFEC 5390BBB1 5390BDF0 8C   hummerengine.5390BDF0 User
		0019F078 5390B9AB 5390BBB1 23C  hummerengine.5390BBB1 User
		0019F2B4 5390802D 5390B9AB 7C   hummerengine.5390B9AB User
		0019F330 53906963 5390802D 30   hummerengine.5390802D User
		0019F360 5390FCFD 53906963 6A0  hummerengine.53906963 User
		0019FA00 53917E23 5390FCFD 80   hummerengine.5390FCFD User
		0019FA80 0040289B 53917E23 49C  hummerengine.53917E23 User
		0019FF1C 004012C6 0040289B C    qq.0040289B           User
		0019FF28 00403365 004012C6 4C   qq.004012C6           User
		0019FF74 75BD6359 00403365 10   qq.00403365           System
		0019FF84 77CB8944 75BD6359 5C   kernel32.75BD6359     System
		0019FFE0 77CB8914 77CB8944 10   ntdll.77CB8944        System
		0019FFF0 00000000 77CB8914      ntdll.77CB8914        User
		
		
		
		
		
//===============================

CHttpClient *__cdecl sub_53917E8E(int a1, int a2, int a3)
{
  CHttpClient *v3; // eax@1
  CHttpClient *result; // eax@1
  CHttpClient *v5; // edi@1
  int v6; // eax@2
  int v7; // esi@4
  int v8; // eax@6
  CHttpClient *v9; // edi@6
  int v10; // esi@6
  int v11; // eax@6
  unsigned __int32 v12; // esi@9
  const struct CTXStringW *v13; // esi@9
  const struct CTXStringW *v14; // esi@9
  const struct CTXStringW *v15; // esi@9
  unsigned __int32 v16; // esi@9
  unsigned __int32 v17; // esi@9
  const wchar_t *v18; // eax@9
  const wchar_t *v19; // eax@9
  const wchar_t *v20; // eax@9
  int v21; // ecx@13
  signed int v22; // [sp-4h] [bp-78h]@3
  struct _SYSTEMTIME *v23; // [sp+0h] [bp-74h]@6
  const wchar_t *v24; // [sp+4h] [bp-70h]@9
  int v25; // [sp+8h] [bp-6Ch]@9
  __int64 *v26; // [sp+Ch] [bp-68h]@9
  struct tagMSG Msg; // [sp+10h] [bp-64h]@10
  int v28; // [sp+2Ch] [bp-48h]@4
  int v29; // [sp+30h] [bp-44h]@4
  int v30; // [sp+34h] [bp-40h]@4
  int v31; // [sp+38h] [bp-3Ch]@2
  char v32; // [sp+3Ch] [bp-38h]@2
  char v33; // [sp+40h] [bp-34h]@6
  char v34; // [sp+44h] [bp-30h]@9
  char v35; // [sp+48h] [bp-2Ch]@2
  char v36; // [sp+4Ch] [bp-28h]@2
  int v37; // [sp+50h] [bp-24h]@4
  CHttpClient *v38; // [sp+54h] [bp-20h]@1
  int v39; // [sp+58h] [bp-1Ch]@5
  int v40; // [sp+5Ch] [bp-18h]@4
  int v41; // [sp+60h] [bp-14h]@4
  int v42; // [sp+64h] [bp-10h]@4
  int v43; // [sp+68h] [bp-Ch]@4

  v3 = (CHttpClient *)sub_53930F19(0x10u);
  result = (CHttpClient *)CHttpClient::CHttpClient(v3);
  v5 = result;
  v38 = result;
  if ( result )
  {
    v31 = sub_53915257();
    CHttpClient::SetUIInterface(v5, (struct CTXHttpDownloadSink *)v31);
    CTXStringW::CTXStringW((CTXStringW *)&v36);
    CTXStringW::Format((CTXStringW *)&v36, L"NUM:1%sID1:608%sCMM1:%lu#%lu%s", L"\r\n", L"\r\n", a2, a3, L"\r\n");
    v6 = CTXStringW::operator wchar_t const *(&v36);
    CTXStringA::CTXStringA(&v32, v31, v6, -1);
    CTXStringW::CTXStringW((CTXStringW *)&v35);
    if ( sub_5391828D(&v32, &v35) )
    {
      v40 = 0;
      v7 = 0;
      v28 = 0;
      v29 = 0;
      v41 = 0;
      v30 = 0;
      v42 = 0;
      v43 = 0;
      CComputerIDGenerator::GenerateEx((CComputerIDGenerator *)&v28, (unsigned __int8 *)&v40);
      v37 = 0;
      Util::Data::CreateTXBuffer((Util::Data *)&v37);
      (*(void (__stdcall **)(int, int *, signed int))(*(_DWORD *)v37 + 56))(v37, &v40, 16);
      if ( v37 )
      {
        v39 = 0;
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v37 + 52))(v37, &v39);
        v7 = v39;
      }
      v8 = sub_53918C84(&v37);
      v22 = v7;
      Util::Encode::Encode16(&v33, v8);
      CTXStringW::CTXStringW(&v22);
      sub_539187AF(L"file", 1771, L"func", 3, L"QPDataReport", L"dr608 content: %s", (unsigned int)&v36);
      CTXStringW::CTXStringW(&v39, L"Version");
      v9 = v38;
      CHttpClient::AddInfo(v38, (const struct CTXStringW *)&v39, 3u);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      CTXStringW::CTXStringW(&v39, L"CONN");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, (const struct CTXStringW *)&v33);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      v10 = sub_5391B8DA();
      CTXStringW::CTXStringW(&v39, L"QDVER");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v10);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      v11 = sub_5391B59C();
      v23 = (struct _SYSTEMTIME *)L"OSBits";
      if ( v11 )
      {
        CTXStringW::CTXStringW(&v39, v23);
        v23 = (struct _SYSTEMTIME *)64;
      }
      else
      {
        CTXStringW::CTXStringW(&v39, v23);
        v23 = (struct _SYSTEMTIME *)32;
      }
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, (unsigned __int32)v23);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      v12 = sub_5391B7E5();
      CTXStringW::CTXStringW(&v39, L"OSTYPE");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v12);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      v13 = (const struct CTXStringW *)CTXStringW::CTXStringW(&v38, L"0.0.0.0");
      CTXStringW::CTXStringW(&v39, L"QSVER");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v13);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      CTXStringW::~CTXStringW((CTXStringW *)&v38);
      v14 = (const struct CTXStringW *)CTXStringW::CTXStringW(&v38, L"0.0.0.0");
      CTXStringW::CTXStringW(&v39, L"MMVER");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v14);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      CTXStringW::~CTXStringW((CTXStringW *)&v38);
      v15 = (const struct CTXStringW *)CTXStringW::CTXStringW(&v38, L"0.0.0.0");
      CTXStringW::CTXStringW(&v39, L"DRVVER");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v15);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      CTXStringW::~CTXStringW((CTXStringW *)&v38);
      v16 = (unsigned __int16)sub_53914ED8();
      CTXStringW::CTXStringW(&v39, L"CSVER");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v16);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      v17 = Version::GetPubNo();
      CTXStringW::CTXStringW(&v39, L"PUBNO");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, v17);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      CTXStringW::CTXStringW(&v39, L"COMM");
      CHttpClient::AddInfo(v9, (const struct CTXStringW *)&v39, (const struct CTXStringW *)&v35);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      CTXStringW::CTXStringW(&v39, L"platform");
      v18 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v39);
      v19 = TXLoadString(L"QQProtect_UploadData", v18);
      CTXStringW::CTXStringW(&v34, v19);
      CTXStringW::~CTXStringW((CTXStringW *)&v39);
      v22 = 0;
      v20 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v34);
      CHttpClient::Download(v9, v20, v23, v24, v25, v26);
      *(_DWORD *)(v31 + 16) = a1;
      if ( a1 )
      {
        GetMessageW(&Msg, 0, 0, 0);
        while ( Msg.message != 18 )
        {
          TranslateMessage(&Msg);
          DispatchMessageW(&Msg);
          GetMessageW(&Msg, 0, 0, 0);
        }
      }
      CTXStringW::~CTXStringW((CTXStringW *)&v34);
      CTXStringW::~CTXStringW((CTXStringW *)&v33);
      if ( v37 )
      {
        v21 = *(_DWORD *)v37;
        v22 = v37;
        (*(void (__stdcall **)(int))(v21 + 8))(v37);
        v37 = 0;
      }
      sub_53914DF3(&v28);
    }
    else
    {
      CHttpClient::~CHttpClient(v5);
      v22 = 16;
      sub_53930EFD((void *)v5);
    }
    CTXStringW::~CTXStringW((CTXStringW *)&v35);
    CTXStringA::~CTXStringA((CTXStringA *)&v32);
    result = (CHttpClient *)CTXStringW::~CTXStringW((CTXStringW *)&v36);
  }
  return result;
}



//加载 QQProtect.exe
int sub_5391B8DA()
{
  int v0; // ebx@1
  char *v1; // ecx@2
  int *v2; // ecx@2
  signed int v3; // eax@2
  char *v5; // [sp-14h] [bp-23Ch]@2
  int *v6; // [sp-10h] [bp-238h]@2
  char *v7; // [sp-Ch] [bp-234h]@2
  const wchar_t *v8; // [sp-8h] [bp-230h]@2
  char *v9; // [sp-4h] [bp-22Ch]@2
  int v10; // [sp+Ch] [bp-21Ch]@2
  char v11; // [sp+10h] [bp-218h]@1
  char v12; // [sp+14h] [bp-214h]@1
  char Dst; // [sp+18h] [bp-210h]@1

  v0 = 0;
  CTXStringW::CTXStringW((CTXStringW *)&v11);
  CTXStringW::CTXStringW((CTXStringW *)&v12);
  memset(&Dst, 0, 0x208u);
  if ( SHGetSpecialFolderPathW(0, (LPWSTR)&Dst, 43, 0) )
  {
    v9 = &Dst;
    CTXStringW::operator=(&v11);
    v8 = L"\\Tencent\\QQProtect\\Bin\\QQProtect.exe";
    CTXStringW::operator+=(&v11);
    v7 = &Dst;
    CTXStringW::operator=(&v12);
    CTXStringW::operator+=(&v12);
    v6 = &v10;
    v5 = v1;
    v10 = 0;
    CTXStringW::CTXStringW(&v5);
    v6 = v2;
    v5 = &v11;
    CTXStringW::CTXStringW(&v6);
    v3 = sub_5391B9DD((char)v7, (char)v8, v9);
    v0 = v3 != 0 ? v10 : 0;
  }
  CTXStringW::~CTXStringW((CTXStringW *)&v12);
  CTXStringW::~CTXStringW((CTXStringW *)&v11);
  return v0;
}




signed int __stdcall sub_5391B9DD(char a1, char a2, void *a3)
{
  const WCHAR *v3; // eax@3
  HANDLE v4; // eax@3
  void *v5; // edi@3
  DWORD v6; // eax@4
  DWORD v7; // esi@4
  void *v8; // eax@6
  void *v9; // ebx@6
  int *v10; // eax@15
  int v11; // ecx@19
  signed int v12; // edi@20
  int v13; // esi@21
  int v14; // ecx@22
  const void *v15; // eax@23
  int v16; // ecx@30
  int *v18; // [sp+48h] [bp-80h]@16
  int *v19; // [sp+4Ch] [bp-7Ch]@16
  int v20; // [sp+60h] [bp-68h]@9
  int *v21; // [sp+64h] [bp-64h]@15
  int v22; // [sp+68h] [bp-60h]@18
  int v23; // [sp+6Ch] [bp-5Ch]@9
  DWORD NumberOfBytesRead; // [sp+70h] [bp-58h]@7
  int v25; // [sp+74h] [bp-54h]@9
  int v26; // [sp+78h] [bp-50h]@9
  int v27; // [sp+7Ch] [bp-4Ch]@9
  int v28; // [sp+80h] [bp-48h]@9
  void *Dst; // [sp+84h] [bp-44h]@1
  HANDLE hObject; // [sp+88h] [bp-40h]@3
  char v31; // [sp+8Ch] [bp-3Ch]@9
  int v32; // [sp+B4h] [bp-14h]@16
  int v33; // [sp+B8h] [bp-10h]@16
  int v34; // [sp+BCh] [bp-Ch]@16
  int v35; // [sp+C0h] [bp-8h]@16
  int v36; // [sp+C4h] [bp-4h]@16

  Dst = a3;
  if ( CTXStringW::IsEmpty((CTXStringW *)&a1)
    || CTXStringW::IsEmpty((CTXStringW *)&a2)
    || (v3 = (const WCHAR *)CTXStringW::operator wchar_t const *(&a2),
        v4 = CreateFileW(v3, 0x80000000, 1u, 0, 3u, 0, 0),
        v5 = v4,
        hObject = v4,
        v4 == (HANDLE)-1)
    || (v6 = GetFileSize(v4, 0), (v7 = v6) == 0)
    || v6 == -1
    || (v8 = (void *)sub_539312E8(v6), (v9 = v8) == 0)
    || (memset(v8, 0, v7), NumberOfBytesRead = 0, !ReadFile(v5, v9, v7, &NumberOfBytesRead, 0))
    || NumberOfBytesRead != v7 )
  {
    v12 = 0;
    goto LABEL_34;
  }
  CTXCommPack::CTXCommPack((CTXCommPack *)&v31);
  CTXCommPack::SetBufferIn((CTXCommPack *)&v31, (const unsigned __int8 *)v9, v7, 1);
  v27 = 0;
  BYTE3(v20) = 0;
  v25 = 0;
  v23 = 0;
  v28 = 0;
  v26 = 0;
  if ( CTXCommPack::GetWord((CTXCommPack *)&v31, (unsigned __int16 *)&v27, 0, 1)
    && CTXCommPack::GetByte((CTXCommPack *)&v31, (unsigned __int8 *)&v20 + 3, 1)
    && CTXCommPack::GetWord((CTXCommPack *)&v31, (unsigned __int16 *)&v25, 0, 1)
    && CTXCommPack::GetBuf((CTXCommPack *)&v31, (const unsigned __int8 **)&v28, (unsigned __int16)v25, 1)
    && CTXCommPack::GetWord((CTXCommPack *)&v31, (unsigned __int16 *)&v23, 0, 1)
    && CTXCommPack::GetBuf((CTXCommPack *)&v31, (const unsigned __int8 **)&v26, (unsigned __int16)v23, 1) )
  {
    v10 = 0;
    v21 = 0;
    if ( BYTE3(v20) == 1 )
    {
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v19 = &v32;
      v18 = (int *)(BYTE3(v20) - 1);
      CTXStringW::CTXStringW(&v18);
      if ( !sub_5391BD31((int)v9, &v36, 1, (char)v18, (unsigned __int8 *)v19)
        || !sub_5391BCA0(v26, (unsigned __int16)v23, &v21) )
      {
LABEL_27:
        v10 = v21;
        goto LABEL_28;
      }
      v10 = v21;
      v22 = 1;
      if ( v21 )
      {
        v11 = *v21;
        v19 = &v22;
        v18 = v21;
        (*(void (__stdcall **)(int *, int *))(v11 + 28))(v21, &v22);
        if ( !v22 )
        {
          v12 = 0;
          if ( v21 )
          {
            v22 = 0;
            v14 = *v21;
            v19 = &v22;
            v18 = v21;
            (*(void (__stdcall **)(int *, int *))(v14 + 52))(v21, &v22);
            v13 = v22;
          }
          else
          {
            v13 = 0;
          }
          v15 = (const void *)sub_53918C84(&v21);
          if ( v15 )
          {
            memcpy(Dst, v15, 4u);
            if ( v13 - 4 >= 0 )
              v12 = 1;
          }
          j_j_free(v9);
          CloseHandle(hObject);
          v10 = v21;
          goto LABEL_29;
        }
        goto LABEL_27;
      }
    }
LABEL_28:
    v12 = 0;
LABEL_29:
    if ( v10 )
    {
      v16 = *v10;
      v19 = v10;
      (*(void (__stdcall **)(int *))(v16 + 8))(v10);
      v21 = 0;
    }
    goto LABEL_32;
  }
  v12 = 0;
LABEL_32:
  CTXCommPack::~CTXCommPack((CTXCommPack *)&v31);
LABEL_34:
  CTXStringW::~CTXStringW((CTXStringW *)&a1);
  CTXStringW::~CTXStringW((CTXStringW *)&a2);
  return v12;
}

//检测 模块的md5?
//call LoadLibraryW
signed int __userpurge sub_5391BD31@<eax>(int a1@<ebx>, void *a2@<edi>, int a3@<esi>, char a4, unsigned __int8 *a5)
{
  int v5; // esi@1
  const WCHAR *v6; // eax@1
  HANDLE v7; // edi@1
  const WCHAR *v8; // eax@6
  HMODULE v9; // eax@6
  HMODULE v10; // edi@6
  int v11; // ecx@7
  int v12; // edx@7
  _DWORD *v13; // edx@8
  unsigned __int32 v14; // eax@11
  signed int v15; // esi@12
  signed int v16; // ebx@14
  unsigned __int8 *v18; // [sp+0h] [bp-10CCh]@1
  int v19; // [sp+4h] [bp-10C8h]@7
  int v20; // [sp+8h] [bp-10C4h]@7
  DWORD NumberOfBytesRead; // [sp+Ch] [bp-10C0h]@2
  char v22; // [sp+10h] [bp-10BCh]@13
  char v23; // [sp+6Ch] [bp-1060h]@2
  char Buffer; // [sp+C8h] [bp-1004h]@4
  int v25; // [sp+10C4h] [bp-8h]@1
  int v26; // [sp+10C8h] [bp-4h]@1

  sub_539323B0();
  v26 = a1;
  v25 = a3;
  v5 = 0;
  v18 = a5;
  v6 = (const WCHAR *)CTXStringW::operator wchar_t const *(&a4);
  v7 = CreateFileW(v6, 1u, 0, (LPSECURITY_ATTRIBUTES)3, 0, 0, a2);
  if ( v7 == (HANDLE)-1 )
    goto LABEL_20;
  NumberOfBytesRead = 0;
  MD5_Init((struct MD5state_st *)&v23);
  while ( ReadFile(v7, &Buffer, 0x1000u, &NumberOfBytesRead, 0) && NumberOfBytesRead )
    MD5_Update((struct MD5state_st *)&v23, (const unsigned __int8 *)&Buffer, NumberOfBytesRead);
  CloseHandle(v7);
  v8 = (const WCHAR *)CTXStringW::operator wchar_t const *(&a4);
  v9 = LoadLibraryW(v8);
  v10 = v9;
  if ( v9 )
  {
    v11 = 0;
    v12 = (int)v9 + *((_DWORD *)v9 + 15);
    v19 = v12 + *(_WORD *)(v12 + 20) + 24;
    v20 = *(_WORD *)(v12 + 6);
    if ( *(_WORD *)(v12 + 6) )
    {
      v13 = (_DWORD *)(v12 + *(_WORD *)(v12 + 20) + 24 + 36);
      while ( (*v13 & 0xE0000020) != 1610612768 )
      {
        ++v11;
        v13 += 10;
        if ( v11 >= v20 )
          goto LABEL_11;
      }
      v5 = *(_DWORD *)(40 * v11 + v19 + 12);
      v14 = *(_DWORD *)(40 * v11 + v19 + 16);
    }
    else
    {
LABEL_11:
      v14 = 0;
    }
    MD5_Update((struct MD5state_st *)&v23, (const unsigned __int8 *)v10 + v5, v14);
    FreeLibrary(v10);
    MD5_Final(v18, (struct MD5state_st *)&v23);
    v15 = 17;
    do
    {
      MD5_Init((struct MD5state_st *)&v22);
      MD5_Update((struct MD5state_st *)&v22, v18, 0x10u);
      MD5_Final(v18, (struct MD5state_st *)&v22);
      --v15;
    }
    while ( v15 );
    v16 = 1;
  }
  else
  {
LABEL_20:
    v16 = 0;
  }
  CTXStringW::~CTXStringW((CTXStringW *)&a4);
  return v16;
}
		
		
		
		
		
		
		
		
		
		
		
	
{
//注意，目录和 qq.exe所在不同
//CreateProcessW  L"C:\\Program Files (x86)\\Common Files\\Tencent\\QQProtect\\Bin\\QQProtect.exe"
EAX : 000851E0
EBX : 07FD9320     L"C:\\Program Files (x86)\\Common Files\\Tencent\\QQProtect\\Bin\\QQProtect.exe"
ECX : 539469AC     hummerengine.539469AC
EDX : 00000009
EBP : 0019ED48
ESP : 0019EB08     "杬#u 擙\x07"
ESI : 04080414
EDI : 07FD9DF0
EIP : 7580A3F0     <kernelbase.CreateProcessW>	


30348                                                         
      0019EB08 75237A96 7580A3F0 244 kernelbase.7580A3F0      系统模块
      0019ED4C 7523B20E 75237A96 38  windows.storage.75237A96 系统模块
      0019ED84 75237462 7523B20E 34  windows.storage.7523B20E 系统模块
      0019EDB8 752376BA 75237462 18  windows.storage.75237462 系统模块
      0019EDD0 7523A0A6 752376BA 48  windows.storage.752376BA 系统模块
      0019EE18 752374D2 7523A0A6 38  windows.storage.7523A0A6 系统模块
      0019EE50 7523B7C5 752374D2 110 windows.storage.752374D2 系统模块
      0019EF60 76345505 7523B7C5 30  windows.storage.7523B7C5 系统模块
      0019EF90 763455E4 76345505 2C  shell32.76345505         系统模块
      0019EFBC 76345A9A 763455E4 EC  shell32.763455E4         系统模块
      0019F0A8 76345D70 76345A9A F8  shell32.76345A9A         系统模块
      0019F1A0 53917367 76345D70 198 shell32.76345D70         用户模块
      0019F338 53916A3D 53917367 28  hummerengine.53917367    用户模块
      0019F360 5391FCFD 53916A3D 6A0 hummerengine.53916A3D    用户模块
      0019FA00 53927E8B 5391FCFD 80  hummerengine.5391FCFD    用户模块
      0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B    用户模块
      0019FF1C 004012C6 0040289B C   qq.0040289B              用户模块
      0019FF28 00403365 004012C6 4C  qq.004012C6              用户模块
      0019FF74 75C30419 00403365 10  qq.00403365              系统模块
      0019FF84 774B66DD 75C30419 5C  kernel32.75C30419        系统模块
      0019FFE0 774B66AD 774B66DD 10  ntdll.774B66DD           系统模块
      0019FFF0 00000000 774B66AD     ntdll.774B66AD           用户模块
	  
	  
}	  
	  
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
//QQProtect.exe
int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  signed __int32 v4; // eax@3
  int v5; // ebx@4
  const WCHAR *v6; // eax@6
  LPWSTR *v7; // ebx@6
  signed int v8; // esi@6
  signed int v9; // ebx@27
  SC_HANDLE v10; // eax@27
  void *v11; // esi@27
  SC_HANDLE v12; // eax@29
  char v14; // [sp+0h] [bp-24h]@0
  SERVICE_TABLE_ENTRYW ServiceStartTable; // [sp+Ch] [bp-18h]@34
  int v16; // [sp+14h] [bp-10h]@34
  int v17; // [sp+18h] [bp-Ch]@34
  int v18; // [sp+1Ch] [bp-8h]@3
  int pNumArgs; // [sp+20h] [bp-4h]@6

  if ( dword_419E88 )
    sub_40CA00();
  v18 = 1;
  dword_419E8C = nShowCmd;
  CoInitialize(0);
  sub_403DD0();
  dword_41A740 = 0;
  v4 = sub_40C1F0(hInstance);
  if ( v4 < 0 )
  {
    v5 = dword_41A73C;
    if ( dword_41A73C )
      goto LABEL_43;
    goto LABEL_42;
  }
  v6 = GetCommandLineW();
  v7 = CommandLineToArgvW(v6, &pNumArgs);
  GetCommandLineW();
  v8 = 1;
  if ( pNumArgs > 1 )
  {
    while ( wcsicmp(v7[v8], L"/fp")
         && wcsicmp(v7[v8], L"enable")
         && wcsicmp(v7[v8], L"disable")
         && wcsicmp(v7[v8], L"/qd")
         && wcsicmp(v7[v8], L"unload")
         && wcsicmp(v7[v8], L"start")
         && wcsicmp(v7[v8], L"/iqpcore")
         && wcsicmp(v7[v8], L"/rqpcore")
         && wcsicmp(v7[v8], L"/irqpcore")
         && wcsicmp(v7[v8], L"/tqpcore")
         && wcsicmp(v7[v8], L"/uqpcore")
         && wcsicmp(v7[v8], L"/utqpcore")
         && wcsicmp(v7[v8], L"/fixsrv")
         && wcsicmp(v7[v8], L"/pfc")
         && wcsicmp(v7[v8], L"/RegServer")
         && wcsicmp(v7[v8], L"/UnregServer") )
    {
      if ( ++v8 >= pNumArgs )
        goto LABEL_26;
    }
    v18 = 0;
  }
LABEL_26:
  dword_41A740 = v18;
  sub_40C850();
  if ( v18 != 1 )
  {
    v4 = StartAddress(0);
    goto LABEL_42;
  }
  dword_41A740 = 1;
  v9 = 0;
  v10 = OpenSCManagerW(0, 0, 0xF003Fu);
  v11 = v10;
  if ( !v10 )
  {
    dword_41A73C = GetLastError();
LABEL_33:
    sub_40C4F0(L"Service is not installed", v14);
    v5 = dword_41A73C;
    goto LABEL_43;
  }
  v12 = OpenServiceW(v10, &ServiceName, 1u);
  if ( v12 )
  {
    v9 = 1;
    CloseServiceHandle(v12);
  }
  else
  {
    dword_41A73C = GetLastError();
  }
  CloseServiceHandle(v11);
  if ( !v9 )
    goto LABEL_33;
  ServiceStartTable.lpServiceName = (LPWSTR)&ServiceName;
  ServiceStartTable.lpServiceProc = (LPSERVICE_MAIN_FUNCTIONW)sub_40C690;
  v16 = 0;
  v17 = 0;
  if ( dword_41A740 != 1 || StartServiceCtrlDispatcherW(&ServiceStartTable) )
  {
    v4 = dword_41A73C;
  }
  else
  {
    dword_41A740 = 0;
    v4 = GetLastError();
    dword_41A73C = v4;
  }
  v5 = ServiceStatus.dwWin32ExitCode;
  if ( !ServiceStatus.dwWin32ExitCode && v4 )
LABEL_42:
    v5 = v4;
LABEL_43:
  if ( dword_41A864 == 1 )
  {
    sub_4042C0();
    dword_41A864 = 0;
  }
  if ( dword_41A860 != (HANDLE)-1 )
  {
    CloseHandle(dword_41A860);
    dword_41A860 = 0;
  }
  if ( !(dword_41AC74 & 1) )
  {
    dword_41AC74 |= 1u;
    dword_41A9B8 = 0;
    dword_41A9BC = 0;
    dword_41A9C0 = 0;
    dword_41A998 = 0;
    dword_41A99C = 0;
    dword_41A9A0 = 0;
    dword_41A9A4 = 0;
    dword_41A9A8 = 0;
    dword_41A9AC = 0;
    dword_41A9B0 = 0;
    dword_41A9B4 = 0;
    dword_41A9C8 = 1000;
    dword_41A9CC = 0;
    dword_41A9D0 = 0;
    dword_41A9D4 = 0;
    dword_41A9DC = 0;
    dword_41A9E0 = 0;
    dword_41A9E4 = 0;
    dword_41A9D8 = 0;
    dword_41A9E8 = 0;
    atexit(sub_411E10);
  }
  if ( &dword_41A998 )
  {
    if ( dword_41A9A4 )
    {
      operator delete[]((void *)dword_41A9A4);
      dword_41A9A4 = 0;
    }
    if ( dword_41A9AC )
    {
      operator delete[]((void *)dword_41A9AC);
      dword_41A9AC = 0;
    }
    dword_41A9A8 = 0;
    dword_41A9B0 = 0;
    dword_41A9B4 = 0;
    dword_41A998 = 0;
    dword_41A99C = 0;
    dword_41A9A0 = 0;
    if ( dword_41A9B8 != dword_41A9BC )
      dword_41A9BC = dword_41A9B8;
    dword_41A9C8 = 0;
    dword_41A9CC = 0;
    if ( dword_41A9E0 )
    {
      operator delete[]((void *)dword_41A9E0);
      dword_41A9E0 = 0;
    }
    dword_41A9E4 = 0;
    dword_41A9D8 = 0;
    dword_41A9E8 = 0;
    dword_41A9D0 = 0;
    dword_41A9D4 = 0;
    dword_41A9DC = 0;
  }
  if ( ThreadId )
  {
    PostThreadMessageW(ThreadId, 0x838u, 0, 0);
    ThreadId = 0;
    WaitForSingleObject(hObject, 0x2710u);
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0;
  }
  return v5;
}
		
 
		
		
		
		
		
		
		
		
		
		
		
		