/*
loginlogic/Base=05840000    [改]
GF/Base=53150000
AppFramework/Base=0BC80000	[改]
 
PreloginLogic/Base=56DE0000




进程创建的方式大致有：CreateProcess CreateProcessAsUser/CreateProcessWithLogon CreateProcessWithToken(当然还有shellexecute)

CreateProcess 以当前进程账户/权限，创建进程

CreateProcessAsUser 可以被system账户或者用户账户的普通权限调用，创建具有用户帐户普通权限的进程（注意用户账户的管理员权限会创建进程失败）

CreateProcessWithLogon 弥补了CreateProcessAsUser不能以用户账户管理员权限创建进程，但是需要账号和密码

CreateProcessWithToken 可以由用户账户管理员权限，同样弥补了CreateProcessAsUser的缺陷。


*/

{

int __usercall sub_56E2F41C@<eax>(int a1@<esi>, int a2, int a3, int a4)
{
  int v4; // ebp@0
  _DWORD *v5; // eax@3
  int i; // esi@3
  int v7; // edi@4
  _DWORD *v8; // esi@12
  void *v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  void *Memory; // [sp+Ch] [bp-14h]@3
  int v13; // [sp+10h] [bp-10h]@3
  int v14; // [sp+14h] [bp-Ch]@10
  int v15; // [sp+18h] [bp-8h]@8
  int v16; // [sp+1Ch] [bp-4h]@1

  v11 = 0;
  
  v10 = (void *)sub_56DF18D2(v4, 0, 0); //以v4传入方法,在方法里以v4为基准,访问当前栈的数据
  v16 = 0;
  if ( sub_56DEDAC4(&unk_56EBDE30, &v16) && v16 ) //-------------->什么基址?
  {
    v13 = 0;
    Memory = (void *)sub_56DF18D2(v4, 0, 0);
    (*(void (__stdcall **)(int, void **, int))(*(_DWORD *)v16 + 48))(v16, &Memory, a1);///////////////////----try    =>common.522D8620
    v5 = Memory; //链表
    for ( i = *(_DWORD *)Memory; (void *)i != Memory; v5 = Memory )
    {
      v7 = *(_DWORD *)(i + 8);
      i = *(_DWORD *)i;
      if ( (!a4 || (*(int (__stdcall **)(int, int))(*(_DWORD *)v7 + 60))(v7, a4))
        && (!a3 || !(*(int (__stdcall **)(int, int))(*(_DWORD *)a3 + 28))(a3, v7)) )
      {
        v15 = 0;
        if ( (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v7 + 44))(v7, &unk_56EBDE30, &v15) >= 0 )
        {
          if ( v15 )
          {
            v14 = v15;
            (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 4))(v15);
            sub_56DF7B50(v10, &v14);
            sub_56DE1E2F(&v14);
            (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          }
        }
      }
    }
    v8 = (_DWORD *)*v5;
    if ( (_DWORD *)*v5 != v5 )
    {
      do
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8[2] + 8))(v8[2]);
        v8 = (_DWORD *)*v8; //链表
      }
      while ( v8 != Memory );
    }
    (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 8))(v16);
    sub_56DF1A14(&Memory);
    sub_56DE4405(Memory, 12);
  }
  sub_56DF7FF0(&v10);
  sub_56DFD4F0(&v10);
  sub_56DE4405(v10, 12);
  return a2;
}

int __userpurge sub_56DF18D2@<eax>(int a1@<ebp>, int a2, int a3)
{
  int v3; // ecx@1
  int v4; // eax@1
  int v5; // ecx@1
  int v6; // edx@2

  sub_56EAA1A3((int)sub_56EAB845, 12);
  *(_DWORD *)(a1 - 0x18) = v3;
  v4 = sub_56DE43B0(0xCu);
  *(_DWORD *)(a1 - 0x14) = v4;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 0xC);
  }
  else
  {
    v5 = v4;
    v6 = v4;
  }
  *(_DWORD *)(a1 - 4) = 0;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(a1 - 4) = -1;
  return sub_56EAA17D();
}

//@a1 unk_56EBDE30
int __cdecl sub_56DEDAC4(int a1, int a2)
{
  int v2; // ebx@1
  int v4; // [sp+4h] [bp-4h]@1

  v2 = 0;
  v4 = 0;
  
  //common
  Util::Core::GetPlatformCore((Util::Core *)&v4);
  
  //56DEDADE
  if ( v4 )
    LOBYTE(v2) = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v4 + 40))(v4, a1, a2) >= 0;  //==>common.522CE850/sub_522CE850
  sub_56DE1E2F((unsigned int *)&v4);
  return v2;
}

//522DFBF0
int __cdecl Util::Core::GetPlatformCore(Util::Core *this)
{
  int v1; // ecx@1
  int result; // eax@3

  v1 = dword_524E8A34;
  if ( dword_524E8A34 && this )
  {
    *(_DWORD *)this = dword_524E8A34;
    (*(void (__stdcall **)(int))(*(_DWORD *)v1 + 4))(v1);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}


int __stdcall sub_522CE850(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int result; // eax@2

  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 )
    result = (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v3 + 36))(v3, a1, a2, a3); //==>common.522C8280/sub_522C8280
  else
    result = 0x80004005;
  return result;
}


int __stdcall sub_522C8280(int a1, int a2, int a3, int a4)
{
  int v4; // edx@1
  int v5; // ecx@2
  signed int v7; // ecx@6
  int v8; // edx@7
  int v9; // edx@9
  int v10; // esi@12

  v4 = *(_DWORD *)(a1 + 12);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( !v5 || !*(_DWORD *)(v5 + 4) || !*(_DWORD *)(a1 + 20) )
      return 0x8000FFFF;
  }
  v7 = 0x80004001;
  if ( v4 )
  {
    v8 = *(_DWORD *)(a1 + 48);
    if ( v8 )
      return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v8 + 4))(v8, a2, a3, a4);  //================>common.522C8EE0/sub_522C8EE0
  }
  v9 = *(_DWORD *)(a1 + 16);
  if ( !v9 || !*(_DWORD *)(v9 + 4) )
  {
LABEL_14:
    if ( *(_DWORD *)(a1 + 20) && (!v9 || !*(_DWORD *)(v9 + 4)) )
      v7 = 0x8000FFFF;
    return v7;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    v10 = *(_DWORD *)(a1 + 48);
    if ( v10 )
      return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v10 + 4))(v10, a2, a3, a4); //================>common.522C82F5
    goto LABEL_14;
  }
  return v7;
}


//.faq od和ida显示代码差别很大  
int __thiscall sub_522C8EE0(int this)
{
  return (*(int (__thiscall **)(int))(this + 8))(  *(_DWORD *)(this + 4) + *(_DWORD *)(this + 12)  );
}


}
//============================================================================================================================================================================
OpenProcess/CreateProcessWithToken


Direction Type Address                                          Text                  
--------- ---- -------                                          ----                  
          p    Util::Sys::IsAnotherSameProcessRunning(void)+155 call    ds:OpenProcess
Down      p    sub_52413030+83                                  call    ds:OpenProcess
Down      p    sub_524131C0+10A                                 call    ds:OpenProcess
 
//============================================================================================================================================================================


int __cdecl Util::Sys::IsAnotherSameProcessRunning()
{
  HMODULE v0; // eax@2
  HMODULE v1; // ebx@2
  int result; // eax@3
  FARPROC v3; // edi@4
  FARPROC v4; // eax@4
  int v5; // edi@9
  HANDLE v6; // esi@10
  signed int v7; // eax@17
  void (__stdcall *v8)(HANDLE, int, WCHAR *, signed int); // [sp+0h] [bp-13D4h]@4
  int v9; // [sp+4h] [bp-13D0h]@11
  int v10; // [sp+8h] [bp-13CCh]@2
  FARPROC v11; // [sp+Ch] [bp-13C8h]@4
  unsigned int v12; // [sp+10h] [bp-13C4h]@8
  FARPROC v13; // [sp+14h] [bp-13C0h]@4
  DWORD dwProcessId[1000]; // [sp+18h] [bp-13BCh]@8
  WCHAR String1; // [sp+FB8h] [bp-41Ch]@10
  WCHAR Dst[262]; // [sp+11C4h] [bp-210h]@2
  unsigned int v17; // [sp+13D0h] [bp-4h]@1
  int savedregs; // [sp+13D4h] [bp+0h]@1

  sub_5247A780();
  v17 = (unsigned int)&savedregs ^ __security_cookie;
  if ( dword_52572668 & 1 )
  {
    result = sub_5247992D((unsigned int)&savedregs ^ v17);
  }
  else
  {
    v10 = 0;
    dword_52572668 |= 1u;
    memset(Dst, 0, 0x20Au);
    GetModuleFileNameW(0, Dst, 0x104u);
    v0 = Util::Sys::SafeLoadLibrary((Util::Sys *)&"PSAPI.DLL", (const char *)v17);
    v1 = v0;
    if ( v0 )
    {
      v3 = GetProcAddress(v0, "EnumProcesses");
      v11 = GetProcAddress(v1, "EnumProcessModules");
      v13 = GetProcAddress(v1, "GetModuleBaseNameW");
      v4 = GetProcAddress(v1, "GetModuleFileNameExW");
      v8 = (void (__stdcall *)(HANDLE, int, WCHAR *, signed int))v4;
      if ( v3
        && v11
        && v13
        && v4
        && ((int (__stdcall *)(DWORD *, signed int, unsigned int *))v3)(dwProcessId, 1000, &v12)
        && (v5 = 0, (v13 = (FARPROC)(v12 >> 2)) != 0) )
      {
        while ( 1 )
        {
          lstrcpynW(&String1, L"Unknown", 260);
          v6 = OpenProcess(0x410u, 0, dwProcessId[v5]);
          if ( v6 )
          {
            if ( ((int (__stdcall *)(HANDLE, int *, signed int, unsigned int *))v11)(v6, &v9, 4, &v12) )
              v8(v6, v9, &String1, 260);
            CloseHandle(v6);
          }
          if ( !lstrcmpiW(&String1, Dst) && ++v10 >= 2 )
            break;
          if ( ++v5 >= (unsigned int)v13 )
            goto LABEL_17;
        }
        FreeLibrary(v1);
        v7 = 1;
      }
      else
      {
LABEL_17:
        FreeLibrary(v1);
        v7 = 0;
      }
      dword_5257266C = v7;
      result = sub_5247992D((unsigned int)&savedregs ^ v17);
    }
    else
    {
      dword_5257266C = 0;
      result = sub_5247992D((unsigned int)&savedregs ^ v17);
    }
  }
  return result;
}


//============================================================================================================================================================================
int __fastcall sub_52413030(DWORD dwProcessId, _DWORD *a2)
{
  _DWORD *v2; // ebx@1
  DWORD v3; // esi@1
  int result; // eax@2
  int v5; // edi@3
  HANDLE v6; // esi@3
  DWORD v7; // edi@7
  HANDLE v8; // eax@8
  PSID *v9; // edi@8
  PUCHAR v10; // eax@10
  HANDLE v11; // eax@12
  DWORD *v12; // [sp+8h] [bp-128h]@1
  signed int v13; // [sp+Ch] [bp-124h]@3
  HANDLE TokenHandle; // [sp+10h] [bp-120h]@3
  DWORD ReturnLength; // [sp+14h] [bp-11Ch]@5
  struct _OSVERSIONINFOW VersionInformation; // [sp+18h] [bp-118h]@1

  v2 = a2;
  v12 = a2;
  v3 = dwProcessId;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110u);
  VersionInformation.dwOSVersionInfoSize = 276;
  GetVersionExW(&VersionInformation);
  if ( VersionInformation.dwMajorVersion >= 6 )
  {
    v5 = 0;
    *v2 = 12288;
    v13 = 0;
    TokenHandle = 0;
    v6 = OpenProcess(0x1F0FFFu, 0, v3);
    if ( v6 )
    {
      if ( OpenProcessToken(v6, 0xF01FFu, &TokenHandle) )
      {
        ReturnLength = 0;
        if ( !GetTokenInformation(TokenHandle, TokenImpersonationLevel|0x10, 0, 0, &ReturnLength)
          && GetLastError() == 122 )
        {
          v7 = ReturnLength;
          if ( ReturnLength && (v8 = GetProcessHeap(), (v9 = (PSID *)HeapAlloc(v8, 0, v7)) != 0) )
          {
            if ( GetTokenInformation(TokenHandle, TokenImpersonationLevel|0x10, v9, ReturnLength, &ReturnLength) )
            {
              v10 = GetSidSubAuthorityCount(*v9);
              if ( v10 )
              {
                v13 = 1;
                *v12 = *GetSidSubAuthority(*v9, *v10 - 1);
              }
            }
            v11 = GetProcessHeap();
            HeapFree(v11, 0, v9);
            v5 = v13;
          }
          else
          {
            v5 = 0;
          }
        }
        CloseHandle(TokenHandle);
      }
      CloseHandle(v6);
    }
    result = v5;
  }
  else
  {
    result = 0;
  }
  return result;
}




//============================================================================================================================================================================

int __fastcall sub_524131C0(int a1, int a2)
{
  int result; // eax@2
  HWND v3; // eax@3
  DWORD v4; // eax@5
  HANDLE v5; // edi@8
  HMODULE v6; // eax@11
  HANDLE phNewToken; // [sp+24h] [bp-1A0h]@3
  HANDLE TokenHandle; // [sp+28h] [bp-19Ch]@3
  DWORD dwProcessId; // [sp+2Ch] [bp-198h]@3
  int v10; // [sp+30h] [bp-194h]@3
  int v11; // [sp+34h] [bp-190h]@1
  int v12; // [sp+38h] [bp-18Ch]@1
  FARPROC v13; // [sp+3Ch] [bp-188h]@12
  HMODULE hLibModule; // [sp+40h] [bp-184h]@11
  __int128 v15; // [sp+44h] [bp-180h]@13
  char Dst; // [sp+5Ch] [bp-168h]@13
  struct _OSVERSIONINFOW VersionInformation; // [sp+A4h] [bp-120h]@1

  v11 = a2;
  v12 = a1;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110u);
  VersionInformation.dwOSVersionInfoSize = 276;
  GetVersionExW(&VersionInformation);
  if ( VersionInformation.dwMajorVersion >= 6 )
  {
    v10 = 0;
    TokenHandle = (HANDLE)0x3000;
    dwProcessId = 0;
    phNewToken = (HANDLE)0x3000;
    v3 = FindWindowW(L"Progman", 0);
    if ( v3 )
    {
      GetWindowThreadProcessId(v3, &dwProcessId);
      if ( sub_52413030(dwProcessId, &phNewToken) )
      {
        v4 = GetCurrentProcessId();
        if ( sub_52413030(v4, &TokenHandle) )
        {
          if ( TokenHandle == (HANDLE)12288 && phNewToken == (HANDLE)0x2000 )
          {
            v5 = OpenProcess(0x1F0FFFu, 0, dwProcessId);
            if ( v5 )
            {
              TokenHandle = 0;
              phNewToken = 0;
              if ( OpenProcessToken(v5, 0xF01FFu, &TokenHandle) )
              {
                if ( DuplicateTokenEx(TokenHandle, 0xF01FFu, 0, SecurityImpersonation, TokenPrimary, &phNewToken) )
                {
                  sub_52412B80(phNewToken);
                  v6 = ((HINSTANCE (__cdecl *)(Util::Sys *))Util::Sys::SafeLoadLibrary)((Util::Sys *)L"AdvApi32.dll");
                  hLibModule = v6;
                  if ( v6 )
                  {
                    v13 = GetProcAddress(v6, "CreateProcessWithTokenW");
                    if ( v13 )
                    {
                      v15 = 0i64;
                      memset(&Dst, 0, 0x44u);
                      v10 = ((int (__stdcall *)(HANDLE, _DWORD, int, int, _DWORD, _DWORD, _DWORD, char *, __int128 *))v13)(
                              phNewToken,
                              0,
                              v12,
                              v11,
                              0,
                              0,
                              0,
                              &Dst,
                              &v15);
                    }
                    FreeLibrary(hLibModule);
                  }
                  CloseHandle(phNewToken);
                }
                CloseHandle(TokenHandle);
              }
              CloseHandle(v5);
            }
          }
        }
      }
    }
    result = v10;
  }
  else
  {
    result = 0;
  }
  return result;
}


//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





//============================================================================================================================================================================





