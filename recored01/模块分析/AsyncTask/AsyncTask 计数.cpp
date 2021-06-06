/*
Name                                                                            Address  Ordinal
----                                                                            -------  -------
AsyncTask::MessageLoop::PostTask(AsyncTask::Task *)                             51B22154 187    
AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::Task *,__int64,bool,bool)    51B22204 190    
AsyncTask::MessageLoopProxyImpl::PostTask(AsyncTask::Task *)                    51B23AFE 188    
AsyncTask::MessageLoopProxyImpl::PostTaskHelper(AsyncTask::Task *,__int64,bool) 51B23B98 189    

*/




//================================================================================================================

//把 AddToDelayedWorkQueue, ret 4  触发 DeferOrRunPendingTask
//51B22597   ret 4

Address  To       From     Siz Comment               Party 
04BBFDB8 51B227CF 51B22566 38  asynctask.51B22566    User //char __thiscall AsyncTask::MessageLoop::DeferOrRunPendingTask(AsyncTask::MessageLoop *this, const struct AsyncTask::MessageLoop::PendingTask *a2)
04BBFDF0 51B24321 51B227CF 2C  asynctask.51B227CF    User
04BBFE1C 51B2207A 51B24321 24  asynctask.51B24321    User
04BBFE40 51B25FE7 51B2207A 8   asynctask.51B2207A    User
04BBFE48 5391EF8E 51B25FE7 10  asynctask.51B25FE7    User
04BBFE58 51B26082 5391EF8E 114 hummerengine.5391EF8E User
04BBFF6C 51B25E47 51B26082 8   asynctask.51B26082    User
04BBFF74 75DD6359 51B25E47 10  asynctask.51B25E47    System
04BBFF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
04BBFFE0 77E78914 77E78944 10  ntdll.77E78944        System
04BBFFF0 00000000 77E78914     ntdll.77E78914        User


//================================================================================================================
//每个线程地址会不一样，当前跟踪的是main
//修改计数,增加
Address  To       From     Siz Comment               Party 
0019F2D4 51B22651 51B218C0 40  asynctask.51B218C0    User
0019F314 51B24321 51B22651 2C  asynctask.51B22651    User //AsyncTask::MessageLoop::ReloadWorkQueue(AsyncTask::MessageLoop *this)
0019F340 51B2207A 51B24321 24  asynctask.51B24321    User //AsyncTask::MessagePumpForUI::DoRunLoop(AsyncTask::MessagePumpForUI *this)
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User //AsyncTask::MessageLoop::RunHandler(AsyncTask::MessageLoop *this)
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 75DD6359 00403365 10  qq.00403365           System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0019FFF0 00000000 77E78914     ntdll.77E78914        User

//修改计数,减少
Address  To       From     Siz Comment               Party 
0019F314 51B24321 51B22770 2C  asynctask.51B22770    User
0019F340 51B2207A 51B24321 24  asynctask.51B24321    User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 75DD6359 00403365 10  qq.00403365           System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0019FFF0 00000000 77E78914     ntdll.77E78914        User


//重点?
//计数增加
Address  To       From     Siz Comment               Party 
0019F1C0 51B2236B 51B231F0 58  asynctask.51B231F0    User
0019F218 51B22187 51B2236B 1C  asynctask.51B2236B    User //AsyncTask::MessageLoop::PostTask_Helper
0019F234 50B1465F 51B22187 18  asynctask.51B22187    User
0019F24C 50C58A9A 50B1465F 50  appmisc.50B1465F      User
0019F29C 51B224EE 50C58A9A 28  appmisc.50C58A9A      User
0019F2C4 51B22591 51B224EE C   asynctask.51B224EE    User
0019F2D0 51B2287F 51B22591 40  asynctask.51B22591    User
0019F310 51B24339 51B2287F 30  asynctask.51B2287F    User
0019F340 51B2207A 51B24339 24  asynctask.51B24339    User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 75DD6359 00403365 10  qq.00403365           System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0019FFF0 00000000 77E78914     ntdll.77E78914        User 

{
//================================================================================================================
0019F1C0 51B2236B 51B231F0 58  asynctask.51B231F0    User
//计数增加
int __thiscall sub_51B23198(int this, const void *a2)
{
  int v2; // ebx@1
  int v3; // eax@1
  unsigned int v4; // ecx@1
  int v5; // edi@3
  int result; // eax@3

  v2 = this;
  v3 = *(_DWORD *)(this + 16);
  v4 = *(_DWORD *)(this + 8);
  if ( v4 <= v3 + 1 )
  {
    sub_51B233BE(v4);
    v4 = *(_DWORD *)(v2 + 8);
  }
  *(_DWORD *)(v2 + 12) &= v4 - 1;
  v5 = (*(_DWORD *)(v2 + 8) - 1) & (*(_DWORD *)(v2 + 12) + *(_DWORD *)(v2 + 16));
  result = *(_DWORD *)(v2 + 4);
  if ( !*(_DWORD *)(result + 4 * v5) )
  {
    *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v5) = sub_51B2147F(0x18u);
    result = *(_DWORD *)(v2 + 4);
  }
  qmemcpy(*(void **)(result + 4 * v5), a2, 0x18u);
  ++*(_DWORD *)(v2 + 16); //计数增加
  return result;
}


//================================================================================================================
0019F218 51B22187 51B2236B 1C  asynctask.51B2236B    User
void __thiscall AsyncTask::MessageLoop::PostTask_Helper(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3, bool a4, bool a5)
{
  int v5; // ebp@0
  bool v6; // si@1
  AsyncTask::MessageLoop *v7; // edi@1
  _QWORD *v8; // esi@2
  unsigned int v9; // kr00_4@2
  unsigned int v10; // edx@2
  int v11; // eax@4
  int v12; // ecx@4
  int v13; // eax@4
  int v14; // eax@10
  int v15; // edx@10
  int v16; // edx@10
  int v17; // edx@10
  int v18; // ecx@10
  int v19; // [sp-1Ch] [bp-5Ch]@0
  int v20; // [sp-18h] [bp-58h]@0
  int v21; // [sp-14h] [bp-54h]@0
  int v22; // [sp-10h] [bp-50h]@0
  LONG Target; // [sp+4h] [bp-3Ch]@9
  int v24; // [sp+8h] [bp-38h]@2
  int v25; // [sp+Ch] [bp-34h]@10
  int v26; // [sp+10h] [bp-30h]@10
  char v27; // [sp+18h] [bp-28h]@10
  int v28; // [sp+20h] [bp-20h]@10
  struct AsyncTask::Task *v29; // [sp+28h] [bp-18h]@1
  unsigned __int64 v30; // [sp+30h] [bp-10h]@1
  int v31; // [sp+38h] [bp-8h]@1
  bool v32; // [sp+3Ch] [bp-4h]@1

  v6 = 0;
  v29 = a2;
  v7 = this;
  _mm_storel_pd((double *)&v30, 0i64);
  v31 = 0;
  v32 = a4;
  if ( a3 > 0 )
  {
    v8 = (_QWORD *)AsyncTask::Time::Now(&v24);
    v9 = sub_51B27A00(a3, HIDWORD(a3), 1000, 0);
    v30 = __PAIR__(v10, v9) + *v8;
    if ( *((_QWORD *)v7 + 21) )
    {
      v6 = 0;
    }
    else
    {
      v6 = 0;
      if ( a3 < 32 )
      {
        AsyncTask::Time::ActivateHighResolutionTimer(1);
        v11 = AsyncTask::TimeTicks::Now((int)&v24);
        v12 = *(_DWORD *)v11;
        v13 = *(_DWORD *)(v11 + 4);
        *((_DWORD *)v7 + 42) = v12 + 1000000;
        *((_DWORD *)v7 + 43) = __CFADD__(v12, 1000000) + v13;
      }
    }
  }
  if ( *((_QWORD *)v7 + 21) )
  {
    AsyncTask::TimeTicks::Now((int)&v24);
    if ( (unsigned __int8)AsyncTask::TimeTicks::operator>(*((_DWORD *)v7 + 42), *((_DWORD *)v7 + 43)) )
    {
      AsyncTask::Time::ActivateHighResolutionTimer(v6);
      *((_DWORD *)v7 + 42) = 0;
      *((_DWORD *)v7 + 43) = 0;
    }
  }
  Target = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 136));
  if ( a5 )
  {
    v14 = *((_DWORD *)v7 + 29);
    v15 = *((_DWORD *)v7 + 32);
    v25 = 0;
    v24 = v14;
    v26 = v15;
    sub_51B210A0(&v24);
    v28 = v16;
    sub_51B210A0(&v27);
    *(_DWORD *)(v18 + 8) = v17;
    sub_51B22D04(v5, v19, v20, v21, v22, (int)&v29);
  }
  else
  {
    sub_51B23198((int)v7 + 116, &v29);  //==========>51B231F0
  }
  sub_51B22A8B(&Target, *((_DWORD *)v7 + 16));
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 136));
  (*(void (**)(void))(*(_DWORD *)Target + 12))();
  sub_51B22AC2(&Target);
}


//================================================================================================================
0019F234 50B1465F 51B22187 18  asynctask.51B22187    User
void __thiscall AsyncTask::MessageLoop::PostDelayedTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2, __int64 a3)
{
  AsyncTask::MessageLoop::PostTask_Helper(this, a2, a3, 1, 0);
}


//================================================================================================================
0019F24C 50C58A9A 50B1465F 50  appmisc.50B1465F      User



//================================================================================================================
0019F29C 51B224EE 50C58A9A 28  appmisc.50C58A9A      User



//================================================================================================================
0019F2C4 51B22591 51B224EE C   asynctask.51B224EE    User



//================================================================================================================
0019F2D0 51B2287F 51B22591 40  asynctask.51B22591    User



//================================================================================================================
0019F310 51B24339 51B2287F 30  asynctask.51B2287F    User



//================================================================================================================
0019F340 51B2207A 51B24339 24  asynctask.51B24339    User



//================================================================================================================
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User



//================================================================================================================
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 75DD6359 00403365 10  qq.00403365           System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0019FFF0 00000000 77E78914     ntdll.77E78914        User 

 

}
//================================================================================================================

//计数增加
{
Address  To       From     Siz Comment               Party 
0019DCC8 51B2236B 51B231F0 58  asynctask.51B231F0    User
0019DD20 51B22187 51B2236B 20  asynctask.51B2236B    User
0019DD40 50B0F618 51B22187 18  asynctask.51B22187    User
0019DD58 50B0F16C 50B0F618 440 appmisc.50B0F618      User
0019E198 09A68A96 50B0F16C 498 appmisc.50B0F16C      User
0019E630 09A65B02 09A68A96 20  mainframe.09A68A96    User
0019E650 09A6E845 09A65B02 38  mainframe.09A65B02    User
0019E688 0990D8C6 09A6E845 20  mainframe.09A6E845    User
0019E6A8 09A24822 0990D8C6 4C  mainframe.0990D8C6    User
0019E6F4 09A24690 09A24822 38  mainframe.09A24822    User
0019E72C 09A2889B 09A24690 1C  mainframe.09A24690    User
0019E748 09A27ED4 09A2889B 14  mainframe.09A2889B    User
0019E75C 09904042 09A27ED4 18  mainframe.09A27ED4    User
0019E774 532A9720 09904042 80  mainframe.09904042    User
0019E7F4 5319C864 532A9720 10  gf.532A9720           User
0019E804 502054FA 5319C864 18  gf.5319C864           User
0019E81C 50484CF2 502054FA 48  afctrl.502054FA       User
0019E864 5020FFF9 50484CF2 20  afctrl.50484CF2       User
0019E884 5020D839 5020FFF9 18  afctrl.5020FFF9       User
0019E89C 532A9720 5020D839 84  afctrl.5020D839       User
0019E920 5319C864 532A9720 10  gf.532A9720           User
0019E930 502054FA 5319C864 18  gf.5319C864           User
0019E948 5038366B 502054FA 44  afctrl.502054FA       User
0019E98C 503822EE 5038366B 28  afctrl.5038366B       User
0019E9B4 53190D2C 503822EE 50  afctrl.503822EE       User
0019EA04 5318A5F3 53190D2C 6C  gf.53190D2C           User
0019EA70 532B45CA 5318A5F3 68  gf.5318A5F3           User
0019EAD8 532B11CC 532B45CA 140 gf.532B45CA           User
0019EC18 532BB8E8 532B11CC 30  gf.532B11CC           User
0019EC48 532BA612 532BB8E8 20  gf.532BB8E8           User
0019EC68 532B9D5C 532BA612 1C  gf.532BA612           User
0019EC84 5328110C 532B9D5C 50  gf.532B9D5C           User
0019ECD4 6C0F1B0F 5328110C 20  gf.5328110C           System
0019ECF4 764E47AB 6C0F1B0F 2C  atlthunk.6C0F1B0F     System
0019ED20 764C52AC 764E47AB E4  user32.764E47AB       System
0019EE04 764C47FF 764C52AC 38  user32.764C52AC       System
0019EE3C 0DC0D4E2 764C47FF 4C  user32.764C47FF       User
0019EE88 6C0F1E7F 0DC0D4E2 20  appframework.0DC0D4E2 System
0019EEA8 764E47AB 6C0F1E7F 2C  atlthunk.6C0F1E7F     System
0019EED4 764C52AC 764E47AB E4  user32.764E47AB       System
0019EFB8 764C47FF 764C52AC 38  user32.764C52AC       System
0019EFF0 70DA741D 764C47FF 7C  user32.764C47FF       System
0019F06C 70DA74BB 70DA741D 74  comctl32.70DA741D     System
0019F0E0 70DA71D1 70DA74BB 5C  comctl32.70DA74BB     System
0019F13C 764E47AB 70DA71D1 2C  comctl32.70DA71D1     System
0019F168 764C52AC 764E47AB E4  user32.764E47AB       System
0019F24C 764C43FE 764C52AC 74  user32.764C52AC       System
0019F2C0 764C41E0 764C43FE C   user32.764C43FE       System
0019F2CC 51B24578 764C41E0 18  user32.764C41E0       User
0019F2E4 51B244FB 51B24578     asynctask.51B24578    User

	
	
}
 

//================================================================================================================
//计数增加
{
Address  To       From     Siz Comment                Party 
07CDF808 51B2236B 51B231F0 58  asynctask.51B231F0     User
07CDF860 51B22169 51B2236B 1C  asynctask.51B2236B     User
07CDF87C 557DC928 51B22169 10  asynctask.51B22169     User
07CDF88C 557DC2E3 557DC928 2C  kernelutil.557DC928    User
07CDF8B8 56DF5EF8 557DC2E3 44  kernelutil.557DC2E3    User
07CDF8FC 56DF5D47 56DF5EF8 10  preloginlogic.56DF5EF8 User
07CDF90C 56DFA7BB 56DF5D47 42C preloginlogic.56DF5D47 User
07CDFD38 56DFA117 56DFA7BB 20  preloginlogic.56DFA7BB User
07CDFD58 56DFCC5E 56DFA117 74  preloginlogic.56DFA117 User
07CDFDCC 56DF79DF 56DFCC5E 24  preloginlogic.56DFCC5E User
07CDFDF0 56DF7DFF 56DF79DF 24  preloginlogic.56DF79DF User
07CDFE14 56DF7A27 56DF7DFF 20  preloginlogic.56DF7DFF User
07CDFE34 56DF75F0 56DF7A27 24  preloginlogic.56DF7A27 User
07CDFE58 52AF159A 56DF75F0 C   preloginlogic.56DF75F0 User
07CDFE64 52AF5297 52AF159A 2C  arksocket.52AF159A     User
07CDFE90 55EDBD3B 52AF5297 3C  arksocket.52AF5297     User
07CDFECC 55EDAE74 55EDBD3B 18  libuv.55EDBD3B         User
07CDFEE4 52AF5696 55EDAE74 20  libuv.55EDAE74         User
07CDFF04 55EF3370 52AF5696 28  arksocket.52AF5696     User
07CDFF2C 69406CF2 55EF3370 48  libuv.55EF3370         System
07CDFF74 75DD6359 69406CF2 10  ucrtbased.69406CF2     System
07CDFF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
07CDFFE0 77E78914 77E78944 10  ntdll.77E78944         System
07CDFFF0 00000000 77E78914     ntdll.77E78914         User

	
}

Address  To       From     Siz Comment               Party 
0F83FC60 51B2236B 51B231F0 58  asynctask.51B231F0    User
0F83FCB8 51B22169 51B2236B 1C  asynctask.51B2236B    User
0F83FCD4 5576ECE5 51B22169 C   asynctask.51B22169    User
0F83FCE0 55782103 5576ECE5 38  kernelutil.5576ECE5   User
0F83FD18 54C6F1A4 55782103 38  kernelutil.55782103   User
0F83FD50 54A394D0 54C6F1A4 34  im.54C6F1A4           User
0F83FD84 51B224EE 54A394D0 28  im.54A394D0           User
0F83FDAC 51B22591 51B224EE C   asynctask.51B224EE    User
0F83FDB8 51B227CF 51B22591 38  asynctask.51B22591    User
0F83FDF0 51B24321 51B227CF 2C  asynctask.51B227CF    User
0F83FE1C 51B2207A 51B24321 24  asynctask.51B24321    User
0F83FE40 51B25FE7 51B2207A 8   asynctask.51B2207A    User
0F83FE48 5391EF8E 51B25FE7 10  asynctask.51B25FE7    User
0F83FE58 51B26082 5391EF8E 114 hummerengine.5391EF8E User
0F83FF6C 51B25E47 51B26082 8   asynctask.51B26082    User
0F83FF74 75DD6359 51B25E47 10  asynctask.51B25E47    System
0F83FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0F83FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0F83FFF0 00000000 77E78914     ntdll.77E78914        User



Address  To       From     Siz Comment               Party 
0E44FA98 51B2236B 51B231F0 58  asynctask.51B231F0    User
0E44FAF0 51B22169 51B2236B 20  asynctask.51B2236B    User
0E44FB10 557DC928 51B22169 10  asynctask.51B22169    User
0E44FB20 557DC2E3 557DC928 2C  kernelutil.557DC928   User
0E44FB4C 54D8AC15 557DC2E3 70  kernelutil.557DC2E3   User
0E44FBBC 54D896B7 54D8AC15 28  im.54D8AC15           User
0E44FBE4 54B30D0E 54D896B7 3C  im.54D896B7           User
0E44FC20 54B2BF44 54B30D0E 130 im.54B30D0E           User
0E44FD50 5A6C81E0 54B2BF44 54  im.54B2BF44           User
0E44FDA4 5A6C6971 5A6C81E0 3C  vasscupdate.5A6C81E0  User
0E44FDE0 5A6CB7B2 5A6C6971 2C  vasscupdate.5A6C6971  User
0E44FE0C 5A6CD6B5 5A6CB7B2 34  vasscupdate.5A6CB7B2  User
0E44FE40 5AB49D73 5A6CD6B5 20  vasscupdate.5A6CD6B5  User
0E44FE60 5AB47556 5AB49D73 84  xplatform_dl.5AB49D73 User
0E44FEE4 5AB47056 5AB47556 24  xplatform_dl.5AB47556 User
0E44FF08 5AB46E48 5AB47056 18  xplatform_dl.5AB47056 User
0E44FF20 5AB3B47E 5AB46E48 1C  xplatform_dl.5AB46E48 User
0E44FF3C 76A738DF 5AB3B47E 38  xplatform_dl.5AB3B47E System
0E44FF74 75DD6359 76A738DF 10  ucrtbase.76A738DF     System
0E44FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0E44FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0E44FFF0 00000000 77E78914     ntdll.77E78914        User




//================================================================================================================
{
Address  To       From     Siz Comment               Party 
0F83FCA8 51B2236B 51B231F0 58  asynctask.51B231F0    User
0F83FD00 51B22169 51B2236B 1C  asynctask.51B2236B    User
0F83FD1C 54A37939 51B22169 10  asynctask.51B22169    User
0F83FD2C 54A38325 54A37939 20  im.54A37939           User
0F83FD4C 54A39443 54A38325 38  im.54A38325           User
0F83FD84 51B224EE 54A39443 28  im.54A39443           User
0F83FDAC 51B22591 51B224EE C   asynctask.51B224EE    User
0F83FDB8 51B227CF 51B22591 38  asynctask.51B22591    User
0F83FDF0 51B24321 51B227CF 2C  asynctask.51B227CF    User
0F83FE1C 51B2207A 51B24321 24  asynctask.51B24321    User
0F83FE40 51B25FE7 51B2207A 8   asynctask.51B2207A    User
0F83FE48 5391EF8E 51B25FE7 10  asynctask.51B25FE7    User
0F83FE58 51B26082 5391EF8E 114 hummerengine.5391EF8E User
0F83FF6C 51B25E47 51B26082 8   asynctask.51B26082    User
0F83FF74 75DD6359 51B25E47 10  asynctask.51B25E47    System
0F83FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0F83FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0F83FFF0 00000000 77E78914     ntdll.77E78914        User
	
	
}

//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E528 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E580 51B22169 51B2236B 1C  asynctask.51B2236B     User
0019E59C 50AF10E6 51B22169 10  asynctask.51B22169     User
0019E5AC 50D889E9 50AF10E6 2C  appmisc.50AF10E6       User
0019E5D8 50A8FDED 50D889E9 18  appmisc.50D889E9       User
0019E5F0 54C705DF 50A8FDED 458 appmisc.50A8FDED       User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E530 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E588 51B22169 51B2236B 20  asynctask.51B2236B     User
0019E5A8 0E667A2D 51B22169 10  asynctask.51B22169     User
0019E5B8 0E66D976 0E667A2D 20  chatframeapp.0E667A2D  User
0019E5D8 0E60E189 0E66D976 18  chatframeapp.0E66D976  User
0019E5F0 54C705DF 0E60E189 458 chatframeapp.0E60E189  User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E520 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E578 51B22169 51B2236B 1C  asynctask.51B2236B     User
0019E594 099336E8 51B22169 10  asynctask.51B22169     User //AsyncTask::MessageLoop::PostTask(AsyncTask::MessageLoop *this, struct AsyncTask::Task *a2)
0019E5A4 09A6C1CF 099336E8 34  mainframe.099336E8     User
0019E5D8 09904042 09A6C1CF 18  mainframe.09A6C1CF     User
0019E5F0 54C705DF 09904042 458 mainframe.09904042     User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E518 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E570 51B22169 51B2236B 20  asynctask.51B2236B     User
0019E590 5A059454 51B22169 10  asynctask.51B22169     User
0019E5A0 5A05FCDF 5A059454 38  tasktray.5A059454      User
0019E5D8 5A05FBEC 5A05FCDF 18  tasktray.5A05FCDF      User
0019E5F0 54C705DF 5A05FBEC 458 tasktray.5A05FBEC      User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E530 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E588 51B22169 51B2236B 1C  asynctask.51B2236B     User
0019E5A4 557478F4 51B22169 10  asynctask.51B22169     User
0019E5B4 557C4F13 557478F4 24  kernelutil.557478F4    User
0019E5D8 556BDBD1 557C4F13 18  kernelutil.557C4F13    User
0019E5F0 54C705DF 556BDBD1 458 kernelutil.556BDBD1    User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E520 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E578 51B22169 51B2236B 20  asynctask.51B2236B     User
0019E598 54B7DDFC 51B22169 10  asynctask.51B22169     User
0019E5A8 54B82A25 54B7DDFC 30  im.54B7DDFC            User
0019E5D8 54A15B6B 54B82A25 18  im.54B82A25            User
0019E5F0 54C705DF 54A15B6B 458 im.54A15B6B            User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User



//================================================================================================================

Address  To       From     Siz Comment                Party 
0019E528 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E580 51B22169 51B2236B 1C  asynctask.51B2236B     User
0019E59C 5037E11E 51B22169 10  asynctask.51B22169     User
0019E5AC 5037E8BD 5037E11E 2C  afctrl.5037E11E        User
0019E5D8 5020D839 5037E8BD 18  afctrl.5037E8BD        User
0019E5F0 54C705DF 5020D839 458 afctrl.5020D839        User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment                Party 
0019E508 51B2236B 51B231F0 58  asynctask.51B231F0     User
0019E560 51B22169 51B2236B 20  asynctask.51B2236B     User
0019E580 568EDAE4 51B22169 10  asynctask.51B22169     User
0019E590 568EE92E 568EDAE4 48  msgmgr.568EDAE4        User
0019E5D8 5684AE97 568EE92E 18  msgmgr.568EE92E        User
0019E5F0 54C705DF 5684AE97 458 msgmgr.5684AE97        User
0019EA48 54C7175A 54C705DF 28  im.54C705DF            User
0019EA70 54C7155F 54C7175A 38  im.54C7175A            User
0019EAA8 54C683E5 54C7155F 18  im.54C7155F            User
0019EAC0 54C5CCFB 54C683E5 1C  im.54C683E5            User
0019EADC 56E581FA 54C5CCFB 30  im.54C5CCFB            User
0019EB0C 56E58DD2 56E581FA 3C  preloginlogic.56E581FA User
0019EB48 56E2EB59 56E58DD2 450 preloginlogic.56E58DD2 User
0019EF98 56E515C1 56E2EB59 84  preloginlogic.56E2EB59 User
0019F01C 56E51978 56E515C1 38  preloginlogic.56E515C1 User
0019F054 56DF5D47 56E51978 10  preloginlogic.56E51978 User
0019F064 56DFAA74 56DF5D47 24  preloginlogic.56DF5D47 User
0019F088 56DFD45F 56DFAA74 20  preloginlogic.56DFAA74 User
0019F0A8 56DE26C6 56DFD45F 10  preloginlogic.56DFD45F User
0019F0B8 523DF356 56DE26C6 14  preloginlogic.56DE26C6 User
0019F0CC 523DEE96 523DF356 28  common.523DF356        User
0019F0F4 764E47AB 523DEE96 2C  common.523DEE96        System
0019F120 764C52AC 764E47AB E4  user32.764E47AB        System
0019F204 764C43FE 764C52AC 74  user32.764C52AC        System
0019F278 764C41E0 764C43FE C   user32.764C43FE        System
0019F284 51B24578 764C41E0 18  user32.764C41E0        User
0019F29C 51B2460F 51B24578 34  asynctask.51B24578     User
0019F2D0 51B2456F 51B2460F 14  asynctask.51B2460F     User
0019F2E4 51B244FB 51B2456F 30  asynctask.51B2456F     User
0019F314 51B2437C 51B244FB 2C  asynctask.51B244FB     User
0019F340 51B2207A 51B2437C 24  asynctask.51B2437C     User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A     User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86  User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B  User
0019FF1C 004012C6 0040289B C   qq.0040289B            User
0019FF28 00403365 004012C6 4C  qq.004012C6            User
0019FF74 75DD6359 00403365 10  qq.00403365            System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359      System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944         System
0019FFF0 00000000 77E78914     ntdll.77E78914         User


//================================================================================================================
Address  To       From     Siz Comment               Party 
0019F1A0 51B2236B 51B231F0 58  asynctask.51B231F0    User
0019F1F8 51B22187 51B2236B 1C  asynctask.51B2236B    User
0019F214 09A6A9C6 51B22187 18  asynctask.51B22187    User
0019F22C 09A6F3A9 09A6A9C6 50  mainframe.09A6A9C6    User
0019F27C 0993477D 09A6F3A9 30  mainframe.09A6F3A9    User
0019F2AC 51B224EE 0993477D 28  mainframe.0993477D    User
0019F2D4 51B22591 51B224EE C   asynctask.51B224EE    User
0019F2E0 51B227CF 51B22591 34  asynctask.51B22591    User
0019F314 51B24321 51B227CF 2C  asynctask.51B227CF    User
0019F340 51B2207A 51B24321 24  asynctask.51B24321    User
0019F364 53920B86 51B2207A 69C asynctask.51B2207A    User
0019FA00 53927E8B 53920B86 80  hummerengine.53920B86 User
0019FA80 0040289B 53927E8B 49C hummerengine.53927E8B User
0019FF1C 004012C6 0040289B C   qq.0040289B           User
0019FF28 00403365 004012C6 4C  qq.004012C6           User
0019FF74 75DD6359 00403365 10  qq.00403365           System
0019FF84 77E78944 75DD6359 5C  kernel32.75DD6359     System
0019FFE0 77E78914 77E78944 10  ntdll.77E78944        System
0019FFF0 00000000 77E78914     ntdll.77E78914        User


//================================================================================================================
 

//================================================================================================================


//================================================================================================================


//================================================================================================================

