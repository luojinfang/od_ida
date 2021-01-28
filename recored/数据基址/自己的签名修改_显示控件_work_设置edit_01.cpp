Address  To       From     Size     Comment           Party 
0018EB78 3086D24F 3978E295 C        riched20.3978E295 User
0018EB84 30870B66 3086D24F 3C       gf.3086D24F       User
0018EBC0 30875FAA 30870B66 C        gf.30870B66       User
0018EBCC 65710D84 30875FAA 10       gf.30875FAA       User
0018EBDC 65710D84 65710D84 10       afctrl.65710D84   User
0018EBEC 6576CD28 65710D84 9C       afctrl.65710D84   User
0018EC88 6576D0D6 6576CD28 4C       afctrl.6576CD28   User
0018ECD4 657D21C2 6576D0D6 44       afctrl.6576D0D6   User
0018ED18 657EE049 657D21C2 14       afctrl.657D21C2   User
0018ED2C 3091559F 657EE049 74       afctrl.657EE049   User
0018EDA0 30874C28 3091559F 88       gf.3091559F       User
0018EE28 3086C26F 30874C28 10       gf.30874C28       User
0018EE38 39713FAD 3086C26F 40       gf.3086C26F       User
0018EE78 3970F4A1 39713FAD 20       riched20.39713FAD User
0018EE98 39706039 3970F4A1 148      riched20.3970F4A1 User
0018EFE0 7717EADA 39706039 C        riched20.39706039 System
0018EFEC 7717EAB2 7717EADA C        msctf.7717EADA    System
0018EFF8 39728E08 7717EAB2 38       msctf.7717EAB2    User
0018F030 3086E3AD 39728E08 28       riched20.39728E08 User
0018F058 300D9040 3086E3AD FFE70FAC gf.3086E3AD       User
00000004 00000000 300D9040          common.300D9040   User



===============================================================================================================================================================================================
HRESULT CreateTextServices(
  IUnknown  *punkOuter,
  ITextHost *pITextHost,
  IUnknown  **ppUnk
);
Parameters
	punkOuter
		Type: IUnknown*
		Pointer to the controlling IUnknown interface on the outer object if the text services object is being created as part of an aggregate object. This parameter can be NULL if the object is not part of an aggregate.

	pITextHost
		Type: ITextHost*
		Pointer to your implementation of the ITextHost interface. This pointer must not be NULL.

	ppUnk
		Type: IUnknown**
		Pointer to a variable that receives a pointer to the private IUnknown of the text services object. You can call QueryInterface on this pointer to retrieve ITextServices or ITextDocument interface pointers.


===============================================================================================================================================================================================
//3086E3AD
int __stdcall sub_3086DAF0(int a1, int a2, int a3, wchar_t *Str, int pvParam)
{
  int v5; // esi@12
  int v6; // eax@12
  int v7; // ebx@14
  int v8; // eax@14
  int v9; // eax@14
  int v10; // eax@14
  int v11; // eax@15
  int v12; // eax@17
  int v13; // eax@18
  bool v14; // sf@20
  int v15; // eax@24
  int v16; // eax@27
  int v17; // eax@27
  int v18; // eax@27
  int v19; // eax@27
  int v20; // eax@39
  int v21; // eax@40
  int v22; // eax@41
  int v23; // eax@42
  int v24; // eax@42
  void (__stdcall **v25)(_DWORD, _DWORD); // ebx@44
  int v26; // eax@44
  int v27; // ebx@48
  int v28; // eax@48
  int v29; // ecx@50
  size_t v30; // eax@52
  wchar_t *v31; // ecx@59
  int *v32; // eax@61
  int v33; // ecx@63
  int v34; // esi@66
  int v35; // ecx@66
  int v36; // eax@67
  unsigned __int16 v37; // bx@68
  int v38; // ecx@69
  int v39; // ebx@74
  int v40; // ebx@79
  int v41; // ebx@82
  unsigned int v42; // eax@83
  bool v43; // zf@85
  int v44; // eax@85
  unsigned int v45; // eax@91
  double v46; // st7@92
  int v47; // esi@92
  TXTimer *v48; // ST0C_4@92
  double v49; // st6@92
  unsigned int v50; // ST0C_4@92
  int v51; // ecx@98
  int v52; // eax@102
  int *v53; // ecx@103
  int v54; // ebx@113
  int v55; // ecx@117
  signed int v56; // eax@122
  int v57; // ecx@125
  int v58; // ecx@131
  int v60; // ecx@134
  int *v61; // ecx@136
  int v62; // edx@136
  int v63; // eax@139
  int v65; // [sp+Ch] [bp-4Ch]@74
  int v66; // [sp+10h] [bp-48h]@74
  char v67; // [sp+14h] [bp-44h]@42
  char v68; // [sp+18h] [bp-40h]@40
  char v69; // [sp+1Ch] [bp-3Ch]@27
  char v70; // [sp+20h] [bp-38h]@27
  int v71; // [sp+24h] [bp-34h]@28
  int v72; // [sp+28h] [bp-30h]@34
  char v73; // [sp+2Ch] [bp-2Ch]@14
  char v74; // [sp+30h] [bp-28h]@48
  char v75; // [sp+34h] [bp-24h]@36
  char v76; // [sp+38h] [bp-20h]@36
  char v77; // [sp+3Ch] [bp-1Ch]@27
  int v78; // [sp+40h] [bp-18h]@36
  int v79; // [sp+44h] [bp-14h]@27
  int v80; // [sp+48h] [bp-10h]@1
  int v81; // [sp+54h] [bp-4h]@14
  CTXStringW *v82; // [sp+60h] [bp+8h]@14

  v80 = 0;
  if ( (unsigned int)a2 > 0x43B )
  {
    if ( (unsigned int)a2 <= 0x447 )
    {
      if ( a2 == 0x447 )
      {
        sub_3086D1D6(Str);
      }
      else if ( a2 == 0x43F )
      {
        if ( Str )
        {
          v56 = 0;
          if ( a3 )
          {
            *(_DWORD *)(a1 + 0x164) &= 0xFFFFFEFF;
            v56 = 0x20;
          }
          else
          {
            *(_DWORD *)(a1 + 0x164) |= 0x100u;
          }
          v57 = *(_DWORD *)(a1 + 0x15C);
          if ( v57 )
            (*(void (__stdcall **)(signed int, signed int))(*(_DWORD *)v57 + 0x4C))(0x20, v56);
        }
      }
      else
      {
        if ( a2 == 0x443 )
        {
          v54 = *(_DWORD *)(a1 + 0x17C);
          if ( pvParam )
            *(_DWORD *)pvParam = v54;
          v43 = a3 == 0;
          *(_DWORD *)(a1 + 0x178) = a3 == 0;
          *(_DWORD *)(a1 + 0x17C) = Str;
          if ( !v43 )
            *(_DWORD *)(a1 + 0x17C) = GetSysColor(5);
          v55 = *(_DWORD *)(a1 + 0x15C);
          if ( v55 )
            (*(void (__stdcall **)(signed int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v55 + 0xC))(0x15, 0, 0, 0);
          if ( v54 != *(_DWORD *)(a1 + 0x17C) )
            (*(void (__stdcall **)(_DWORD, signed int))(*(_DWORD *)(a1 + 4) + 0x24))(0, 1);
          return v80;
        }
        if ( a2 == 0x444 )
        {
          if ( !(a3 & 1) )
          {
            sub_3086D19B(Str);
            return v80;
          }
        }
        else if ( a2 == 0x445 )
        {
          *(_DWORD *)(a1 + 0x174) = Str;
        }
      }
LABEL_131:
      v58 = *(_DWORD *)(a1 + 0x15C);
      if ( !v58 )
        return v80;
      return (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v58 + 0xC))(a2, a3, Str, pvParam);  //3086E3AD
    }
    if ( a2 == 0x44D )
    {
      sub_3086D06A(a3, Str);
      v53 = (int *)pvParam;
      v63 = *(_DWORD *)(a1 + 0x164) & 0x10089C0;
      *(_DWORD *)pvParam = v63;
      if ( !*(_DWORD *)(a1 + 0x16C) )
        return v80;
      v52 = v63 | 1;
LABEL_141:
      *v53 = v52;
      return v80;
    }
    if ( a2 != 0x44E )
    {
      if ( a2 != 0x4E1 )
        goto LABEL_131;
      v34 = a1;
      v60 = *(_DWORD *)(a1 + 0x15C);
      if ( !v60 )
        return v80;
      v36 = (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v60 + 0xC))(0x4E1, a3, Str, pvParam);
LABEL_136:
      v61 = *(int **)(v34 + 0x15C);
      v62 = *v61;
      v80 = v36;
      (*(void (__thiscall **)(int *, signed int, signed int))(v62 + 0x4C))(v61, 0x80000, 0x80000);
      return v80;
    }
    v52 = sub_3086C2D2(a1);
LABEL_103:
    v53 = (int *)pvParam;
    goto LABEL_141;
  }
  if ( a2 == 0x43B )
  {
    v52 = *(_DWORD *)(a1 + 0x174);
    goto LABEL_103;
  }
  if ( (unsigned int)a2 > 0x115 )
  {
    if ( a2 != 0x20A )
    {
      if ( a2 == 0x302 )
      {
        sub_3086BC23(a1 + 0x22C, a1 + 0x230);
        v33 = *(_DWORD *)(a1 + 0x15C);
        if ( !v33 )
          return v80;
        return (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v33 + 0xC))(0x302, a3, Str, pvParam);
      }
      if ( a2 == 0x435 )
      {
        v31 = Str;
        if ( !Str )
          v31 = (wchar_t *)0x10000;
        *(_DWORD *)(a1 + 0x170) = v31;
        v32 = *(int **)(a1 + 0x15C);
        if ( v32 )
          (*(void (__thiscall **)(int *, signed int, signed int))(*v32 + 0x4C))(v32, 0x8000, 0x8000);
        return v80;
      }
      goto LABEL_131;
    }
    if ( a3 & 0xC )
    {
      v34 = a1;
      v35 = *(_DWORD *)(a1 + 0x15C);
      if ( !v35 )
        return v80;
      v36 = (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v35 + 0xC))(0x20A, a3, Str, pvParam);
      goto LABEL_136;
    }
    v37 = -((unsigned int)a3 >> 0x10);
    a2 = v37;
    pvParam = 0;
    a3 = SystemParametersInfoW(0x68u, 0, &pvParam, 0);
    Str = (wchar_t *)(signed __int16)v37;
    if ( abs((signed __int16)v37) < 0x78 )
      return v80;
    v38 = a3;
    if ( (unsigned int)a3 <= 0 || (unsigned int)pvParam <= 0 )
      return v80;
    if ( pvParam == 0xFFFFFFFF )
    {
      v51 = *(_DWORD *)a1;
      if ( (signed __int16)v37 <= 0 )
        (*(void (__stdcall **)(int, signed int, signed int, _DWORD, _DWORD))(v51 + 0x20))(a1, 0x115, 2, 0, 0);
      else
        (*(void (__stdcall **)(int, signed int, signed int, _DWORD, _DWORD))(v51 + 0x20))(a1, 0x115, 3, 0, 0);
      return v80;
    }
    if ( !a3 )
      v38 = 1;
    v65 = 0;
    v66 = 0;
    v79 = 0;
    v72 = 0;
    v71 = 0;
    v39 = pvParam * v38 * ((signed int)Str / 0x78);
    (*(void (__stdcall **)(int *, int *, int *, int *, int *))(**(_DWORD **)(a1 + 0x15C) + 0x18))(
      &v65,
      &v66,
      &v79,
      &v72,
      &v71);
    if ( !v71 )
    {
      if ( v39 <= 0 )
      {
        if ( v39 < 0 )
        {
          v40 = -v39;
          do
          {
            (*(void (__stdcall **)(int, signed int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x20))(a1, 0x115, 0, 0, 0);
            --v40;
          }
          while ( v40 );
        }
      }
      else
      {
        do
        {
          --v39;
          (*(void (__stdcall **)(int, signed int, signed int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x20))(
            a1,
            0x115,
            1,
            0,
            0);
        }
        while ( v39 );
      }
      return v80;
    }
    v41 = 0x14 * v39;
    if ( !v41 )
      return v80;
    *(_DWORD *)(a1 + 0x240) += 0xC;
    v42 = *(_DWORD *)(a1 + 0x240);
    if ( v42 >= 0x32 )
      v42 = 0x32;
    v43 = (_WORD)a2 == 0;
    v14 = (signed __int16)a2 < 0;
    *(_DWORD *)(a1 + 0x240) = v42;
    v44 = *(_DWORD *)(a1 + 0x258);
    if ( v14 || v43 )
    {
      if ( v44 )
      {
        if ( v44 == 2 )
        {
          *(_DWORD *)(a1 + 0x258) = 0;
          goto LABEL_97;
        }
        goto LABEL_89;
      }
    }
    else
    {
      if ( v44 == 2 )
      {
        *(_DWORD *)(a1 + 0x258) = 1;
LABEL_97:
        *(_DWORD *)(a1 + 0x244) = v41;
        *(_DWORD *)(a1 + 0x240) = 0xC;
        goto LABEL_90;
      }
      if ( !v44 )
      {
LABEL_89:
        *(_DWORD *)(a1 + 0x240) = 0;
        *(_DWORD *)(a1 + 0x244) = 0;
        *(_DWORD *)(a1 + 0x258) = 2;
LABEL_90:
        if ( *(_DWORD *)(a1 + 0x258) != 2 )
        {
          v45 = *(_DWORD *)(a1 + 0x240);
          if ( v45 > 0 )
          {
            v46 = (double)v45;
            v47 = a1 + 0x210;
            v48 = *(TXTimer **)(a1 + 0x210);
            v49 = ((double)*(signed int *)(a1 + 0x244) + (double)*(signed int *)(a1 + 0x244)) / (v46 * v46);
            *(double *)(v47 + 0x40) = v49;
            *(double *)(v47 + 0x38) = v46 * v49;
            TXTimer::EraseTimerCallback(v48, (struct ITXTimerCallback *)0x65);
            TXTimer::SetInterval((TXTimer *)0xA, *(_DWORD *)(a1 + 0x210), (struct ITXTimerCallback *)0x65, v50);
          }
        }
        return v80;
      }
    }
    *(_DWORD *)(a1 + 0x244) += v41;
    goto LABEL_90;
  }
  if ( a2 == 0x115 )
  {
    if ( (_WORD)a3 == 5 )
    {
      *(_DWORD *)(a1 + 0x21C) = (unsigned int)a3 >> 0x10;
      sub_3086D5F6(a1);
    }
    goto LABEL_131;
  }
  if ( a2 == 0xC )
  {
    v29 = *(_DWORD *)(a1 + 0x15C);
    if ( !v29
      || (v80 = (*(int (__stdcall **)(signed int, int, wchar_t *, _DWORD))(*(_DWORD *)v29 + 0xC))(0xC, a3, Str, 0),
          v80 >= 0) )
    {
      v30 = wcslen(Str);
      if ( v30 > *(_DWORD *)(a1 + 0x170) )
        *(_DWORD *)(a1 + 0x170) = v30;
      goto LABEL_10;
    }
  }
  else
  {
    if ( a2 == 0x18 )
    {
      sub_3086D20F(a3);
      return v80;
    }
    if ( a2 != 0x4E )
    {
      if ( a2 == 0xCF )
      {
        sub_3086D031(a3);
LABEL_10:
        *(_DWORD *)pvParam = 1;
        return v80;
      }
      goto LABEL_131;
    }
    if ( a3 == 0x300 )
    {
      v5 = a1;
      v6 = *(_DWORD *)(a1 + 0x1FC);
      if ( v6 == 2 || v6 == 1 )
      {
        CTXBSTR::CTXBSTR(&v73);
        v7 = *(_DWORD *)a1;
        v81 = 0;
        v8 = CTXBSTR::operator&(&v73);
        (*(void (__stdcall **)(int, int))(v7 + 0x84))(a1, v8);
        CTXStringW::CTXStringW(&a2, &v73);
        v9 = *(_DWORD *)(a1 + 0x22C);
        LOBYTE(v81) = 1;
        v82 = (CTXStringW *)(a1 + 0x234);
        pvParam = v9;
        v10 = CTXStringW::GetLength((CTXStringW *)(v5 + 0x234));
        if ( pvParam >= v10 )
          v11 = CTXStringW::GetLength((CTXStringW *)(v5 + 0x234));
        else
          v11 = pvParam;
        *(_DWORD *)(v5 + 0x22C) = v11;
        pvParam = *(_DWORD *)(v5 + 0x230);
        v12 = CTXStringW::GetLength((CTXStringW *)(v5 + 0x234));
        if ( pvParam >= v12 )
          v13 = CTXStringW::GetLength((CTXStringW *)(v5 + 0x234));
        else
          v13 = pvParam;
        v14 = *(_DWORD *)(v5 + 0x22C) < 0;
        *(_DWORD *)(v5 + 0x230) = v13;
        if ( v14 )
          *(_DWORD *)(v5 + 0x22C) = CTXStringW::GetLength((CTXStringW *)(v5 + 0x234));
        if ( *(_DWORD *)(v5 + 0x230) < 0 )
          *(_DWORD *)(v5 + 0x230) = CTXStringW::GetLength((CTXStringW *)(v5 + 0x234));
        v15 = *(_DWORD *)(v5 + 0x22C);
        if ( v15 > *(_DWORD *)(v5 + 0x230) )
          *(_DWORD *)(v5 + 0x230) = v15;
        if ( sub_3086BA0F(&a2) > *(_DWORD *)(v5 + 0x170) )
        {
          CTXStringW::CTXStringW(&Str);
          LOBYTE(v81) = 2;
          CTXStringW::CTXStringW(&v77);
          LOBYTE(v81) = 3;
          CTXStringW::CTXStringW(&a3);
          v16 = *(_DWORD *)(v5 + 0x230);
          LOBYTE(v81) = 4;
          pvParam = v16;
          v17 = CTXStringW::GetLength(v82);
          v79 = v17 - pvParam;
          v18 = CTXStringW::Mid(v82, &v70, *(_DWORD *)(v5 + 0x22C));
          LOBYTE(v81) = 5;
          CTXStringW::operator=(&v77, v18);
          LOBYTE(v81) = 4;
          CTXStringW::~CTXStringW((CTXStringW *)&v70);
          CTXStringW::GetLength((CTXStringW *)&a2);
          v19 = CTXStringW::Mid(&a2, &v69, *(_DWORD *)(v5 + 0x22C));
          LOBYTE(v81) = 6;
          CTXStringW::operator=(&Str, v19);
          LOBYTE(v81) = 4;
          CTXStringW::~CTXStringW((CTXStringW *)&v69);
          if ( sub_3086BA0F(v82) >= 0 )
            v71 = sub_3086BA0F(v82);
          else
            v71 = 0;
          if ( sub_3086BA0F(&v77) >= 0 )
            pvParam = sub_3086BA0F(&v77);
          else
            pvParam = 0;
          if ( sub_3086BA0F(&Str) >= 0 )
            v72 = sub_3086BA0F(&Str);
          else
            v72 = 0;
          CTXStringW::CTXStringW(&v78);
          LOBYTE(v81) = 7;
          CTXStringW::CTXStringW(&v75);
          LOBYTE(v81) = 8;
          CTXStringW::CTXStringW(&v76);
          LOBYTE(v81) = 9;
          if ( v72 <= pvParam )
            CTXStringW::operator=(&v78, &Str);
          else
            sub_3086BA84((int)&Str, *(_DWORD *)(v5 + 0x170) + pvParam - v71, (int)&v78);
          pvParam = *(_DWORD *)(v5 + 0x22C);
          v20 = CTXStringW::GetLength(v82);
          if ( v20 >= pvParam )
          {
            v21 = CTXStringW::Mid(v82, &v68, 0);
            LOBYTE(v81) = 0xA;
            CTXStringW::operator=(&v75, v21);
            LOBYTE(v81) = 9;
            CTXStringW::~CTXStringW((CTXStringW *)&v68);
          }
          v22 = CTXStringW::GetLength(v82);
          if ( v22 - v79 >= 0 )
          {
            v23 = CTXStringW::GetLength(v82);
            v24 = CTXStringW::Mid(v82, &v67, v23 - v79);
            LOBYTE(v81) = 0xB;
            CTXStringW::operator=(&v76, v24);
            LOBYTE(v81) = 9;
            CTXStringW::~CTXStringW((CTXStringW *)&v67);
          }
          CTXStringW::operator=(&a3, &Src);
          CTXStringW::operator+=(&a3, &v75);
          CTXStringW::operator+=(&a3, &v78);
          pvParam = CTXStringW::GetLength((CTXStringW *)&a3);
          CTXStringW::operator+=(&a3, &v76);
          *(_DWORD *)(v5 + 0x22C) = 0;
          *(_DWORD *)(v5 + 0x230) = 0;
          if ( sub_3086BA0F(&a2) > *(_DWORD *)(v5 + 0x170) )
          {
            CTXStringW::operator=(v82, &a3);
            v25 = (void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 0x88);
            v26 = CTXStringW::operator wchar_t const *(&a3);
            (*v25)(v5, v26);
          }
          if ( pvParam > 0 )
            sub_3086BC5E(pvParam, pvParam);
          LOBYTE(v81) = 8;
          CTXStringW::~CTXStringW((CTXStringW *)&v76);
          LOBYTE(v81) = 7;
          CTXStringW::~CTXStringW((CTXStringW *)&v75);
          LOBYTE(v81) = 4;
          CTXStringW::~CTXStringW((CTXStringW *)&v78);
          LOBYTE(v81) = 3;
          CTXStringW::~CTXStringW((CTXStringW *)&a3);
          LOBYTE(v81) = 2;
          CTXStringW::~CTXStringW((CTXStringW *)&v77);
          LOBYTE(v81) = 1;
          CTXStringW::~CTXStringW((CTXStringW *)&Str);
        }
        CTXBSTR::CTXBSTR(&v74);
        v27 = *(_DWORD *)v5;
        LOBYTE(v81) = 0xC;
        v28 = CTXBSTR::operator&(&v74);
        (*(void (__cdecl **)(int, int))(v27 + 0x84))(v5, v28);
        CTXStringW::operator=(v82, &v74);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v74);
        LOBYTE(v81) = 0;
        CTXStringW::~CTXStringW((CTXStringW *)&a2);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v73);
      }
    }
  }
  return v80;
}
===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================




===============================================================================================================================================================================================

===============================================================================================================================================================================================



 3978E290 | E8 20D1F8FF           call riched20.3971B3B5 
 0018EB78  3086D24F  return to gf.3086D24F from ???
 0018EB84  30870B66  return to gf.30870B66 from ???
 0018EBC0  30875FAA  return to gf.30875FAA from gf.30870B04
 0018EBCC  65710D84  return to afctrl.65710D84 from ???
 0018EBDC  65710D84  return to afctrl.65710D84 from ???
 0018EBEC  6576CD28  return to afctrl.6576CD28 from ???
 0018EC2C  300DE679  return to common.300DE679 from ???
 0018EC48  300DB18E  return to common.300DB18E from common.300D9048
 0018EC54  300DB1D2  return to common.300DB1D2 from ???
 0018EC84  0018ECD0  return to 0018ECD0 from ???
 0018EC88  6576D0D6  return to afctrl.6576D0D6 from afctrl.6576CC18
 0018EC9C  65795C01  return to afctrl.65795C01 from afctrl.65822A29
 0018ECAC  6580F25A  return to afctrl.6580F25A from afctrl.65702715
 0018ECD4  657D21C2  return to afctrl.657D21C2 from ???
 0018ED18  657EE049  return to afctrl.657EE049 from ???
 0018ED2C  3091559F  return to gf.3091559F from ???
 0018EDA0  30874C28  return to gf.30874C28 from gf.30915507
 0018EDD0  3970539D  return to riched20.3970539D from riched20.39705445
 0018EE28  3086C26F  return to gf.3086C26F from ???
 0018EE38  39713FAD  return to riched20.39713FAD from ???
 0018EE78  3970F4A1  return to riched20.3970F4A1 from riched20.3970F4A6
 0018EE98  39706039  return to riched20.39706039 from riched20.39704537
 0018EEA8  77C6E023  return to ntdll.77C6E023 from ntdll.77C6E392
 0018EED0  39728E3A  return to riched20.39728E3A from riched20.39728E41
 0018EEF4  77165F98  return to msctf.77165F98 from msctf.771618A0
 0018EF0C  77C6E023  return to ntdll.77C6E023 from ntdll.77C6E392
 0018EF20  0018EF34  return to 0018EF34 from 901D31A9
 0018EF24  773A14DD  return to kernel32.773A14DD from ???
 0018EF38  3970566D  return to riched20.3970566D from ???
 0018EFB0  77172D49  return to msctf.77172D49 from ???
 0018EFC4  7717EB1A  return to msctf.7717EB1A from msctf.77172D25
 0018EFE0  7717EADA  return to msctf.7717EADA from msctf.7717EAE3
 0018EFEC  7717EAB2  return to msctf.7717EAB2 from ???
 0018EFF8  39728E08  return to riched20.39728E08 from ???
 0018F010  3086E3AD  return to gf.3086E3AD from ???
 0018F030  3086E3AD  return to gf.3086E3AD from ???
 0018F058  300D9040  return to common.300D9040 from common.3013167C
 0018F080  3086E428  return to gf.3086E428 from gf.30949737
 0018F084  3086BC49  return to gf.3086BC49 from ???
 0018F0A4  3086BCDE  return to gf.3086BCDE from ???
 0018F0CC  3086E845  return to gf.3086E845 from ???
 0018F0E4  3086F801  return to gf.3086F801 from gf.3086E829
 0018F100  0018F138  return to 0018F138 from ???
 0018F104  30873679  return to gf.30873679 from gf.3086F7C3
 0018F13C  3087618E  return to gf.3087618E from gf.308734AE
 0018F158  65765AE7  return to afctrl.65765AE7 from ???
 0018F194  65783D62  return to afctrl.65783D62 from afctrl.65765AA6
 0018F1B4  65710EFA  return to afctrl.65710EFA from afctrl.65783D47
 0018F1D8  65765AE7  return to afctrl.65765AE7 from ???
 0018F214  6571DC16  return to afctrl.6571DC16 from afctrl.65765AA6
 0018F250  6576D895  return to afctrl.6576D895 from afctrl.6576D86B
 0018F264  6576D7E9  return to afctrl.6576D7E9 from ???
 0018F278  65805226  return to afctrl.65805226 from ???
 0018F27C  6580522D  return to afctrl.6580522D from afctrl.65836F35
 0018F294  65727E89  return to afctrl.65727E89 from afctrl.6571DAF9
 0018F2CC  65765AE7  return to afctrl.65765AE7 from ???
 0018F308  6576BD55  return to afctrl.6576BD55 from afctrl.65765AA6
 0018F33C  6576D605  return to afctrl.6576D605 from afctrl.6576BC79
 0018F364  30829411  return to gf.30829411 from ???
 0018F3AC  3082562B  return to gf.3082562B from gf.30829384
 0018F404  65783474  return to afctrl.65783474 from ???
 0018F424  30918690  return to gf.30918690 from gf.30825474
 0018F444  309197ED  return to gf.309197ED from gf.30918658
 0018F4A0  3092175C  return to gf.3092175C from ???
 0018F4B8  30920CCB  return to gf.30920CCB from ???
 0018F4DC  30922171  return to gf.30922171 from ???
 0018F4F4  30801A54  return to gf.30801A54 from ???
 0018F544  76CE62FA  return to user32.76CE62FA from ???
 0018F570  76CE6D3A  return to user32.76CE6D3A from user32.76CE62D7
 0018F5B4  76CE6CE9  return to user32.76CE6CE9 from ???
 0018F5E8  76CF0D27  return to user32.76CF0D27 from user32.76CE6C83
 0018F620  76CF0D4D  return to user32.76CF0D4D from user32.76CF0CC9
 0018F640  66202550  return to appframework.66202550 from ???
 0018F65C  6620261C  return to appframework.6620261C from appframework.66202538
 0018F6A4  76CE62FA  return to user32.76CE62FA from ???
 0018F6D0  76CE6D3A  return to user32.76CE6D3A from user32.76CE62D7
 0018F714  76CE6CE9  return to user32.76CE6CE9 from ???
 0018F748  76CE77C4  return to user32.76CE77C4 from user32.76CE6C83
 0018F7A8  76CE788A  return to user32.76CE788A from user32.76CE76D7
 0018F7B8  69F0652A  return to hummerengine.69F0652A from ???
 0018F7C4  69F0633C  return to hummerengine.69F0633C from hummerengine.69F064C3
 0018F7F4  69F06059  return to hummerengine.69F06059 from ???
 0018F810  69F04529  return to hummerengine.69F04529 from ???
 0018F818  69F04BFA  return to hummerengine.69F04BFA from hummerengine.69F04513
 0018F84C  69F0AF44  return to hummerengine.69F0AF44 from hummerengine.69F04BD9
 0018F8F8  6C6A9116  return to safemon.6C6A9116 from safemon.6C6A9094
 0018F920  6C5D0C2B  return to safemon.6C5D0C2B from ???
 0018F934  77717344  return to msvcr80.77717344 from msvcr80.777172B7
 0018F948  77CD0286  return to ntdll.77CD0286 from ntdll.77C8395C
 0018F96C  77352146  return to kernelbase.77352146 from ???
 0018F980  300E7FCD  return to common.300E7FCD from ???
 0018F984  300E7FE1  return to common.300E7FE1 from common.301316D8
 0018F98C  77C6E38C  return to ntdll.77C6E38C from ntdll.77C6DF29
 0018FA14  77C6E38C  return to ntdll.77C6E38C from ntdll.77C6DF29
 0018FA18  77C6E0F2  return to ntdll.77C6E0F2 from ntdll.77C6E269
 0018FA9C  300E80D7  return to common.300E80D7 from ???
 0018FAE8  77C76CCA  return to ntdll.77C76CCA from ntdll.77C6DF29
 0018FD5C  69F0B146  return to hummerengine.69F0B146 from hummerengine.69F0A4A4
 0018FD60  69F10EF4  return to hummerengine.69F10EF4 from E8D4454F
 0018FDA8  004014D9  return to qq.004014D9 from ???
 0018FEEC  0040128B  return to qq.0040128B from qq.0040128F
 0018FEF8  00401A8F  return to qq.00401A8F from qq.00401280
 0018FF60  00402017  return to qq.00402017 from ???
 0018FF8C  773A33AA  return to kernel32.773A33AA from ???
 0018FF98  77C79F72  return to ntdll.77C79F72 from ???
 0018FFD8  77C79F45  return to ntdll.77C79F45 from ntdll.77C79F4B












0018EB44  0655ADE0  
0018EB48  30973840  gf.30973840
0018EB4C  00000000  
0018EB50  04422FE4  
0018EB54  00000000  
0018EB58  00000000  
0018EB5C  00000000  
0018EB60  04422F20  
0018EB64  04422F20  
0018EB68  00000000  
0018EB6C  00000000  
0018EB70  00000000  
0018EB74  0018EB80  
0018EB78  3086D24F  return to gf.3086D24F from ???
0018EB7C  09C61BC4  
0018EB80  0018EBBC  
0018EB84  30870B66  return to gf.30870B66 from ???
0018EB88  0655ADE0  
0018EB8C  09C61BC4  
0018EB90  5A6635A9  
0018EB94  65872C4C  afctrl.65872C4C
0018EB98  065C3A10  
0018EB9C  00000000  
0018EBA0  06C22A40  
0018EBA4  0655ADE0  
0018EBA8  5A66355C  
0018EBAC  09C61BD4  
0018EBB0  0018EC78  Pointer to SEH_Record[1]
0018EBB4  30950D7E  gf.30950D7E
0018EBB8  00000001  
0018EBBC  0018EBC8  
0018EBC0  30875FAA  return to gf.30875FAA from gf.30870B04
0018EBC4  08809854  
0018EBC8  0018EBD8  
0018EBCC  65710D84  return to afctrl.65710D84 from ???
0018EBD0  06C22A38  
0018EBD4  08809854  
0018EBD8  0018EBE8  
0018EBDC  65710D84  return to afctrl.65710D84 from ???
0018EBE0  06A78F58  
0018EBE4  08809854  
0018EBE8  0018EC84  
0018EBEC  6576CD28  return to afctrl.6576CD28 from ???
0018EBF0  06C22838  
0018EBF4  08809854  
0018EBF8  5AA4FF90  
0018EBFC  300D9102  common.300D9102
0018EC00  065C3A10  
0018EC04  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018EC08  302817B0  common.302817B0
0018EC0C  00000000  
0018EC10  00000000  
0018EC14  00000000  
0018EC18  302817B0  common.302817B0
0018EC1C  00000000  
0018EC20  00000000  
0018EC24  00000000  
0018EC28  0018EC38  
0018EC2C  300DE679  return to common.300DE679 from ???
0018EC30  097C31F4  &"\\$d\x05"
0018EC34  097C31F4  &"\\$d\x05"
0018EC38  00000000  
0018EC3C  00000001  
0018EC40  00000003  
0018EC44  00000000  
0018EC48  300DB18E  return to common.300DB18E from common.300D9048
0018EC4C  097C31F4  &"\\$d\x05"
0018EC50  09712BFC  L"122"
0018EC54  300DB1D2  return to common.300DB1D2 from ???
0018EC58  00000002  
0018EC5C  0018ECB8  &L"Microsoft YaHei"
0018EC60  00000000  
0018EC64  06C22838  
0018EC68  0971E59C  L"122"
0018EC6C  08809864  
0018EC70  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018EC74  00000003  
0018EC78  0018ECC4  Pointer to SEH_Record[2]
0018EC7C  65842FAF  afctrl.65842FAF
0018EC80  00000005  
0018EC84  0018ECD0  return to 0018ECD0 from ???
0018EC88  6576D0D6  return to afctrl.6576D0D6 from afctrl.6576CC18
0018EC8C  5AA4FFC4  
0018EC90  065C3A78  
0018EC94  065C3A58  
0018EC98  06C22BB8  
0018EC9C  65795C01  return to afctrl.65795C01 from afctrl.65822A29
0018ECA0  065C3A78  
0018ECA4  065C3A78  
0018ECA8  0018ECCC  
0018ECAC  6580F25A  return to afctrl.6580F25A from afctrl.65702715
0018ECB0  0018ECFC  
0018ECB4  06AB30B8  
0018ECB8  097C3204  L"Microsoft YaHei"
0018ECBC  30169160  common.30169160
0018ECC0  06AB2CE8  
0018ECC4  0018ED08  Pointer to SEH_Record[3]
0018ECC8  65842FDC  afctrl.65842FDC
0018ECCC  FFFFFFFF  
0018ECD0  0018ED14  
0018ECD4  657D21C2  return to afctrl.657D21C2 from ???
0018ECD8  00000300  
0018ECDC  5AA4FE00  
0018ECE0  0018ED7C  
0018ECE4  0018ED8C  
0018ECE8  06C22BB8  
0018ECEC  065C3A78  
0018ECF0  06AB2CE8  
0018ECF4  065C3A78  
0018ECF8  06AB30A8  
0018ECFC  065C3A10  
0018ED00  000002A0  
0018ED04  065C3A10  
0018ED08  0018ED90  Pointer to SEH_Record[4]
0018ED0C  6583DEAA  afctrl.6583DEAA
0018ED10  00000000  
0018ED14  0018ED28  
0018ED18  657EE049  return to afctrl.657EE049 from ???
0018ED1C  000002A0  
0018ED20  065C3A24  
0018ED24  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018ED28  0018ED9C  
0018ED2C  3091559F  return to gf.3091559F from ???
0018ED30  06C3F7A0  "0蓨e\x03"
0018ED34  000002A0  
0018ED38  065C3A24  
0018ED3C  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018ED40  5A663389  
0018ED44  30169240  common.30169240
0018ED48  000000E0  
0018ED4C  06C22C14  
0018ED50  0971E58C  
0018ED54  00000000  
0018ED58  00000000  
0018ED5C  00000000  
0018ED60  0971E58C  
0018ED64  10188870  
0018ED68  00000007  
0018ED6C  0018ED60  
0018ED70  10188F30  
0018ED74  0018ED60  
0018ED78  10188610  
0018ED7C  0018ED60  
0018ED80  10188F30  
0018ED84  0018ED60  
0018ED88  10188F70  
0018ED8C  065C3A24  
0018ED90  0018EE18  Pointer to SEH_Record[5]
0018ED94  3095CF25  gf.3095CF25
0018ED98  00000002  
0018ED9C  0018EE24  
0018EDA0  30874C28  return to gf.30874C28 from gf.30915507
0018EDA4  000002A0  
0018EDA8  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018EDAC  5A663031  
0018EDB0  0655ADE4  
0018EDB4  0018EF8C  " /B\x04"
0018EDB8  00000000  
0018EDBC  00000000  
0018EDC0  00000000  
0018EDC4  0000FFFF  
0018EDC8  00000000  
0018EDCC  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018EDD0  3970539D  return to riched20.3970539D from riched20.39705445
0018EDD4  04000000  
0018EDD8  0018EE68  
0018EDDC  10194EA8  L"酠〖酌〖鄸〖鄨〖鄘〖\x01"
0018EDE0  00000000  
0018EDE4  00000190  
0018EDE8  0971E59C  L"122"
0018EDEC  00000804  
0018EDF0  00000000  
0018EDF4  00000001  
0018EDF8  00000000  
0018EDFC  00000000  
0018EE00  0000FFFF  
0018EE04  00000000  
0018EE08  0000FFFF  
0018EE0C  0018F234  
0018EE10  77376FF0  kernelbase.77376FF0
0018EE14  5A663031  
0018EE18  0018F094  Pointer to SEH_Record[6]
0018EE1C  3095289D  gf.3095289D
0018EE20  00000007  
0018EE24  0018EE34  
0018EE28  3086C26F  return to gf.3086C26F from ???
0018EE2C  00000300  
0018EE30  0018EE68  
0018EE34  0018EE74  
0018EE38  39713FAD  return to riched20.39713FAD from ???
0018EE3C  00000300  
0018EE40  0018EE68  
0018EE44  0018F48C  
0018EE48  00000100  
0018EE4C  0018EF8C  " /B\x04"
0018EE50  00000000  
0018EE54  00000000  
0018EE58  00000000  
0018EE5C  00000003  
0018EE60  00000003  
0018EE64  00000000  
0018EE68  00000003  
0018EE6C  09652808  
0018EE70  044230A8  "肋|9斑|9"
0018EE74  0018EE94  
0018EE78  3970F4A1  return to riched20.3970F4A1 from riched20.3970F4A6
0018EE7C  0018F48C  
0018EE80  00000000  
0018EE84  09652808  
0018EE88  0018F48C  
0018EE8C  00000000  
0018EE90  0018EFC4  &"3繼陕\x04"
0018EE94  0018EFC4  &"3繼陕\x04"
0018EE98  39706039  return to riched20.39706039 from riched20.39704537
0018EE9C  00000000  
0018EEA0  00000115  
0018EEA4  0655ADE0  
0018EEA8  77C6E023  return to ntdll.77C6E023 from ntdll.77C6E392
0018EEAC  0018F234  
0018EEB0  044274E8  
0018EEB4  397D2688  riched20.397D2688
0018EEB8  044274E8  
0018EEBC  00000000  
0018EEC0  05503370  L"濨眖宜眖"
0018EEC4  00000000  
0018EEC8  0018EF8C  " /B\x04"
0018EECC  0018EEE0  
0018EED0  39728E3A  return to riched20.39728E3A from riched20.39728E41
0018EED4  00000000  
0018EED8  04420000  
0018EEDC  044274E8  
0018EEE0  0539E828  
0018EEE4  0018EF18  
0018EEE8  00140023  
0018EEEC  00000374  
0018EEF0  0018EF18  
0018EEF4  77165F98  return to msctf.77165F98 from msctf.771618A0
0018EEF8  00000000  
0018EEFC  04427458  
0018EF00  00000001  
0018EF04  044274E0  
0018EF08  0018EF20  
0018EF0C  77C6E023  return to ntdll.77C6E023 from ntdll.77C6E392
0018EF10  044274E8  
0018EF14  3FFFFFFF  
0018EF18  00000000  
0018EF1C  044274E0  
0018EF20  0018EF34  return to 0018EF34 from 901D31A9
0018EF24  773A14DD  return to kernel32.773A14DD from ???
0018EF28  04420000  
0018EF2C  00000000  
0018EF30  044274E8  
0018EF34  0018EF90  
0018EF38  3970566D  return to riched20.3970566D from ???
0018EF3C  04420000  
0018EF40  00000000  
0018EF44  397CE130  riched20.397CE130
0018EF48  397CE12C  riched20.397CE12C
0018EF4C  00000001  
0018EF50  00000000  
0018EF54  00000000  
0018EF58  09651BE0  
0018EF5C  04422F20  
0018EF60  00000000  
0018EF64  397CE130  riched20.397CE130
0018EF68  397CE12C  riched20.397CE12C
0018EF6C  00000001  
0018EF70  00000000  
0018EF74  00000000  
0018EF78  09651BE0  
0018EF7C  04422F20  
0018EF80  00000001  
0018EF84  00000000  
0018EF88  0971E583  
0018EF8C  04422F20  
0018EF90  00000000  
0018EF94  00000000  
0018EF98  00000027  
0018EF9C  00000002  
0018EFA0  0018EFD8  
0018EFA4  0018EFC0  
0018EFA8  0539E7D0  L"庀眖弤眖聸眖聤眖联眖"
0018EFAC  0018EFC0  
0018EFB0  77172D49  return to msctf.77172D49 from ???
0018EFB4  0539E7D0  L"庀眖弤眖聸眖聤眖联眖"
0018EFB8  00000000  
0018EFBC  04507760  L"帰眖脠眖膄眖怼眖細眖聀眖耬眖廸眖腨眖腔眖腄眖脰眖攌眖\x03"
0018EFC0  0018EFDC  
0018EFC4  7717EB1A  return to msctf.7717EB1A from msctf.77172D25
0018EFC8  0539E7D0  L"庀眖弤眖聸眖聤眖联眖"
0018EFCC  00000002  
0018EFD0  0018EFD8  
0018EFD4  044231D8  "8鴟9 鴟9\f鴟9"
0018EFD8  00000000  
0018EFDC  0018EFE8  
0018EFE0  7717EADA  return to msctf.7717EADA from msctf.7717EAE3
0018EFE4  00000001  
0018EFE8  0018EFF4  
0018EFEC  7717EAB2  return to msctf.7717EAB2 from ???
0018EFF0  0450777C  L"廸眖腨眖腔眖腄眖脰眖攌眖\x03"
0018EFF4  0018F010  &"塃痣n嬻嫀\\\x01"
0018EFF8  39728E08  return to riched20.39728E08 from ???
0018EFFC  0539E7D4  L"弤眖聸眖聤眖联眖"
0018F000  0018EF44  "0醸9,醸9\x01"
0018F004  00000000  
0018F008  00000000  
0018F00C  0018F080  
0018F010  3086E3AD  return to gf.3086E3AD from ???
0018F014  00000434  
0018F018  00000000  
0018F01C  0018F0A0  
0018F020  0018EF64  "0醸9,醸9\x01"
0018F024  00000000  
0018F028  00000000  
0018F02C  0018F0A0  
0018F030  3086E3AD  return to gf.3086E3AD from ???
0018F034  00000102  
0018F038  00000032  
0018F03C  00000001  
0018F040  0018F48C  
0018F044  5A662EB5  
0018F048  0655B010  
0018F04C  0655ADE0  
0018F050  0655B00C  
0018F054  00000000  
0018F058  300D9040  return to common.300D9040 from common.3013167C
0018F05C  30281794  common.30281794
0018F060  00000001  
0018F064  100F1EA0  
0018F068  021C6770  
0018F06C  0971E59C  L"122"
0018F070  00000000  
0018F074  0018F12C  
0018F078  30952540  gf.30952540
0018F07C  FFFFFFFF  
0018F080  3086E428  return to gf.3086E428 from gf.30949737
0018F084  3086BC49  return to gf.3086BC49 from ???
0018F088  0655ADE0  
0018F08C  00000434  
0018F090  00000000  
0018F094  0018F12C  Pointer to SEH_Record[7]
0018F098  30952540  gf.30952540
0018F09C  FFFFFFFF  
0018F0A0  0018F0C8  
0018F0A4  3086BCDE  return to gf.3086BCDE from ???
0018F0A8  0655ADE0  
0018F0AC  00000102  
0018F0B0  00000032  
0018F0B4  00000001  
0018F0B8  0018F48C  
0018F0BC  06C22A40  
0018F0C0  0018F46C  
0018F0C4  0018F50C  
0018F0C8  0018F0E0  
0018F0CC  3086E845  return to gf.3086E845 from ???
0018F0D0  0655ADE0  
0018F0D4  00000032  
0018F0D8  00000001  
0018F0DC  0018F48C  
0018F0E0  0018F100  
0018F0E4  3086F801  return to gf.3086F801 from gf.3086E829
0018F0E8  00000032  
0018F0EC  00000001  
0018F0F0  0018F48C  
0018F0F4  0018F46C  
0018F0F8  06C22A40  
0018F0FC  065C3A10  
0018F100  0018F138  return to 0018F138 from ???
0018F104  30873679  return to gf.30873679 from gf.3086F7C3
0018F108  065C3A10  
0018F10C  0018F46C  
0018F110  0018F50C  
0018F114  0018F48C  
0018F118  0018F408  
0018F11C  5A662F2D  
0018F120  06A78F68  
0018F124  06A78F58  
0018F128  6595A450  afctrl.6595A450
0018F12C  0018F184  Pointer to SEH_Record[8]
0018F130  3095529A  gf.3095529A
0018F134  FFFFFFFF  
0018F138  0018F154  
0018F13C  3087618E  return to gf.3087618E from gf.308734AE
0018F140  065C3A10  
0018F144  0018F46C  
0018F148  0018F50C  
0018F14C  0018F48C  
0018F150  0018F408  
0018F154  0018F190  
0018F158  65765AE7  return to afctrl.65765AE7 from ???
0018F15C  06C22D0C  
0018F160  065C3A10  
0018F164  0018F46C  
0018F168  0018F50C  
0018F16C  0018F48C  
0018F170  0018F408  
0018F174  5AA4E284  
0018F178  06A78F68  
0018F17C  06A78F58  
0018F180  6595A450  afctrl.6595A450
0018F184  0018F204  Pointer to SEH_Record[9]
0018F188  6583FCE7  afctrl.6583FCE7
0018F18C  00000000  
0018F190  0018F1B0  
0018F194  65783D62  return to afctrl.65783D62 from afctrl.65765AA6
0018F198  06C22D0C  
0018F19C  065C3A10  
0018F1A0  0018F46C  
0018F1A4  0018F50C  
0018F1A8  0018F48C  
0018F1AC  0018F408  
0018F1B0  0018F1D4  
0018F1B4  65710EFA  return to afctrl.65710EFA from afctrl.65783D47
0018F1B8  065C3A10  
0018F1BC  0018F46C  
0018F1C0  0018F50C  
0018F1C4  0018F48C  
0018F1C8  0018F408  
0018F1CC  00000000  
0018F1D0  06C22838  
0018F1D4  0018F210  
0018F1D8  65765AE7  return to afctrl.65765AE7 from ???
0018F1DC  06A78F68  
0018F1E0  065C3A10  
0018F1E4  0018F46C  
0018F1E8  0018F50C  
0018F1EC  0018F48C  
0018F1F0  0018F408  
0018F1F4  5AA4E104  
0018F1F8  00000000  
0018F1FC  06C22838  
0018F200  6595A450  afctrl.6595A450
0018F204  0018F284  End of SEH Chain
0018F208  6583FCE7  afctrl.6583FCE7
0018F20C  00000000  
0018F210  0018F290  
0018F214  6571DC16  return to afctrl.6571DC16 from afctrl.65765AA6
0018F218  06A78F68  
0018F21C  065C3A10  
0018F220  0018F46C  
0018F224  0018F50C  
0018F228  0018F48C  
0018F22C  0018F408  
0018F230  5AA4E184  
0018F234  0018F46C  
0018F238  06C22838  
0018F23C  065C3A10  
0018F240  00000000  
0018F244  6585C694  afctrl.6585C694
0018F248  0018F290  
0018F24C  0018F25C  
0018F250  6576D895  return to afctrl.6576D895 from afctrl.6576D86B
0018F254  6585C694  afctrl.6585C694
0018F258  0018F290  
0018F25C  0018F274  
0018F260  0018F274  
0018F264  6576D7E9  return to afctrl.6576D7E9 from ???
0018F268  065C3A38  
0018F26C  00000001  
0018F270  065C3A10  
0018F274  0018F2A4  
0018F278  65805226  return to afctrl.65805226 from ???
0018F27C  6580522D  return to afctrl.6580522D from afctrl.65836F35
0018F280  00000000  
0018F284  0018F2BC  
0018F288  6583A7B4  afctrl.6583A7B4
0018F28C  FFFFFFFF  
0018F290  0018F2C8  
0018F294  65727E89  return to afctrl.65727E89 from afctrl.6571DAF9
0018F298  065C3A10  
0018F29C  0018F46C  
0018F2A0  0018F50C  
0018F2A4  0018F48C  
0018F2A8  0018F408  
0018F2AC  5AA4E1DC  
0018F2B0  00000001  
0018F2B4  065C3A20  
0018F2B8  00000000  
0018F2BC  0018F2F8  
0018F2C0  65844754  afctrl.65844754
0018F2C4  FFFFFFFF  
0018F2C8  0018F304  
0018F2CC  65765AE7  return to afctrl.65765AE7 from ???
0018F2D0  06C22848  
0018F2D4  065C3A10  
0018F2D8  0018F46C  
0018F2DC  0018F50C  
0018F2E0  0018F48C  
0018F2E4  0018F408  
0018F2E8  5AA4E010  
0018F2EC  00000001  
0018F2F0  065C3A20  
0018F2F4  00000000  
0018F2F8  0018F39C  
0018F2FC  6583FCE7  afctrl.6583FCE7
0018F300  00000000  
0018F304  0018F338  
0018F308  6576BD55  return to afctrl.6576BD55 from afctrl.65765AA6
0018F30C  06C22848  
0018F310  065C3A10  
0018F314  0018F46C  
0018F318  0018F50C  
0018F31C  0018F48C  
0018F320  0018F408  
0018F324  00000000  
0018F328  065C3A10  
0018F32C  065C3A20  
0018F330  00000002  
0018F334  00000002  
0018F338  0018F360  
0018F33C  6576D605  return to afctrl.6576D605 from afctrl.6576BC79
0018F340  065C3A10  
0018F344  0018F46C  
0018F348  0018F50C  
0018F34C  0018F48C  
0018F350  0018F408  
0018F354  00000000  
0018F358  0018F408  
0018F35C  00000000  
0018F360  0018F3A8  
0018F364  30829411  return to gf.30829411 from ???
0018F368  065C3A20  
0018F36C  065C3A10  
0018F370  0018F46C  
0018F374  0018F50C  
0018F378  0018F48C  
0018F37C  0018F408  
0018F380  5A662DBD  
0018F384  065C3A10  
0018F388  00000000  
0018F38C  00000001  
0018F390  00000001  
0018F394  065C3A20  
0018F398  065C3A1C  
0018F39C  0018F414  
0018F3A0  3094D379  gf.3094D379
0018F3A4  00000001  
0018F3A8  0018F420  
0018F3AC  3082562B  return to gf.3082562B from gf.30829384
0018F3B0  065C3A10  
0018F3B4  065C3A10  
0018F3B8  0018F46C  
0018F3BC  0018F50C  
0018F3C0  0018F48C  
0018F3C4  0018F408  
0018F3C8  5A662A35  
0018F3CC  065C3A10  
0018F3D0  038D0050  
0018F3D4  038D0050  
0018F3D8  06A78F58  
0018F3DC  10193230  
0018F3E0  1019324C  
0018F3E4  10193250  
0018F3E8  00000000  
0018F3EC  0018F3D8  
0018F3F0  10193230  
0018F3F4  00000000  
0018F3F8  0018F3D8  
0018F3FC  10193230  
0018F400  00000000  
0018F404  65783474  return to afctrl.65783474 from ???
0018F408  00000001  
0018F40C  065C3A10  
0018F410  00000000  
0018F414  0018F490  
0018F418  3094CEAB  gf.3094CEAB
0018F41C  00000002  
0018F420  0018F440  
0018F424  30918690  return to gf.30918690 from gf.30825474
0018F428  0314EA98  "H驓08驓0\x02"
0018F42C  0018F46C  
0018F430  0018F50C  
0018F434  0018F48C  
0018F438  00000000  
0018F43C  00000000  
0018F440  0018F49C  
0018F444  309197ED  return to gf.309197ED from gf.30918658
0018F448  065C3A10  
0018F44C  0018F46C  
0018F450  0018F50C  
0018F454  0018F48C  
0018F458  00000000  
0018F45C  5A662A89  
0018F460  00000105  
0018F464  00000000  
0018F468  00000100  
0018F46C  000000C9  
0018F470  00000000  
0018F474  00000020  
0018F478  00000000  
0018F47C  00000032  
0018F480  00000001  
0018F484  00000000  
0018F488  00000000  
0018F48C  00000000  
0018F490  0018F5D4  
0018F494  3095D4C6  gf.3095D4C6
0018F498  00000000  
0018F49C  0018F4B4  
0018F4A0  3092175C  return to gf.3092175C from ???
0018F4A4  065C3A10  
0018F4A8  00000032  
0018F4AC  00000001  
0018F4B0  0018F50C  
0018F4B4  0018F4D8  
0018F4B8  30920CCB  return to gf.30920CCB from ???
0018F4BC  000109CC  
0018F4C0  00000032  
0018F4C4  00000001  
0018F4C8  0018F50C  
0018F4CC  00000102  
0018F4D0  06AFC140  
0018F4D4  00000000  
0018F4D8  0018F4F0  
0018F4DC  30922171  return to gf.30922171 from ???
0018F4E0  00000102  
0018F4E4  00000032  
0018F4E8  00030001  
0018F4EC  0018F50C  
0018F4F0  0018F540  
0018F4F4  30801A54  return to gf.30801A54 from ???
0018F4F8  000109CC  
0018F4FC  00000102  
0018F500  00000032  
0018F504  00030001  
0018F508  0018F548  "@怜\x06"
0018F50C  00000000  
0018F510  00000000  
0018F514  03200F30  
0018F518  000109CC  
0018F51C  00000102  
0018F520  00000032  
0018F524  00030001  
0018F528  00000000  
0018F52C  00000000  
0018F530  00000000  
0018F534  00000024  
0018F538  00000001  
0018F53C  00460069  
0018F540  0018F56C  
0018F544  76CE62FA  return to user32.76CE62FA from ???
0018F548  06AFC140  
0018F54C  00000000  
0018F550  00000032  
0018F554  00030001  
0018F558  03200F30  
0018F55C  DCBAABCD  
0018F560  00000000  
0018F564  00000000  
0018F568  03200F30  
0018F56C  0018F5E4  
0018F570  76CE6D3A  return to user32.76CE6D3A from user32.76CE62D7
0018F574  03200F30  
0018F578  000109CC  
0018F57C  00000102  
0018F580  00000032  
0018F584  00030001  
0018F588  5A37AED6  
0018F58C  00000102  
0018F590  03200F30  
0018F594  00000082  
0018F598  00000024  
0018F59C  00000001  
0018F5A0  00000000  
0018F5A4  00000000  
0018F5A8  00000030  
0018F5AC  FFFFFFFF  
0018F5B0  FFFFFFFF  
0018F5B4  76CE6CE9  return to user32.76CE6CE9 from ???
0018F5B8  00000000  
0018F5BC  00000000  
0018F5C0  00000001  
0018F5C4  00000000  
0018F5C8  00000000  
0018F5CC  0018F588  
0018F5D0  00000000  
0018F5D4  0018F734  
0018F5D8  76D4A61E  user32.76D4A61E
0018F5DC  2CE1366A  
0018F5E0  00000000  
0018F5E4  0018F61C  
0018F5E8  76CF0D27  return to user32.76CF0D27 from user32.76CE6C83
0018F5EC  00000000  
0018F5F0  03200F30  
0018F5F4  000109CC  
0018F5F8  00000102  
0018F5FC  00000032  
0018F600  00030001  
0018F604  00000000  
0018F608  00000000  
0018F60C  00000102  
0018F610  06A4AC10  
0018F614  06A4AC10  
0018F618  00000000  
0018F61C  0018F63C  
0018F620  76CF0D4D  return to user32.76CF0D4D from user32.76CF0CC9
0018F624  03200F30  
0018F628  000109CC  
0018F62C  00000102  
0018F630  00000032  
0018F634  00030001  
0018F638  00000000  
0018F63C  0018F658  
0018F640  66202550  return to appframework.66202550 from ???
0018F644  03200F30  
0018F648  000109CC  
0018F64C  00000102  
0018F650  00000032  
0018F654  00030001  
0018F658  0018F6A0  
0018F65C  6620261C  return to appframework.6620261C from appframework.66202538
0018F660  00000102  
0018F664  00000032  
0018F668  00030001  
0018F66C  00000000  
0018F670  00000000  
0018F674  03200F00  
0018F678  000109CC  
0018F67C  00000102  
0018F680  00000032  
0018F684  00030001  
0018F688  00000000  
0018F68C  00000000  
0018F690  00000000  
0018F694  00000024  
0018F698  00000001  
0018F69C  00000000  
0018F6A0  0018F6CC  
0018F6A4  76CE62FA  return to user32.76CE62FA from ???
0018F6A8  00000000  
0018F6AC  00000000  
0018F6B0  00000032  
0018F6B4  00030001  
0018F6B8  03200F00  
0018F6BC  DCBAABCD  
0018F6C0  00000000  
0018F6C4  00000000  
0018F6C8  03200F00  
0018F6CC  0018F744  
0018F6D0  76CE6D3A  return to user32.76CE6D3A from user32.76CE62D7
0018F6D4  03200F00  
0018F6D8  000109CC  
0018F6DC  00000102  
0018F6E0  00000032  
0018F6E4  00030001  
0018F6E8  5A37AC76  
0018F6EC  0018F7DC  
0018F6F0  0018F7D4  
0018F6F4  00A61100  
0018F6F8  00000024  
0018F6FC  00000001  
0018F700  00000000  
0018F704  00000000  
0018F708  00000030  
0018F70C  FFFFFFFF  
0018F710  FFFFFFFF  
0018F714  76CE6CE9  return to user32.76CE6CE9 from ???
0018F718  00000000  
0018F71C  0018F74C  
0018F720  00000001  
0018F724  00000000  
0018F728  00000000  
0018F72C  0018F6E8  
0018F730  0018F8DC  &L"d_ida\\QQIntl1\\Bin\\QQ.exe"
0018F734  0018F794  
0018F738  76D4A61E  user32.76D4A61E
0018F73C  2CE1366A  
0018F740  00000000  
0018F744  0018F7A4  
0018F748  76CE77C4  return to user32.76CE77C4 from user32.76CE6C83
0018F74C  00000000  
0018F750  03200F00  
0018F754  000109CC  
0018F758  00000102  
0018F75C  00000032  
0018F760  00030001  
0018F764  00A61128  
0018F768  00000001  
0018F76C  5A37AC96  
0018F770  0314CB20  "圔駃\x01"
0018F774  0018F7D4  
0018F778  00008FFF  
0018F77C  0018F7B4  
0018F780  00000032  
0018F784  00000000  
0018F788  5A665666  
0018F78C  0018F76C  
0018F790  0018F7D4  
0018F794  0018F83C  
0018F798  76D4A61E  user32.76D4A61E
0018F79C  2CE12CDA  
0018F7A0  FFFFFFFE  
0018F7A4  0018F7B4  
0018F7A8  76CE788A  return to user32.76CE788A from user32.76CE76D7
0018F7AC  03200F00  
0018F7B0  00000000  
0018F7B4  0018F7F0  
0018F7B8  69F0652A  return to hummerengine.69F0652A from ???
0018F7BC  0018F7D4  
0018F7C0  69F10C00  hummerengine.69F10C00
0018F7C4  69F0633C  return to hummerengine.69F0633C from hummerengine.69F064C3
0018F7C8  00000000  
0018F7CC  0314CB20  "圔駃\x01"
0018F7D0  69F10C10  L"func"
0018F7D4  000109CC  
0018F7D8  00000102  
0018F7DC  00000032  
0018F7E0  00030001  
0018F7E4  004EEFCB  
0018F7E8  000006D2  
0018F7EC  0000014C  
0018F7F0  0018F80C  
0018F7F4  69F06059  return to hummerengine.69F06059 from ???
0018F7F8  69F109E8  L"/MLogin"
0018F7FC  69F10C04  L"file"
0018F800  0018FA2C  &"dｐizI餴?J餴d~餴P"
0018F804  0018FD00  
0018F808  00000001  
0018F80C  0018F848  
0018F810  69F04529  return to hummerengine.69F04529 from ???
0018F814  0018FA2C  &"dｐizI餴?J餴d~餴P"
0018F818  69F04BFA  return to hummerengine.69F04BFA from hummerengine.69F04513
0018F81C  5A66599A  
0018F820  69F109E8  L"/MLogin"
0018F824  69F10C04  L"file"
0018F828  69F10C10  L"func"
0018F82C  00000001  
0018F830  03890700  
0018F834  0018FA2C  &"dｐizI餴?J餴d~餴P"
0018F838  00000000  
0018F83C  0018FD4C  
0018F840  69F0E9D9  hummerengine.69F0E9D9
0018F844  00000000  
0018F848  0018FD58  
0018F84C  69F0AF44  return to hummerengine.69F0AF44 from hummerengine.69F04BD9
0018F850  5A665C8A  
0018F854  773A11C0  kernel32.773A11C0
0018F858  69F00000  "MZ?"
0018F85C  00000000  
0018F860  00000000  
0018F864  00001000  
0018F868  00010000  
0018F86C  7FFEFFFF  
0018F870  00000FFF  
0018F874  0000000C  
0018F878  0000024A  
0018F87C  00010000  
0018F880  3E040006  
0018F884  00000020  
0018F888  0000002F  
0018F88C  FFFFFFFF  
0018F890  FFFFFFFF  
0018F894  FFFFFFFF  
0018F898  FFFFFFFF  
0018F89C  7FFE0000  
0018F8A0  7974D000  
0018F8A4  00000000  
0018F8A8  00000000  
0018F8AC  00A5B490  "Z\t\x01"
0018F8B0  00000000  
0018F8B4  00000000  
0018F8B8  00000000  
0018F8BC  302817A4  common.302817A4
0018F8C0  302817A4  common.302817A4
0018F8C4  00000000  
0018F8C8  00000000  
0018F8CC  302817A4  common.302817A4
0018F8D0  0026A7D2  
0018F8D4  00000000  
0018F8D8  69F110B4  hummerengine.69F110B4
0018F8DC  0018FB50  L"d_ida\\QQIntl1\\Bin\\QQ.exe"
0018F8E0  00000000  
0018F8E4  00000000  
0018F8E8  00000000  
0018F8EC  00000000  
0018F8F0  0018FB50  L"d_ida\\QQIntl1\\Bin\\QQ.exe"
0018F8F4  0018F918  
0018F8F8  6C6A9116  return to safemon.6C6A9116 from safemon.6C6A9094
0018F8FC  03721CE0  &"臼餴鷻餴H"
0018F900  0374D6C0  "榷og牰og\x03"
0018F904  0314D400  &L"茀〖\x01"
0018F908  00000004  
0018F90C  0018FD60  &"銅餴b"
0018F910  69F11240  L"InitAutoUpdate"
0018F914  03721CE0  &"臼餴鷻餴H"
0018F918  00000044  
0018F91C  0018FD8C  
0018F920  6C5D0C2B  return to safemon.6C5D0C2B from ???
0018F924  00000044  
0018F928  00000000  
0018F92C  00000000  
0018F930  0018F950  
0018F934  77717344  return to msvcr80.77717344 from msvcr80.777172B7
0018F938  7EFDE000  
0018F93C  0018F988  
0018F940  0018F99C  &"烶鲌9/"
0018F944  0018F968  
0018F948  77CD0286  return to ntdll.77CD0286 from ntdll.77C8395C
0018F94C  0018F99C  &"烶鲌9/"
0018F950  00000100  
0018F954  7EFE0AFA  L"Service Pack 1"
0018F958  0000011C  
0018F95C  0018F988  
0018F960  00000000  
0018F964  00000000  
0018F968  0018F97C  
0018F96C  77352146  return to kernelbase.77352146 from ???
0018F970  0018F988  
0018F974  00003000  
0018F978  00000000  
0018F97C  0018FAA0  
0018F980  300E7FCD  return to common.300E7FCD from ???
0018F984  300E7FE1  return to common.300E7FE1 from common.301316D8
0018F988  00000114  
0018F98C  77C6E38C  return to ntdll.77C6E38C from ntdll.77C6DF29
0018F990  77DD0132  
0018F994  772A429C  advapi32.772A429C
0018F998  002E01A4  
0018F99C  002E0000  "烶鲌9/"
0018F9A0  00760072  
0018F9A4  00630069  
0018F9A8  0086001E  
0018F9AC  00000093  
0018F9B0  006B0063  
0018F9B4  00310020  
0018F9B8  00000000  
0018F9BC  00000000  
0018F9C0  0082001F  
0018F9C4  00000093  
0018F9C8  00000000  
0018F9CC  00000000  
0018F9D0  002E9AF8  &"须O\x05"
0018F9D4  00000000  
0018F9D8  00000014  
0018F9DC  00000000  
0018F9E0  00000000  
0018F9E4  0033B708  
0018F9E8  002E97E8  
0018F9EC  002E9904  
0018F9F0  003480C8  
0018F9F4  002E9C48  
0018F9F8  00000000  
0018F9FC  0018F990  
0018FA00  00000000  
0018FA04  0018FF78  
0018FA08  77CB71F5  ntdll.77CB71F5
0018FA0C  0003295E  
0018FA10  FFFFFFFE  
0018FA14  77C6E38C  return to ntdll.77C6E38C from ntdll.77C6DF29
0018FA18  77C6E0F2  return to ntdll.77C6E0F2 from ntdll.77C6E269
0018FA1C  772A429C  advapi32.772A429C
0018FA20  00000000  
0018FA24  773A14E9  kernel32.773A14E9
0018FA28  00000000  
0018FA2C  69F10C44  "dｐizI餴?J餴d~餴P"
0018FA30  00000000  
0018FA34  0018FA68  
0018FA38  06AB43E0  
0018FA3C  00000018  
0018FA40  00000000  
0018FA44  00000000  
0018FA48  00000000  
0018FA4C  06B9A4A0  
0018FA50  06B9A4A0  
0018FA54  06B9A668  
0018FA58  003480C0  
0018FA5C  0018FA74  
0018FA60  00000000  
0018FA64  00000000  
0018FA68  00000000  
0018FA6C  00000000  
0018FA70  0314CB20  "圔駃\x01"
0018FA74  00000000  
0018FA78  00000000  
0018FA7C  00000000  
0018FA80  00000000  
0018FA84  00000000  
0018FA88  00000000  
0018FA8C  773A0001  kernel32.773A0001
0018FA90  0000022C  
0018FA94  00348000  
0018FA98  0018FAB8  
0018FA9C  300E80D7  return to common.300E80D7 from ???
0018FAA0  0000022C  
0018FAA4  00000000  
0018FAA8  0000000F  
0018FAAC  00000001  
0018FAB0  06998A90  
0018FAB4  00000008  
0018FAB8  00000000  
0018FABC  00000000  
0018FAC0  00374628  
0018FAC4  FFFFFFFF  
0018FAC8  00000000  
0018FACC  00000000  
0018FAD0  00000000  
0018FAD4  000007D0  
0018FAD8  0018F82C  
0018FADC  00000000  
0018FAE0  00000000  
0018FAE4  00000012  
0018FAE8  77C76CCA  return to ntdll.77C76CCA from ntdll.77C6DF29
0018FAEC  00000000  
0018FAF0  00000000  
0018FAF4  00000000  
0018FAF8  00000000  
0018FAFC  00000000  
0018FB00  773A11C0  kernel32.773A11C0
0018FB04  69F10A40  hummerengine.69F10A40
0018FB08  00000001  
0018FB0C  00000000  
0018FB10  0000022C  
0018FB14  0356FE90  
0018FB18  031507D0  "@B駃\x01"
0018FB1C  00002BF0  
0018FB20  00000202  
0018FB24  69676F4C  
0018FB28  006C6163  
0018FB2C  00003000  
0018FB30  00000D3C  
0018FB34  00000007  
0018FB38  0000000F  
0018FB3C  003A0044  
0018FB40  005F005C  
0018FB44  006F0077  
0018FB48  006B0072  
0018FB4C  006F005C  
0018FB50  005F0064  
0018FB54  00640069  
0018FB58  005C0061  
0018FB5C  00510051  
0018FB60  006E0049  
0018FB64  006C0074  
0018FB68  005C0031  
0018FB6C  00690042  
0018FB70  005C006E  
0018FB74  00510051  
0018FB78  0065002E  
0018FB7C  00650078  
0018FB80  00000000  
0018FB84  00000000  
0018FB88  00000000  
0018FB8C  00000000  
0018FB90  00000000  
0018FB94  00000000  
0018FB98  00000000  
0018FB9C  00000000  
0018FBA0  00000000  
0018FBA4  00000000  
0018FBA8  00000000  
0018FBAC  00000000  
0018FBB0  00000000  
0018FBB4  00000000  
0018FBB8  00000000  
0018FBBC  00000000  
0018FBC0  00000000  
0018FBC4  00000000  
0018FBC8  00000000  
0018FBCC  00000000  
0018FBD0  00000000  
0018FBD4  00000000  
0018FBD8  00000000  
0018FBDC  00000000  
0018FBE0  00000000  
0018FBE4  00000000  
0018FBE8  00000000  
0018FBEC  00000000  
0018FBF0  00000000  
0018FBF4  00000000  
0018FBF8  00000000  
0018FBFC  00000000  
0018FC00  00000000  
0018FC04  00000000  
0018FC08  00000000  
0018FC0C  00000000  
0018FC10  00000000  
0018FC14  00000000  
0018FC18  00000000  
0018FC1C  00000000  
0018FC20  00000000  
0018FC24  00000000  
0018FC28  00000000  
0018FC2C  00000000  
0018FC30  00000000  
0018FC34  00000000  
0018FC38  00000000  
0018FC3C  00000000  
0018FC40  00000000  
0018FC44  00000000  
0018FC48  00000000  
0018FC4C  00000000  
0018FC50  00000000  
0018FC54  00000000  
0018FC58  00000000  
0018FC5C  00000000  
0018FC60  00000000  
0018FC64  00000000  
0018FC68  00000000  
0018FC6C  00000000  
0018FC70  00000000  
0018FC74  00000000  
0018FC78  00000000  
0018FC7C  00000000  
0018FC80  00000000  
0018FC84  00000000  
0018FC88  00000000  
0018FC8C  00000000  
0018FC90  00000000  
0018FC94  00000000  
0018FC98  00000000  
0018FC9C  00000000  
0018FCA0  00000000  
0018FCA4  00000000  
0018FCA8  00000000  
0018FCAC  00000000  
0018FCB0  00000000  
0018FCB4  00000000  
0018FCB8  00000000  
0018FCBC  00000000  
0018FCC0  00000000  
0018FCC4  00000000  
0018FCC8  00000000  
0018FCCC  00000000  
0018FCD0  00000000  
0018FCD4  00000000  
0018FCD8  00000000  
0018FCDC  00000000  
0018FCE0  00000000  
0018FCE4  00000000  
0018FCE8  00000000  
0018FCEC  00000000  
0018FCF0  00000000  
0018FCF4  00000000  
0018FCF8  00000000  
0018FCFC  00000000  
0018FD00  00000000  
0018FD04  00000000  
0018FD08  00000000  
0018FD0C  00000000  
0018FD10  00000000  
0018FD14  00000000  
0018FD18  00000000  
0018FD1C  00000000  
0018FD20  00000000  
0018FD24  00000000  
0018FD28  00000000  
0018FD2C  00000000  
0018FD30  00000000  
0018FD34  00000000  
0018FD38  00000000  
0018FD3C  00000000  
0018FD40  00000000  
0018FD44  00000000  
0018FD48  5A665C8A  
0018FD4C  0018FF78  
0018FD50  69F0E30C  hummerengine.69F0E30C
0018FD54  00000007  
0018FD58  0018FDA4  
0018FD5C  69F0B146  return to hummerengine.69F0B146 from hummerengine.69F0A4A4
0018FD60  69F10EF4  return to hummerengine.69F10EF4 from E8D4454F
0018FD64  00000308  
0018FD68  00000000  
0018FD6C  00002101  
0018FD70  00000300  
0018FD74  69F1229C  "臼餴鷻餴H"
0018FD78  03151BE0  
0018FD7C  69F1229C  "臼餴鷻餴H"
0018FD80  03151BA8  
0018FD84  00374600  
0018FD88  FFFFFFFF  
0018FD8C  00000000  
0018FD90  00000000  
0018FD94  00000000  
0018FD98  000007D0  
0018FD9C  03806E28  
0018FDA0  0018FD60  &"銅餴b"
0018FDA4  0018FEE8  
0018FDA8  004014D9  return to qq.004014D9 from ???
0018FDAC  0000000A  
0018FDB0  00404458  qq.00404458
0018FDB4  00000001  
0018FDB8  00000000  
0018FDBC  1B64A8A1  
0018FDC0  D3A67FF0  
0018FDC4  E730941F  
0018FDC8  00000114  
0018FDCC  00000006  
0018FDD0  00000001  
0018FDD4  00001DB1  
0018FDD8  00000002  
0018FDDC  00650053  
0018FDE0  00760072  
0018FDE4  00630069  
0018FDE8  00200065  "run in DOS mode.\r\r\n$"
0018FDEC  00610050  
0018FDF0  006B0063  
0018FDF4  00310020  
0018FDF8  00000000  
0018FDFC  00000000  
0018FE00  00000000  
0018FE04  00000000  
0018FE08  00000000  
0018FE0C  00000000  
0018FE10  00000000  
0018FE14  00000000  
0018FE18  00000000  
0018FE1C  00000000  
0018FE20  00000000  
0018FE24  00000000  
0018FE28  00000000  
0018FE2C  00000000  
0018FE30  00000000  
0018FE34  00000000  
0018FE38  00000000  
0018FE3C  00000000  
0018FE40  00000000  
0018FE44  00000000  
0018FE48  00000000  
0018FE4C  00000000  
0018FE50  00000000  
0018FE54  00000000  
0018FE58  00000000  
0018FE5C  00000000  
0018FE60  00000000  
0018FE64  00000000  
0018FE68  00000000  
0018FE6C  00000000  
0018FE70  00000000  
0018FE74  00000000  
0018FE78  00000000  
0018FE7C  00000000  
0018FE80  00000000  
0018FE84  00000000  
0018FE88  00000000  
0018FE8C  00000000  
0018FE90  00000000  
0018FE94  00000000  
0018FE98  00000000  
0018FE9C  00000000  
0018FEA0  00000000  
0018FEA4  00000000  
0018FEA8  00000000  
0018FEAC  00000000  
0018FEB0  00000000  
0018FEB4  00000000  
0018FEB8  00000000  
0018FEBC  00000000  
0018FEC0  00000000  
0018FEC4  00000000  
0018FEC8  00000000  
0018FECC  00000000  
0018FED0  00000000  
0018FED4  00000000  
0018FED8  00000000  
0018FEDC  5A097939  
0018FEE0  FFFFFFFE  
0018FEE4  5A51B7DD  
0018FEE8  0018FEF4  
0018FEEC  0040128B  return to qq.0040128B from qq.0040128F
0018FEF0  0000000A  
0018FEF4  0018FF88  
0018FEF8  00401A8F  return to qq.00401A8F from qq.00401280
0018FEFC  00400000  "MZ?"
0018FF00  00000000  
0018FF04  002E3064  L"D:\\_work\\od_ida\\QQIntl1\\Bin\\QQ.exe "
0018FF08  0000000A  
0018FF0C  5A51B5E9  
0018FF10  00000000  
0018FF14  00000000  
0018FF18  7EFDE000  
0018FF1C  00000044  
0018FF20  002E3112  &L"f16bytesGTKey_STHttp\x10"
0018FF24  002E30F2  L"Winsta0\\Default"
0018FF28  002E30AC  L"D:\\_work\\od_ida\\QQIntl1\\Bin\\QQ.exe"
0018FF2C  00000000  
0018FF30  00000000  
0018FF34  00000000  
0018FF38  00000000  
0018FF3C  00000000  
0018FF40  00000000  
0018FF44  00000000  
0018FF48  00000000  
0018FF4C  00000000  
0018FF50  00000000  
0018FF54  00000000  
0018FF58  00000000  
0018FF5C  0018FF84  
0018FF60  00402017  return to qq.00402017 from ???
0018FF64  002E3064  L"D:\\_work\\od_ida\\QQIntl1\\Bin\\QQ.exe "
0018FF68  00000000  
0018FF6C  00000000  
0018FF70  0018FF0C  "榈QZ"
0018FF74  B0D8FC7C  
0018FF78  0018FFC4  
0018FF7C  00401C61  qq.00401C61
0018FF80  5A097919  
0018FF84  00000001  
0018FF88  0018FF94  
0018FF8C  773A33AA  return to kernel32.773A33AA from ???
0018FF90  7EFDE000  
0018FF94  0018FFD4  
0018FF98  77C79F72  return to ntdll.77C79F72 from ???
0018FF9C  7EFDE000  
0018FFA0  77DD04F2  
0018FFA4  00000000  
0018FFA8  00000000  
0018FFAC  7EFDE000  
0018FFB0  00000000  
0018FFB4  00000000  
0018FFB8  00000000  
0018FFBC  0018FFA0  
0018FFC0  00000000  
0018FFC4  FFFFFFFF  
0018FFC8  77CB71F5  ntdll.77CB71F5
0018FFCC  00033E76  
0018FFD0  00000000  
0018FFD4  0018FFEC  
0018FFD8  77C79F45  return to ntdll.77C79F45 from ntdll.77C79F4B
0018FFDC  00401BFB  qq.EntryPoint
0018FFE0  7EFDE000  
0018FFE4  00000000  
0018FFE8  00000000  
0018FFEC  00000000  
0018FFF0  00000000  
0018FFF4  00401BFB  qq.EntryPoint
0018FFF8  7EFDE000  
0018FFFC  00000000  
