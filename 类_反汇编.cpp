
//==================================================================================================
/*
	前置
		编译关闭 安全检查 /GS-
		编译关闭 sdl 检查  /sdl-
		启用c++异常 否    /ehsc
		关闭(默认)   基本运行时检查       //memset(&v4, 0xCCu, 0x120u); 
		
		
		
		
		
	查看  malloc 在哪里使用了，就可以找到申请类存的地方，间接可找到创建类实例的方法，找到类构造 
		
		
*/


//==================================================================================================
//所有保护都关闭 

//带虚函数的类继承 01， 虚表函数数量变化

class Test
{
public:
    Test() {}
    ~Test() {
        std::cout << "test" << std::endl;
    }
    virtual void fun(){}
private:
    int m_nCount;
    int m_array[1024*1024];
};


class Test_sub1:public Test
{
public:
    Test_sub1():m_nCount(1) {}
    ~Test_sub1() {
        std::cout << m_nCount << std::endl;
    }
    virtual void fun(){}
    virtual void fun1(){}
private:
    int m_nCount;
};

class Test_sub2:public Test_sub1
{
public:
    Test_sub2():m_nCount(2) {}
    ~Test_sub2() {
        std::cout << m_nCount << std::endl;
    }
    virtual void fun(){}
    virtual void fun1(){}
    virtual void fun2(){}
private:
    int m_nCount;
};

class Test_sub3:public Test_sub2
{
public:
    Test_sub3():m_nCount(3) {}
    ~Test_sub3() {
        std::cout << m_nCount << std::endl;
    }
    void fun(){}
    virtual void fun1(){}
    virtual void fun2(){}
    virtual void fun3(){}
private:
    int m_nCount;
};


void testclass(const char* str)
{
    //std::cout << str << std::endl;
    a_class* a = new a_class(str);
    a->a_v1 = 100;

    Test* t = new Test();
    t->fun();

    Test* t1 = new Test_sub1();
    t1->fun();

    Test* t2 = new Test_sub2();
    t2->fun();

    Test* t3 = new Test_sub3();
    t3->fun();
}

int main()
{
    const char* str = "12345";
    testclass(str);
    return 0;
}

------------------------------------------------------------------------------------------------
int sub_416320()
{
  sub_41159B(&unk_422035);
  sub_411244("12345");
  return 0;
}
--------------------------------
int __cdecl sub_411244(int a1)
{
  return sub_4160D0(a1);
}


--------------------------------
int __cdecl sub_4160D0(int a1)
{
  _DWORD *v2; // [sp+Ch] [bp-6Ch]@2
  void (__thiscall ***v3)(_DWORD); // [sp+Ch] [bp-6Ch]@5
  void (__thiscall ***v4)(_DWORD); // [sp+Ch] [bp-6Ch]@8
  void (__thiscall ***v5)(_DWORD); // [sp+Ch] [bp-6Ch]@11
  int (__thiscall ***v6)(_DWORD); // [sp+Ch] [bp-6Ch]@14
  int v7; // [sp+10h] [bp-68h]@13
  int v8; // [sp+14h] [bp-64h]@10
  int v9; // [sp+18h] [bp-60h]@7
  int v10; // [sp+1Ch] [bp-5Ch]@4

  sub_41159B(&unk_422035);
  if ( sub_4111C2(0xCu) )
    v2 = (_DWORD *)sub_4112B2(a1);
  else
    v2 = 0;
  *v2 = 100;
  
  v10 = sub_4111C2(0x400008u); //创建内存空间. 成员 m_nCount(4字节) + m_array(0x400000字节) + 虚表指针(4字节)
  if ( v10 )
    v3 = (void (__thiscall ***)(_DWORD))sub_411406(v10);
  else
    v3 = 0;
  (**v3)(v3);
  
  v9 = sub_4111C2(0x40000Cu);//创建内存空间.  成员 m_nCount(4字节) + 父类实例空间(0x400008u),  虚表指针覆盖
  if ( v9 )
    v4 = (void (__thiscall ***)(_DWORD))sub_4110CD(v9);
  else
    v4 = 0;
  (**v4)(v4);
  
  v8 = sub_4111C2(0x400010u);
  if ( v8 )
    v5 = (void (__thiscall ***)(_DWORD))sub_41138E(v8);
  else
    v5 = 0;
  (**v5)(v5);
  
  v7 = sub_4111C2(0x400014u);
  if ( v7 )
    v6 = (int (__thiscall ***)(_DWORD))sub_4114C9(v7);
  else
    v6 = 0;
  return (**v6)(v6);
} 

-------------------------------- 
int __thiscall sub_411406(int this)
{
  return sub_414360(this);
}
int __thiscall sub_4110CD(int this)
{
  return sub_4143A0(this);
}
int __thiscall sub_41138E(int this)
{
  return sub_4143F0(this);
}
int __thiscall sub_4114C9(int this)
{
  return sub_414440(this);
}
--------------------------------
_DWORD *__thiscall sub_414360(_DWORD *this)
{
  _DWORD *v1; // ST4C_4@1

  v1 = this;
  sub_41159B(&unk_422035);
  *v1 = &off_41CEEC;
  return v1;
}
int __thiscall sub_4143A0(void *this)
{
  int v1; // ST4C_4@1

  v1 = (int)this;
  sub_41159B(&unk_422035);
  sub_411406(v1);
  *(_DWORD *)v1 = off_41CEF8;
  *(_DWORD *)(v1 + 0x400008u) = 1;//初始化 m_nCount
  return v1;
}
int __thiscall sub_4143F0(void *this)
{
  int v1; // ST4C_4@1

  v1 = (int)this;
  sub_41159B(&unk_422035);
  sub_4110CD(v1);
  *(_DWORD *)v1 = off_41CF08;
  *(_DWORD *)(v1 + 0x40000Cu) = 2;//初始化 m_nCount
  return v1;
}
int __thiscall sub_414440(void *this)
{
  int v1; // ST4C_4@1

  v1 = (int)this;
  sub_41159B(&unk_422035);
  sub_41138E(v1);
  *(_DWORD *)v1 = off_41CF1C;
  *(_DWORD *)(v1 + 0x400010u) = 3;//初始化 m_nCount
  return v1;
}
//==================================================================================================
//所有保护都关闭 

//带虚函数的类继承 00， 虚表只有一个函数不变
class Test
{
public:
    Test() {}
    ~Test() {
        std::cout << "test" << std::endl;
    }
    virtual void fun(){}
private:
    int m_nCount;
    int m_array[1024*1024];
};


class Test_sub1:public Test
{
public:
    Test_sub1():m_nCount(1) {}
    ~Test_sub1() {
        std::cout << m_nCount << std::endl;
    }
    virtual void fun(){}
private:
    int m_nCount;
};

class Test_sub2:public Test_sub1
{
public:
    Test_sub2():m_nCount(2) {}
    ~Test_sub2() {
        std::cout << m_nCount << std::endl;
    }
    virtual void fun(){}
private:
    int m_nCount;
};

class Test_sub3:public Test_sub2
{
public:
    Test_sub3():m_nCount(3) {}
    ~Test_sub3() {
        std::cout << m_nCount << std::endl;
    }
    void fun(){}
private:
    int m_nCount;
};





void testclass(const char* str)
{
    //std::cout << str << std::endl;
    a_class* a = new a_class(str);
    a->a_v1 = 100;

    Test* t = new Test();
    t->fun();

    Test* t1 = new Test_sub1();
    t1->fun();

    Test* t2 = new Test_sub2();
    t2->fun();

    Test* t3 = new Test_sub3();
    t3->fun();
    

}


int main() /sub_4165A0
{
    const char* str = "12345";
    testclass(str);
    return 0;
}


------------------------------------------------------------------------------------------------
int sub_4165A0()
{
  sub_411587(&unk_423035);
  sub_41123A("12345");
  return 0;
}

--------------------------------
int __cdecl sub_41123A(int a1)
{
  return sub_416260(a1);
}
--------------------------------
int __cdecl sub_416260(int a1)
{
  _DWORD *v2; // [sp+Ch] [bp-6Ch]@2
  void (__thiscall ***v3)(_DWORD); // [sp+Ch] [bp-6Ch]@5
  void (__thiscall ***v4)(_DWORD); // [sp+Ch] [bp-6Ch]@8
  void (__thiscall ***v5)(_DWORD); // [sp+Ch] [bp-6Ch]@11
  int (__thiscall ***v6)(_DWORD); // [sp+Ch] [bp-6Ch]@14
  int v7; // [sp+10h] [bp-68h]@13
  int v8; // [sp+14h] [bp-64h]@10
  int v9; // [sp+18h] [bp-60h]@7
  int v10; // [sp+1Ch] [bp-5Ch]@4

  sub_411587(&unk_423035);
  if ( sub_4111B8(0xCu) )
    v2 = (_DWORD *)sub_4112A8(a1);
  else
    v2 = 0;
  *v2 = 100;
  
  
  v10 = sub_4111B8(0x400008u);
  if ( v10 )
    v3 = (void (__thiscall ***)(_DWORD))sub_4113FC(v10);
  else
    v3 = 0;
  (**v3)(v3);
  
  
  v9 = sub_4111B8(0x40000Cu);
  if ( v9 )
    v4 = (void (__thiscall ***)(_DWORD))sub_4110C8(v9);
  else
    v4 = 0;
  (**v4)(v4);
  
  v8 = sub_4111B8(0x400010u);
  if ( v8 )
    v5 = (void (__thiscall ***)(_DWORD))sub_411384(v8);
  else
    v5 = 0;
  (**v5)(v5);
  
  v7 = sub_4111B8(0x400014u);
  if ( v7 )
    v6 = (int (__thiscall ***)(_DWORD))sub_4114BF(v7);
  else
    v6 = 0;
  return (**v6)(v6);
  
}
--------------------------------
_DWORD *__thiscall sub_4113FC(int this)
{
  return sub_4144D0((_DWORD *)this);
}

int __thiscall sub_4110C8(int this)
{
  return sub_414510(this);
}

int __thiscall sub_411384(int this)
{
  return sub_414560(this);
}

int __thiscall sub_4114BF(int this)
{
  return sub_4145B0(this);
}

--------------------------------
_DWORD *__thiscall sub_4144D0(_DWORD *this)
{
  _DWORD *v1; // ST4C_4@1

  v1 = this;
  sub_411587(&unk_423035);
  *v1 = &off_41DEEC;
  return v1;
}

int __thiscall sub_414510(void *this)
{
  int v1; // ST4C_4@1

  v1 = (int)this;
  sub_411587(&unk_423035);
  sub_4113FC(v1); //调用基类构造
  *(_DWORD *)v1 = &off_41DEF8; //覆盖基类虚表
  *(_DWORD *)(v1 + 0x400008u) = 1;//初始化 m_nCount
  return v1;
}

int __thiscall sub_414560(void *this)
{
  int v1; // ST4C_4@1

  v1 = (int)this;
  sub_411587(&unk_423035);
  sub_4110C8(v1);
  *(_DWORD *)v1 = &off_41DF04;
  *(_DWORD *)(v1 + 0x40000Cu) = 2;//初始化 m_nCount
  return v1;
}

int __thiscall sub_4145B0(void *this)
{
  int v1; // ST4C_4@1

  v1 = (int)this;
  sub_411587(&unk_423035);
  sub_411384(v1);
  *(_DWORD *)v1 = &off_41DF10;
  *(_DWORD *)(v1 + 0x400010) = 3; //初始化 m_nCount
  return v1;
}


--------------------------------


--------------------------------


//==================================================================================================
//所有保护都关闭


class Test
{
public:
    Test() {}
    ~Test() {
        std::cout << "d" << std::endl;
    }
    virtual void fun(){}
private:
    int m_nCount;
    int m_array[1000];
};

class a_class
{
public:
    a_class(const char* str):a_v3(str)
    {
    }
public :
    int a_v1;
private :
    int a_v2;
    const char* a_v3;
};
 

void testclass(const char* str)
{
    a_class* a = new a_class(str);
    a->a_v1 = 100;

    Test* t = new Test();
    t->fun();
}
 


int main() /sub_415F30
{
    const char* str = "12345";
    testclass(str);
    return 0;
}

------------------------------------------------------------------------------------------------

int sub_415F10()
{
  sub_411569(&unk_422035); //unk_422035 获得线程 id
  sub_411230((int)"12345");
  return 0;
}

--------------------------------
int __cdecl sub_411230(int a1)
{
  return sub_415DA0(a1);
}
--------------------------------
 
int __cdecl sub_415DA0(int a1)
{
  _DWORD *v2; // [sp+Ch] [bp-54h]@2  --------------------------> 不带虚函数 类指针
  int (__thiscall ***v3)(_DWORD); // [sp+Ch] [bp-54h]@5 -------> 带虚函数 类指针, 调用的 fun 方法 / t->fun();
  int v4; // [sp+10h] [bp-50h]@4

  sub_411569(&unk_422035); //unk_422035 获得线程 id
  if ( sub_4111B3(0xCu) ) //分配内存
    v2 = (_DWORD *)sub_41129E(a1);//构造方法
  else
    v2 = 0;
  *v2 = 100;
  v4 = sub_4111B3(0x400008u); //分配内存
  if ( v4 )
    v3 = (int (__thiscall ***)(_DWORD))sub_4113E3(v4);//构造方法
  else
    v3 = 0;
  return (**v3)(v3);
}




--------------------------------
int __stdcall sub_41129E(int a1) //不带虚函数
{
  return sub_4144B0(a1);
}

int __thiscall sub_4113E3(int this) //带虚函数
{
  return sub_4142C0(this);
}
--------------------------------
_DWORD *__thiscall sub_4144B0(_DWORD *this, int a2)
{
  _DWORD *v2; // ST4C_4@1

  v2 = this;
  sub_411569(&unk_422035);//unk_422035 获得线程 id
  v2[2] = a2;
  return v2;
} 

 _DWORD *__thiscall sub_4142C0(_DWORD *this)
{
  _DWORD *v1; // ST4C_4@1

  v1 = this;
  sub_411569((int)&unk_422035);
  *v1 = &off_41CEEC;  //Test 类 虚表
  return v1;
}

--------------------------------


--------------------------------


--------------------------------


--------------------------------

--------------------------------

--------------------------------


//==================================================================================================
//未关闭   基本运行时检查
class a_class
{
public:
    a_class(const char* str):a_v3(str)
    {
    }
public :
    int a_v1;
private :
    int a_v2;
    const char* a_v3;
};


void testclass(const char* str) //sub_417940
{
    //std::cout << str << std::endl;
    a_class* a = new a_class(str);
    a->a_v1 = 100;
} 

int main() //sub_417B40
{
    const char* str = "12345";
    testclass(str);
    return 0;
}

--------------------------------
int sub_417B40()
{
  int v0; // edx@1
  int v1; // ST04_4@1
  int v2; // ecx@1
  char v4; // [sp+Ch] [bp-120h]@1
  const char *v5; // [sp+124h] [bp-8h]@1
  int savedregs; // [sp+12Ch] [bp+0h]@1

  memset(&v4, 0xCCu, 0x120u);   //开的栈空间,置成 0xcc ( int 3 断点机器码) , VS 基本运行时检查 添加代码
  sub_41160E(&unk_425035);
  v5 = "12345";
  sub_411267("12345");
  v1 = v0;
  sub_4113DE(&savedregs, dword_417C5C);
  return sub_41147E(v2, v1); //检查栈底是否 0xCCu,  VS 基本运行时检查 添加代码
}

--------------------------------
int __cdecl sub_411267(int a1)
{
  return sub_417940(a1);
} 

--------------------------------
int __cdecl sub_417940(int a1)
{
  int v1; // edx@1
  _DWORD *v2; // ecx@4
  _DWORD *v4; // [sp+Ch] [bp-DCh]@1
  int v5; // [sp+14h] [bp-D4h]@1

  memset(&v4, 0xCCu, 0xDCu);
  sub_41160E(&unk_425035);
  v5 = sub_4111E0(0xCu);
  if ( v5 )
    v4 = (_DWORD *)sub_4112D5(a1);
  else
    v4 = 0;
  v2 = v4;
  *v4 = 100;
  return sub_41147E(v2, v1);
}


//==================================================================================================
class a_class
{
public:
    a_class()
    {
    }
public :
    int a_v1;
private :
    int a_v2;
};


void testclass()
{
    std::cout << "testclass" << std::endl;

    a_class* a = new a_class();
    a->a_v1 = 100;

}

//testclass
int sub_417930()
{
  int v0; // eax@1
  _DWORD *v2; // [sp+Ch] [bp-DCh]@1
  int v3; // [sp+14h] [bp-D4h]@1

  memset(&v2, 0xCCu, 0xDCu);
  sub_411609(&unk_425035);
  v0 = sub_411320(std::cout, "testclass");
  std::basic_ostream<char,std::char_traits<char>>::operator<<(v0, sub_411069);
  sub_411479();
  v3 = sub_4111E0(8u);
  if ( v3 )
    v2 = (_DWORD *)sub_411311(v3);
  else
    v2 = 0;
  *v2 = 100;
  return sub_411479();
}

-------------------------------------------
int sub_411479(void)
{
  return sub_418290();
}

{
	//sub_418290
.text:00418290                         sub_418290      proc near               ; CODE XREF: sub_411479j
.text:00418290 F2 75 02                                repne jnz short loc_418295
.text:00418293 F2 C3                                   repne retn
.text:00418295                         ; ---------------------------------------------------------------------------
.text:00418295
.text:00418295                         loc_418295:                             ; CODE XREF: sub_418290j
.text:00418295 55                                      push    ebp
.text:00418296 8B EC                                   mov     ebp, esp
.text:00418298 83 EC 00                                sub     esp, 0
.text:0041829B 50                                      push    eax
.text:0041829C 0F 1B 04 04                             nop     dword ptr [esp+eax]
.text:004182A0 52                                      push    edx
.text:004182A1 53                                      push    ebx
.text:004182A2 56                                      push    esi
.text:004182A3 57                                      push    edi
.text:004182A4 8B 45 04                                mov     eax, [ebp+4]
.text:004182A7 6A 00                                   push    0
.text:004182A9 50                                      push    eax
.text:004182AA E8 36 8F FF FF                          call    sub_4111E5
.text:004182AF 83 C4 08                                add     esp, 8
.text:004182B2 5F                                      pop     edi
.text:004182B3 5E                                      pop     esi
.text:004182B4 5B                                      pop     ebx
.text:004182B5 5A                                      pop     edx
.text:004182B6 58                                      pop     eax
.text:004182B7 0F 1A 44 04 FC                          nop     dword ptr [esp+eax-4]
.text:004182BC 8B E5                                   mov     esp, ebp
.text:004182BE 5D                                      pop     ebp
.text:004182BF F2 C3                                   repne retn
.text:004182BF                         sub_418290      endp
.text:004182BF
	
}


DWORD __thiscall sub_411609(int this)
{
  return sub_4186A0((void *)this);
}


int __cdecl sub_4111E0(size_t Size)
{
  return sub_418420(Size);
}


-------------------------------------------
DWORD __thiscall sub_4186A0(void *this)
{
  DWORD result; // eax@1

  result = (DWORD)this;
  if ( *(_BYTE *)this )
  {
    if ( dword_42388C )
      result = GetCurrentThreadId();
  }
  return result;
} 

void *__cdecl sub_418420(size_t Size)
{
  void *v2; // [sp+0h] [bp-4h]@1

  while ( 1 )
  {
    v2 = j_malloc_0(Size);
    if ( v2 )
      break;
    if ( !j__callnewh_0(Size) )
    {
      if ( Size == -1 )
        sub_4116F4();
      sub_4111DB();
    }
  }
  return v2;
}

int __cdecl sub_4111E5(int a1, unsigned int a2)
{
  return sub_419610(a1, a2);
}

-------------------------------------------
int __cdecl sub_419610(int a1, unsigned int a2)
{
  int result; // eax@1
  int v3; // ecx@2

  result = a2;
  if ( a2 > 4 )
  {
    result = sub_419810(a1, 1, 5, "Unknown Runtime Check Error\r\n");
  }
  else
  {
    v3 = *(&dword_422014 + a2);
    if ( v3 != -1 )
      result = sub_419810(a1, v3, a2, (&lpMultiByteStr)[4 * a2]);
  }
  return result;
}

//==================================================================================================
