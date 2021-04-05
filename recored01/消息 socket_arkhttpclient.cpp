Address  To       From     Si Comment                Party 
05B8F960 73960BCE 772BD040 30 ws2_32.772BD040        User
05B8F990 7395EF79 73960BCE 24 libuv.73960BCE         User
05B8F9B4 6B24DB0D 7395EF79 34 libuv.7395EF79         User
05B8F9E8 6B24E503 6B24DB0D B8 arkhttpclient.6B24DB0D User
05B8FAA0 6B24EA20 6B24E503 10 arkhttpclient.6B24E503 User
05B8FAB0 73951DF6 6B24EA20 20 arkhttpclient.6B24EA20 User
05B8FAD0 73953173 73951DF6 C  libuv.73951DF6         User
05B8FADC 739539A7 73953173 20 libuv.73953173         User
05B8FAFC 73953A9C 739539A7 24 libuv.739539A7         User
05B8FB20 6B24BEFC 73953A9C 38 libuv.73953A9C         User
05B8FB58 73960E29 6B24BEFC 18 arkhttpclient.6B24BEFC User
05B8FB70 778538DF 73960E29 38 libuv.73960E29         System
05B8FBA8 75BD6359 778538DF 10 ucrtbase.778538DF      System
05B8FBB8 77CB8944 75BD6359 5C kernel32.75BD6359      System
05B8FC14 77CB8914 77CB8944 10 ntdll.77CB8944         System
05B8FC24 00000000 77CB8914    ntdll.77CB8914         User


libuv 
Base=73950000

arkHTTPClient.dll
Base=6B240000
================================================================================================================



//=>uv_buf_init ,uv_write
//@a3 uv_buf_t
//@a4 buf_size
signed int __cdecl sub_6B24DA45(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx@5
  signed int result; // eax@6
  int v8; // edx@7
  int v9; // ST0C_4@7
  _DWORD *v10; // eax@10
  void *v11; // eax@11
  void *v12; // eax@11
  int v13; // [sp+10h] [bp-8h]@7
  int v14; // [sp+14h] [bp-4h]@7

  if ( a1 && a3 && a4 > 0 && a6 )
  {
    a1[82] = a2;
    a1[85] = a6;
    v6 = sub_6B24C2CD();
    if ( v6 )
    {
      v13 = uv_buf_init(a3, a4);
      v14 = v8;
      memset(a1 + 47, 0, 0x64u);
      a1[70] = v13;
      a1[71] = v14;
      v9 = a1[1];
      a1[47] = a1;
      if ( uv_write(a1 + 47, v9, &v13, 1, sub_6B24DBE9) )
      {
        sub_6B24102F(1000, "arkhttp", 61, "http_send: uv_write fail, conn-id=%u", *a1);
        result = 524296;
      }
      else
      {
        if ( a5 > 0 )
        {
          v10 = (_DWORD *)a1[73];
          if ( !v10 )
          {
            v11 = malloc(0x60u);
            v12 = memset(v11, 0, 0x60u);
            a1[73] = v12;
            uv_timer_init(v6, v12);
            v10 = (_DWORD *)a1[73];
          }
          *v10 = a1;
          if ( uv_timer_start(a1[73], sub_6B24DCE6, a5, (unsigned __int64)a5 >> 32, 0, 0) )
            sub_6B24102F(1000, "arkhttp", 75, "http_send: uv_timer_start fail, conn-id=%u", *a1);
        }
        result = 0;
      }
    }
    else
    {
      ((void (__cdecl *)(signed int, const char *, signed int, const char *, char))sub_6B24102F)(
        1000,
        "arkhttp",
        51,
        "assert fail, file=%s, function=%s, line=%d",
        (unsigned int)"d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\netbasehttp.cpp");
      result = 65539;
    }
  }
  else
  {
    sub_6B24102F(
      1000,
      "arkhttp",
      22,
      "assert fail, file=%s, function=%s, line=%d",
      "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\netbasehttp.cpp",
      "http_send",
      22);
    result = 65791;
  }
  return result;
}



signed int __usercall sub_6B24E3BF@<eax>(char a1@<dl>, int a2@<ecx>, int a3)
{
  _DWORD *v3; // edi@1
  char v4; // bl@1
  int v5; // esi@1
  int v6; // eax@3
  int v7; // eax@4
  int v8; // ebx@4
  int v9; // eax@12
  int v10; // ST24_4@13
  signed int result; // eax@13
  int v12; // [sp+Ch] [bp-8Ch]@3
  char v13; // [sp+13h] [bp-85h]@1
  char Dst; // [sp+14h] [bp-84h]@9

  v3 = (_DWORD *)a2;
  v4 = a1;
  v13 = a1;
  v5 = *(_DWORD *)(a2 + 160);
  if ( *(_DWORD *)(v5 + 136) )
    sub_6B24102F(
      1000,
      "arkhttp",
      239,
      "assert fail, file=%s, function=%s, line=%d",
      "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\netbasehttps_openssl.cpp",
      "_handle_pending_io",
      239);
  *(_DWORD *)(v5 + 136) = a3;
  v6 = *(_DWORD *)(v5 + 132);
  v12 = v6;
  if ( v6 > 0 )
  {
LABEL_11:

//https://blog.csdn.net/liao20081228/article/details/77193729
	//long   BIO_ctrl(BIO *bp, int cmd, long larg, void *parg); 
    if ( BIO_ctrl(*(_DWORD *)(v5 + 12), 10, 0, 0) )
    {
		//int BIO_read(BIO *b, void *buf, int len);
      v9 = BIO_read(*(_DWORD *)(v5 + 12), *(_DWORD *)(v5 + 16), *(_DWORD *)(v5 + 24));
      if ( v9 <= 0 )
      {
        sub_6B24102F(2000, "arkhttp", 273, "_handle_pending_io, BIO_read fail, result=%d", v9);
        sub_6B24102F(
          1000,
          "arkhttp",
          274,
          "assert fail, file=%s, function=%s, line=%d",
          "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\netbasehttps_openssl.cpp",
          "_handle_pending_io",
          274);
        return sub_6B24E64D(v3);
      }
      v10 = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(v5 + 20) = v9;
	  
	  //@v10 buf
	  //@v9 buf_size
      result = sub_6B24DA45(v3, 0, v10, v9, 30000, (int)sub_6B24E58A);
    }
    else
    {
      if ( !v4 )
        return sub_6B24E64D(v3);
      result = sub_6B24DDA3(v3, 0, *(_DWORD *)(v5 + 28), *(_DWORD *)(v5 + 36), 30000, sub_6B24E599);
    }
    if ( !result )
      return result;
    return sub_6B24E64D(v3);
  }
  v7 = SSL_get_error(*(_DWORD *)v5, v6);
  v8 = v7;
  if ( !v7 || v7 > 1 && (v7 <= 3 || v7 > 6 && v7 <= 8) )
  {
    v4 = v13;
    goto LABEL_11;
  }
  memset(&Dst, 0, 0x80u);
  ERR_error_string_n(v8, &Dst, 127);
  sub_6B24102F(2000, "arkhttp", 251, "_handle_pending_io, fatal error, result=%d, err=%d, msg=%s", v12, v8, &Dst);
  return sub_6B24E64D(v3);
}


signed int __cdecl sub_6B24E9B3(int *a1, int a2)
{
  int v2; // ecx@4

  if ( a2 < 0 )
  {
    sub_6B24102F(1000, "arkhttp", 524, "_after_work_ssl_connct, uv_queue_work failed.");
    goto LABEL_3;
  }
  v2 = *a1;
  if ( *(_DWORD *)(*(_DWORD *)(*a1 + 160) + 132) > 0 )
  {
    !(unsigned __int8)sub_6B24E7BC(v2);
LABEL_3:
    JUMPOUT(&loc_6B24EA3D);
  }
  return sub_6B24E3BF(1, v2, (int)sub_6B24EA24);
}



//uv_queue_work
int __cdecl sub_6B24E70F(int a1)
{
  int v1; // ecx@1
  _DWORD *v2; // eax@4
  int result; // eax@4

  v1 = sub_6B24C2CD();
  if ( !v1 )
  {
    sub_6B24102F(1000, "arkhttp", 386, "_https_connect, get_uv_loop failed.");
    goto LABEL_3;
  }
  v2 = (_DWORD *)(*(_DWORD *)(a1 + 160) + 40);
  *v2 = a1;
  result = uv_queue_work(v1, v2, sub_6B24E79B, sub_6B24E9B3);
  if ( result )
  {
    sub_6B24102F(1000, "arkhttp", 395, "_https_connect, uv_queue_work failed.");
LABEL_3:
    JUMPOUT(&loc_6B24EA3D);
  }
  return result;
}









//uv_async_init; uv_async_send
char __fastcall sub_6B24C362(int a1, int a2)
{
  int v2; // edi@1
  char result; // al@4
  char v4; // bl@5
  void *v5; // esi@5
  int *v6; // eax@5
  int v7; // eax@5
  int v8; // [sp+4h] [bp-4h]@1

  v2 = a2;
  v8 = a1;
  if ( !(unsigned __int8)sub_6B24C324() )
    sub_6B24102F(
      1000,
      "arkhttp",
      349,
      "assert fail, file=%s, function=%s, line=%d",
      "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\loop.cpp",
      "async_run",
      349);
  if ( dword_6B25F500 )
  {
    v4 = 0;
    v5 = malloc(0x80u);
    memset(v5, 0, 0x80u);
    *((_DWORD *)v5 + 30) = v8;
    v6 = (int *)dword_6B25F500;
    *(_DWORD *)v5 = v2;
    *((_DWORD *)v5 + 1) = v5;
    v7 = *v6;
    if ( !v7 || uv_async_init(v7, (char *)v5 + 4, sub_6B24C419) || uv_async_send((char *)v5 + 4) )
      uv_close((char *)v5 + 4, sub_6B24C43A);
    else
      v4 = 1;
    result = v4;
  }
  else
  {
    result = 0;
  }
  return result;
}


char __fastcall sub_6B2508B8(void *Memory, int a2)
{
  _DWORD *v2; // edi@1
  int v3; // ebx@1
  char result; // al@2
  void *v5; // eax@5
  _DWORD *v6; // esi@5
  DWORD v7; // eax@5

  v2 = Memory;
  v3 = a2;
  if ( Memory )
  {
    if ( !*((_BYTE *)Memory + 69) && *((_BYTE *)Memory + 68) )
    {
      *((_WORD *)Memory + 34) = 256;
      v5 = malloc(0x18u);
      v6 = memset(v5, 0, 0x18u);
      *v6 = v3;
      v6[1] = sub_6B24C16D;
      v7 = GetTickCount();
      v6[3] = 0;
      v6[2] = v7;
      v2[19] = v6;
      if ( !sub_6B24C2CD() )
        sub_6B24102F(
          1000,
          "arkhttp",
          280,
          "assert fail, file=%s, function=%s, line=%d",
          "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\taskmgr.cpp",
          "_start_stop_task_mgr",
          280);
      if ( v2[18] )
      {
        uv_timer_stop(v2[18]);
        uv_close(v2[18], (const char *)free);
        v2[18] = 0;
      }
      sub_6B250835(v2 + 7);
      sub_6B2507EA(v2 + 1, v2 + 7);
      sub_6B2507EA(v2 + 3, v2 + 7);
      sub_6B2507EA(v2 + 5, v2 + 7);
      sub_6B250835(v2 + 15);
      sub_6B2507EA(v2 + 9, v2 + 15);
      sub_6B2507EA(v2 + 11, v2 + 15);
      sub_6B2507EA(v2 + 13, v2 + 15);
      if ( (unsigned __int8)sub_6B25087A(v2) )
      {
        sub_6B24102F(2000, "arkhttp", 301, "_start_stop_task_mgr, idle, notify result.");
        if ( !sub_6B24C362((int)sub_6B250FDB, (int)v2) )
        {
          sub_6B24102F(
            1000,
            "arkhttp",
            304,
            "assert fail, file=%s, function=%s, line=%d",
            "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\taskmgr.cpp",
            "_start_stop_task_mgr",
            304);
          sub_6B250FDB(v2);
        }
      }
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}


_DWORD *__cdecl sub_6B24C094(int a1)
{
  int v1; // edi@1
  int savedregs; // ST24_4@3
  void *v3; // eax@3
  _DWORD *result; // eax@3
  void *v5; // ecx@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = *(_DWORD *)a1;
  if ( a1 != *(_DWORD *)(*(_DWORD *)a1 + 16) )
    sub_6B24102F(
      1000,
      "arkhttp",
      227,
      "assert fail, file=%s, function=%s, line=%d",
      "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\loop.cpp",
      "_on_async_stop_loop",
      227);
  uv_close(a1, (const char *)free);
  *(_DWORD *)(v1 + 16) = 0;
  savedregs = v6;
  sub_6B24102F(2000, "arkhttp", 238, "uninit_flow_start");
  v3 = malloc(8u);
  result = memset(v3, 0, 8u);
  v5 = Memory;
  *result = v1;
  result[1] = sub_6B24C21C;
  if ( v5 )
  {
    Memory = 0;
    result = (_DWORD *)sub_6B2508B8(v5);  //========================>
    if ( !(_BYTE)result )
      result = (_DWORD *)sub_6B24102F(
                           1000,
                           "arkhttp",
                           745,
                           "assert fail, file=%s, function=%s, line=%d",
                           "d:\\devops\\workspace\\p-bf01cee607774b12a3d33a1d6c281470\\hummer\\source\\ark\\arkhttpclient\\taskmgr.cpp",
                           "start_stop_default_task_mgr",
                           745);
  }
  return result;
}


void **__cdecl sub_6B24C4F8(int *a1)
{
  int v1; // esi@1
  int v2; // edi@1
  void **v3; // esi@1
  _DWORD **v4; // edx@3
  _DWORD *v5; // esi@6
  void **result; // eax@6
  void *Memory; // [sp+8h] [bp-8h]@1
  void **v8; // [sp+Ch] [bp-4h]@1

  v1 = *a1;
  Memory = &Memory;
  v8 = &Memory;
  v2 = v1 + 24;
  uv_mutex_lock(v1 + 24);
  v3 = (void **)(v1 + 48);
  while ( 1 )
  {
    v4 = (_DWORD **)*v3;
    if ( v3 == *v3 )
      break;
    *v4[1] = *v4;
    (*v4)[1] = v4[1];
    *v4 = Memory;
    v4[1] = &Memory;
    (*v4)[1] = v4;
    Memory = v4;
  }
  uv_mutex_unlock(v2);
  while ( 1 )
  {
    v5 = Memory;
    result = &Memory;
    if ( &Memory == Memory )
      break;
    **((_DWORD **)Memory + 1) = *(_DWORD *)Memory;
    *(_DWORD *)(*v5 + 4) = v5[1];
    ((void (__cdecl *)(_DWORD))v5[3])(v5[2]);
    free(v5);
  }
  return result;
}


//uv_async_init, uv_run
int __cdecl sub_6B24BE5D(int a1)
{
  _DWORD *v1; // eax@1
  void *v2; // eax@1
  void *v3; // eax@1
  int v4; // ST24_4@1
  void *v5; // eax@1
  void *v6; // eax@1
  int v7; // ebx@1
  int v8; // ST24_4@1
  int v9; // esi@1

  *(_DWORD *)(a1 + 8) = uv_thread_self();
  v1 = (_DWORD *)uv_loop_new();
  *(_DWORD *)a1 = v1;
  *v1 = 0;
  v2 = malloc(0x74u);
  v3 = memset(v2, 0, 0x74u);
  v4 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = v3;
  uv_async_init(v4, v3, sub_6B24C094);
  **(_DWORD **)(a1 + 16) = a1;
  v5 = malloc(0x74u);
  v6 = memset(v5, 0, 0x74u);
  v7 = a1;
  v8 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 20) = v6;
  uv_async_init(v8, v6, sub_6B24C4F8);
  **(_DWORD **)(v7 + 20) = v7;
  uv_mutex_init(a1 + 24);
  *(_DWORD *)(v7 + 48) = v7 + 48;
  *(_DWORD *)(v7 + 52) = v7 + 48;
  sub_6B24BF24();
  uv_sem_post(*(_DWORD *)(a1 + 12));
  v9 = uv_run(*(_DWORD *)a1, 0);
  sub_6B24C248();
  return sub_6B24102F(2000, "arkhttp", 146, "loop_thread, thread exits, ret=%d.", v9);
}



char __thiscall sub_6B24BDFC(void *this)
{
  void *v1; // esi@1
  char result; // al@2
  void *v3; // eax@3
  void *v4; // eax@3

  v1 = this;
  if ( this )
  {
    v3 = malloc(4u);
    v4 = memset(v3, 0, 4u);
    *((_DWORD *)v1 + 3) = v4;
    uv_sem_init(v4, 0);
    uv_thread_create((char *)v1 + 4, sub_6B24BE5D, v1);
    uv_sem_wait(*((_DWORD *)v1 + 3));
    uv_sem_destroy(*((_DWORD *)v1 + 3));
    free(*((void **)v1 + 3));
    *((_DWORD *)v1 + 3) = 0;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}



char sub_6B24BD77()
{
  void *v0; // eax@2
  void *v1; // esi@4
  char result; // al@5

  if ( !dword_6B25F4FC )
  {
    v0 = malloc(0x34u);
    dword_6B25F4FC = memset(v0, 0, 0x34u);
    uv_rwlock_init(dword_6B25F4FC);
  }
  if ( dword_6B25F500 || (v1 = malloc(0x3Cu), memset(v1, 0, 0x3Cu), dword_6B25F500 = v1, sub_6B24BDFC(v1)) )
  {
    result = 1;
  }
  else
  {
    sub_6B24102F(2000, "arkhttp", 80, "run_event_loop, _run_loop failed.");
    free(v1);
    result = 0;
  }
  return result;
}


signed int arkHTTPStartup()
{
  signed int result; // eax@3

  if ( ++dword_6B25F4F0 != 1 || sub_6B24BD77() )
    result = 0;
  else
    result = 65537;
  return result;
}



