/*
//消息发送实例，怎样添加到 uv_loop_t 的?   并没有调用 uv_write，uv_write2  
//消息实例 Util::Data::CreateTXData((Util::Data *)&a8);  			//大量使用...

Util::Data::CreateTXBuffer
CTXCommPack::GrowBuffer

*/






Address  To       From     Si Comment                Party 
			//WSASendTo
0866F73C 739650AD 772E12E0 38 ws2_32.772E12E0        User
0866F774 73965334 739650AD 2C libuv.739650AD         User	//sub_73965060
0866F7A0 73952EEC 73965334 24 libuv.73965334         User
0866F7C4 6BA56A5C 73952EEC 4C libuv.73952EEC         User  //int __cdecl uv_udp_send(int a1, DWORD NumberOfBytesSent, LPWSABUF lpBuffers, DWORD dwBufferCount, struct sockaddr *lpTo, int a6)
0866F810 6BA5B499 6BA56A5C 5C arksocket.6BA56A5C     User
0866F86C 6BA5B413 6BA5B499 54 arksocket.6BA5B499     User
0866F8C0 6BA5B124 6BA5B413 50 arksocket.6BA5B413     User
0866F910 6BA52E4B 6BA5B124 18 arksocket.6BA5B124     User	//sub_6BA5B0D7
0866F928 6BA52602 6BA52E4B 20 arksocket.6BA52E4B     User	//sub_6BA52E27
0866F948 6BA525B9 6BA52602 28 arksocket.6BA52602     User	//sub_6BA525C4
0866F970 6BA5A17F 6BA525B9 28 arksocket.6BA525B9     User 	//sub_6BA524FC
0866F998 6BA59FD2 6BA5A17F 6C arksocket.6BA5A17F     User	//sub_6BA5A10A
0866FA04 63DA4302 6BA59FD2 2C arksocket.6BA59FD2     User	//sub_6BA59F70
0866FA30 63DA9E9A 63DA4302 2C preloginlogic.63DA4302 User	//sub_63DA4259 
0866FA5C 63DACB24 63DA9E9A 74 preloginlogic.63DA9E9A User	//sub_63DA9D36
0866FAD0 63DA79DF 63DACB24 24 preloginlogic.63DACB24 User	//sub_63DAC8C9
0866FAF4 63DA7DFF 63DA79DF 24 preloginlogic.63DA79DF User	//sub_63DA7978
0866FB18 63DA7A27 63DA7DFF 20 preloginlogic.63DA7DFF User
0866FB38 63DA75F0 63DA7A27 24 preloginlogic.63DA7A27 User
0866FB5C 6BA5159A 63DA75F0 C  preloginlogic.63DA75F0 User	//sub_63DA75D7
0866FB68 6BA55297 6BA5159A 28 arksocket.6BA5159A     User	//sub_6BA51576
0866FB90 739539A7 6BA55297 20 arksocket.6BA55297     User	//sub_6BA55285
0866FBB0 73953A9C 739539A7 24 libuv.739539A7         User	//sub_73953840   
0866FBD4 6BA55696 73953A9C 20 libuv.73953A9C         User 	//uv_run 循环
0866FBF4 73960E29 6BA55696 18 arksocket.6BA55696     User	//sub_6BA5563A  创建 uv_loop_t 实例
0866FC0C 778538DF 73960E29 38 libuv.73960E29         System //uv_thread_create() =>  beginthreadex(0, 0, sub_73960DD0, v3, 4, 0) => sub_73960DD0() => arksocket.6BA55696
0866FC44 75BD6359 778538DF 10 ucrtbase.778538DF      System
0866FC54 77CB8944 75BD6359 5C kernel32.75BD6359      System
0866FCB0 77CB8914 77CB8944 10 ntdll.77CB8944         System
0866FCC0 00000000 77CB8914    ntdll.77CB8914         User

//================================
libuv 
Base=73950000

arksocket.dll
Base=6BA50000

preloginlogic.dll
Base=63D90000
 
common.dll
Base=6B360000
 
 
 
Address  To       From     Siz Comment               Party 
009DE830 6B48E1DC 6B48E14E 1C  common.6B48E14E       User
009DE84C 6B48A69F 6B48E1DC 1C  common.6B48E1DC       User
009DE868 6B489324 6B48A69F 30  common.6B48A69F       User
009DE898 624FB361 6B489324 34  common.6B489324       User
009DE8CC 625C0639 624FB361 3C  im.624FB361           User
009DE908 625BC1D6 625C0639 28  im.625C0639           User
009DE930 624F85F8 625BC1D6 C4  im.625BC1D6           User
009DE9F4 624F3D7A 624F85F8 88  im.624F85F8           User
009DEA7C 624F8F39 624F3D7A 34  im.624F3D7A           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User
 
 Address  To       From     Siz Comment               Party 
009DE8F8 6B48E41C 6B48E14E 1C  common.6B48E14E       User
009DE914 6B48F485 6B48E41C 1C  common.6B48E41C       User
009DE930 624F850F 6B48F485 C4  common.6B48F485       User
009DE9F4 624F3D7A 624F850F 88  im.624F850F           User
009DEA7C 624F8F39 624F3D7A 34  im.624F3D7A           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User


 Address  To       From     Siz Comment               Party 
009DE8FC 6B48E41C 6B48E14E 1C  common.6B48E14E       User
009DE918 6B48F485 6B48E41C 1C  common.6B48E41C       User
009DE934 624F8368 6B48F485 C0  common.6B48F485       User
009DE9F4 624F3D7A 624F8368 88  im.624F8368           User
009DEA7C 624F8F39 624F3D7A 34  im.624F3D7A           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User



Address  To       From     Siz Comment               Party 
009DE938 6B48E101 6B48E14E 10  common.6B48E14E       User
009DE948 6936584A 6B48E101 C0  common.6B48E101       User
009DEA08 624F3A51 6936584A 74  kernelutil.6936584A   User
009DEA7C 624F8F39 624F3A51 34  im.624F3A51           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User
 
 
Address  To       From     Siz Comment               Party 
009DE8C8 6B48E41C 6B48E14E 1C  common.6B48E14E       User
009DE8E4 69367783 6B48E41C 5C  common.6B48E41C       User
009DE940 693655F3 69367783 C8  kernelutil.69367783   User
009DEA08 624F3A51 693655F3 74  kernelutil.693655F3   User
009DEA7C 624F8F39 624F3A51 34  im.624F3A51           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User

 Address  To       From     Siz Comment               Party 
009DE8C4 6935644C 6B48E14E 1C  common.6B48E14E       User
009DE8E0 69367674 6935644C 60  kernelutil.6935644C   User
009DE940 693655F3 69367674 C8  kernelutil.69367674   User
009DEA08 624F3A51 693655F3 74  kernelutil.693655F3   User
009DEA7C 624F8F39 624F3A51 34  im.624F3A51           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User

 
 Address  To       From     Siz Comment               Party 
009DE924 6935644C 6B48E14E 1C  common.6B48E14E       User
009DE940 6936529D 6935644C C8  kernelutil.6935644C   User
009DEA08 624F3A51 6936529D 74  kernelutil.6936529D   User
009DEA7C 624F8F39 624F3A51 34  im.624F3A51           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User


Address  To       From     Siz Comment               Party 
009DE944 69365242 6B48E14E C4  common.6B48E14E       User
009DEA08 624F3A51 69365242 74  kernelutil.69365242   User
009DEA7C 624F8F39 624F3A51 34  im.624F3A51           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User

//======================================

Address  To       From     Siz Comment               Party 
009DE944 69365242 6B48E14E C4  common.6B48E14E       User
009DEA08 624F3A51 69365242 74  kernelutil.69365242   User
009DEA7C 624F8F39 624F3A51 34  im.624F3A51           User
009DEAB0 622CB0CE 624F8F39 1C  im.624F8F39           User
009DEACC 623A7CC9 622CB0CE 40  im.622CB0CE           User
009DEB0C 6DF224EE 623A7CC9 28  im.623A7CC9           User
009DEB34 6DF22591 6DF224EE C   asynctask.6DF224EE    User
009DEB40 6DF227CF 6DF22591 34  asynctask.6DF22591    User
009DEB74 6DF24321 6DF227CF 2C  asynctask.6DF227CF    User
009DEBA0 6DF2207A 6DF24321 24  asynctask.6DF24321    User
009DEBC4 6C870B86 6DF2207A 69C asynctask.6DF2207A    User
009DF260 6C877E8B 6C870B86 80  hummerengine.6C870B86 User
009DF2E0 001E289B 6C877E8B 49C hummerengine.6C877E8B User
009DF77C 001E12C6 001E289B C   qq.001E289B           User
009DF788 001E3365 001E12C6 4C  qq.001E12C6           User
009DF7D4 75BD6359 001E3365 10  qq.001E3365           System
009DF7E4 77CB8944 75BD6359 5C  kernel32.75BD6359     System
009DF840 77CB8914 77CB8944 10  ntdll.77CB8944        System
009DF850 00000000 77CB8914     ntdll.77CB8914        User

//======================================
//拷贝发送内容-----------------------------关键
Address  To       From     Si Comment                Party 
0866F95C 6B48E1DC 6B48E153 1C common.6B48E153        User
0866F978 6B48A69F 6B48E1DC 1C common.6B48E1DC        User
0866F994 6B489324 6B48A69F 30 common.6B48A69F        User
0866F9C4 625CA8E3 6B489324 3C common.6B489324        User
0866FA00 63DD1E2F 625CA8E3 28 im.625CA8E3            User
0866FA28 63DD19BA 63DD1E2F 14 preloginlogic.63DD1E2F User
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



//======================================
//输入框内容, 发送完会清除
//WSASendTo 断点时，ce 查看字符串变化，可得到一个对应发送内容地址 04538672,再下内存写断点
 
Address  To       From     Si Comment                Party 
0866F918 6B48FAF5 6F6A3842 18 vcruntime140.6F6A3842  User
0866F930 6B48E094 6B48FAF5 C  common.6B48FAF5        User //sub_6B48FAA0  => CTXCommPack::GrowBuffer
0866F93C 6B48AB5D 6B48E094 2C common.6B48E094        User //CTXCommPack::AddDWord
0866F968 6B48A4A0 6B48AB5D 28 common.6B48AB5D        User //sub_6B48A970
0866F990 6B48914A 6B48A4A0 30 common.6B48A4A0        User
0866F9C0 625CA854 6B48914A 40 common.6B48914A        User
0866FA00 63DD1E2F 625CA854 28 im.625CA854            User
0866FA28 63DD19BA 63DD1E2F 14 preloginlogic.63DD1E2F User //sub_63DD1DE1
0866FA3C 63DA9724 63DD19BA 24 preloginlogic.63DD19BA User
0866FA60 63DACAD3 63DA9724 70 preloginlogic.63DA9724 User //sub_63D91E2F
0866FAD0 63DA79DF 63DACAD3 24 preloginlogic.63DACAD3 User //sub_63DAC8C9 同发送 WSASendTo 分叉
0866FAF4 63DA7DFF 63DA79DF 24 preloginlogic.63DA79DF User //sub_63DA7978
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

 
 
 
  //======================================
 Address  To       From     Si Comment                Party 
0866F95C 6B48E1DC 6F6A372B 1C vcruntime140.6F6A372B  User
0866F978 6B48A69F 6B48E1DC 1C common.6B48E1DC        User
0866F994 6B489324 6B48A69F 30 common.6B48A69F        User
0866F9C4 625CA8E3 6B489324 3C common.6B489324        User  //CCmdCodecBase::CodeBuffer
0866FA00 63DD1E2F 625CA8E3 28 im.625CA8E3            User
0866FA28 63DD19BA 63DD1E2F 14 preloginlogic.63DD1E2F User //sub_63DD1DE1
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




 unsigned int __thiscall sub_63D91E2F(unsigned int *this)
{
  unsigned int *v1; // esi@1
  unsigned int v2; // edx@2
  unsigned int result; // eax@3
  int v4; // [sp+0h] [bp-8h]@1
  int *v5; // [sp+4h] [bp-4h]@1

  v1 = this;
  v5 = &v4;
  if ( &v4 )
  {
    v2 = *this;
    if ( *this )
    {
      result = (*(int (__stdcall **)(unsigned int))(*(_DWORD *)v2 + 8))(*this);
      v2 = *v1;
    }
    if ( v2 < 0x80000000 )
    {
      result = v2 + 2147483648;
      *v1 = v2 + 2147483648;
    }
  }
  return result;
}
//////


int __stdcall sub_6B48A970(CTXCommPack *a1, int a2, int a3, int a4)
{
  int v4; // eax@4
  int v5; // eax@6
  unsigned int v6; // eax@9
  unsigned int v7; // ebx@10
  int v8; // ecx@10
  unsigned int v9; // ecx@11
  unsigned int v10; // edi@12
  char v11; // dl@15
  int v12; // eax@16
  int v13; // eax@16
  int v14; // eax@17
  int v15; // eax@19
  unsigned int v16; // eax@22
  unsigned int v17; // ebx@23
  int v18; // edi@23
  unsigned int v19; // edi@24
  unsigned int v20; // edi@25
  int result; // eax@30
  int v22; // eax@31
  int v23; // eax@31
  int v24; // eax@34
  int v25; // eax@35
  int v26; // eax@35
  int v27; // eax@38
  int v28; // eax@40
  char v29; // [sp+Eh] [bp-Ah]@6
  char v30; // [sp+Fh] [bp-9h]@19
  __int64 v31; // [sp+10h] [bp-8h]@4

  if ( a2 && a3 )
  {
    switch ( *(_DWORD *)(a4 + 4) )
    {
      case 1:
        v4 = *(_DWORD *)a2;
        LODWORD(v31) = 0;
        if ( (*(int (__stdcall **)(int, int, __int64 *))(v4 + 32))(a2, a3, &v31) < 0 )
          goto LABEL_41;
        if ( !*(_DWORD *)(a4 + 8) )
          goto LABEL_37;
        v29 = v31;
        v5 = *((_DWORD *)a1 + 9);
        if ( v5 )
        {
          if ( v5 != 1 )
            goto LABEL_30;
        }
        else
        {
          *((_DWORD *)a1 + 9) = 1;
        }
        v6 = *((_DWORD *)a1 + 1);
        if ( v6 > 0x3FFFFFFF )
          goto LABEL_30;
        v7 = *((_DWORD *)a1 + 2);
        v8 = *((_DWORD *)a1 + 2) - v6 - 1;
        if ( v8 < 0 )
        {
          v9 = -v8;
          v10 = v7 >= v9 ? 2 * v7 : v7 + v9 + *((_DWORD *)a1 + 7) - v9 % *((_DWORD *)a1 + 7);
          if ( !CTXCommPack::GrowBuffer(a1, v10) )
            goto LABEL_30;
        }
        v11 = v29;
        goto LABEL_29;
      case 2:
        v12 = *(_DWORD *)a2;
        v29 = 0;
        v13 = (*(int (__stdcall **)(int, int, char *))(v12 + 40))(a2, a3, &v29);
        goto LABEL_18;
      case 3:
        v14 = *(_DWORD *)a2;
        v29 = 0;
        v13 = (*(int (__stdcall **)(int, int, char *))(v14 + 48))(a2, a3, &v29);
LABEL_18:
        if ( v13 < 0 )
          goto LABEL_41;
        v30 = v29;
        v15 = *((_DWORD *)a1 + 9);
        if ( v15 )
        {
          if ( v15 != 1 )
            goto LABEL_30;
        }
        else
        {
          *((_DWORD *)a1 + 9) = 1;
        }
        v16 = *((_DWORD *)a1 + 1);
        if ( v16 <= 0x3FFFFFFF )
        {
          v17 = *((_DWORD *)a1 + 2);
          v18 = *((_DWORD *)a1 + 2) - v16 - 1;
          if ( v18 >= 0
            || ((v19 = -v18, v17 >= v19) ? (v20 = 2 * v17) : (v20 = v17
                                                                  + *((_DWORD *)a1 + 7)
                                                                  + v19
                                                                  - v19 % *((_DWORD *)a1 + 7)),
                CTXCommPack::GrowBuffer(a1, v20)) )
          {
            v11 = v30;
LABEL_29:
            *(_BYTE *)(*((_DWORD *)a1 + 3) + (*((_DWORD *)a1 + 1))++) = v11;
          }
        }
LABEL_30:
        result = 1;
        break;
      case 4:
        v22 = *(_DWORD *)a2;
        LODWORD(v31) = 0xFFFF;
        v23 = (*(int (__stdcall **)(int, int, __int64 *))(v22 + 56))(a2, a3, &v31);
        goto LABEL_32;
      case 5:
        v24 = *(_DWORD *)a2;
        LODWORD(v31) = -1;
        v23 = (*(int (__stdcall **)(int, int, __int64 *))(v24 + 64))(a2, a3, &v31);
LABEL_32:
        if ( v23 < 0 )
          goto LABEL_41;
        CTXCommPack::AddWord(a1, v31, *(_DWORD *)(a4 + 12));
        return 1;
      case 6:
        v25 = *(_DWORD *)a2;
        LODWORD(v31) = -1;
        v26 = (*(int (__stdcall **)(int, int, __int64 *))(v25 + 72))(a2, a3, &v31);
        goto LABEL_36;
      case 0x11:
        v27 = *(_DWORD *)a2;
        v31 = -1i64;
        if ( (*(int (__stdcall **)(int, int, __int64 *))(v27 + 88))(a2, a3, &v31) < 0 )
          goto LABEL_41;
        CTXCommPack::AddUInt64(a1, v31, *(_DWORD *)(a4 + 12));
        return 1;
      case 7:
        v28 = *(_DWORD *)a2;
        LODWORD(v31) = -1;
        v26 = (*(int (__stdcall **)(int, int, __int64 *))(v28 + 80))(a2, a3, &v31);
LABEL_36:
        if ( v26 < 0 )
          goto LABEL_41;
LABEL_37:
        CTXCommPack::AddDWord(a1, v31, *(_DWORD *)(a4 + 12));  //=====================> act
        return 1;
      default:
        goto LABEL_41;
    }
  }
  else
  {
LABEL_41:
    result = 0;
  }
  return result;
}


int __thiscall CTXCommPack::AddDWord(CTXCommPack *this, unsigned __int32 a2, int a3)
{
  int result; // eax@2

  if ( a3 )
    result = sub_6B48FAA0(this, _byteswap_ulong(a2));
  else
    result = sub_6B48FAA0(this, a2);
  return result;
}


int __thiscall sub_6B48FAA0(CTXCommPack *this, int a2)
{
  CTXCommPack *v2; // esi@1
  int v3; // eax@1
  unsigned int v4; // eax@4
  unsigned int v5; // ebx@5
  int v6; // ecx@5
  unsigned int v7; // ecx@6
  unsigned int v8; // edi@7
  int result; // eax@10

  v2 = this;
  v3 = *((_DWORD *)this + 9);
  if ( v3 )
  {
    if ( v3 != 1 )
      return 0;
  }
  else
  {
    *((_DWORD *)this + 9) = 1;
  }
  v4 = *((_DWORD *)this + 1);
  if ( v4 <= 0x3FFFFFFF )
  {
    v5 = *((_DWORD *)this + 2);
    v6 = *((_DWORD *)this + 2) - v4 - 4;
    if ( v6 >= 0
      || ((v7 = -v6, v5 >= v7) ? (v8 = 2 * v5) : (v8 = v5 + v7 + *((_DWORD *)v2 + 7) - v7 % *((_DWORD *)v2 + 7)),
          CTXCommPack::GrowBuffer(v2, v8)) )
    {
      *(_DWORD *)(*((_DWORD *)v2 + 3) + *((_DWORD *)v2 + 1)) = a2; //  act
      result = 1;
      *((_DWORD *)v2 + 1) += 4;
      return result;
    }
  }
  return 0;
}

//================================================================================================================




int __thiscall sub_6BA555A1(int this)
{
  int v1; // ebx@1
  _DWORD *v2; // eax@1
  _DWORD *v3; // eax@1
  _DWORD *v4; // eax@1
  _DWORD *v5; // eax@1

  v1 = this;
  *(_DWORD *)(this + 12) = uv_thread_self();
  v2 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 20) = v2;
  *v2 = v1;
  uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 20), sub_6BA5569E);
  v3 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 28) = v3;
  *v3 = v1;
  uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 28), sub_6BA5583D);
  v4 = calloc(1u, 0x60u);
  *(_DWORD *)(v1 + 64) = v4;
  *v4 = v1;
  uv_timer_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 64));
  uv_timer_start(*(_DWORD *)(v1 + 64), sub_6BA558D7, 50, 0, 50, 0);
  v5 = calloc(1u, 0x74u);
  *(_DWORD *)(v1 + 108) = v5;
  *v5 = v1;
  return uv_async_init(*(_DWORD *)(v1 + 4), *(_DWORD *)(v1 + 108), sub_6BA55BC0);
}

int __cdecl sub_6BA5563A(LPVOID lpTlsValue)
{
  _DWORD *v1; // esi@1
  int v2; // edi@1
  DWORD v3; // ebx@1
  void *lpTlsValuea; // [sp+14h] [bp+8h]@1

  v1 = lpTlsValue;
  sub_6BA555A1((int)lpTlsValue); //创建 uv_loop_t 实例
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
          result = sub_73953140(a1, *v5);//=================================>sub_73953140
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
      result = ((int (__cdecl *)(int))result)(a2);   //=====================> sub_6BA5583D
  }
  return result;
}


int __cdecl sub_6BA5583D(int *a1)
{
  int v1; // edi@1
  bool v2; // bl@1
  void *v3; // esi@1
  _DWORD **v4; // eax@2
  _DWORD *v5; // ecx@2
  int result; // eax@3
  int v7; // ST04_4@3
  int v8; // ecx@3
  int v9; // ST04_4@6
  int v10; // ST04_4@7

  v1 = *a1;
  v2 = 0;
  v3 = 0;
  uv_mutex_lock(*a1 + 40);
  if ( *(_DWORD *)(v1 + 36) )
  {
    v4 = *(_DWORD ***)(v1 + 32);
    v5 = *v4;
    v3 = (void *)(*v4)[2];
    *(_DWORD *)(*v4)[1] = **v4;
    *(_DWORD *)(*v5 + 4) = v5[1];
    --*(_DWORD *)(v1 + 36);
    sub_6BA5194D(v5);
    v2 = *(_DWORD *)(v1 + 36) != 0;
  }
  result = uv_mutex_unlock(v1 + 40);
  v8 = v7;
  if ( v3 )
    result = sub_6BA55285((int)v3);//===========================>sub_6BA55285
  if ( v2 )
  {
    result = uv_async_send(*(_DWORD *)(v1 + 28));
    v8 = v9;
    if ( result )
    {
      result = sub_6BA54EEB("Loop", "UvLoop._AsyncCall");
      v8 = v10;
    }
  }
  if ( v3 )
    result = sub_6BA55DAD(v3, v8);
  return result;
}



int __thiscall sub_6BA55285(int this)
{
  int v1; // esi@1
  int v2; // ecx@1
  int result; // eax@2
  int v4; // ecx@3

  v1 = this;
  v2 = *(_DWORD *)(this + 68);
  if ( v2 )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 12))(*(_DWORD *)(v1 + 16));  //=============> sub_6BA51576
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 60);
    if ( v4 )
      result = (*(int (**)(void))(*(_DWORD *)v4 + 8))();
  }
  if ( *(_DWORD *)v1 )
    result = uv_sem_post(*(_DWORD *)v1);
  return result;
}



int __stdcall sub_6BA51576(void *Memory)
{
  int v1; // ecx@2

  if ( (unsigned __int8)sub_6BA51524(*(_DWORD *)Memory) )
  {
    v1 = *((_DWORD *)Memory + 13);
    if ( !v1 )
      std::_Xbad_function_call();
    (*(void (**)(void))(*(_DWORD *)v1 + 8))();  //========================> preloginlogic.sub_63DA75D7
  }
  else
  {
    sub_6BA54ED2("async", "AsyncImpl::_AsyncCallback, AsyncCall Canceled, Cookie=%u.", *(_DWORD *)Memory);
  }
  sub_6BA5185B((char *)Memory + 16);
  sub_6BA51648((char *)Memory + 4);
  return sub_6BA5CC0F(Memory);
}


 
//preloginlogic.dll
int __thiscall sub_63DA75D7(void *this)
{
  int v2; // [sp+3h] [bp-5h]@0

  return sub_63DA7A08(v2, v2, (int)this, (int)this + 8);
}


int __cdecl sub_63DA7A08(int a1, int a2, int a3, int a4)
{
  return sub_63DA7DE0(a3, a4 + 16, a4 + 12, a4 + 8, a4 + 4, a4);
}
int __cdecl sub_63DA7DE0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return sub_63DA7978(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), a2, a3, a4, a5, a6);
}

int __cdecl sub_63DA7978(int (__thiscall *a1)(int, _DWORD *, _DWORD *, _DWORD *, _DWORD), int a2, _DWORD *a3, int ****a4, int ***a5, int **a6, int *a7)
{
  int v7; // edi@1
  int v8; // edx@1
  int *v9; // ecx@1
  int **v10; // ecx@3
  int ***v11; // ecx@5
  int ***v13; // [sp-10h] [bp-1Ch]@7
  int **v14; // [sp-Ch] [bp-18h]@5
  int *v15; // [sp-8h] [bp-14h]@3
  int v16; // [sp-4h] [bp-10h]@1

  v7 = *a3 + a2;
  v8 = *a7;
  v9 = &v16;
  v16 = v8;
  if ( v8 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  v15 = v9;
  v10 = &v15;
  v15 = *a6;
  if ( v15 )
    (*(void (__stdcall **)(int *))(*v15 + 4))(v15);
  v14 = v10;
  v11 = &v14;
  v14 = *a5;
  if ( v14 )
    ((void (__stdcall *)(int **))(*v14)[1])(v14);
  v13 = v11;
  v13 = (_DWORD *)*a4;
  if ( v13 )
    (*(void (__stdcall **)(int ***))(*v13 + 4))((int ***)v13);
  return a1(v7, (int ***)v13, v14, v15, v16);  //============================> sub_63DAC8C9
}



int __thiscall sub_63DAC8C9(int this, int a2, int a3, int a4, char a5)
{
  int v5; // edi@1
  unsigned __int16 v6; // ax@1
  bool v7; // zf@1
  int v8; // eax@13
  int v9; // ebx@17
  int v10; // eax@20
  int v11; // eax@20
  int v12; // eax@25
  int v14; // [sp-1Ch] [bp-6Ch]@26
  int v15; // [sp-18h] [bp-68h]@26
  int v16; // [sp-14h] [bp-64h]@26
  int v17; // [sp-10h] [bp-60h]@26
  __int16 v18; // [sp-Ch] [bp-5Ch]@26
  int v19; // [sp-8h] [bp-58h]@26
  int v20; // [sp-4h] [bp-54h]@26
  int v21; // [sp+Ch] [bp-44h]@26
  int v22; // [sp+14h] [bp-3Ch]@1
  size_t Size; // [sp+18h] [bp-38h]@1
  int v24; // [sp+1Ch] [bp-34h]@1
  int v25; // [sp+20h] [bp-30h]@17
  int v26; // [sp+24h] [bp-2Ch]@17
  int v27; // [sp+28h] [bp-28h]@1
  int v28; // [sp+2Ch] [bp-24h]@1
  int v29; // [sp+30h] [bp-20h]@1
  int v30; // [sp+34h] [bp-1Ch]@8
  int v31; // [sp+38h] [bp-18h]@10
  int v32; // [sp+3Ch] [bp-14h]@1
  int v33; // [sp+40h] [bp-10h]@1
  int v34; // [sp+44h] [bp-Ch]@1
  int v35; // [sp+48h] [bp-8h]@1
  char v36; // [sp+4Fh] [bp-1h]@4

  v5 = this;
  v35 = 0xFFFF;
  v32 = 1;
  v33 = 0;
  LOBYTE(Size) = *(_BYTE *)(this + 76);
  LOBYTE(v27) = *(_BYTE *)(this + 77);
  v24 = *(_DWORD *)(this + 80);
  v28 = 0;
  v34 = 0;
  v29 = 0;
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 56))(a2, "wCsCmdNo:", &v35);
  v6 = sub_63DA9AB7(a2, 255);
  v7 = *(_DWORD *)(v5 + 20) == 0;
  v22 = v6;
  if ( v7 )
  {
    sub_63D91C37(
      L"file",
      546,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"CTXCSProcessorMultiThread::_AsyncSend, m_bRunning==FALSE, Cmd=0x%x, SubCmd=0x%x",
      v35);
    goto LABEL_19;
  }
  v36 = 0;
  (*(void (__stdcall **)(int, const char *, char *))(*(_DWORD *)a2 + 176))(a2, "bCsCmdNoCyrpt", &v36);
  if ( v36 == 1 )
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bCsCmdNoCyrpt", &v32);
    v32 = v32 == 0;
  }
  (*(void (__stdcall **)(int, const char *, char *))(*(_DWORD *)a2 + 176))(a2, "CsCmdDecryptKeyArray", &v36);
  if ( v36 == 12 )
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 232))(a2, "CsCmdDecryptKeyArray", &v29);
  v30 = 0;
  sub_63DA782B(&v30);
  if ( v30 )
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v30 + 12))(v30, a2);
  v31 = 0;
  (*(void (__stdcall **)(int, const char *, size_t *))(*(_DWORD *)a2 + 40))(a2, "cPacketPerTime", &Size);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 40))(a2, "cRetryLimit", &v27);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 72))(a2, "dwRetryInterval", &v24);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 232))(a2, "arrRetryStrategyInfo", &v31);
  v28 = (unsigned __int8)v27;
  if ( v31 )
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v31 + 96))(v31, &v28);
  if ( (*(int (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a2 + 184))(a2, "wCSSeq", 4) )
  {
    v8 = (unsigned __int16)(*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(v5 + 52) + 12))(*(_DWORD *)(v5 + 52), v35);
    v33 = (unsigned __int16)v8;
  }
  else
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 56))(a2, "wCSSeq", &v33);
    sub_63D91C37(
      L"file",
      604,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"SendData, Use special Seq, Cmd=0x%x, SubCmd=0x%x, Seq=0x%x",
      v35);
    v8 = v33;
  }
  if ( !sub_63DA96FD(v35, v8, v32, a2, a3, &v34) ) //获得发送内容？
  {
    sub_63D91E2F(&v31);
    sub_63D91E2F(&v30);
    goto LABEL_19;
  }
  v9 = 0;
  v25 = 0;
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bNoSizeCheck", &v25);
  v26 = 0;
  
  //@v34 有发送内容？
  if ( sub_63DA9D36((int)&v34, (int)&v26, Size, v27, v24, v31, v25) < 0 ) //==================================>sub_63DA9D36
  {
    sub_63D91C37(
      L"file",
      626,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"CTXCSProcessorMultiThread::SendData, InternalSendData fail, cmd=%u, seq=%u",
      v35);
    sub_63D91E2F(&v31);
    sub_63D91E2F(&v30);
LABEL_19:
    if ( sub_63E5A06E(0x34u) )
    {
      v10 = sub_63D94BEA(&v34);
      v11 = sub_63DD9C57(v35, v33, 0, 0, v32, a3, a4, v29, a2, 0, v10);
    }
    else
    {
      v11 = 0;
    }
    sub_63DA8B42(v11);
    sub_63D91E2F(&v29);
    if ( v34 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
      v34 = 0;
    }
    goto LABEL_30;
  }
  if ( sub_63E5A06E(0x34u) )
  {
    v12 = sub_63D94BEA(&v34);
    v9 = sub_63DD9C57(v35, v33, v26, v28, v32, a3, a4, v29, a2, 0, v12);
  }
  Util::CTXSpinLock::Lock((Util::CTXSpinLock *)(v5 + 108));
  sub_63DA57EB(&v21, v9);
  *(_DWORD *)(v21 + 20) = v9;
  Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)(v5 + 108));
  v20 = sub_63D94BEA(&v34);
  v19 = v28;
  v18 = v33;
  v17 = v22;
  v16 = v35;
  v15 = v26;
  v14 = a2;
  if ( a2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  sub_63DAA0FF(v14, v15, v16, v17, v18, v19, v20);
  sub_63D91E2F(&v31);
  sub_63D91E2F(&v30);
  sub_63D91E2F(&v29);
  if ( v34 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    v34 = 0;
  }
LABEL_30:
  sub_63D91E2F(&a2);
  sub_63D91E2F(&a3);
  sub_63D91E2F(&a4);
  return sub_63D91E2F(&a5);
}

//-----------------------------------------------------------------------------------------------------------
//@a7 struct ITXBuffer*   有发送内容？
signed int __thiscall sub_63DA96FD(int this, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v7; // edi@1
  signed int v8; // esi@1
  signed int v9; // ecx@2
  const wchar_t *v10; // edx@2
  int v11; // ebx@5
  int (__stdcall *v12)(int, _DWORD *); // eax@5
  char v14; // [sp+8h] [bp-4h]@1
  int (__stdcall *v15)(int, _DWORD *); // [sp+24h] [bp+18h]@5

  v7 = this;
  Util::CTXAutoSpinLock::CTXAutoSpinLock((Util::CTXAutoSpinLock *)&v14, (struct Util::CTXSpinLock *)(this + 100));
  v8 = 0;
  if ( (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v7 + 36) + 12))(*(_DWORD *)(v7 + 36), a4, a5, a6) >= 0 )
  {
    if ( (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(v7 + 36) + 16))(*(_DWORD *)(v7 + 36), a2, a3) >= 0 )
    {
      v11 = *(_DWORD *)(v7 + 36);
      v12 = *(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)v11 + 20);
      v15 = *(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)v11 + 20);
      if ( *a7 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*a7 + 8))(*a7);
        v12 = v15;
        *a7 = 0;
      }
      if ( v12(v11, a7) >= 0 ) //====================>sub_63DD1A8D
      {
        v8 = 1;
        goto LABEL_11;
      }
      v9 = 669;
      v10 = L"SendData, GetPacketBuffer fail, Cmd=0x%x, Seq=0x%x";
    }
    else
    {
      v9 = 663;
      v10 = L"SendData, EncodePacket fail, Cmd=0x%x, Seq=0x%x";
    }
  }
  else
  {
    v9 = 656;
    v10 = L"SendData, EncodeBody fail, Cmd=0x%x, Seq=0x%x";
  }
  sub_63D91C37(L"file", v9, L"func", 2, L"CTXCSProcessor_MT", v10, a2);
LABEL_11:
  Util::CTXAutoSpinLock::~CTXAutoSpinLock((Util::CTXAutoSpinLock *)&v14);
  return v8;
}

//@a2 struct ITXBuffer*   有发送内容？
signed int __stdcall sub_63DD1A8D(int a1, int a2)
{
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 52))(a2) != 0 ? 0 : -2147467259;  //====>sub_63DD20BC
}


//@a2 struct ITXBuffer*   有发送内容？
signed int __userpurge sub_63DD20BC@<eax>(int a1@<ecx>, struct ITXBuffer **a2@<edi>, Util::Data *a3)
{
  int v3; // esi@2
  int v4; // eax@3
  int v5; // ebx@3
  int v6; // esi@3
  void (__stdcall *v7)(int, int, int); // edi@3
  int v8; // eax@3
  int v9; // ecx@3
  signed int result; // eax@5
  int v11; // [sp+8h] [bp-4h]@1

  v11 = a1;
  if ( !a3 || (v3 = a1 + 8, sub_63D925EE(a1 + 8)) )
  {
    result = 0;
  }
  else
  {
    Util::Data::CreateTXBuffer(a3, a2); ///  act===>>
    v4 = sub_63D94BEA(v3);
    v5 = *(_DWORD *)a3;
    v6 = v4;
    v7 = *(void (__stdcall **)(int, int, int))(**(_DWORD **)a3 + 64);
    v8 = sub_63DD1985(v11 + 8);
    v7(v5, v8, v6);  //sub_6B3A8760
    v9 = *(_DWORD *)(v11 + 4);
    if ( v9 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 32))(*(_DWORD *)(v11 + 4));
    result = 1;
  }
  return result;
}

int __thiscall sub_63DD1985(void *this)
{
  int v1; // ecx@1
  int result; // eax@2
  int v3; // [sp+0h] [bp-4h]@1

  v3 = (int)this;
  v1 = *(_DWORD *)this;
  if ( v1 )
  {
    v3 = 0;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v1 + 68))(v1, &v3);
    result = v3;
  }
  else
  {
    result = 0;
  }
  return result;
} 

//common.dll  高频调用
signed int __stdcall sub_6B3A8760(unsigned int i, int a2, int a3)
{
  unsigned int v3; // esi@1
  int v4; // edi@1
  int v6; // eax@5
  bool v7; // sf@5
  unsigned int v8; // edx@6
  unsigned int v9; // eax@6
  int v10; // edi@6
  int v11; // esi@6
  int v12; // eax@6
  _DWORD **v13; // ecx@6
  int v14; // ecx@8
  int v15; // esi@14
  int v16; // eax@14
  int v17; // ecx@14

  v3 = i;
  v4 = a2;
  if ( a2 == *(_DWORD *)(i + 8) )
    return -2147467259;
  (*(void (__stdcall **)(unsigned int))(*(_DWORD *)i + 32))(i);
  if ( v4 )
  {
    if ( a3 )
    {
      v6 = a3 ^ *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v3 + 8) = v4;
      v6 &= 0x7FFFFFFFu;
      v7 = (v6 ^ *(_DWORD *)(v3 + 12)) < 0;
      *(_DWORD *)(v3 + 12) ^= v6;
      if ( v7 )
      {
        Util::CTXSpinLock::Lock(&lpCriticalSection);
        v8 = i;
        v9 = dword_6B5EBB88 & 16777619
                            * ((i >> 24) ^ 16777619
                                         * ((unsigned __int8)(i >> 16) ^ 16777619
                                                                       * (BYTE1(i) ^ 16777619
                                                                                   * ((unsigned __int8)i ^ 0x811C9DC5))));
        v10 = *(_DWORD *)(dword_6B5EBB7C + 8 * v9);
        v11 = 8 * v9;
        v12 = *(_DWORD *)(8 * v9 + dword_6B5EBB7C);
        v13 = (_DWORD **)(v11 + dword_6B5EBB7C + 4);
        for ( i = v11 + dword_6B5EBB7C + 4; ; v13 = (_DWORD **)i )
        {
          v14 = v10 == dword_6B5EBB74 ? dword_6B5EBB74 : **v13;
          if ( v12 == v14 )
            break;
          if ( *(_DWORD *)(v12 + 8) == v8 )
          {
            if ( v12 != dword_6B5EBB74 )
            {
              v15 = *(_DWORD *)(v12 + 12);
              i = v8;
              v16 = sub_6B3A92C0(&i);
              v17 = a3;
              *(_DWORD *)v16 = v15;
              *(_DWORD *)(v16 + 4) = v17;
            }
            break;
          }
          v12 = *(_DWORD *)v12;
        }
        if ( Util::CTXSpinLock::g_cProcessorNum <= 1 )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else if ( !--dword_6B5E8FD8 )
        {
          InterlockedExchange(&lpCriticalSection, 0);
          return 0;
        }
      }
    }
  }
  return 0;
}

 


//-----------------------------------------------------------------------------------------------------------

// this 有发送内容？
int __thiscall sub_63DA9D36(void *this, int a2, int a3, size_t Size, int a5, int a6, int a7, int a8)
{
  int v8; // edi@1
  void *v9; // ebx@1
  int v10; // esi@2
  int v11; // eax@2
  int v12; // esi@3
  size_t v13; // eax@8
  __int16 v14; // bx@8
  unsigned __int16 v15; // di@8
  unsigned __int16 *v16; // eax@8
  size_t v17; // ST18_4@8
  int v18; // ecx@8
  unsigned __int16 *v19; // ebx@8
  const void *v20; // eax@8
  int v21; // ebx@8
  int v22; // edi@8
  int v23; // eax@8
  int v24; // esi@8
  int v25; // ebx@10
  int v26; // edi@10
  int v27; // eax@10
  int v29; // [sp+Ch] [bp-4h]@3

  v8 = a2;
  v9 = this;
  if ( !a8 )
  {
    v10 = sub_63D94BEA(a2);
    v11 = sub_63D94882(v8);
    sub_63DA8E1A(v11, v10);
  }
  v12 = *((_DWORD *)v9 + 15);
  v29 = v12;
  if ( v12 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    a8 = 0;
    Util::Data::CreateTXData((Util::Data *)&a8);
    (*(void (__stdcall **)(int, const char *, size_t))(*(_DWORD *)a8 + 248))(a8, "cPacketPerTime", Size);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a8 + 248))(a8, "cRetryLimit", a5);
    (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a8 + 280))(a8, "dwRetryInterval", a6);
    if ( a7 )
      (*(void (__stdcall **)(int, const char *, int))(*(_DWORD *)a8 + 384))(a8, "RetryStrategyInfo", a7);
    if ( *((_DWORD *)v9 + 21) && *((_DWORD *)v9 + 6) == 1 )
    {
      v13 = sub_63D94BEA(v8);
      a7 = 0;
      v14 = v13;
      Size = v13;
      sub_63D9980D(v13 + 2);
      v15 = byteswap_ushort(v14 + 2);
      v16 = (unsigned __int16 *)sub_63D94882(&a7);
      v17 = Size;
      v18 = a2;
      v19 = v16;
      *v16 = v15;
      v20 = (const void *)sub_63D94882(v18);
      memcpy(v19 + 1, v20, v17);
      v21 = a8;
      a2 = *(_DWORD *)(*(_DWORD *)v12 + 40);
      v22 = sub_63D94882(&a7);
      v23 = sub_63D94BEA(&a7);
      v24 = ((int (__stdcall *)(int, int, int, int, int))a2)(v12, v23, v22, a3, v21);
      if ( a7 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a7 + 8))(a7);
    }
    else
    {
      v25 = a8;
      a7 = *(_DWORD *)(*(_DWORD *)v12 + 40);
      v26 = sub_63D94882(v8);
      v27 = sub_63D94BEA(a2);
      v24 = ((int (__stdcall *)(int, int, int, int, int))a7)(v12, v27, v26, a3, v25); //==================>sub_63DA4259
    }
    sub_63D91E2F(&a8);
  }
  else
  {
    a2 = (int)L"err CTXCSProcessorMultiThread::SendData !m_pChannel";
    sub_63D92907(L"file", 881, L"func", 2, L"CTXCSProcessor_MT", (const char *)L"%s", &a2);
    v24 = -2147467259;
  }
  sub_63D91E2F(&v29);
  return v24;
}

int __stdcall sub_63DA4259(int a1, int a2, void *a3, int a4, int a5)
{
  int v5; // edi@5
  int v7; // eax@9
  int v8; // esi@9
  int v9; // ebx@9
  int (__thiscall *v10)(int, int, int, int *); // edi@9
  int v11; // esi@9
  int v12; // eax@9
  int v13; // eax@9
  signed int v14; // esi@10
  int v15; // [sp+8h] [bp-Ch]@9
  int v16; // [sp+Ch] [bp-8h]@11
  int v17; // [sp+10h] [bp-4h]@11

  if ( a4 )
    *(_DWORD *)a4 = 0;
  if ( !a2 || !a3 )
    return -2147467259;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    a2 = (int)L"CUdpChannelMultiThread::SendData, m_channel is NULL.";
    sub_63D92907(L"file", 131, L"func", 2, L"channel_mt", (const char *)L"%s", &a2);
    return -2147467259;
  }
  v7 = sub_63DA4BFE(a5);
  v8 = v7;
  v15 = v7;
  arksocket::Buffer::Buffer((arksocket::Buffer *)&a5);
  a1 = 0;
  arksocket::Buffer::CopyFrom((arksocket::Buffer *)&a5, a3, a2);
  v9 = *(_DWORD *)(v5 + 20);
  v10 = *(int (__thiscall **)(int, int, int, int *))(*(_DWORD *)v9 + 28);
  v11 = arksocket::ChannelSendOption::operator arksocket::IChannelSendOption *(v8);
  v12 = arksocket::Buffer::operator arksocket::IConstBuffer *(&a5);
  v13 = v10(v9, v12, v11, &a1); //===========>arksocket.sub_6BA59F70  => ... => WSASendTo
  if ( v13 )
  {
    sub_63D91C37(L"file", 143, L"func", 2, L"channel_mt", L"CUdpChannelMultiThread::SendData, Send fail, ret=%d.", v13);
    v14 = -2147467259;
  }
  else
  {
    v14 = 0;
    v16 = 0;
    v17 = 0;
    sub_63DA4DFF(a3, a2, &v16, &v17);
    GetTickCount();
    sub_63D91C37(
      L"file",
      150,
      L"func",
      3,
      L"channel_mt",
      L"CUdpChannelMultiThread::SendData, cmd=0x%x, seq=0x%x, cookie=%u, tick=%u",
      v16);
    if ( a4 )
      *(_DWORD *)a4 = a1;
  }
  arksocket::Buffer::~Buffer((arksocket::Buffer *)&a5);
  sub_63DA47B7(&v15);
  return v14;
}
//arksocket.dll
signed int __thiscall sub_6BA59F70(void *this, int a2, int a3, int *a4)
{
  int v4; // ebx@1
  DWORD v5; // eax@3
  arksocket::IOLoop *v6; // ecx@3
  signed int v7; // esi@4
  signed int result; // eax@6
  char v9; // [sp-28h] [bp-78h]@5
  int v10; // [sp-24h] [bp-74h]@5
  int v11; // [sp-20h] [bp-70h]@5
  int v12; // [sp-1Ch] [bp-6Ch]@5
  int v13; // [sp-18h] [bp-68h]@5
  int v14; // [sp-14h] [bp-64h]@5
  int v15; // [sp-10h] [bp-60h]@5
  int v16; // [sp-Ch] [bp-5Ch]@5
  int v17; // [sp-8h] [bp-58h]@5
  int v18; // [sp-4h] [bp-54h]@5
  DWORD v19; // [sp+Ch] [bp-44h]@3
  int (__thiscall **v20)(void *, char); // [sp+10h] [bp-40h]@5
  int v21; // [sp+14h] [bp-3Ch]@5
  int (__thiscall **v22)(void *, char); // [sp+18h] [bp-38h]@5
  int v23; // [sp+1Ch] [bp-34h]@5
  int (__stdcall *v24)(char, int, char, int, int, int, int); // [sp+20h] [bp-30h]@5
  int v25; // [sp+24h] [bp-2Ch]@5
  DWORD v26; // [sp+28h] [bp-28h]@5
  int v27; // [sp+2Ch] [bp-24h]@5
  int v28; // [sp+30h] [bp-20h]@5
  char v29; // [sp+38h] [bp-18h]@5
  char v30; // [sp+40h] [bp-10h]@5
  int v31; // [sp+48h] [bp-8h]@5

  v4 = (int)this;
  if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2) )
  {
    *a4 = arksocket::CookieMgr::GetCookie((volatile LONG *)(v4 + 180));
    v5 = GetTickCount();
    v6 = *(arksocket::IOLoop **)(v4 + 16);
    v19 = v5;
    if ( arksocket::IOLoop::IsLoopThread(v6) )
    {
      v7 = sub_6BA5A10A(a2, a3, *a4, v19, 0); //=============>sub_6BA5A10A
    }
    else
    {
      v23 = 0;
      v22 = &off_6BA5E370;
      sub_6BA51D01(a3);
      v21 = 0;
      v20 = &off_6BA5E370;
      sub_6BA51D01(a2);
      v25 = 0;
      v27 = 0;
      v26 = v19;
      v24 = sub_6BA5A0AF;
      v28 = *a4;
      sub_6BA57676(&v22);
      sub_6BA57676(&v20);
      v18 = 0;
      v31 = v4;
      v18 = sub_6BA5AADA(&v24);
      sub_6BA51648(&v30);
      sub_6BA51648(&v29);
      v7 = arksocket::Async::AsyncCall(v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
      sub_6BA51648(&v20);
      sub_6BA51648(&v22);
    }
    result = v7;
  }
  else
  {
    sub_6BA54ED2("udp_channel", "UdpChannelImpl::Send, buffer is NULL.");
    result = -1;
  }
  return result;
}



signed int __thiscall sub_6BA5A10A(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi@1
  int v8; // eax@4
  int v9; // esi@6

  v6 = this;
  if ( !a2 )
  {
    sub_6BA54ED2("udp_channel", "UdpChannelImpl::_SendData, buffer is NULL.");
    return -1;
  }
  v8 = a3;
  if ( !a3 )
  {
    v8 = *(_DWORD *)(this + 188);
    if ( !v8 )
    {
      arksocket::ChannelSendOption::ChannelSendOption((arksocket::ChannelSendOption *)&a3);
      v9 = a3;
      (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 20))(a3);
      sub_6BA51D01(v9);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v8 = *(_DWORD *)(v6 + 188);
    }
  }
  if ( !(unsigned __int8)sub_6BA524FC(a2, v8, a4, a5, a6) ) //=============================>sub_6BA524FC
  {
    sub_6BA54ED2("udp_channel", "UdpChannelImpl::_SendData, SendPacket fail.");
    return -1;
  }
  return 0;
}

char __thiscall sub_6BA524FC(char *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // esi@1
  int v7; // eax@3
  int v8; // edi@3
  int v9; // ebx@3
  int v11; // eax@7
  int v12; // ecx@7
  char v13; // [sp+10h] [bp-Ch]@7

  v6 = this;
  if ( !a2 || !a3 )
    return 0;
  v7 = sub_6BA5CBDF(0x40u);
  v8 = sub_6BA523DC(v7);
  sub_6BA51D01(a2);
  v9 = a4;
  *(_DWORD *)v8 = a4;
  arksocket::IPEndPoint::operator=(v6 + 8);
  sub_6BA51D01(a3);
  *(_DWORD *)(v8 + 32) = a5;
  *(_DWORD *)(v8 + 36) = a6;
  a2 = v9;
  if ( *(_DWORD *)sub_6BA52EC3(&a3, &a2) != *((_DWORD *)v6 + 4) )
  {
    sub_6BA54ED2("data_sender", "DataSender::SendPacket, same cookie found, cookie=%u", v9);
    return 0;
  }
  a5 = v9;
  a6 = v8;
  v11 = sub_6BA539E7(&a5);
  sub_6BA53A34(&v13, v12, v11 + 16, v11);
  sub_6BA525C4(v8); //===========================================>
  sub_6BA52D3A(v6);
  return 1;
}

int __thiscall sub_6BA525C4(int this, int a2)
{
  int v2; // esi@1
  int v3; // edi@1
  __time64_t v4; // rax@7
  int v5; // ebx@7
  int v6; // edx@7
  int v7; // eax@7
  __int64 v9; // [sp+Ch] [bp-8h]@7
  _DWORD *v10; // [sp+1Ch] [bp+8h]@7

  v2 = a2;
  v3 = this;
  if ( !*(_BYTE *)(this + 4) && arksocket::IPEndPoint::IsValid((arksocket::IPEndPoint *)(this + 8)) )
  {
    if ( !arksocket::IPEndPoint::IsValid((arksocket::IPEndPoint *)(a2 + 12)) )
      arksocket::IPEndPoint::operator=(v3 + 8);
    if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a2) )
      ++*(_DWORD *)(a2 + 20);
  }
  v4 = time64(0);
  v5 = *(_DWORD *)(a2 + 56);
  v9 = v4;
  v10 = *(_DWORD **)(v5 + 4);
  v6 = sub_6BA5387B(v5, *(_DWORD *)(v5 + 4), &v9);
  v7 = *(_DWORD *)(v2 + 60);
  if ( (unsigned int)(268435454 - v7) < 1 )
    std::_Xlength_error("list<T> too long");
  *(_DWORD *)(v2 + 60) = v7 + 1;
  *(_DWORD *)(v5 + 4) = v6;
  *v10 = v6;
  return sub_6BA52663(v2);
}

int __thiscall sub_6BA52E27(int this, int a2)
{
  int v2; // ecx@1
  int result; // eax@2

  v2 = *(_DWORD *)(this + 64);
  if ( v2 )
    result = (*(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v2 + 24))(
               *(_DWORD *)(a2 + 8),
               a2 + 12,
               *(_DWORD *)a2);   //========>sub_6BA5B0D7
  else
    result = -1;
  return result;
}


int __thiscall sub_6BA5B0D7(int this, int a2, arksocket::IPEndPoint *a3, int a4)
{
  int v4; // ebx@1
  int result; // eax@5
  int v6; // esi@6
  char v7; // [sp-28h] [bp-60h]@6
  int v8; // [sp-24h] [bp-5Ch]@6
  int v9; // [sp-20h] [bp-58h]@6
  int v10; // [sp-1Ch] [bp-54h]@6
  int v11; // [sp-18h] [bp-50h]@6
  int v12; // [sp-14h] [bp-4Ch]@6
  int v13; // [sp-10h] [bp-48h]@6
  int v14; // [sp-Ch] [bp-44h]@6
  int v15; // [sp-8h] [bp-40h]@6
  int v16; // [sp-4h] [bp-3Ch]@6
  int (__thiscall **v17)(void *, char); // [sp+10h] [bp-28h]@6
  int v18; // [sp+14h] [bp-24h]@6
  int (__stdcall *v19)(char, int, int, int); // [sp+18h] [bp-20h]@6
  int v20; // [sp+1Ch] [bp-1Ch]@6
  int v21; // [sp+20h] [bp-18h]@6
  char v22; // [sp+24h] [bp-14h]@6
  int v23; // [sp+30h] [bp-8h]@6

  v4 = this;
  if ( *(_DWORD *)(this + 12) && a2 && arksocket::IPEndPoint::IsValid(a3) )
  {
    if ( arksocket::IOLoop::IsLoopThread(*(arksocket::IOLoop **)(v4 + 12)) )
    {
      result = sub_6BA5B21C(a2, a3, a4); //=================> sub_6BA5B21C
    }
    else
    {
      v18 = 0;
      v17 = &off_6BA5E370;
      sub_6BA51D01(a2);
      v20 = 0;
      v19 = sub_6BA5B1E6;
      v21 = a4;
      arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v22, a3);
      sub_6BA57676(&v17);
      v16 = 0;
      v23 = v4;
      v16 = sub_6BA5C04A(&v19);
      sub_6BA5B1CA(&v21);
      v6 = arksocket::Async::AsyncCall(v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
      sub_6BA51648(&v17);
      if ( v6 )
      {
        v16 = v6;
        sub_6BA54ED2("udp", "UdpImpl::Send, AsyncCall fail, ret=%d", v6);
      }
      result = v6;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}

signed int __thiscall sub_6BA5B21C(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // ebx@1
  int v5; // edi@1
  int v6; // eax@1
  const void **v7; // eax@2
  int v8; // esi@4
  int v9; // eax@5
  signed int result; // eax@7
  int v11; // eax@10
  int v12; // eax@13
  int v13; // esi@13
  int v14; // ST0C_4@13
  int v15; // ecx@13
  int v16; // esi@13
  _DWORD *v17; // edi@13
  int v18; // edx@13
  int v19; // eax@13
  void *Memory; // [sp+10h] [bp-38h]@2
  int v21; // [sp+14h] [bp-34h]@13
  void *v22; // [sp+18h] [bp-30h]@2
  char v23; // [sp+1Ch] [bp-2Ch]@2
  int v24; // [sp+20h] [bp-28h]@1
  int v25; // [sp+24h] [bp-24h]@1
  int v26; // [sp+28h] [bp-20h]@1
  char v27; // [sp+2Ch] [bp-1Ch]@5

  v24 = -1;
  v4 = this;
  v26 = a2;
  v5 = a3;
  v6 = *this;
  v25 = a3;
  if ( !(unsigned __int8)(*(int (**)(void))(v6 + 44))() )
  {
    arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v22);
    v23 = 1;
    v7 = (const void **)arksocket::IPEndPoint::IPEndPoint(
                          (arksocket::IPEndPoint *)&Memory,
                          (const struct arksocket::IPAddress *)&arksocket::IPAddress::Any,
                          0);
    if ( (const void **)&v22 != v7 )
    {
      qmemcpy(v22, *v7, 0x80u);
      v5 = v25;
    }
    sub_6BA5CC0F(Memory);
    sub_6BA5AED3((arksocket::IPEndPoint *)&v22, (int)&v24);
    v8 = v24;
    if ( v24 )
    {
      arksocket::IPEndPoint::GetAddress(v5, &Memory);
      v9 = arksocket::IPAddress::GetString(&v27);
      if ( *(_DWORD *)(v9 + 20) >= 0x10u )
        v9 = *(_DWORD *)v9;
      sub_6BA54ED2("udp", "UvUdpImpl, _Send, Open Fail, ret=%d, dest-addr=%s", v8, v9);
      sub_6BA53015(&v27);
      arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Memory);
      sub_6BA5CC0F(v22);
      return v8;
    }
    sub_6BA5CC0F(v22);
  }
  if ( v4[19] <= 0x20000 )
  {
    v12 = sub_6BA5CBDF(0x10u);
    v13 = v12;
    *(_DWORD *)v12 = 0;
    *(_DWORD *)(v12 + 4) = 0;
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 12) = 0;
    arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)(v12 + 4));
    v14 = v26;
    v15 = v13 + 8;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)v15 = &off_6BA5E370;
    v21 = v13;
    sub_6BA51D01(v14);
    arksocket::IPEndPoint::operator=(v25);
    *(_DWORD *)v21 = a4;
    v16 = v4[17];
    v17 = *(_DWORD **)(v16 + 4);
    v18 = sub_6BA519C1(v4[17], *(_DWORD *)(v16 + 4), &v21);
    v19 = v4[18];
    if ( (unsigned int)(357913940 - v19) < 1 )
      std::_Xlength_error("list<T> too long");
    v4[18] = v19 + 1;
    *(_DWORD *)(v16 + 4) = v18;
    *v17 = v18;
    v4[19] += (*(int (**)(void))(**(_DWORD **)(v21 + 12) + 16))();
    sub_6BA5B429(v4);   //=========>sub_6BA5B429
    result = 0;
  }
  else
  {
    arksocket::IPEndPoint::GetAddress(v5, &Memory);
    v11 = arksocket::IPAddress::GetString(&v27);
    if ( *(_DWORD *)(v11 + 20) >= 0x10u )
      v11 = *(_DWORD *)v11;
    sub_6BA54ED2(
      "udp",
      "UvUdpImpl, _Send, send queue is full, drop the data, queue-size=%u, dest-addr=%s.",
      v4[19],
      v11);
    sub_6BA53015(&v27);
    arksocket::IPAddress::~IPAddress((arksocket::IPAddress *)&Memory);
    result = -1;
  }
  return result;
}


void __thiscall sub_6BA5B429(int this)
{
  int v1; // edi@1
  _DWORD *v2; // ecx@3
  int v3; // esi@3
  int v4; // eax@3
  int v5; // edx@3
  int v6; // eax@3
  int v7; // ecx@3
  int v8; // eax@4
  int v9; // ecx@4
  int v10; // edi@4
  char v11; // [sp-28h] [bp-68h]@4
  int v12; // [sp-24h] [bp-64h]@4
  int v13; // [sp-20h] [bp-60h]@4
  int v14; // [sp-1Ch] [bp-5Ch]@4
  int v15; // [sp-18h] [bp-58h]@4
  int v16; // [sp-14h] [bp-54h]@4
  int v17; // [sp-10h] [bp-50h]@4
  int v18; // [sp-Ch] [bp-4Ch]@4
  int v19; // [sp-8h] [bp-48h]@4
  int v20; // [sp-4h] [bp-44h]@4
  int (__stdcall *v21)(int, int, int, int); // [sp+10h] [bp-30h]@4
  int v22; // [sp+14h] [bp-2Ch]@4
  int v23; // [sp+18h] [bp-28h]@4
  char v24; // [sp+1Ch] [bp-24h]@4
  int v25; // [sp+28h] [bp-18h]@4
  int v26; // [sp+2Ch] [bp-14h]@4
  char v27; // [sp+30h] [bp-10h]@4
  int v28; // [sp+38h] [bp-8h]@1
  int v29; // [sp+3Ch] [bp-4h]@3

  v1 = this;
  v28 = this;
  if ( *(_DWORD *)(this + 72) && !(*(_BYTE *)(this + 80) & 1) )
  {
    v2 = **(_DWORD ***)(this + 68);
    v3 = v2[2];
    *(_DWORD *)v2[1] = *v2;
    *(_DWORD *)(*v2 + 4) = v2[1];
    --*(_DWORD *)(v1 + 72);
    sub_6BA5194D(v2);
    v4 = (*(int (**)(void))(**(_DWORD **)(v3 + 12) + 16))();
    v5 = *(_DWORD *)(v1 + 56);
    *(_DWORD *)(v1 + 76) -= v4;
    v6 = sub_6BA569A6(
           *(_DWORD **)(v1 + 36),
           *(_DWORD *)(v1 + 16),
           *(_DWORD *)(v3 + 12),
           (arksocket::IPEndPoint *)(v3 + 4),
           v5 != 0 ? v5 + 8 : 0,
           *(_DWORD *)v3);   //===================> sub_6BA569A6
    v29 = v6;
    if ( v6 )
    {
      sub_6BA54ED2("udp", "UvUdpImpl::_SendQueueData, Send fail, ret=%d", v6);
      v8 = sub_6BA57676(v3 + 8);
      v9 = *(_DWORD *)v3;
      v22 = 0;
      v10 = v8;
      v23 = v9;
      v21 = sub_6BA5B52F;
      arksocket::IPEndPoint::IPEndPoint((arksocket::IPEndPoint *)&v24, (const struct arksocket::IPEndPoint *)(v3 + 4));
      sub_6BA57676(v10);
      v1 = v28;
      v20 = 0;
      v25 = v29;
      v26 = v28;
      v20 = sub_6BA5C092(&v21);
      sub_6BA5B1CA(&v23);
      arksocket::Async::AsyncCall(v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
      sub_6BA51648(&v27);
    }
    *(_DWORD *)(v1 + 80) |= 1u;
    sub_6BA5BACB((void *)v3, v7);
  }
}


//arksocket
int __thiscall sub_6BA569A6(_DWORD *this, int a2, int a3, arksocket::IPEndPoint *a4, int a5, int a6)
{
  _DWORD *v6; // edi@1
  int v7; // eax@7
  int v8; // ebx@7
  int *v9; // esi@7
  int v10; // ecx@7
  _DWORD *v11; // ebx@9
  int v12; // edi@9
  int v13; // eax@9
  int v14; // edx@9
  int v15; // eax@9
  int v16; // edi@9
  int v17; // eax@10
  int *v18; // ecx@10
  int *v19; // ebx@11
  int v20; // edi@11
  int v22; // [sp+10h] [bp-14h]@9
  int v23; // [sp+14h] [bp-10h]@9
  int v24; // [sp+18h] [bp-Ch]@1

  v6 = this;
  v24 = (int)this;
  if ( !a2 || !a3 || !arksocket::IPEndPoint::IsValid(a4) || !a5 )
  {
    sub_6BA54ED2("op", "UvUdpSend::Send, Invalid Arg");
    return -1;
  }
  if ( v6[3] )
  {
    sub_6BA54ED2("op", "UvUdpSend::Send, sending in progress.");
    return -1;
  }
  v7 = sub_6BA5CBDF(0x68u);
  v8 = sub_6BA56916(v7);
  v9 = (int *)v8;
  v10 = *(_DWORD *)(v8 + 84);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 8))();
  *(_DWORD *)(v8 + 84) = v6;
  (*(void (__thiscall **)(void *))(*v6 + 4))(v6);
  v11 = (_DWORD *)(v8 + 4);
  *v11 = v6;
  v12 = (*(int (**)(void))(*(_DWORD *)a3 + 16))();
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3); //sub_6BA51A9B
  v22 = uv_buf_init(v13, v12);
  v23 = v14;
  v15 = uv_udp_send(v11, a2, &v22, 1, *(_DWORD *)a4, sub_6BA56B21);   //============================> uv_udp_send
  v16 = v15;
  if ( v15 )
  {
    v17 = uv_strerror(v15);
    sub_6BA54ED2("op", "UvUdpSend, uv_udp_send fail, check=%d, ret=%d, %s", -1430532899, v16, v17);
  }
  else
  {
    v19 = v9;
    *v9 = a2;
    sub_6BA51D01(a5);
    sub_6BA51D01(a3);
    arksocket::IPEndPoint::operator=(a4);
    v20 = v24;
    v9 = 0;
    v19[19] = a6;
    v18 = *(int **)(v20 + 12);
    if ( v19 != v18 && v18 )
      sub_6BA57792(v18, *(_DWORD *)(v20 + 12));
    *(_DWORD *)(v20 + 12) = v19;
    v16 = 0;
  }
  if ( v9 )
    sub_6BA57792(v9, (int)v18);
  return v16;
}


int __thiscall sub_6BA51A9B(int this)
{
  return *(_DWORD *)(this + 12);
}



//=========================================================
//释放消息？

Address  To       From     Si Comment                Party 
0866FABC 6BA51A7C 6C68DC8E 18 libtcmalloc.6C68DC8E   User  // free
0866FAD4 6BA51143 6BA51A7C 40 arksocket.6BA51A7C     User	//sub_6BA51A63
0866FB14 6BA5A33E 6BA51143 18 arksocket.6BA51143     User	//InternalRelease
0866FB2C 6BA5A2E6 6BA5A33E 1C arksocket.6BA5A33E     User	//sub_6BA5A31A   //.faq 怎么会调用到  InternalRelease
0866FB48 63DA4428 6BA5A2E6 8  arksocket.6BA5A2E6     User	//sub_6BA5A2B2
0866FB50 63DA85E8 63DA4428 1C preloginlogic.63DA4428 User	//sub_63DA440F
0866FB6C 6BA552A5 63DA85E8 24 preloginlogic.63DA85E8 User	//sub_63DA858E
0866FB90 739539A7 6BA552A5 20 arksocket.6BA552A5     User //sub_6BA55285
0866FBB0 73953A9C 739539A7 24 libuv.739539A7         User
0866FBD4 6BA55696 73953A9C 20 libuv.73953A9C         User	//uv_run
0866FBF4 73960E29 6BA55696 18 arksocket.6BA55696     User   
0866FC0C 778538DF 73960E29 38 libuv.73960E29         System
0866FC44 75BD6359 778538DF 10 ucrtbase.778538DF      System
0866FC54 77CB8944 75BD6359 5C kernel32.75BD6359      System
0866FCB0 77CB8914 77CB8944 10 ntdll.77CB8944         System
0866FCC0 00000000 77CB8914    ntdll.77CB8914         User



//arksocket
int __thiscall sub_6BA55285(int this)
{
  int v1; // esi@1
  int v2; // ecx@1
  int result; // eax@2
  int v4; // ecx@3

  v1 = this;
  v2 = *(_DWORD *)(this + 68);
  if ( v2 )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 12))(*(_DWORD *)(v1 + 16));
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 60);
    if ( v4 )
      result = (*(int (**)(void))(*(_DWORD *)v4 + 8))();   //=========>sub_63DA858E
  }
  if ( *(_DWORD *)v1 )
    result = uv_sem_post(*(_DWORD *)v1);
  return result;
}

//preloginlogic
int __thiscall sub_63DA858E(void *this)
{
  _DWORD *v1; // edi@1
  int v2; // eax@1
  int v3; // esi@1
  int v4; // edx@3
  int *v5; // ecx@3
  int v6; // eax@3
  int v8; // [sp+8h] [bp-8h]@1
  int v9; // [sp+Ch] [bp-4h]@3

  v1 = this;
  *(_DWORD *)(*(_DWORD *)this + 20) = 0;
  *(_BYTE *)(*(_DWORD *)this + 88) = *((_BYTE *)this + 4);
  sub_63D91C37(
    L"file",
    269,
    L"func",
    2,
    L"CTXCSProcessor_MT",
    L"CTXCSProcessorMultiThread::Stop cSeason[%.2x]",
    *((_BYTE *)this + 4));
  v2 = *v1;
  v3 = *(_DWORD *)(*v1 + 60);
  v8 = v3;
  if ( v3 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 48))(v3);  //================>sub_63DA440F
    v2 = *v1;
  }
  *(_BYTE *)(v2 + 88) = 0;
  Util::CTXSpinLock::Lock((Util::CTXSpinLock *)(*v1 + 108));
  v4 = *v1;
  v5 = *(int **)(*v1 + 44);
  v6 = *v5;
  v9 = v6;
  if ( (int *)v6 != v5 )
  {
    do
    {
      sub_63DA7D93((volatile LONG *)(v6 + 20));
      sub_63D981F0(&v9);
      v4 = *v1;
      v6 = v9;
    }
    while ( v9 != *(_DWORD *)(*v1 + 44) );
  }
  sub_63DA61B3(v4 + 44);
  Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)(*v1 + 108));
  sub_63DAB94E(*v1);
  return sub_63D91E2F(&v8);
}

//preloginlogic
signed int __stdcall sub_63DA440F(int a1)
{
  int v1; // ecx@1
  signed int result; // eax@2

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    (*(void (**)(void))(*(_DWORD *)v1 + 40))();  //========> sub_6BA5A2B2
    result = 0;
  }
  else
  {
    result = -2147467259;
  }
  return result;
}




int __thiscall sub_6BA5A2B2(void *this)
{
  void *v1; // esi@1
  int v2; // ecx@5
  int v4; // [sp-28h] [bp-38h]@5
  int v5; // [sp-24h] [bp-34h]@5
  int v6; // [sp-14h] [bp-24h]@5
  int v7; // [sp-10h] [bp-20h]@5
  int v8; // [sp-Ch] [bp-1Ch]@5
  int v9; // [sp-8h] [bp-18h]@5
  int (__thiscall **v10)(void *, char); // [sp+8h] [bp-8h]@1
  void *v11; // [sp+Ch] [bp-4h]@1

  v1 = this;
  v10 = &off_6BA5E370;
  v11 = this;
  if ( this )
    (*(void (**)(void))(*(_DWORD *)this + 4))();
  if ( arksocket::IOLoop::IsLoopThread(*((arksocket::IOLoop **)v1 + 4)) )
  {
    sub_6BA5A31A((char *)v1); //==================>sub_6BA5A31A
  }
  else
  {
    v2 = *((_DWORD *)v1 + 4);
    arksocket::IOLoop::SyncCall((unsigned int)off_6BA5F8EC, v5, sub_6BA5A31A, 0, v1, v6, v7, v8, v9, &v4);
  }
  return sub_6BA51648((int)&v10);
}

int __thiscall sub_6BA5A31A(char *this)
{
  char *v1; // esi@1
  int (__thiscall **v3)(void *, char); // [sp+8h] [bp-8h]@1
  char *v4; // [sp+Ch] [bp-4h]@1

  v1 = this;
  v3 = &off_6BA5E370;
  v4 = this;
  if ( this )
    (*(void (**)(void))(*(_DWORD *)this + 4))();
  sub_6BA5278B(v1 + 112); //============> sub_6BA5278B
  return sub_6BA51648(&v3);
}

int __thiscall arksocket::RefCountBase::InternalRelease(arksocket::RefCountBase *this)
{
  arksocket::RefCountBase *v1; // esi@1
  LONG v2; // eax@1
  int v3; // edi@1

  v1 = this;
  v2 = InterlockedExchangeAdd((volatile LONG *)this + 1, -1);
  v3 = v2 - 1;
  if ( v2 == 1 && v1 )
    (**(void (__thiscall ***)(arksocket::RefCountBase *, signed int))v1)(v1, 1);  //============> sub_6BA51A63
  return v3;
}



void __thiscall sub_6BA51A63(int this)
{
  int v1; // esi@1
  void *v2; // ST00_4@1

  v1 = this;
  v2 = *(void **)(this + 12);
  *(_DWORD *)this = &off_6BA5E3D4;
  *(_DWORD *)(this + 4) = &off_6BA5E3D0;
  free(v2);
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 4) = arksocket::RefCountBase::`vftable';
  *(_DWORD *)(v1 + 8) = -1;
  *(_DWORD *)v1 = &arksocket::IRefCount::`vftable';
}







//========================================================================================
//发送消息框打字时响应
 
Address  To       From     Si Comment                Party 
0866FA0C 63DA42DF 6BA51C56 28 arksocket.6BA51C56     User   //arksocket::Buffer::CopyFrom
0866FA34 63DA9E9A 63DA42DF 2C preloginlogic.63DA42DF User	//sub_63DA4259 	//公用方法?
0866FA60 63DACEEC 63DA9E9A 70 preloginlogic.63DA9E9A User	//sub_63DA9D36   //公用方法?
0866FAD0 63DA7973 63DACEEC 24 preloginlogic.63DACEEC User	//sub_63DACCAE  ---关键方法 ?
0866FAF4 63DA7DDB 63DA7973 24 preloginlogic.63DA7973 User	//sub_63DA791A
0866FB18 63DA7A03 63DA7DDB 20 preloginlogic.63DA7DDB User	//sub_63DA7DBC
0866FB38 63DA75D2 63DA7A03 24 preloginlogic.63DA7A03 User	//sub_63DA79E4
0866FB5C 6BA5159A 63DA75D2 C  preloginlogic.63DA75D2 User	//sub_63DA75B9
0866FB68 6BA55297 6BA5159A 28 arksocket.6BA5159A     User	//sub_6BA51576//公用
0866FB90 739539A7 6BA55297 20 arksocket.6BA55297     User	//sub_6BA55285//公用
0866FBB0 73953A9C 739539A7 24 libuv.739539A7         User
0866FBD4 6BA55696 73953A9C 20 libuv.73953A9C         User
0866FBF4 73960E29 6BA55696 18 arksocket.6BA55696     User
0866FC0C 778538DF 73960E29 38 libuv.73960E29         System
0866FC44 75BD6359 778538DF 10 ucrtbase.778538DF      System
0866FC54 77CB8944 75BD6359 5C kernel32.75BD6359      System
0866FCB0 77CB8914 77CB8944 10 ntdll.77CB8944         System
0866FCC0 00000000 77CB8914    ntdll.77CB8914         User

 
 
 //arksocket
 int __thiscall sub_6BA55285(int this)
{
  int v1; // esi@1
  int v2; // ecx@1
  int result; // eax@2
  int v4; // ecx@3

  v1 = this;
  v2 = *(_DWORD *)(this + 68);
  if ( v2 )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 12))(*(_DWORD *)(v1 + 16));
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 60);
    if ( v4 )
      result = (*(int (**)(void))(*(_DWORD *)v4 + 8))();
  }
  if ( *(_DWORD *)v1 )
    result = uv_sem_post(*(_DWORD *)v1);
  return result;
}

//arksocket
int __stdcall sub_6BA51576(void *Memory)
{
  int v1; // ecx@2

  if ( (unsigned __int8)sub_6BA51524(*(_DWORD *)Memory) )
  {
    v1 = *((_DWORD *)Memory + 13);
    if ( !v1 )
      std::_Xbad_function_call();
    (*(void (**)(void))(*(_DWORD *)v1 + 8))();
  }
  else
  {
    sub_6BA54ED2("async", "AsyncImpl::_AsyncCallback, AsyncCall Canceled, Cookie=%u.", *(_DWORD *)Memory);
  }
  sub_6BA5185B((char *)Memory + 16);
  sub_6BA51648((int)Memory + 4);
  return sub_6BA5CC0F(Memory);
}

//arksocket
int __thiscall sub_63DA75B9(void *this)
{
  int v2; // [sp+3h] [bp-5h]@0

  return sub_63DA79E4(v2, v2, (int)this, (int)this + 8);
}

int __cdecl sub_63DA79E4(int a1, int a2, int a3, int a4)
{
  return sub_63DA7DBC(a3, (int *)(a4 + 16), (int ***)(a4 + 12), (int *)(a4 + 8), (int **)(a4 + 4), (int *)a4);
}

 int __cdecl sub_63DA7DBC(int a1, int *a2, int ***a3, int *a4, int **a5, int *a6)
{
  return sub_63DA791A(*(int (__thiscall **)(int, int **, int, int *, int))a1, *(_DWORD *)(a1 + 4), a2, a3, a4, a5, a6);
}


// dump [[esp+c]] 断点时,地址不变，内容也不会修改
int __cdecl sub_63DA791A(int (__thiscall *a1)(int, int **, int, int *, int), int a2, int *a3, int ***a4, int *a5, int **a6, int *a7)
{
  int v7; // edi@1
  int v8; // esi@1
  int *v9; // ecx@1
  int **v10; // ecx@3
  int **v12; // [sp-10h] [bp-1Ch]@5
  int v13; // [sp-Ch] [bp-18h]@5
  int *v14; // [sp-8h] [bp-14h]@3
  int v15; // [sp-4h] [bp-10h]@1

  v7 = *a3 + a2;
  v8 = *a5;
  v15 = *a3;
  v9 = &v15;
  v15 = *a7;
  if ( v15 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 4))(v15);
  v14 = v9;
  v10 = &v14;
  v14 = *a6;
  if ( v14 )
    (*(void (__stdcall **)(int *))(*v14 + 4))(v14);
  v13 = v8;
  v12 = v10;
  v12 = *a4;
  if ( v12 )
    ((void (__stdcall *)(int **))(*v12)[1])(v12);
  return a1(v7, v12, v13, v14, v15);  //======================>sub_63DACCAE
}
 
 

 
//[esp+4] @this 每次输入字符时会变  
 //[esp+8] @a2  cmd操作字符?   [esp+8] 6179AA50 "tencent.im.cs.cmd0x3e3.ReqBody"   //[esp+8] 63E7970C "tencent.im.cs.cmd0x425.ReqBody" // [esp+8] 64877B9C "tencent.im.cs.cmd0x39a.ReqBody"
 //[esp+C] 00000000 
//[esp+10] 13F2CA50 "P¸æc¸¸æc\x03"     //.faq 地址不变，可能是类容？
//[esp+14] 04AFAAB0 &"°ª¯\x04"		   //.faq 地址不变，可能是类容？
 int __thiscall sub_63DACCAE(void *this, int a2, const wchar_t *a3, int a4, char a5)
{
  int v5; // ebx@1
  void *v6; // edi@1
  int v7; // eax@12
  int v8; // eax@19
  int v9; // eax@19
  int v10; // eax@24
  int v12; // [sp-1Ch] [bp-68h]@25
  int v13; // [sp-18h] [bp-64h]@25
  int v14; // [sp-14h] [bp-60h]@25
  __int16 v15; // [sp-Ch] [bp-58h]@25
  int v16; // [sp-8h] [bp-54h]@25
  int v17; // [sp-4h] [bp-50h]@25
  int v18; // [sp+Ch] [bp-40h]@3
  size_t Size; // [sp+10h] [bp-3Ch]@9
  int v20; // [sp+14h] [bp-38h]@9
  int v21; // [sp+18h] [bp-34h]@15
  int v22; // [sp+1Ch] [bp-30h]@9
  int v23; // [sp+20h] [bp-2Ch]@25
  int v24; // [sp+24h] [bp-28h]@7
  int v25; // [sp+28h] [bp-24h]@1
  int v26; // [sp+2Ch] [bp-20h]@1
  int v27; // [sp+30h] [bp-1Ch]@1
  int v28; // [sp+34h] [bp-18h]@9
  int v29; // [sp+38h] [bp-14h]@1
  int v30; // [sp+3Ch] [bp-10h]@1
  int v31; // [sp+40h] [bp-Ch]@1
  int v32; // [sp+44h] [bp-8h]@1
  char v33; // [sp+4Bh] [bp-1h]@3

  v5 = 0;
  v30 = 0xFFFF;
  v6 = this;
  v31 = 0;
  v29 = 1;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  v32 = 0;
  if ( (*(int (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 56))(a2, "wCsCmdNo:", &v30) < 0 )
  {
    a3 = L"_AsyncSendProtobuf, no cmd.";
    sub_63D92907(L"file", 732, L"func", 2, L"CTXCSProcessor_MT", (const char *)L"%s", &a3);
LABEL_18:
    if ( sub_63E5A06E(0x34u) )
    {
      v8 = sub_63D94BEA(&v32);
      v9 = sub_63DD9C57(v30, v31, v26, v27, v29, 0, a4, v25, a2, 1, v8);
    }
    else
    {
      v9 = 0;
    }
    sub_63DA8B42(v9);
    if ( v32 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v32 + 8))(v32);
      v32 = 0;
    }
    goto LABEL_29;
  }
  v18 = (unsigned __int16)sub_63DA9AB7(a2, 255);
  v33 = 0;
  (*(void (__stdcall **)(int, const char *, char *))(*(_DWORD *)a2 + 176))(a2, "bCsCmdNoCyrpt", &v33);
  if ( v33 == 1 )
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bCsCmdNoCyrpt", &v29);
    v29 = v29 == 0;
  }
  (*(void (__stdcall **)(int, const char *, char *))(*(_DWORD *)a2 + 176))(a2, "CsCmdDecryptKeyArray", &v33);
  if ( v33 == 12 )
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 232))(a2, "CsCmdDecryptKeyArray", &v25);
  v24 = 0;
  sub_63DA782B(&v24);
  if ( v24 )
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v24 + 12))(v24, a2);
  sub_63D91E2F(&v24);
  LOBYTE(Size) = *((_BYTE *)v6 + 76);
  LOBYTE(v22) = *((_BYTE *)v6 + 77);
  v20 = *((_DWORD *)v6 + 20);
  v28 = 0;
  (*(void (__stdcall **)(int, const char *, size_t *))(*(_DWORD *)a2 + 40))(a2, "cPacketPerTime", &Size);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 40))(a2, "cRetryLimit", &v22);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 72))(a2, "dwRetryInterval", &v20);
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 232))(a2, "arrRetryStrategyInfo", &v28);
  v27 = (unsigned __int8)v22;
  if ( v28 )
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v28 + 96))(v28, &v27);
  if ( (*(int (__stdcall **)(int, const char *, signed int))(*(_DWORD *)a2 + 184))(a2, "wCSSeq", 4) )
  {
    v7 = (unsigned __int16)(*(int (__stdcall **)(_DWORD, int))(**((_DWORD **)v6 + 13) + 12))(*((_DWORD *)v6 + 13), v30);
    v31 = (unsigned __int16)v7;
  }
  else
  {
    (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 56))(a2, "wCSSeq", &v31);
    sub_63D91C37(L"file", 792, L"func", 2, L"CTXCSProcessor_MT", L"Use special csseq  CSSeq = [%u]", v31);
    v7 = v31;
  }
  if ( !sub_63DA97C7(v30, v7, v29, a2, a3, &v32) )
  {
LABEL_17:
    sub_63D91E2F(&v28);
    goto LABEL_18;
  }
  v21 = 0;
  (*(void (__stdcall **)(int, const char *, int *))(*(_DWORD *)a2 + 32))(a2, "bNoSizeCheck", &v21);
  if ( sub_63DA9D36(v6, (int)&v32, (int)&v26, Size, v22, v20, v28, v21) < 0 )
  {
    sub_63D91C37(
      L"file",
      815,
      L"func",
      2,
      L"CTXCSProcessor_MT",
      L"_AsyncSendProtobuf, InternalSendData fail, cmd=0x%x, seq=0x%x, cookie=%u",
      v30);
    goto LABEL_17;
  }
  if ( sub_63E5A06E(0x34u) )
  {
    v10 = sub_63D94BEA(&v32);
    v5 = sub_63DD9C57(v30, v31, v26, v27, v29, 0, a4, v25, a2, 1, v10);
  }
  Util::CTXSpinLock::Lock((Util::CTXSpinLock *)((char *)v6 + 108));
  sub_63DA57EB(&v23, v5);
  *(_DWORD *)(v23 + 20) = v5;
  Util::CTXSpinLock::UnLock((Util::CTXSpinLock *)((char *)v6 + 108));
  v17 = sub_63D94BEA(&v32);
  v16 = v27;
  v15 = v31;
  v14 = v30;
  v13 = v26;
  v12 = a2;
  if ( a2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  sub_63DAA0FF(v12, v13, v14, v18, v15, v16, v17);
  sub_63D91E2F(&v28);
  if ( v32 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v32 + 8))(v32);
    v32 = 0;
  }
LABEL_29:
  sub_63D91E2F(&v25);
  sub_63D91E2F(&a2);
  sub_63D91E2F(&a4);
  return sub_63D91E2F(&a5);
}




int __thiscall arksocket::Buffer::CopyFrom(arksocket::Buffer *this, const void *a2, int a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 44))(a2, a3);
}






















//============================================================================= 


//内存读  tencent.im.cs.cmd0x3e3.ReqBody

Address  To       From     Siz Comment                Party 
0866ED6C 63E1339E 63E1017C 30  preloginlogic.63E1017C User
0866ED9C 63E13015 63E1339E 140 preloginlogic.63E1339E User
0866EEDC 63E14917 63E13015 20C preloginlogic.63E13015 User
0866F0E8 63E15958 63E14917 3A0 preloginlogic.63E14917 User
0866F488 63E15496 63E15958 16C preloginlogic.63E15958 User
0866F5F4 63E157D9 63E15496 80  preloginlogic.63E15496 User
0866F674 63E1E11A 63E157D9 F4  preloginlogic.63E157D9 User
0866F768 63E1A20F 63E1E11A 34  preloginlogic.63E1E11A User
0866F79C 63E1A656 63E1A20F 1C  preloginlogic.63E1A20F User
0866F7B8 63DD91A9 63E1A656 40  preloginlogic.63E1A656 User
0866F7F8 63DD8A80 63DD91A9 18  preloginlogic.63DD91A9 User
0866F810 625C7032 63DD8A80 A0  preloginlogic.63DD8A80 User
0866F8B0 625C6733 625C7032 14  im.625C7032            User
0866F8C4 6232DC6E 625C6733 1C  im.625C6733            User
0866F8E0 63DAB540 6232DC6E 30  im.6232DC6E            User
0866F910 63DAAF47 63DAB540 64  preloginlogic.63DAB540 User
0866F974 63DAABE2 63DAAF47 2C  preloginlogic.63DAAF47 User
0866F9A0 63DAAB28 63DAABE2 20  preloginlogic.63DAABE2 User
0866F9C0 63DA51C3 63DAAB28 80  preloginlogic.63DAAB28 User
0866FA40 6BA5A596 63DA51C3 38  preloginlogic.63DA51C3 User
0866FA78 6BA5B936 6BA5A596 20  arksocket.6BA5A596     User
0866FA98 6BA56F09 6BA5B936 34  arksocket.6BA5B936     User
0866FACC 7396554E 6BA56F09 C4  arksocket.6BA56F09     User
0866FB90 73953990 7396554E 20  libuv.7396554E         User
0866FBB0 73953A9C 73953990 24  libuv.73953990         User
0866FBD4 6BA55696 73953A9C 20  libuv.73953A9C         User
0866FBF4 73960E29 6BA55696 18  arksocket.6BA55696     User
0866FC0C 778538DF 73960E29 38  libuv.73960E29         System
0866FC44 75BD6359 778538DF 10  ucrtbase.778538DF      System
0866FC54 77CB8944 75BD6359 5C  kernel32.75BD6359      System
0866FCB0 77CB8914 77CB8944 10  ntdll.77CB8944         System
0866FCC0 00000000 77CB8914     ntdll.77CB8914         User


