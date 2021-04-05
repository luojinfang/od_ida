
/*
底层sokcet方法
read/write
<ws2_32.dll.recv>
<ws2_32.dll.WSASend>
<ws2_32.dll.WSASendMsg>
<ws2_32.dll.WSARecv>
<ws2_32.dll.recvfrom>
<ws2_32.dll.sendto>
<ws2_32.dll.send>
<ws2_32.dll.WSARecvFrom>
<ws2_32.dll.WSASendTo>

*/

Windows 平台上有一个 WSASend 函数,可以支持一次发送多个BUFFER的请求,每个被发送的数据被填充到WSABUF结构中,
然后传递给WSASend函数同时提供BUF的数量,这样WSASend就能上面的工作而减少send的调用次数,来提高了性能




//libuv.dll

Address  To       From     Si Comment                Party 
05FDF558 73960BCE 772BD040 30 ws2_32.772BD040        User
05FDF588 7395EF79 73960BCE 24 libuv.73960BCE         User
05FDF5AC 6AADDB0D 7395EF79 34 libuv.7395EF79         User   //uv_write
05FDF5E0 6AADE503 6AADDB0D B8 arkhttpclient.6AADDB0D User
05FDF698 6AADEA20 6AADE503 10 arkhttpclient.6AADE503 User
05FDF6A8 73951DF6 6AADEA20 20 arkhttpclient.6AADEA20 User
05FDF6C8 73953173 73951DF6 C  libuv.73951DF6         User   sub_73951D70    //响应回调注册 uv_loop_init()=>  uv_async_init(a1, a1 + 136, sub_73951D70)
05FDF6D4 739539A7 73953173 20 libuv.73953173         User	sub_73953140
05FDF6F4 73953A9C 739539A7 24 libuv.739539A7         User	sub_73953840
05FDF718 6AADBEFC 73953A9C 38 libuv.73953A9C         User	uv_run 循环
05FDF750 73960E29 6AADBEFC 18 arkhttpclient.6AADBEFC User
05FDF768 778538DF 73960E29 38 libuv.73960E29         System   uv_thread_create() =>  beginthreadex(0, 0, sub_73960DD0, v3, 4, 0) => sub_73960DD0() => arkhttpclient.6AADBEFC
05FDF7A0 75BD6359 778538DF 10 ucrtbase.778538DF      System
05FDF7B0 77CB8944 75BD6359 5C kernel32.75BD6359      System
05FDF80C 77CB8914 77CB8944 10 ntdll.77CB8944         System
05FDF81C 00000000 77CB8914    ntdll.77CB8914         User




int __cdecl sub_73953140(int a1, int a2)
{
  int result; // eax@1

  result = *(_DWORD *)(a2 + 44);
  *(_BYTE *)(a2 + 112) = 0;
  if ( result & 1 )
  {
    if ( !(result & 4) )
    {
      *(_DWORD *)(a2 + 44) = result | 4;
      result = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a2 + 40) = result;
      *(_DWORD *)(a1 + 44) = a2;
    }
  }
  else
  {
    result = *(_DWORD *)(a2 + 108);
    if ( result )
      result = ((int (__cdecl *)(int))result)(a2);  //=>sub_73951D70()
  }
  return result;
}

//@a1 uv_loop_t
int __cdecl sub_73953840(int a1)
{
  int result; // eax@1
  int v2; // ebx@2
  int v3; // edi@2
  int v4; // eax@3
  DWORD *v5; // ecx@3
  DWORD v6; // edx@6
  int v7; // edx@12
  ULONG_PTR v8; // edx@18
  DWORD v9; // edx@24

  result = *(_DWORD *)(a1 + 40);
  if ( result )//判断是否有消息发送链表指针?
  {
    v2 = *(_DWORD *)(result + 56);
    *(_DWORD *)(a1 + 40) = 0;//清除链表指针?
    v3 = v2;
    while ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 56); //next v3?
      v5 = (DWORD *)v3;
      v3 = 0;
      if ( v4 != v2 )
        v3 = v4;
      result = v5[1];
      switch ( result )  //处理事件类型？
      {
        case 14:
          v6 = *v5;
          if ( *(_DWORD *)(*v5 + 8) == 7 )
          {
            result = sub_7395B3C0(a1, v6, v5);
          }
          else if ( *(_DWORD *)(*v5 + 8) == 12 )
          {
            result = sub_7395F2A0(a1, v6, (DWORD)v5);
          }
          else
          {
            result = *(_DWORD *)(*v5 + 8) - 14;
            if ( *(_DWORD *)(*v5 + 8) == 14 )
              result = sub_73962DD0(a1, v6, v5);
          }
          break;
        case 3:
          v7 = v5[17];
          if ( *(_DWORD *)(v7 + 8) == 7 )
          {
            result = sub_7395B7E0(a1, v7, v5);
          }
          else if ( *(_DWORD *)(v7 + 8) == 12 )
          {
            result = sub_7395F580(a1, v7, v5);
          }
          else
          {
            result = *(_DWORD *)(v7 + 8) - 14;
            if ( *(_DWORD *)(v7 + 8) == 14 )
              result = sub_73962EF0(a1, v7, v5);
          }
          break;
        case 10:
          v8 = *v5;
          if ( *(_DWORD *)(*v5 + 8) == 7 )
          {
            result = sub_7395B260(a1, v8, (int)v5);
          }
          else if ( *(_DWORD *)(*v5 + 8) == 12 )
          {
            result = sub_7395F0B0(a1, v8, v5);
          }
          else
          {
            result = *(_DWORD *)(*v5 + 8) - 14;
            if ( *(_DWORD *)(*v5 + 8) == 14 )
              abort();
          }
          return result;
        case 2:
          v9 = v5[16];
          if ( *(_DWORD *)(v9 + 8) == 7 )
          {
            result = sub_7395B320(a1, v9, v5);
          }
          else if ( *(_DWORD *)(v9 + 8) == 12 )
          {
            result = sub_7395F1C0(a1, v9, v5);
          }
          else
          {
            result = *(_DWORD *)(v9 + 8) - 14;
            if ( *(_DWORD *)(v9 + 8) == 14 )
              abort();
          }
          return result;
        case 4:
          result = sub_7395B6F0(a1, v5[15], v5);
          break;
        case 15:
          result = sub_73965340(a1, *v5, v5);
          break;
        case 5:
          result = sub_739655B0(a1, v5[15], v5);
          break;
        case 16:
          result = sub_73953140(a1, *v5);  //==================================================================>  
          break;
        case 17:
          result = sub_7395E3A0(a1, *v5);
          break;
        case 12:
          result = sub_7395C5E0(a1, *v5, v5);
          break;
        case 13:
          result = sub_7395DC90(a1, *v5);
          break;
        case 11:
          result = sub_73954900(a1, (int)v5, *v5);
          break;
        default:
          break;
      }
    }
  }
  return result;
}

//@a1 uv_loop_t
signed int __cdecl uv_run(int a1, int a2)
{
  int (__cdecl *v2)(int, int); // eax@1
  signed int v3; // edi@6
  int v4; // eax@9
  int i; // ecx@21
  int v6; // eax@22
  signed int v7; // eax@38
  signed int result; // eax@40
  int (__cdecl *v9)(int, int); // [sp+4h] [bp-4h]@3

  v2 = (int (__cdecl *)(int, int))sub_739536A0;
  if ( dword_7396F6F8 )
    v2 = sub_73953750;
  v9 = v2;
  if ( *(_DWORD *)(a1 + 4) || a1 + 16 != *(_DWORD *)(a1 + 16) || *(_DWORD *)(a1 + 44) )
  {
    v3 = 1;
    do
    {
      if ( *(_DWORD *)(a1 + 24) )
        break;
      uv_update_time(a1);
      sub_73961870(a1);
      sub_73953840(a1); // =================================================>
      sub_73958FC0(a1);
      sub_73959130(a1);
      v4 = 0;
      if ( !(a2 & 2) && !*(_DWORD *)(a1 + 24) )
      {
        if ( *(_DWORD *)(a1 + 4) > 0u || a1 + 16 != *(_DWORD *)(a1 + 16) )
        {
          if ( *(_DWORD *)(a1 + 40) )
          {
            v4 = 0;
          }
          else if ( *(_DWORD *)(a1 + 44) )
          {
            v4 = 0;
          }
          else if ( *(_DWORD *)(a1 + 60) )
          {
            v4 = 0;
          }
          else
          {
            v4 = sub_73961800(a1);
          }
        }
        else
        {
          v4 = 0;
        }
      }
      v9(a1, v4);
      sub_73958E90(a1);
      for ( i = *(_DWORD *)(a1 + 44); i; i = *(_DWORD *)(a1 + 44) )
      {
        *(_DWORD *)(a1 + 44) = *(_DWORD *)(i + 40);
        v6 = *(_DWORD *)(i + 8);
        *(_DWORD *)(i + 44) &= 0xFFFFFFFB;
        switch ( v6 )
        {
          case 12:
            sub_7395F990(a1, i);
            break;
          case 7:
            sub_73959D90(a1, i);
            break;
          case 14:
            sub_73963270(a1, i);
            break;
          case 15:
            sub_739656B0(a1, i);
            break;
          case 8:
            sub_7395C230(a1, i);
            break;
          case 13:
            sub_73961940(a1, i);
            break;
          case 2:
          case 6:
          case 9:
            sub_739590B0(a1, i);
            break;
          case 1:
            sub_73953030(a1, i);
            break;
          case 16:
            sub_7395E450(a1, i);
            break;
          case 10:
            sub_7395DC10(a1, i);
            break;
          case 3:
            sub_73954480(a1, i);
            break;
          case 4:
            sub_73951270(a1, i);
            break;
          default:
            continue;
        }
      }
      if ( a2 == 1 )
        sub_73961870(a1);
      v7 = uv_loop_alive(a1);
      v3 = v7;
      if ( a2 & 3 )
        break;
    }
    while ( v7 );
  }
  else
  {
    v3 = 0;
    uv_update_time(a1);
  }
  result = v3;
  if ( *(_DWORD *)(a1 + 24) )
    *(_DWORD *)(a1 + 24) = 0;
  return result;
}












-----------------------------------------------------------------------------
int __cdecl uv_write(DWORD NumberOfBytesSent, int a2, LPWSABUF lpBuffers, DWORD dwBufferCount, int a5)
{
  int v5; // esi@1
  int v7; // edx@3
  int v8; // eax@6
  int v9; // eax@7

  v5 = *(_DWORD *)(a2 + 4);
  if ( !(*(_DWORD *)(a2 + 44) & 0x10000) )
    return -4047;
  v7 = 87;
  if ( *(_DWORD *)(a2 + 8) == 7 )
  {
    v7 = sub_7395A9A0(v5, (PVOID)NumberOfBytesSent, a2, (int)lpBuffers, dwBufferCount, a5);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) == 12 )
    {
      v9 = sub_73960B40(v5, NumberOfBytesSent, a2, lpBuffers, dwBufferCount, a5);
      return sub_73953EE0(v9);
    }
    if ( *(_DWORD *)(a2 + 8) == 14 )
    {
      v8 = sub_73964220(v5, NumberOfBytesSent, a2, lpBuffers, dwBufferCount, a5);
      return sub_73953EE0(v8);
    }
  }
  return sub_73953EE0(v7);
}


-----------------------------------------------------------------------------
ret = uv_read_start((uv_stream_t *)client, OnAlloc, OnRead);

uv_write(&write_request,
		(uv_stream_t *)&tcp_client,
		&buf, 1,
		write_cb);

----------------------------------------------------------------------------- 
// uv_run(uv_loop_t , UV_RUN_DEFAULT) 


//libuv 示例
//	服务器 https://www.latelee.org/toolslib/libuv-compile.html
 
//uv_tcp_t *client = malloc(sizeof(uv_tcp_t));
//ret = uv_tcp_init(server->loop, client);
//ret = uv_accept(server, (uv_stream_t*)client);
//uv_read_start((uv_stream_t *)client, OnAlloc, OnRead);
int __cdecl uv_read_start(DWORD Flags, int a2, int a3)
{
  int v3; // eax@1
  signed int v5; // edx@5
  int v6; // eax@8
  int v7; // eax@9

  v3 = *(_DWORD *)(Flags + 44);
  if ( v3 & 0x100 )
    return -4084;
  if ( !(v3 & 0x8000) )
    return -4053;
  v5 = 87;
  if ( *(_DWORD *)(Flags + 8) == 7 )
  {
    v5 = sub_7395A930(Flags, a2, a3);
  }
  else
  {
    if ( *(_DWORD *)(Flags + 8) == 12 )
    {
      v7 = sub_739605E0(Flags, a2, a3);
      return sub_73953EE0(v7);
    }
    if ( *(_DWORD *)(Flags + 8) == 14 )
    {
      v6 = sub_73963980(Flags, a2, a3);
      return sub_73953EE0(v6);
    }
  }
  return sub_73953EE0(v5);
}


static void OnConnection(uv_stream_t* server, int status)
{
    static int cnt = 1;
    int ret = 0;
    uv_shutdown_t* shutdown_req;

    struct sockaddr sockname, peername;
    int namelen = sizeof(struct sockaddr);

    CHECK(status, "OnConnection");

    /* 4. Accept client connection */
    printf("Accepting Connection\n");
    
    /* 4.1. Init client connection using `server->loop`, passing the client handle */
    uv_tcp_t *client = malloc(sizeof(uv_tcp_t));
    ret = uv_tcp_init(server->loop, client);

    CHECK(ret, "uv_tcp_init");
    
    /* 4.2. Accept the now initialized client connection */
    ret = uv_accept(server, (uv_stream_t*)client);
    if (ret)
    {
      printf("trying to accept connection %d\n", ret);
    
      shutdown_req = malloc(sizeof(uv_shutdown_t));
      ret = uv_shutdown(shutdown_req, (uv_stream_t*) client, OnShutdown);
      CHECK(ret, "uv_shutdown");
    }
    
    // 获取对端IP地址，并打印之
    ret = uv_tcp_getpeername(client, &peername, &namelen);
    if (ret != 0)
    {
        printf("uv_tcp_getpeername failed.\n");
        return;
    }

    ShowSockname(&peername);

    printf("Connection accepted, cnt: %d\n", cnt++);

    /* 5. Start reading data from client */
    ret = uv_read_start((uv_stream_t *)client, OnAlloc, OnRead);
    CHECK(ret, "uv_read_start");
}



static void OnRead(uv_stream_t* client, ssize_t nread, const uv_buf_t* buf)
{
    int ret = 0;
    uv_shutdown_t *shutdown_req;
    
    printf("OnRead: nread: %ld\n", nread);
    /* Errors or EOF */
    if (nread < 0)
    {
        if (nread != UV_EOF)
            CHECK(nread, "OnRead");
        
        /* Client signaled that all data has been sent, so we can close the connection and are done */
        free(buf->base);
        
        shutdown_req = malloc(sizeof(uv_shutdown_t));
        ret = uv_shutdown(shutdown_req, client, OnShutdown);
        CHECK(ret, "uv_shutdown");
        return;
    }
    
    if (nread == 0)
    {
        /* Everything OK, but nothing read and thus we don't write anything */
        free(buf->base);
        return;
    }
    
    /* Check if we should quit the server which the client signals by sending "QUIT" */
    if (!strncmp("QUIT", buf->base, fmin(nread, 4)))
    {
        printf("Closing the server\n");
        free(buf->base);
        /* Before exiting we need to properly close the server via uv_close */
        /* We can do this synchronously */
        uv_close((uv_handle_t*) &tcpServer, NULL);
        printf("Closed server, exiting\n");
        exit(0);
    }
    
    /* 6. Write same data back to client since we are an *echo* server and thus can reuse the buffer used to read*/
    /*    We wrap the write req and buf here in order to be able to clean them both later */
    write_req_t *write_req = malloc(sizeof(write_req_t));
    write_req->buf = uv_buf_init(buf->base, nread);
    ret = uv_write(&write_req->req, client, &write_req->buf, NBUFS, OnAfterWrite);

    CHECK(ret, "uv_write");
}





// tcp连接句实例
static uv_tcp_t tcpServer;
int main(void)
{
    int ret = 0;
    
    // 创建loop实例
    uv_loop_t *loop = uv_default_loop();
    
    // 1、初始化TCP
    ret = uv_tcp_init(loop, &tcpServer);
    CHECK(ret, "uv_tcp_init");
    
    // 2、绑定IP地址和端口
    struct sockaddr_in addr;
    ret = uv_ip4_addr(HOST, PORT, &addr);
    CHECK(ret, "uv_ip4_addr");
    
    ret = uv_tcp_bind(&tcpServer, (struct sockaddr*)&addr, AF_INET);
    CHECK(ret, "uv_tcp_bind");
    
    // 3、监听端口
    // 注：uv_tcp_t继承于uv_stream_t（前面的结构成员完全一样），可以直接强制转换
    // 内部调用uv_tcp_listen->uv__handle_start
    // SOMAXCONN可设置其它值，默认128
    ret = uv_listen((uv_stream_t*) &tcpServer, SOMAXCONN, OnConnection);
    CHECK(ret, "uv_listen");
    
    printf("Listening on %s:%d\n", HOST, PORT);
    
    // 4、运行循环体，内部使用for死循环，根据epoll轮询，
    // 直到在异常退出
    uv_run(loop, UV_RUN_DEFAULT);

    return 0;
}


-----------------------------------------------------------------------------
//libuv 示例
//	客户端 https://blog.csdn.net/u010155023/article/details/91352128



#define TEST_PORT 6080
 
uv_loop_t loop;
uv_tcp_t tcp_client;
uv_connect_t connection_request;
uv_write_t write_request;
 
 
static void write_cb(uv_write_t *req, int status) {
	//ASSERT(status == 0);//UV_ECANCELED
	UV_ECANCELED;
	printf("write_cb status: %d, %s\n", status, strerror(status));
	uv_close((uv_handle_t*)req->handle, NULL);
}
 
 
static void connect_cb(uv_connect_t *req, int status) {
	uv_buf_t buf = uv_buf_init("HELLO", 5);
	//ASSERT(status == 0);
	printf("connect_cb status: %d\n", status);
	int r = uv_write(&write_request,
		(uv_stream_t *)&tcp_client,
		&buf, 1,
		write_cb);
	int a = 2;
}
 
int main(int argc, char** argv)
{
	memset(&loop, 0, sizeof(uv_loop_t));
	memset(&tcp_client, 0, sizeof(uv_tcp_t));
	memset(&connection_request, 0, sizeof(uv_connect_t));
	struct sockaddr_in sa;
	ASSERT(0 == uv_ip4_addr("127.0.0.1", TEST_PORT, &sa));
	ASSERT(0 == uv_loop_init(&loop));
	ASSERT(0 == uv_tcp_init(&loop, &tcp_client));
 
	ASSERT(0 == uv_tcp_connect(&connection_request,
		&tcp_client,
		(const struct sockaddr *)
		&sa,
		connect_cb));
    uv_run(&loop, UV_RUN_DEFAULT);
	return 0;
}
-----------------------------------------------------------------------------








