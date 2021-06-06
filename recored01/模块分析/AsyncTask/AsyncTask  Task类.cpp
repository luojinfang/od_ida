/*
//创建 Task 01
//创建 Task 02
//创建 Task 03

//Task构造方法 01
//Task构造方法 02
*/


{
//kernelutil		
	
	
	
//=========================================================================================
	
	
	
		
	
	
//=========================================================================================
	
	
void __cdecl Util::DataReport::InvokeReport(Util::DataReport *this, int a2)
{
	//5576E6EF
  const wchar_t *v2; // esi@2
  unsigned int v3; // ecx@2
  signed int v4; // edx@2
  unsigned int v5; // ecx@5
  void *v6; // edi@6
  int i; // esi@6
  int v8; // eax@10
  struct AsyncTask::Task *v9; // eax@10
  unsigned int v10; // ST08_4@10
  void *Memory; // [sp+4h] [bp-40Ch]@6
  char v12; // [sp+8h] [bp-408h]@10
  __int16 v13[512]; // [sp+Ch] [bp-404h]@4

  if ( this )
  {
    v2 = L"OnReport(bsReportId)";
    v3 = 0;
    v4 = 79;
    do
    {
      if ( (_WORD)v4 == 40 )
        break;
      ++v2;
      v13[v3++] = v4;
      v4 = *v2;
    }
    while ( (_WORD)v4 );
    v5 = v3;
    if ( v5 >= 512 )
    {
      sub_557FCC2E(v5 * 2, v4);
      __debugbreak();
      JUMPOUT(*(_DWORD *)Util::DataReport::InvokeReportCount);
    }
    v13[v5] = 0;
    sub_5576391D(&Memory, 0, v13);
    v6 = Memory;
    for ( i = *(_DWORD *)Memory; (void *)i != v6; i = *(_DWORD *)i )
      (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(i + 8) + 28))(*(_DWORD *)(i + 8), a2);
    sub_556D2EFE(&Memory);
    sub_556B2507(Memory, 12);
  }
  else
  {
	  //5576E7AB
    v8 = CTXBSTR::CTXBSTR((CTXBSTR *)&v12, (const wchar_t *)a2);
    v9 = (struct AsyncTask::Task *)sub_5576DFF6(sub_5576E9ED, v8); //------------>
    sub_5576ECAA(v9, v10); //================>
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v12);
  }
}	

void __cdecl Util::DataReport::InvokeReportCount(Util::DataReport *this, int a2, wchar_t *a3)
{
  const wchar_t *v3; // esi@2
  unsigned int v4; // ecx@2
  signed int v5; // edx@2
  unsigned int v6; // ecx@5
  void *v7; // edi@6
  int i; // esi@6
  int v9; // eax@10
  int v10; // ST08_4@10
  struct AsyncTask::Task *v11; // eax@10
  void *Memory; // [sp+4h] [bp-40Ch]@6
  char v13; // [sp+8h] [bp-408h]@10
  __int16 v14[512]; // [sp+Ch] [bp-404h]@4

  if ( this )
  {
    v3 = L"OnReportCount(bsReportId, dwReportCount)";
    v4 = 0;
    v5 = 79;
    do
    {
      if ( (_WORD)v5 == 40 )
        break;
      ++v3;
      v14[v4++] = v5;
      v5 = *v3;
    }
    while ( (_WORD)v5 );
    v6 = v4;
    if ( v6 >= 512 )
    {
      sub_557FCC2E(v6 * 2, v5);
      __debugbreak();
      JUMPOUT(*(_DWORD *)sub_5576E8E5);
    }
    v14[v6] = 0;
    sub_5576391D(&Memory, 0, v14);
    v7 = Memory;
    for ( i = *(_DWORD *)Memory; (void *)i != v7; i = *(_DWORD *)i )
      (*(void (__stdcall **)(_DWORD, int, wchar_t *))(**(_DWORD **)(i + 8) + 32))(*(_DWORD *)(i + 8), a2, a3);
    sub_556D2EFE(&Memory);
    sub_556B2507(Memory, 12);
  }
  else
  {
    v9 = CTXBSTR::CTXBSTR((CTXBSTR *)&v13, (const wchar_t *)a2);
    v11 = (struct AsyncTask::Task *)sub_5576E04D(sub_5576EABC, v9, v10); //----->
    sub_5576ECAA(v11, (unsigned int)&a3);//=============>
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v13);
  }
}

//创建 Task 01
int __cdecl sub_5576E04D(int a1, int a2, int *a3)
{
  char v3; // bl@1
  void *v4; // esi@1
  int v5; // esi@2
  char v7; // [sp+8h] [bp-8h]@2
  int v8; // [sp+Ch] [bp-4h]@1

  v3 = 0;
  v8 = 0;
  v4 = sub_557FC4F1(0x10u);
  if ( v4 )
  {
    CTXBSTR::CTXBSTR(&v7, a2);
    v8 = *a3;
    v5 = sub_5576E0A4((int)v4, a1, (int)&v7); //------------->
    v3 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( v3 & 1 )
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v7);
  return v5;
}
//@a2 回调方法
//@a3 CTXBSTR
int __thiscall sub_5576E0A4(int this, int a2, int a3)
{
  int v3; // ebx@1

  v3 = this;
  *(_DWORD *)this = &off_5581F46C;//Task[0] 虚表
  *(_DWORD *)(this + 4) = a2;//Task[4] 回调方法
  CTXBSTR::CTXBSTR(this + 8, a3);   //Task[8] CTXBSTR 字符串 
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(a3 + 4); //Task[12] CTXBSTR[16] 
  return v3;
}

//创建 Task 02
_DWORD *__cdecl sub_5576DFF6(int a1, int a2)
{
  char v2; // bl@1
  _DWORD *v3; // edi@1
  int v5; // [sp+8h] [bp-4h]@1

  v2 = 0;
  v5 = 0;
  v3 = sub_557FC4F1(0xCu);
  if ( v3 )
  {
    CTXBSTR::CTXBSTR(&v5, a2);
    v3[1] = a1;  //Task[4] 回调方法
    *v3 = &off_5581F460; //Task[0] 虚表
    CTXBSTR::CTXBSTR(v3 + 2, &v5); //Task[8] CTXBSTR 字符串 
    v2 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v2 & 1 )
    CTXBSTR::~CTXBSTR((CTXBSTR *)&v5);
  return v3;
}
	
//=========================================================================================
//封装 PostTask,PostDelayedTask
void __cdecl sub_5576ECAA(struct AsyncTask::Task *a1, __int64 a2)
{
  AsyncTask::MessageLoop *v2; // eax@2

  if ( Util::Misc::IsInitAsyncMsgLoop() )
  {
    v2 = Util::Misc::GetMainThreadLoop();
    if ( v2 )
    {
      if ( a2 )
        AsyncTask::MessageLoop::PostDelayedTask(v2, a1, a2);
      else
        AsyncTask::MessageLoop::PostTask(v2, a1);
    }
  }
}	
	
	
	
	
	
//=========================================================================================
	
	
	
	
	
//=========================================================================================
	
	
	
	
	
//=========================================================================================
	
	
	
	
	
//=========================================================================================
	
	
	
}









{
//kernelutil
	
	
	
//=========================================================================================
//封装 PostTask,PostDelayedTask
void __cdecl sub_557DC8C1(int a1, void (__thiscall *a2)(int, _DWORD, _DWORD, _DWORD), int a3, _DWORD *a4, _WORD *a5, _WORD *a6, __int64 a7)
{
  AsyncTask::MessageLoop *v7; // esi@2
  struct AsyncTask::Task *v8; // eax@4
  struct AsyncTask::Task *v9; // eax@5
  int v10; // eax@7

  if ( Util::Misc::IsInitAsyncMsgLoop() && (v7 = Util::Misc::GetMainThreadLoop()) != 0 )
  {
    if ( a7 )
    {
      v8 = (struct AsyncTask::Task *)sub_557DC7D1((int)a2, a3, a4, a5, a6);
      AsyncTask::MessageLoop::PostDelayedTask(v7, v8, a7);
    }
    else
    {
      v9 = (struct AsyncTask::Task *)sub_557DC7D1((int)a2, a3, a4, a5, a6);
      AsyncTask::MessageLoop::PostTask(v7, v9);
    }
  }
  else if ( sub_556BCBA8(a1) )
  {
    v10 = sub_556BCBA8(a1);
    a2(v10 + a3, *a4, *a5, *a6);
  }
}
//=========================================================================================
//@a1 为回调方法
//创建 Task 03
int __stdcall sub_557DC7D1(int a1, int a2, int *a3, _WORD *a4, __int16 *a5)
{
  char v5; // bl@1
  __int16 v6; // ax@2
  int v7; // eax@2
  int v8; // esi@2
  char v10; // [sp+Ch] [bp-10h]@2
  int v11; // [sp+14h] [bp-8h]@2
  int v12; // [sp+18h] [bp-4h]@1

  v5 = 0;
  v12 = 0;
  if ( sub_557FC4F1(0x28u) )
  {
    v6 = *a5;
    v11 = *a3;
    HIWORD(v12) = v6;
    LOWORD(v12) = *a4;
    v7 = sub_556BCCBF(&v10); //内存记数？
    v8 = sub_557DD21D(v7, a1, a2, &v11);//构造方法
    v5 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( v5 & 1 )
    sub_556B9BB4(&v10);
  return v8;
}

//=========================================================================================
//Task构造方法 01
//@a2 为回调方法数组
int __thiscall sub_557DD21D(int this, int a2, int a3, int a4, int a5)
{
  int v5; // esi@1
  int v6; // ecx@1
  int v7; // eax@1

  v5 = this;
  *(_DWORD *)this = &off_55833CB8;	//Task[0] 虚表
  sub_556B8F8E((_DWORD *)(this + 4), a2); //Task[4] 回调方法数组
  *(_DWORD *)(v5 + 16) = a3;//Task[16] 
  *(_DWORD *)(v5 + 20) = a4;//Task[20]
  *(_DWORD *)(v5 + 24) = *(_DWORD *)a5;//Task[24]
  v6 = 0;
  *(_DWORD *)(v5 + 28) = *(_DWORD *)(a5 + 4);//Task[28]
  v7 = *(_DWORD *)(v5 + 4);  //回调方法数组
  if ( v7 && *(_DWORD *)(v7 + 4) ) //当有第二个回调方法时
    v6 = *(_DWORD *)(v5 + 8);//Task[32]
  (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 4))(v6);  //v6是什么? todo
  return v5; //返回 struct AsyncTask::Task *
} 

//@this 回调方法数组
_DWORD *__thiscall sub_556B8F8E(_DWORD *this, int a2)
{
  _DWORD *v2; // esi@1
  volatile LONG *v3; // eax@1

  v2 = this;
  v3 = *(volatile LONG **)a2;
  *this = *(_DWORD *)a2;
  if ( v3 )
    InterlockedIncrement(v3);
  v2[1] = *(_DWORD *)(a2 + 4);  
  return v2;
}
//=========================================================================================



//=========================================================================================



//=========================================================================================



//=========================================================================================



}

































{


//=========================================================================================
void __cdecl sub_9933693(int a1, void (__thiscall *a2)(int), int a3, __int64 a4)
{
  AsyncTask::MessageLoop *v4; // esi@2
  struct AsyncTask::Task *v5; // eax@4
  struct AsyncTask::Task *v6; // eax@5
  int v7; // eax@7

  if ( Util::Misc::IsInitAsyncMsgLoop() && (v4 = Util::Misc::GetMainThreadLoop()) != 0 )
  {
    if ( a4 )
    {
      v5 = (struct AsyncTask::Task *)sub_993363B(a2, a3);
      AsyncTask::MessageLoop::PostDelayedTask(v4, v5, a4);
    }
    else
    {
      v6 = (struct AsyncTask::Task *)sub_993363B(a2, a3); //--------------->
      AsyncTask::MessageLoop::PostTask(v4, v6);
    }
  }
  else if ( sub_9933D8B(a1) )
  {
    v7 = sub_9933D8B(a1);
    a2(v7 + a3);
  }
}



signed int __thiscall sub_9A6C133(void *this, int a2, int a3, int a4)
{
  int v4; // ebx@1
  signed int v5; // esi@1
  signed int result; // eax@2
  int v7; // eax@8
  int v8; // eax@10
  int v9; // [sp+8h] [bp-10h]@3
  int v10; // [sp+Ch] [bp-Ch]@1
  int v11; // [sp+10h] [bp-8h]@3
  char v12; // [sp+14h] [bp-4h]@8

  v4 = (int)this;
  sub_99023D0(L"file", 2092, L"func", 3, L"SessionPanel", L"OnContactIMStatusEvt, [%u]", a3);
  v5 = 0;
  v10 = 0;
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a4 + 32))(a4, "bOtherOfflineBySelf", &v10);
  if ( v10 )
  {
    result = 0;
  }
  else
  {
    v11 = 0;
    sub_9917259(&v11);
    v9 = 0;
    if ( !v11 || (*(int (__stdcall **)(int, int *))(*(_DWORD *)v11 + 40))(v11, &v9) < 0 || !v9 )
    {
      if ( Util::Contact::GetSelfUin() == a3 )
      {
        sub_9933693(v4 + 180, (void (__thiscall *)(int))sub_9A6F318, 0, 0i64);  //================>
      }
      else
      {
        CTXBSTR::CTXBSTR((CTXBSTR *)&v12);
        v7 = CTXBSTR::operator&(&v12);
        if ( sub_9A6BEF3(a3, v7) >= 0 )
        {
          v8 = CTXBSTR::operator wchar_t *(&v12);
          v5 = sub_9A6F586(a3, v8, 0, 0);
        }
        else
        {
          v5 = 1;
        }
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v12);
      }
    }
    sub_990320E(&v11);
    result = v5;
  }
  return result;
}


//im.54C705DF ===>09904042/sub_9903FF8
signed int __stdcall sub_9903FF8(int a1, int a2, int a3, int a4)
{
  int v4; // esi@1
  int v5; // ecx@2
  int v6; // ecx@4
  signed int v8; // edx@8
  int *v9; // ecx@9
  int v10; // eax@10
  signed int v11; // eax@11
  int v12; // ecx@12
  int v13; // esi@14
  int *v14; // esi@17
  int v15; // esi@19

  v4 = *(_DWORD *)(a1 + 12);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 && *(_DWORD *)(v5 + 4) )
      v6 = *(_DWORD *)(a1 + 20);
    else
      v6 = 0;
    if ( !v6 )
      return 0x8000FFFF;
  }
  v8 = 0x80004001;
  if ( v4 )
  {
    v9 = *(int **)(a1 + 24);
    if ( v9 )
    {
      v10 = *v9;
      return (*(int (__fastcall **)(int *, signed int, int, int, int))(v10 + 4))(v9, 0x80004001, a2, a3, a4); //================>sub_9A6C133
    }
  }
  v12 = *(_DWORD *)(a1 + 16);
  if ( v12 && *(_DWORD *)(v12 + 4) )
    v13 = *(_DWORD *)(a1 + 20);
  else
    v13 = 0;
  if ( v13 )
  {
    v14 = *(int **)(a1 + 24);
    if ( v14 )
    {
      v10 = *v14;
      v9 = *(int **)(a1 + 24);
      return (*(int (__fastcall **)(int *, signed int, int, int, int))(v10 + 4))(v9, 0x80004001, a2, a3, a4);
    }
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( v15 )
  {
    if ( !v12 || !*(_DWORD *)(v12 + 4) )
      v15 = 0;
    v11 = 0x8000FFFF;
    if ( v15 )
      v11 = 0x80004001;
    return v11;
  }
  return v8;
}


//=========================================================================================
//创建 struct AsyncTask::Task *
_DWORD *__thiscall sub_993363B(void *this, int a1, int a2)
{
  char v3; // bl@1
  void *v4; // edi@1
  _DWORD *v5; // esi@1
  int v6; // eax@2
  _DWORD *v7; // esi@2
  char v9; // [sp+Ch] [bp-Ch]@2
  int v10; // [sp+10h] [bp-8h]@1
  char v11; // [sp+17h] [bp-1h]@2

  v3 = 0;
  v4 = this;
  v10 = 0;
  v5 = sub_9B1AFAF(0x20u);
  if ( v5 )
  {
    v6 = sub_9933DEA((int)v4, (int)&v9);
    v7 = sub_99338D7(v5, v6, a1, a2, (int)&v11); //---->
    v3 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( v3 & 1 )
    sub_990328A((void **)&v9);
  return v7;
}

//Task构造方法 02
_DWORD *__thiscall sub_99338D7(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi@1
  int v6; // ecx@1
  int v7; // eax@1

  v5 = this;
  *this = &off_9B3A53C;
  sub_993393F(a2);
  v6 = 0;
  v5[4] = a3;
  v5[5] = a4;
  v7 = v5[1];
  if ( v7 && *(_DWORD *)(v7 + 4) )
    v6 = v5[2];
  (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  return v5;
}

//=========================================================================================



//=========================================================================================



//=========================================================================================



//=========================================================================================





	
}