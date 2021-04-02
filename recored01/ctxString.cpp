//common.dll
=================================================================================================================================================================================================================================

//获得单例?
struct CTxStringMgr *__thiscall TxGetDefaultStringManager(int *this)
{
  _DWORD *v1; // eax@3
  int v2; // ebx@4
  Util::CTXSpinLock *v3; // esi@4
  signed int v4; // edi@4
  int *v5; // edx@9
  struct CTxStringMgr *result; // eax@9
  int *v7; // [sp+0h] [bp-4h]@1

  v7 = this;
  if ( !(dword_52532620 & 1) )
  {
    dword_52532628 = 0;
    dword_52532620 |= 1u;  //初始化标识？
    dword_5253262C = 2;
    dword_52532638 = 0;
    dword_52532630 = 0;
    word_5253263C = 0;
    dword_52532634 = 1;
    memset(&unk_52532640, 0, 0x40000u);
    dwTlsIndex = TlsAlloc();   //每个线程创建一个 dwTlsIndex 全局变量， 互不相干.配合 TlsGetValue(dwTlsIndex) , TlsSetValue(dwTlsIndex,xxxx) 使用.
    if ( dwTlsIndex == -1 )
      sub_522AF120(-2147467258);
    v1 = (_DWORD *)sub_5247997C(8196);
    if ( v1 )
    {
      v2 = (int)(v1 + 1);
      *v1 = 1024;
      v3 = (Util::CTXSpinLock *)(v1 + 1);
      v4 = 1024;
      do
      {
        Util::CTXSpinLock::CTXSpinLock(v3);
        v3 = (Util::CTXSpinLock *)((char *)v3 + 8);
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v2 = 0;
    }
    dword_52528F68 = v2;   //引用 创建的内存块
    v7 = &dword_52532628;
    sub_523F51F0(&v7);
    sub_52479CDE(sub_524834B0);
  }
  v5 = &dword_52532628;
  result = (struct CTxStringMgr *)&dword_52532628;
  if ( dword_52528F6C )
    v5 = (int *)dword_52528F6C;
  dword_52528F6C = (int)v5;
  return result;
} 
----------------------------------------------------------------------
void __thiscall sub_523F51F0(char *this, void **a2)
{
  void **v2; // ebx@1
  char *v3; // edi@1
  int v4; // esi@1
  char *v5; // eax@1
  int v6; // edi@1
  void *v7; // ebx@2
  int v8; // edx@3
  unsigned int v9; // eax@5
  int v10; // edx@6
  int v11; // esi@6
  bool v12; // cf@6
  unsigned int v13; // eax@6
  _DWORD *v14; // esi@17
  void *v15; // ecx@19
  int v16; // ecx@21
  _DWORD *v17; // eax@23
  int v18; // eax@27
  bool v19; // zf@28
  char *v20; // [sp+Ch] [bp-4h]@1

  v2 = a2;
  v3 = this;
  v4 = *((_WORD *)*a2 + 4);
  Util::CTXSpinLock::Lock((volatile LONG *)(dword_52528F68 + 8 * (*((_DWORD *)*a2 + 2) & 0x3FF)));
  v5 = &v3[4 * v4 + 24];
  v6 = *(_DWORD *)v5;
  v20 = v5;
  if ( *(_DWORD *)v5 )
  {
    v7 = *a2;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      if ( v7 == (void *)v8 )
      {
        v16 = *((_DWORD *)*a2 + 2);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(v8 + 8) == *((_DWORD *)v7 + 2) )
      {
        v9 = *((_DWORD *)v7 + 4);
        if ( *(_DWORD *)(v8 + 16) == v9 )
        {
          v10 = v8 + 20;
          v11 = (int)v7 + 20;
          v12 = v9 < 4;
          v13 = v9 - 4;
          if ( v12 )
          {
LABEL_9:
            if ( v13 == -4 )
              break;
          }
          else
          {
            while ( *(_DWORD *)v10 == *(_DWORD *)v11 )
            {
              v10 += 4;
              v11 += 4;
              v12 = v13 < 4;
              v13 -= 4;
              if ( v12 )
                goto LABEL_9;
            }
          }
          if ( *(_BYTE *)v10 == *(_BYTE *)v11
            && (v13 == -3
             || *(_BYTE *)(v10 + 1) == *(_BYTE *)(v11 + 1)
             && (v13 == -2
              || *(_BYTE *)(v10 + 2) == *(_BYTE *)(v11 + 2) && (v13 == -1 || *(_BYTE *)(v10 + 3) == *(_BYTE *)(v11 + 3)))) )
          {
            break;
          }
        }
      }
      v14 = (_DWORD *)v6;
      v6 = *(_DWORD *)v6;
      if ( !v6 )
      {
        v2 = a2;
        goto LABEL_23;
      }
    }
    sub_523F4BF0(*a2);
    v15 = *(void **)(v6 + 4);
    *a2 = v15;
    if ( v15 != (void *)dword_52528F6C )
    {
      InterlockedIncrement((volatile LONG *)v15 + 1);
      v15 = *a2;
    }
  }
  else
  {
    v14 = 0;
LABEL_23:
    v17 = sub_5247994C(8u);
    v15 = *v2;
    *v17 = 0;
    v17[1] = v15;
    if ( *(_DWORD *)v20 )
      *v14 = v17;
    else
      *(_DWORD *)v20 = v17;
  }
  v16 = *((_DWORD *)v15 + 2);
LABEL_27:
  v18 = dword_52528F68 + 8 * (v16 & 0x3FF);
  if ( Util::CTXSpinLock::g_cProcessorNum <= 1 )
  {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)v18);
  }
  else
  {
    v19 = (*(_DWORD *)(v18 + 4))-- == 1;
    if ( v19 )
      InterlockedExchange((volatile LONG *)v18, 0);
  }
}
----------------------------------------------------------------------
/*
class CTXStringW
{
	
	
	public:
		[0x0] void* _str;//字符串, this 地址
		[0x4] int _ffff; // ? 创建内存时会置 1,是否引用记数？？
		[0x12] int _size; //内存占用大小 *2,最后一个作标识是否开启 dwTlsIndex . (_size = _count * 字符大小*2 )
		[0x16] int _count;// 字符个数
}



//522B2FAC
	struct CTxStringMgr *v10;
    _DWORD *v11;  
    v10 = TxGetDefaultStringManager(a1);
    v11 = sub_523F4FD0(v10, v2, 1, (int)byte_524A98A0, v2, v7, &bstrString);
	
	lpFileName = (LPCWSTR)v11; //[0x0]
	
	v11[4] = v2; //[0x16] 字符个数
	
	if ( v2 < 0 || v2 > v11[3] >> 1 )  //[0x12]
      sub_522AF120(-2147024809);
	
*/
//创建 CTXStringW,CTXStringA ?  增加上头部 22 字节
//@a2 字符个数
//@a3 每个字符几个字节
_DWORD *__thiscall sub_523F4FD0(_DWORD *this, int a2, int a3, int a4, unsigned int a5, int a6, _DWORD *a7)
{
  _DWORD *v7; // edi@1
  int v8; // esi@3
  int v9; // edi@3
  int v10; // ebx@4
  int v11; // esi@6
  int v12; // edx@6
  unsigned int v13; // ecx@6
  bool v14; // cf@8
  int v15; // eax@19
  bool v16; // zf@20
  _DWORD *v17; // eax@21
  _DWORD *result; // eax@24
  int v19; // edi@31
  void *v20; // eax@31
  _DWORD *v21; // esi@31
  int v22; // eax@32
  int v23; // [sp+Ch] [bp-4h]@3

  v7 = this;
  if ( TlsGetValue(dwTlsIndex) )
  {
    v17 = a7;
    if ( a7 )
      goto LABEL_28;
LABEL_29:
    if ( a2 >= 0 && (v19 = a3 * a2, v20 = malloc(a3 * a2 + 22), (v21 = v20) != 0) )
    {
      memset(v20, 0, v19 + 22);
      v22 = v21[3];
      v21[1] = 1;  // CTXStringW.[0x4]
      v21[3] = v22 & 1 | 2 * v19;// CTXStringW.[0x12]
      v16 = TlsGetValue(dwTlsIndex) == 0;
      result = v21;
      v21[3] = v21[3] & 0xFFFFFFFE | v16; //标识是否开启 dwTlsIndex 
    }
    else
    {
      result = 0;
    }
    return result;
  }
  if ( !a4 )
    goto LABEL_29;
  v8 = a6;
  v23 = 8 * (a6 & 0x3FF);
  Util::CTXSpinLock::Lock((volatile LONG *)(dword_52528F68 + v23));
  v9 = v7[(unsigned __int16)a6 + 6];
  if ( !v9 )
  {
LABEL_19:
    v15 = v23 + dword_52528F68;
    if ( Util::CTXSpinLock::g_cProcessorNum <= 1 )
    {
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)v15);
    }
    else
    {
      v16 = (*(_DWORD *)(v15 + 4))-- == 1;
      if ( v16 )
      {
        InterlockedExchange((volatile LONG *)v15, 0);
        v17 = a7;
LABEL_28:
        *v17 = 0;   //重置
        goto LABEL_29;
      }
    }
    v17 = a7;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(v9 + 4);
    if ( *(_DWORD *)(v10 + 8) != v8 || *(_DWORD *)(v10 + 16) != a5 )
      goto LABEL_18;
    v11 = a4;
    v12 = v10 + 20;
    v13 = a5 - 4;
    if ( a5 < 4 )
    {
LABEL_9:
      if ( v13 == -4 )
        break;
    }
    else
    {
      while ( *(_DWORD *)v12 == *(_DWORD *)v11 )
      {
        v12 += 4;
        v11 += 4;
        v14 = v13 < 4;
        v13 -= 4;
        if ( v14 )
          goto LABEL_9;
      }
    }
    if ( *(_BYTE *)v12 == *(_BYTE *)v11
      && (v13 == -3
       || *(_BYTE *)(v12 + 1) == *(_BYTE *)(v11 + 1)
       && (v13 == -2
        || *(_BYTE *)(v12 + 2) == *(_BYTE *)(v11 + 2) && (v13 == -1 || *(_BYTE *)(v12 + 3) == *(_BYTE *)(v11 + 3)))) )
    {
      break;
    }
    v8 = a6;
LABEL_18:
    v9 = *(_DWORD *)v9;
    if ( !v9 )
      goto LABEL_19;
  }
  if ( v10 != dword_52528F6C )
    InterlockedIncrement((volatile LONG *)(v10 + 4));
  sub_523F4C70(a6);
  *a7 = 1;
  return *(_DWORD **)(v9 + 4);
}


----------------------------------------------------------------------

----------------------------------------------------------------------

----------------------------------------------------------------------

 



=================================================================================================================================================================================================================================

//CTXStringW::CTXStringW(wchar_t *)  
char **__thiscall CTXStringW::CTXStringW(char **this, void *Src)
{
  char **v2; // esi@1
  char *v3; // eax@1
  OLECHAR *v4; // ST04_4@4
  int v5; // ecx@5
  _WORD *i; // eax@6

  v2 = this;
  v3 = (char *)TxGetDefaultStringManager() + 20;
  *v2 = v3;
  if ( v3 - 20 != (char *)dword_52528F6C )
  {
    InterlockedIncrement((volatile LONG *)v3 - 4);
    v3 = *v2;
  }
  if ( *((_DWORD *)v3 - 5) )
  {
    v4 = (OLECHAR *)*((_DWORD *)v3 - 5);
    *((_DWORD *)v3 - 5) = 0;
    SysFreeString(v4);
  }
  v5 = 0;
  if ( Src )
  {
    for ( i = Src; *i; ++v5 )
      ++i;
  }
  sub_523F5C30(Src, v5); //创建占用内存
  return v2;
}


----------------------------------------------------------------------

//创建占用内存
//@a3 字符长度
//@Src 字符数组
LONG __thiscall sub_523F5C30(int *this, void *Src, int a3)
{
  int v3; // ebx@1
  int *v4; // edi@1
  int v5; // ecx@2
  LONG result; // eax@2
  unsigned int v7; // esi@6
  _DWORD *v8; // edx@6
  int v9; // esi@9
  size_t v10; // [sp-8h] [bp-10h]@6
  unsigned int v11; // [sp+14h] [bp+Ch]@6

  v3 = a3;
  v4 = this;
  if ( a3 )
  {
    if ( !Src )
      sub_522AF120(-2147024809);
    v11 = ((signed int)Src - *this) >> 1;
    v7 = *(_DWORD *)(*this - 4) >> 1;
    v8 = sub_523F5A00(this, v3); //创建内存 
    v10 = 2 * v3;
    if ( v11 > v7 )
      memcpy(v8, Src, v10);
    else
      memmove(v8, (char *)v8 + 2 * v11, v10);
    v9 = *v4;
    *(_DWORD *)(v9 - 12) = sub_523F4BB0(*v4, 2 * v3);
    result = sub_523F5B80(v3);
  }
  else
  {
    v5 = *this;
    result = *v4 - 20;
    if ( result != dword_52528F6C )
    {
      *v4 = dword_52528F6C + 20;
      sub_523F4BF0((void *)(v5 - 20));
      result = *v4 - 20;
      if ( result != dword_52528F6C )
        result = InterlockedIncrement((volatile LONG *)(result + 4));
    }
  }
  return result;
}

----------------------------------------------------------------------
//创建内存 
//@a2 内存大小
_DWORD *__thiscall sub_523F5A00(void *this, unsigned int a2)
{
  int *v2; // edi@1
  int v3; // esi@1
  int v4; // ecx@2
  _DWORD *result; // eax@4
  unsigned int v6; // ecx@5
  int v7; // eax@5
  int v8; // edx@9

  v2 = (int *)this;
  v3 = *(_DWORD *)this - 20;
  if ( *(_DWORD *)(v3 + 4) > 1 )
  {
    v4 = a2;
    if ( *(_DWORD *)(v3 + 16) >> 1 > a2 )
      v4 = *(_DWORD *)(v3 + 16) >> 1;
    sub_523F5D30(v2, v4);
    return (_DWORD *)*v2;
  }
  v6 = *(_DWORD *)(v3 + 12) >> 1 >> 1;
  v7 = *(_DWORD *)(v3 + 12) << 31 >> 31;
  if ( v6 >= a2 )
  {
    if ( !v7 )
      return (_DWORD *)*v2;
    Util::CTXSpinLock::Lock((volatile LONG *)(dword_52528F68 + 8 * (*(_DWORD *)(v3 + 8) & 0x3FF)));
    if ( *(_DWORD *)(v3 + 4) <= 1 )
    {
      sub_523F5340(v3);
      sub_523F4C70(*(_DWORD *)(v3 + 8));
      return (_DWORD *)*v2;
    }
LABEL_19:
    sub_523F4C70(*(_DWORD *)(v3 + 8));
    sub_523F5D30(v2, a2);
    return (_DWORD *)*v2;
  }
  if ( v7 )
  {
    Util::CTXSpinLock::Lock((volatile LONG *)(dword_52528F68 + 8 * (*(_DWORD *)(v3 + 8) & 0x3FF)));
    if ( *(_DWORD *)(v3 + 4) <= 1 )
    {
      sub_523F5340(v3);
      sub_523F4C70(*(_DWORD *)(v3 + 8));
      v6 = *(_DWORD *)(v3 + 12) >> 1 >> 1;
      goto LABEL_9;
    }
    goto LABEL_19;
  }
LABEL_9:
  v8 = v6 + 16;
  if ( v6 <= 0x10 )
    v8 = 2 * v6;
  if ( v8 < (signed int)a2 )
    v8 = a2;
  if ( v8 >= 0 )
  {
    result = sub_523F5170((void *)v3, v8, 2) + 20;
    *v2 = (int)result;
  }
  else
  {
    result = (_DWORD *)20;
    *v2 = 20;
  }
  return result;
}
 

----------------------------------------------------------------------

 
char *__thiscall sub_523F5170(void *Memory, int a2, int a3)
{
  unsigned int v3; // edi@1
  char *result; // eax@1
  char *v5; // esi@1
  DWORD v6; // ST04_4@2
  unsigned int v7; // ecx@2
  unsigned int v8; // eax@2

  v3 = a3 * a2;
  result = (char *)realloc(Memory, a3 * a2 + 22);
  v5 = result;
  if ( result )
  {
    v6 = dwTlsIndex;
    *((_DWORD *)result + 3) = 2 * v3 | *((_DWORD *)result + 3) & 1;
    v7 = *((_DWORD *)result + 3) & 0xFFFFFFFE | (TlsGetValue(v6) == 0);
    v8 = *((_DWORD *)v5 + 4) + 22;
    *((_DWORD *)v5 + 3) = v7;
    if ( a3 * a2 + 22 < v8 )
    {
      *(_WORD *)&v5[v3 + 20] = 0;
      *((_DWORD *)v5 + 4) = v3;
      *((_DWORD *)v5 + 2) = sub_523F4BB0((int)(v5 + 20), v3);
    }
    result = v5;
  }
  return result;
}

//void *realloc(void *mem_address, unsigned int newsize);
	先判断当前的指针是否有足够的连续空间，如果有，扩大mem_address指向的地址，并且将mem_address返回，
	如果空间不够，先按照 newsize 指定的大小分配空间，将原有数据从头到尾拷贝到新分配的内存区域，
	而后释放原来mem_address所指内存区域（注意：原来指针是自动释放，不需要使用free），
	同时返回新分配的内存区域的首地址。即重新分配存储器块的地址。

	如果重新分配成功则返回指向被分配内存的指针，否则返回空指针NULL。


----------------------------------------------------------------------

 

 

----------------------------------------------------------------------

 

 

----------------------------------------------------------------------

 

 

----------------------------------------------------------------------

 





 

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================
=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================

=================================================================================================================================================================================================================================


