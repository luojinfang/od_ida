Address  To       From     Siz Comment            Party 
0866F390 7395382A 7396185C 824 libuv.7396185C     User  => 修改 uv_loop_t a1,   result = *(_DWORD *)(a1 + 40); libuv::sub_73953840 使用
0866FBB4 73953AF3 7395382A 20  libuv.7395382A     User
0866FBD4 6BA55696 73953AF3 20  libuv.73953AF3     User			//uv_run  循环
0866FBF4 73960E29 6BA55696 18  arksocket.6BA55696 User			//sub_6BA5563A
0866FC0C 778538DF 73960E29 38  libuv.73960E29     System
0866FC44 75BD6359 778538DF 10  ucrtbase.778538DF  System
0866FC54 77CB8944 75BD6359 5C  kernel32.75BD6359  System
0866FCB0 77CB8914 77CB8944 10  ntdll.77CB8944     System
0866FCC0 00000000 77CB8914     ntdll.77CB8914     User


 


/*
 https://blog.csdn.net/paohui0134/article/details/51810989

//信号量相关API
//初始化
int uv_sem_init(uv_sem_t* sem, unsigned int value) {
  *sem = CreateSemaphore(NULL, value, INT_MAX, NULL);//创建信号量
  if (*sem == NULL)
    return uv_translate_sys_error(GetLastError());
  else
    return 0;
}
 
//释放信号量
void uv_sem_destroy(uv_sem_t* sem) {
  if (!CloseHandle(*sem))//关闭句柄
    abort();
}
 
//发送
void uv_sem_post(uv_sem_t* sem) {
  if (!ReleaseSemaphore(*sem, 1, NULL))//释放一个资源
    abort();
}
 
//等待
void uv_sem_wait(uv_sem_t* sem) {
  if (WaitForSingleObject(*sem, INFINITE) != WAIT_OBJECT_0)
    abort();
}
 
//尝试等待
int uv_sem_trywait(uv_sem_t* sem) {
  DWORD r = WaitForSingleObject(*sem, 0);

  if (r == WAIT_OBJECT_0)
    return 0;

  if (r == WAIT_TIMEOUT)
    return UV_EAGAIN;

  abort();
  return -1; // Satisfy the compiler.  
}
 */


//uv_sem_post
int __cdecl sub_6BA5563A(LPVOID lpTlsValue)
{
  _DWORD *v1; // esi@1
  int v2; // edi@1
  DWORD v3; // ebx@1
  void *lpTlsValuea; // [sp+14h] [bp+8h]@1

  v1 = lpTlsValue;
  sub_6BA555A1((int)lpTlsValue);
  lpTlsValuea = *(void **)lpTlsValue;
  v2 = sub_6BA577F3();
  v3 = 0;
  uv_rwlock_wrlock(v2);
  if ( !*(_DWORD *)(v2 + 56) )
  {
    v3 = TlsAlloc();
    *(_DWORD *)(v2 + 56) = v3;
  }
  uv_rwlock_wrunlock(v2);
  TlsSetValue(v3, lpTlsValuea);
  uv_sem_post(v1[6]);
  return uv_run(v1[1], 0);
}






