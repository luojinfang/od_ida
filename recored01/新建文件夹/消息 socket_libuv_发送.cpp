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

Windows 平台上有一个 WSASend 函数,可以支持一次发送多个BUFFER的请求,每个被发送的数据被填充到WSABUF结构中,
然后传递给WSASend函数同时提供BUF的数量,这样WSASend就能上面的工作而减少send的调用次数,来提高了性能
 
//消息发送实例，怎样添加到 uv_loop_t 的?   并没有调用 uv_write，uv_write2  


      0E18FA6C 55EE50AD 76F23500 38       ws2_32.76F23500            用户模块
      0E18FAA4 55EE5334 55EE50AD 2C       libuv.55EE50AD             用户模块
      0E18FAD0 55ED2EEC 55EE5334 24       libuv.55EE5334             用户模块
      0E18FAF4 05136A5C 55ED2EEC 4C       libuv.55ED2EEC             用户模块
      0E18FB40 0513B499 05136A5C 5C       arksocket.05136A5C         用户模块
      0E18FB9C 0513B413 0513B499 54       arksocket.0513B499         用户模块
      0E18FBF0 0513B124 0513B413 50       arksocket.0513B413         用户模块
      0E18FC40 05132E4B 0513B124 18       arksocket.0513B124         用户模块
      0E18FC58 05132602 05132E4B 20       arksocket.05132E4B         用户模块
      0E18FC78 051325B9 05132602 28       arksocket.05132602         用户模块
      0E18FCA0 0513A17F 051325B9 28       arksocket.051325B9         用户模块
      0E18FCC8 05139FD2 0513A17F 70       arksocket.0513A17F         用户模块
      0E18FD38 56DF4302 05139FD2 2C       arksocket.05139FD2         用户模块
      0E18FD64 56DF9E9A 56DF4302 2C       preloginlogic.56DF4302     用户模块
      0E18FD90 56DFCEEC 56DF9E9A 70       preloginlogic.56DF9E9A     用户模块
      0E18FE00 56DF7973 56DFCEEC 24       preloginlogic.56DFCEEC     用户模块
      0E18FE24 56DF7DDB 56DF7973 24       preloginlogic.56DF7973     用户模块
      0E18FE48 56DF7A03 56DF7DDB 20       preloginlogic.56DF7DDB     用户模块
      0E18FE68 56DF75D2 56DF7A03 24       preloginlogic.56DF7A03     用户模块
      0E18FE8C 0513159A 56DF75D2 C        preloginlogic.56DF75D2     用户模块
      0E18FE98 05135297 0513159A 28       arksocket.0513159A         用户模块
      0E18FEC0 55ED39A7 05135297 20       arksocket.05135297         用户模块
      0E18FEE0 55ED3A9C 55ED39A7 24       libuv.55ED39A7             用户模块
      0E18FF04 05135696 55ED3A9C 20       libuv.55ED3A9C             用户模块
      0E18FF24 55EE0E29 05135696 18       arksocket.05135696         用户模块
      0E18FF3C 7590738F 55EE0E29 38       libuv.55EE0E29             系统模块
      0E18FF74 74F70419 7590738F 10       ucrtbase.7590738F          系统模块
      0E18FF84 771666DD 74F70419 5C       kernel32.74F70419          系统模块
      0E18FFE0 771666AD 771666DD 10       ntdll.771666DD             系统模块
      0E18FFF0 00000000 771666AD          ntdll.771666AD             用户模块



      0E18F8E4 55EE50AD 76F23500 38  ws2_32.76F23500            用户模块
      0E18F91C 55EE5334 55EE50AD 2C  libuv.55EE50AD             用户模块
      0E18F948 55ED2EEC 55EE5334 24  libuv.55EE5334             用户模块
      0E18F96C 05136A5C 55ED2EEC 4C  libuv.55ED2EEC             用户模块
      0E18F9B8 0513B499 05136A5C 5C  arksocket.05136A5C         用户模块
      0E18FA14 0513B413 0513B499 54  arksocket.0513B499         用户模块
      0E18FA68 0513B124 0513B413 50  arksocket.0513B413         用户模块
      0E18FAB8 05132E4B 0513B124 18  arksocket.0513B124         用户模块
      0E18FAD0 05132602 05132E4B 20  arksocket.05132E4B         用户模块
      0E18FAF0 051325B9 05132602 28  arksocket.05132602         用户模块
      0E18FB18 0513A17F 051325B9 28  arksocket.051325B9         用户模块
      0E18FB40 05139FD2 0513A17F 70  arksocket.0513A17F         用户模块
      0E18FBB0 56DF4302 05139FD2 2C  arksocket.05139FD2         用户模块
      0E18FBDC 56DF9E9A 56DF4302 2C  preloginlogic.56DF4302     用户模块
      0E18FC08 56DFB5E1 56DF9E9A 38  preloginlogic.56DF9E9A     用户模块
      0E18FC40 56DFAF47 56DFB5E1 64  preloginlogic.56DFB5E1     用户模块
      0E18FCA4 56DFABE2 56DFAF47 2C  preloginlogic.56DFAF47     用户模块
      0E18FCD0 56DFAB28 56DFABE2 20  preloginlogic.56DFABE2     用户模块
      0E18FCF0 56DF51C3 56DFAB28 80  preloginlogic.56DFAB28     用户模块
      0E18FD70 0513A596 56DF51C3 38  preloginlogic.56DF51C3     用户模块
      0E18FDA8 0513B936 0513A596 20  arksocket.0513A596         用户模块
      0E18FDC8 05136F09 0513B936 34  arksocket.0513B936         用户模块
      0E18FDFC 55EE554E 05136F09 C4  arksocket.05136F09         用户模块
      0E18FEC0 55ED3990 55EE554E 20  libuv.55EE554E             用户模块
      0E18FEE0 55ED3A9C 55ED3990 24  libuv.55ED3990             用户模块
      0E18FF04 05135696 55ED3A9C 20  libuv.55ED3A9C             用户模块
      0E18FF24 55EE0E29 05135696 18  arksocket.05135696         用户模块
      0E18FF3C 7590738F 55EE0E29 38  libuv.55EE0E29             系统模块
      0E18FF74 74F70419 7590738F 10  ucrtbase.7590738F          系统模块
      0E18FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
      0E18FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
      0E18FFF0 00000000 771666AD     ntdll.771666AD             用户模块


      0E18FD3C 55EE50AD 76F23500 38  ws2_32.76F23500            用户模块
      0E18FD74 55EE5334 55EE50AD 2C  libuv.55EE50AD             用户模块
      0E18FDA0 55ED2EEC 55EE5334 24  libuv.55EE5334             用户模块
      0E18FDC4 05136A5C 55ED2EEC 4C  libuv.55ED2EEC             用户模块
      0E18FE10 0513B499 05136A5C 5C  arksocket.05136A5C         用户模块
      0E18FE6C 0513B578 0513B499 1C  arksocket.0513B499         用户模块
      0E18FE88 05136B73 0513B578 1C  arksocket.0513B578         用户模块
      0E18FEA4 55EE561D 05136B73 1C  arksocket.05136B73         用户模块
      0E18FEC0 55ED399C 55EE561D 20  libuv.55EE561D             用户模块
      0E18FEE0 55ED3A9C 55ED399C 24  libuv.55ED399C             用户模块
      0E18FF04 05135696 55ED3A9C 20  libuv.55ED3A9C             用户模块
      0E18FF24 55EE0E29 05135696 18  arksocket.05135696         用户模块
      0E18FF3C 7590738F 55EE0E29 38  libuv.55EE0E29             系统模块
      0E18FF74 74F70419 7590738F 10  ucrtbase.7590738F          系统模块
      0E18FF84 771666DD 74F70419 5C  kernel32.74F70419          系统模块
      0E18FFE0 771666AD 771666DD 10  ntdll.771666DD             系统模块
      0E18FFF0 00000000 771666AD     ntdll.771666AD             用户模块

*/      
























	  

