//Util::Data::CreateTXBuffer



//拷贝发送内容-----------------------------关键
Address  To       From     Si Comment                Party 
	//=> memcpy
0866F95C 6B48E1DC 6B48E153 1C common.6B48E153        User	//CTXCommPack::AddBuf(CTXCommPack *this, const unsigned __int8 *Src, unsigned int Size)
0866F978 6B48A69F 6B48E1DC 1C common.6B48E1DC        User	//CTXCommPack::AddBuf(CTXCommPack *this, const struct CTXBuffer *Src)  
0866F994 6B489324 6B48A69F 30 common.6B48A69F        User	//sub_6B48A460
0866F9C4 625CA8E3 6B489324 3C common.6B489324        User  //CCmdCodecBase::CodeBuffer
0866FA00 63DD1E2F 625CA8E3 28 im.625CA8E3            User	//sub_625CA840
0866FA28 63DD19BA 63DD1E2F 14 preloginlogic.63DD1E2F User	//sub_63DD1DE1
0866FA3C 63DA9724 63DD19BA 24 preloginlogic.63DD19BA User
0866FA60 63DACAD3 63DA9724 70 preloginlogic.63DA9724 User
0866FAD0 63DA79DF 63DACAD3 24 preloginlogic.63DACAD3 User
0866FAF4 63DA7DFF 63DA79DF 24 preloginlogic.63DA79DF User
0866FB18 63DA7A27 63DA7DFF 20 preloginlogic.63DA7DFF User
0866FB38 63DA75F0 63DA7A27 24 preloginlogic.63DA7A27 User
0866FB5C 6BA5159A 63DA75F0 C  preloginlogic.63DA75F0 User
0866FB68 6BA55297 6BA5159A 28 arksocket.6BA5159A     User
0866FB90 739539A7 6BA55297 20 arksocket.6BA55297     User
0866FBB0 73953A9C 739539A7 24 libuv.739539A7         User
0866FBD4 6BA55696 73953A9C 20 libuv.73953A9C         User
0866FBF4 73960E29 6BA55696 18 arksocket.6BA55696     User
0866FC0C 778538DF 73960E29 38 libuv.73960E29         System
0866FC44 75BD6359 778538DF 10 ucrtbase.778538DF      System
0866FC54 77CB8944 75BD6359 5C kernel32.75BD6359      System
0866FCB0 77CB8914 77CB8944 10 ntdll.77CB8944         System
0866FCC0 00000000 77CB8914    ntdll.77CB8914         User



//=================================
libuv 
Base=73950000

arksocket.dll
Base=6BA50000

preloginlogic.dll
Base=63D90000
 
 
common.dll
Base=6B360000

im.dll
Base=62270000



//=================================
common =522A0000
6B48A460 - 6B360000 + 522A0000



523CA460/6B48A460

6B48AE30 - 6B360000 + 522A0000
523CAE30/6B48AE30

//=================================


int __thiscall sub_63DD1DE1(_DWORD *this, int a2, int a3, size_t Size)
{
  int v4; // ebx@1
  int *v5; // esi@1
  _DWORD *v6; // edi@1
  signed int v7; // esi@6
  int v8; // eax@8
  int v9; // ST08_4@10
  int v10; // eax@10
  int v11; // eax@11
  int v12; // eax@11
  int v13; // esi@11
  int v14; // eax@11
  int v15; // ebx@11
  const void *v16; // esi@12
  void *v17; // eax@12
  int v18; // edi@12
  const void *v19; // esi@12
  int v20; // eax@12
  int v21; // ST08_4@13
  int v22; // eax@13
  int v24; // [sp+Ch] [bp-8h]@1
  int v25; // [sp+10h] [bp-4h]@11

  v24 = 0;
  v4 = a2;
  v5 = (int *)a3;
  v6 = this;
  if ( a2
    && (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)a3 + 120))(a3, "bufCsCmdCryptKey", &v24) < 0
    && &v24 != v6 + 5 )
  {
    sub_63D92171((Util::Data *)&v24, v6[5]);
  }
  a3 = 0;
  if ( (*(int (__stdcall **)(size_t, int *, int *))(*(_DWORD *)Size + 12))(Size, v5, &a3) < 0 ) //===========================> act
  {
    v7 = 0;
    goto LABEL_18;
  }
  a2 = 0;
  if ( !v4 )
  {
    v9 = sub_63D94BEA(&a3);
    v10 = sub_63DD1985(&a3);
    sub_63DD1832(v10, v9);
LABEL_11:
    v11 = *v5;
    v25 = 0;
    (*(void (__stdcall **)(int *, const char *, int *))(v11 + 120))(v5, "bufCsPrefix", &v25);
    v12 = sub_63D94BEA(&v25);
    v13 = v12;
    Size = v12;
    v14 = sub_63D94BEA(&a2);
    v15 = (int)(v6 + 1);
    if ( v13 )
    {
      sub_63D9980D(v14 + v13);
      v16 = (const void *)sub_63D94882(&v25);
      v17 = (void *)sub_63D94882(v6 + 1);
      memcpy(v17, v16, Size);
      v18 = sub_63D94BEA(&a2);
      v19 = (const void *)sub_63D94882(&a2);
      v20 = sub_63D94882(v15);
      memcpy((void *)(Size + v20), v19, v18);
    }
    else
    {
      v21 = v14;
      v22 = sub_63DD1985(&a2);
      sub_63DD1832(v22, v21);
    }
    v7 = 1;
    if ( v25 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25);
      v25 = 0;
    }
    goto LABEL_16;
  }
  v8 = sub_63D94882(&v24);
  sub_63DD19EF(&a3, v8, &a2);
  if ( !sub_63D925EE(&a2) )
    goto LABEL_11;
  v7 = 0;
LABEL_16:
  if ( a2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2);
    a2 = 0;
  }
LABEL_18:
  if ( a3 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 8))(a3);
    a3 = 0;
  }
  if ( v24 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v24 + 8))(v24);
  return v7;
}



//im.dll
//消息基础信息？
void __thiscall sub_625CA840(CCmdCodecBase *this)
{
  CCmdCodecBase *v1; // ebx@1

  v1 = this;
  CCmdCodecBase::CodeNumber("dwFromUin", 6);
  CCmdCodecBase::CodeNumber("dwToUin", 6);
  CCmdCodecBase::CodeBuffer(v1, "buffExtInfo");
  CCmdCodecBase::CodeNumber("cVerMain", 2);
  CCmdCodecBase::CodeNumber("cVerSub", 2);
  CCmdCodecBase::CodeNumber("dwSMFromUin", 6);
  CCmdCodecBase::CodeNumber("dwSMToUin", 6);
  CCmdCodecBase::CodeBuffer(v1, "buf16SessionKey");
  CCmdCodecBase::CodeNumber("wCmd", 4);
  CCmdCodecBase::CodeNumber("wSeq", 4);
  CCmdCodecBase::CodeNumber("dwDateTime", 6);
  CCmdCodecBase::CodeNumber("wFace", 4);
  CCmdCodecBase::CodeNumber("dwLastChangeTime", 6);
  CCmdCodecBase::CodeBuffer(v1, "bufOthers");//=============================>
}

//common
void __thiscall CCmdCodecBase::CodeBuffer(CCmdCodecBase *this, const char *a2) //6B4892F0
{
  CCmdCodecBase *v2; // esi@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+Ch] [bp-Ch]@1
  int v5; // [sp+10h] [bp-8h]@1
  int v6; // [sp+14h] [bp-4h]@1

  v2 = this;
  v3 = 6;  // ? struct CTXBuffer *
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)this + 4);
  if ( !sub_6B48A460(*((CTXCommPack **)this + 17), *((_DWORD *)this + 16), (int)a2, (int)&v3) )  //====================>sub_6B48A460
    CCmdCodecBase::BrokenCodec(v2, a2);
}

//@a4  ? struct CTXBuffer *
int __stdcall sub_6B48A460(CTXCommPack *a1, int a2, int a3, int a4)
{
  int v4; // eax@1
  CTXCommPack *v5; // esi@1
  int v6; // edi@3
  signed int v7; // ebx@3
  int v9; // ST0C_4@5
  signed int v10; // eax@5
  int v11; // ST0C_4@6
  int v12; // ebx@6
  CTXCommPack *v13; // eax@7
  CTXCommPack *v14; // ecx@7
  unsigned int v15; // ecx@11
  int v16; // edx@12
  CTXCommPack *v17; // ecx@13
  int v18; // eax@14
  unsigned int v19; // eax@17
  unsigned int v20; // ebx@18
  int v21; // ecx@18
  unsigned int v22; // ecx@19
  unsigned int v23; // edi@20
  void *v24; // eax@22
  int v25; // eax@25
  int v26; // ST0C_4@28
  signed int v27; // eax@28
  signed int v28; // ebx@29
  int v29; // eax@30
  unsigned int v30; // ecx@33
  unsigned int v31; // eax@34
  int v32; // edi@34
  unsigned int v33; // edi@35
  unsigned int v34; // edi@36
  __int16 v35; // ax@46
  int v36; // [sp+Ch] [bp-4h]@6

  v4 = a2;
  v5 = a1;
  if ( !a2 || !a3 )
    return 0;
  v6 = a4;
  v7 = 0;
  switch ( *(_DWORD *)a4 )
  {
    case 0:
      return sub_6B48A970(a1, a2, a3, a4);
    case 2:
      v9 = *(_DWORD *)(a4 + 16);
      a4 = 0;
      v10 = sub_6B48AF10(a2, a3, v9);
      goto LABEL_45;
    case 3:
      v11 = *(_DWORD *)(a4 + 16);
      a2 = 0;
      v12 = sub_6B48AF10(v4, a3, v11);
      v36 = v12;
      if ( !v12 )
        goto LABEL_27;
      v13 = (CTXCommPack *)sub_6B362FF0(&a2);
      v14 = *(CTXCommPack **)(v6 + 4);
      a1 = v13;
      if ( v13 > v14 )
      {
        if ( v14 )
          v13 = v14;
        a1 = v13;
      }
      CTXCommPack::AddBuf(v5, (const struct CTXBuffer *)&a2);
      v15 = *(_DWORD *)(v6 + 4);
      if ( (unsigned int)a1 >= v15 )
        goto LABEL_27;
      v16 = 0;
      a3 = 0;
      if ( (signed int)(v15 - (_DWORD)a1) <= 0 )
        goto LABEL_27;
      v17 = a1;
      break;
    case 1:
      v26 = *(_DWORD *)(a4 + 16);
      a1 = 0;
      v27 = sub_6B48AF10(a2, a3, v26);
      goto LABEL_29;
    case 4:
      a1 = 0;
      v27 = sub_6B48B0A0(&a1, a2, a3);
LABEL_29:
      v28 = v27;
      if ( !v27 )
        goto LABEL_40;
      CTXCommPack::AddBuf(v5, (const struct CTXBuffer *)&a1);
      BYTE3(a4) = *(_BYTE *)(v6 + 4);
      v29 = *((_DWORD *)v5 + 9);
      if ( v29 )
      {
        if ( v29 != 1 )
          goto LABEL_40;
      }
      else
      {
        *((_DWORD *)v5 + 9) = 1;
      }
      v30 = *((_DWORD *)v5 + 1);
      if ( v30 <= 0x3FFFFFFF )
      {
        v31 = *((_DWORD *)v5 + 2);
        v32 = *((_DWORD *)v5 + 2) - v30 - 1;
        if ( v32 >= 0
          || ((v33 = -v32, v31 >= v33) ? (v34 = 2 * v31) : (v34 = *((_DWORD *)v5 + 2)
                                                                + *((_DWORD *)v5 + 7)
                                                                + v33
                                                                - v33 % *((_DWORD *)v5 + 7)),
              CTXCommPack::GrowBuffer(v5, v34)) )
        {
          *(_BYTE *)(*((_DWORD *)v5 + 3) + (*((_DWORD *)v5 + 1))++) = BYTE3(a4);
        }
      }
LABEL_40:
      sub_6B3698C0(&a1);
      return v28;
    case 6:
      a4 = 0;
      v7 = sub_6B48B0A0(&a4, a2, a3); ///-------->
      if ( v7 )
        goto LABEL_47;
      goto LABEL_48;
    case 5:
      a4 = 0;
      v10 = sub_6B48B0A0(&a4, a2, a3);
LABEL_45:
      v7 = v10;
      if ( v10 )
      {
        v35 = sub_6B362FF0(&a4); ///-------->
        sub_6B48AE30(v5, v35, *(_DWORD *)(v6 + 4), *(_DWORD *)(v6 + 12));///-------->
LABEL_47:
		//@a4 const struct CTXBuffer *Src  追加的内容
        CTXCommPack::AddBuf(v5, (const struct CTXBuffer *)&a4);  //======================> AddBuf
      }
LABEL_48:
      sub_6B3698C0(&a4);
      return v7;
    default:
      return v7;
  }
  do
  {
    v18 = *((_DWORD *)v5 + 9);
    if ( v18 )
    {
      if ( v18 != 1 )
        goto LABEL_25;
    }
    else
    {
      *((_DWORD *)v5 + 9) = 1;
    }
    v19 = *((_DWORD *)v5 + 1);
    if ( v19 <= 0x3FFFFFFF )
    {
      v20 = *((_DWORD *)v5 + 2);
      v21 = *((_DWORD *)v5 + 2) - v19 - 1;
      if ( v21 >= 0
        || ((v22 = -v21, v20 >= v22) ? (v23 = 2 * v20) : (v23 = v20
                                                              + v22
                                                              + *((_DWORD *)v5 + 7)
                                                              - v22 % *((_DWORD *)v5 + 7)),
            v24 = CTXCommPack::GrowBuffer(v5, v23),
            v6 = a4,
            v16 = a3,
            v24) )
      {
        *(_BYTE *)(*((_DWORD *)v5 + 3) + (*((_DWORD *)v5 + 1))++) = 0;
      }
      v17 = a1;
    }
LABEL_25:
    ++v16;
    v25 = *(_DWORD *)(v6 + 4) - (_DWORD)v17;
    a3 = v16;
  }
  while ( v16 < v25 );
  v12 = v36;
LABEL_27:
  sub_6B3698C0(&a2);
  return v12;
}

int __thiscall sub_6B362FF0(void *this)
{
  int v1; // ecx@1
  int result; // eax@2
  int v3; // [sp+0h] [bp-4h]@1

  v3 = (int)this;
  v1 = *(_DWORD *)this;
  if ( v1 )
  {
    v3 = 0;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v1 + 52))(v1, &v3);  //=====>sub_6B3A8A70
    result = v3;
  }
  else
  {
    result = 0;
  }
  return result;
}
signed int __stdcall sub_6B3A8A70(int a1, int *a2)
{
  signed int result; // eax@2

  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}

//@this  ? struct CTXBuffer *
//@a2 CCmdCodecBase[0x16]
//@a3 字符串标签. bufOthers,buffExtInfo等等
signed int __thiscall sub_6B48B0A0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edi@1
  int v4; // esi@2
  int (__stdcall *v5)(int, int, _DWORD *); // eax@2
  int (__stdcall *v6)(int); // eax@3
  void (*v7)(void); // eax@5
  void (*v8)(void); // eax@9
  signed int result; // eax@13
  int (__stdcall *v10)(int, int, _DWORD *); // [sp+4h] [bp-4h]@2

  v3 = this;
  if ( !a3 )
    goto LABEL_20;
  v4 = *this;
  v5 = *(int (__stdcall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 120);  //sub_6B3ADDC0
  v10 = *(int (__stdcall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 120);
  if ( *this )
  {
    v6 = *(int (__stdcall **)(int))(*(_DWORD *)v4 + 8);
    if ( v6 == sub_6B3A9610 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        v7 = *(void (**)(void))(*(_DWORD *)dword_6B5EBF2C + 4);
        if ( (char *)v7 == (char *)sub_6B36DAD0 )
          InterlockedIncrement((volatile LONG *)(dword_6B5EBF2C + 8));
        else
          v7();
        if ( v4 )
          (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v4 + 96))(v4, 1);
        v8 = *(void (**)(void))(*(_DWORD *)dword_6B5EBF2C + 8);
        if ( (char *)v8 == (char *)sub_6B36DAC0 )
          InterlockedDecrement((volatile LONG *)(dword_6B5EBF2C + 8));
        else
          v8();
      }
    }
    else
    {
      v6(v4);
    }
    v5 = v10;
    *v3 = 0;
  }
  if ( v5(a2, a3, v3) >= 0 ) //  sub_6B3ADDC0
    result = 1;
  else
LABEL_20:
    result = 0;
  return result;
}

//默认
 //@a3 字符串标签. bufOthers,buffExtInfo等等
//@a4  ? struct CTXBuffer *
signed int __userpurge sub_6B3ADDC0@<eax>(struct ITXBuffer **a1@<edi>, int a2, const char *a3, int *a4)
{
  int v5; // ebx@3
  int v6; // edi@4
  int v7; // esi@5
  int v8; // eax@5
  struct ITXBuffer **v9; // [sp-4h] [bp-18h]@3
  struct ITXBuffer **v10; // [sp-4h] [bp-18h]@5
  char v11; // [sp+8h] [bp-Ch]@2
  int v12; // [sp+10h] [bp-4h]@1

  sub_6B3A9E40(a2);
  v12 = 0;
  BYTE3(a2) = 9;
  if ( !a3 )
  {
    sub_6B3AA0A0(&v11);
    return -2147024809;
  }
  v9 = a1;
  v5 = sub_6B3ABBC0(a3, strlen(a3), (char *)&a2 + 3, &v12);
  if ( v5 >= 0 )
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = *(_DWORD *)(v12 - 4);
      a2 = 0;
      Util::Data::CreateTXBuffer((Util::Data *)&a2, v9);
      (*(void (__stdcall **)(int, int, int))(*(_DWORD *)a2 + 56))(a2, v6, v7);
      v8 = a2;
      if ( a2 )
      {
LABEL_9:
        *a4 = v8;
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 4))(v8);
        sub_6B3698C0(&a2);
        goto LABEL_10;
      }
      Util::Data::CreateTXBuffer((Util::Data *)&a2, v10);
    }
    else
    {
      a2 = 0;
      Util::Data::CreateTXBuffer((Util::Data *)&a2, v9);
    }
    v8 = a2;
    goto LABEL_9;
  }
LABEL_10:
  sub_6B3AA0A0(&v11);
  return v5;
}








int __thiscall CTXCommPack::AddBuf(CTXCommPack *this, const struct CTXBuffer *Src)
{
  const struct CTXBuffer *v2; // esi@1
  CTXCommPack *v3; // ebx@1
  int v4; // edx@1
  int result; // eax@2
  int v6; // ecx@3
  const struct CTXBuffer *v7; // edi@3

  v2 = Src;  //v2    
  v3 = this;
  v4 = *(_DWORD *)Src;
  if ( *(_DWORD *)Src )
  {//新老buf 叠加?
    Src = 0;
    (*(void (__stdcall **)(int, const struct CTXBuffer **))(*(_DWORD *)v4 + 52))(v4, &Src); //sub_6B3A8A70   Src = *(_DWORD *)v4+12  //size    // [esi]+48
    v6 = *(_DWORD *)v2;
    v7 = Src;//size
    if ( *(_DWORD *)v2 )
    {
      Src = 0;
      (*(void (__stdcall **)(int, const struct CTXBuffer **))(*(_DWORD *)v6 + 48))(v6, &Src); //sub_6B3A8A40  Src = *(_DWORD *)v6+8  //content //[esi]+32
      result = CTXCommPack::AddBuf(v3, (const unsigned __int8 *)Src, (unsigned int)v7);   //=================>
    }
    else
    {
      result = CTXCommPack::AddBuf(v3, 0, (unsigned int)Src);
    }
  }
  else
  {
    result = CTXCommPack::AddBuf(this, 0, 0);
  }
  return result;
}

signed int __stdcall sub_6B3A8A70(int a1, int *a2)
{
  signed int result; // eax@2

  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}

signed int __stdcall sub_6B3A8A40(int a1, _DWORD *a2)  
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
  return result;  //dump [ecx]  为新建的 msg 结构(对应 Src )
}

/*
Src 拷贝的源内容 

1102C740  01 00 00 00 01 4D 53 47 00 00 00 00 00 60 6B 09  .....MSG.....`k.  
1102C750  41 C4 8D C8 5A 00 00 00 00 09 00 00 00 00 0F 4D  AÄ.ÈZ..........M  
1102C760  69 63 72 6F 73 6F 66 74 20 59 61 48 65 69 00 00  icrosoft YaHei..  
1102C770  01 00 05 01 00 02 63 63 00 00 73 00 00 00 00 00  ......cc..s.....    //63 63 这里是发送聊天框内容 "cc" 
1102C780  C0 7A B4 14 00 00 00 00 1B 8C C5 85 41 00 00 00  Àz´.......Å.A...  
1102C790  20 00 00 00 62 00 75 00 64 00 64 00 79 00 5F 00   ...b.u.d.d.y._.  
1102C7A0  31 00 36 00 37 00 37 00 35 00 38 00 38 00 35 00  1.6.7.7.5.8.8.5.  
1102C7B0  30 00 33 00 00 00 00 00 00 00 00 00 00 00 00 00  0.3.............  
1102C7C0  60 5B 18 64 01 00 00 00 01 00 00 00 00 00 00 00  `[.d............  
1102C7D0  1C 59 18 64 00 00 00 00 70 5B 18 64 EC 70 03 11  .Y.d....p[.dìp..  
1102C7E0  00 00 65 00 00 00 00 80 00 00 00 80 00 00 00 00  ..e.............  
1102C7F0  00 00 00 00 00 00 00 00 00 00 00 00 D8 C7 02 11  ............ØÇ..  
1102C800  30 37 30 35 A0 33 A0 31 86 2F 68 74 74 70 3A 2F  0705 3 1./http:/  
1102C810  2F 63 72 6C 2E 64 69 67 69 63 65 72 74 2E 63 6E  /crl.digicert.cn  
1102C820  2F 44 69 67 69 43 65 72 74 47 6C 6F 62 61 6C 52  /DigiCertGlobalR  
1102C830  6F 6F 74 43 41 2E 63 72 6C 00 72 00 00 00 00 00  ootCA.crl.r.....  


tobuf 拷贝到新 buf 的内容 
14913A3C  01 00 00 00 01 4D 53 47 00 00 00 00 00 60 6B 09  .....MSG.....`k.  
14913A4C  41 C4 8D C8 5A 00 00 00 00 09 00 00 00 00 0F 4D  AÄ.ÈZ..........M  
14913A5C  69 63 72 6F 73 6F 66 74 20 59 61 48 65 69 00 00  icrosoft YaHei..  
14913A6C  01 00 05 01 00 02 63 63 00 00 73 00 00 00 00 00  ......cc..s.....
*/
//memcpy 拷贝发送内容   
//@Src 消息包内容,包括目标id?
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

CTXCommPack[1*0x4] buf 大小指针?
CTXCommPack[3*0x4] buf 指针指针？



