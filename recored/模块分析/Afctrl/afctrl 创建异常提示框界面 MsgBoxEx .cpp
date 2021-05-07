
//通过字符串,调用 Util::GF::RawCreateGFElementByXtml 创建界面？



//=============================================================================

__int32 __stdcall sub_50346892(int a1, int a2, int a3)
{
  const struct CTXStringW *v3; // eax@1
  Util::GF *v4; // eax@1
  struct IGFElement **v5; // ST08_4@1
  struct IGFElement *v6; // ST0C_4@1
  __int32 v7; // esi@1
  char v9; // [sp+4h] [bp-Ch]@1
  char v10; // [sp+8h] [bp-8h]@1
  char v11; // [sp+Ch] [bp-4h]@1

  CTXStringW::CTXStringW((CTXStringW *)&v11, L"sysxtml:");
  v3 = (const struct CTXStringW *)operator+(&v9, &v11, L"AFCtrl\\MsgBoxEx.xml|MsgBoxEx");
  CTXBSTR::CTXBSTR((CTXBSTR *)&v10, v3);
  CTXStringW::~CTXStringW((CTXStringW *)&v9);
  CTXStringW::~CTXStringW((CTXStringW *)&v11);
  v4 = (Util::GF *)CTXBSTR::operator wchar_t *(&v10);
  v7 = sub_50233A0F(a1, (int)CTXStringW::~CTXStringW, v4, v5, v6);
  sub_503487D0((char *)a1);
  CTXBSTR::~CTXBSTR((CTXBSTR *)&v10);
  return v7;
}


__int32 __userpurge sub_50233A0F@<eax>(int a1@<ecx>, int a2@<esi>, Util::GF *a3, struct IGFElement **a4, struct IGFElement *a5)
{
  _DWORD *v5; // ecx@1
  __int32 result; // eax@2
  signed int v7; // eax@3
  signed int v8; // ecx@3

  v5 = (_DWORD *)(a1 + 8);
  if ( *v5 )
  {
    result = sub_50210754(a2, a3, *v5, a4, a5, 0);
  }
  else
  {
    v7 = sub_502334EB((int)a3, v5, (int)a4, (int)a5);
    v8 = -2147467259;
    if ( v7 >= 0 )
      v8 = 0;
    result = v8;
  }
  return result;
}

signed int __cdecl sub_502334EB(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ecx@0
  struct IGFElement *v5; // eax@2
  signed int v6; // esi@4
  __int32 v7; // eax@4
  _DWORD *v8; // edi@4
  int v10; // [sp+0h] [bp-4h]@1

  v10 = v4;
  if ( !a4 || ((*(void (__stdcall **)(int))(*(_DWORD *)a4 + 4))(a4), (v5 = (struct IGFElement *)a4) == 0) )
  {
    Util::Core::GetPlatformCore((Util::Core *)&a4);
    v5 = (struct IGFElement *)a4;
  }
  v6 = 0;
  v10 = 0;
  v7 = sub_5020DE6E(0, (Util::GF *)a1, (wchar_t *)&v10, (struct IGFElement **)a3, v5, 0);
  v8 = a2;
  if ( v7 >= 0 )
  {
    sub_5023370C(v10);
    *v8 = a2;
    sub_5020A6C8(&a2);
  }
  if ( *v8 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v8 + 4))(*v8);
  else
    v6 = -2147467259;
  sub_5020A6C8(&v10);
  sub_5020A6C8(&a4);
  return v6;
}

__int32 __usercall sub_5020DE6E@<eax>(int a1@<esi>, Util::GF *a2, wchar_t *a3, struct IGFElement **a4, struct IGFElement *a5, struct ITXCore *a6)
{
  struct IGFElement *v6; // eax@2
  __int32 v7; // esi@4

  if ( !a5 || ((*(void (__stdcall **)(struct IGFElement *))(*(_DWORD *)a5 + 4))(a5), (v6 = a5) == 0) )
  {
    Util::Core::GetPlatformCore((Util::Core *)&a5);
    v6 = a5;
  }
  v7 = Util::GF::RawCreateGFElementByXtml(a2, a3, a4, v6, a6, a1);
  sub_5020A6C8(&a5);
  return v7;
}
//=============================================================================





