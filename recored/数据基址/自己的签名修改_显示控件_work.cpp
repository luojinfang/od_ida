
39702603 | E8 1CECFFFF              | call riched20.39701224                  | 
39716654 | E8 9EBFFEFF              | call riched20.397025F7                  | 		eax 为文本内容
3978E2AF | E8 6083F8FF              | call riched20.39716614                  | 		esi  为文本内容
3086D24C | FF50 34                  | call dword ptr ds:[eax+34]              |gf
30870B64 | FF16                     | call dword ptr ds:[esi]                 |
30875FA5 | E8 5AABFFFF              | call gf.30870B04                        |gf
65710D7E | FF91 24040000            | call dword ptr ds:[ecx+424]             |afctrl
65710D7E | FF91 24040000            | call dword ptr ds:[ecx+424]             |
6576CD26 | FF17                     | call dword ptr ds:[edi]                 |
6576CF8C | E8 87FCFFFF              | call afctrl.6576CC18                    |afctrl
6576F949 | FF91 C4050000            | call dword ptr ds:[ecx+5C4]             |
6576F6EF | FF90 64030000            | call dword ptr ds:[eax+364]             |
6576FF61 | E8 5DF7FFFF              | call afctrl.6576F6C3                    |
3082940E | FF51 1C                  | call dword ptr ds:[ecx+1C]              |gf
30825697 | E8 E83C0000              | call gf.30829384                        |
30918762 | E8 0DCDF0FF              | call <gf.?DispatchFrameMsg@GF@Util@@YAJ |
3091AA65 | E8 2EDCFFFF              | call gf.30918698                        |
30921938 | FF90 A4000000            | call dword ptr ds:[eax+A4]              |
30920EB7 | FF52 64                  | call dword ptr ds:[edx+64]              |
3092216E | FF50 10                  | call dword ptr ds:[eax+10]              |
30801A52 | FF10                     | call dword ptr ds:[eax]                 |
764A62F7 | FF55 08                  | call dword ptr ss:[ebp+8]               | user32
=================================================================================================================================================================================================
 

 

=================================================================================================================================================================================================

=================================================================================================================================================================================================
//主界面初始化时调用到 CreateTextServices //39701544  四次？
Address  To       From     Siz Comment                Part
0018AC10 3087411B 39701544 20  riched20.39701544      User
0018AC30 30874864 3087411B 30  gf.3087411B            User
0018AC60 3089767E 30874864 10  gf.30874864            User
0018AC70 657D8930 3089767E 14  gf.3089767E            User
0018AC84 65712AD7 657D8930 30  afctrl.657D8930        User
0018ACB4 657D8930 65712AD7 14  afctrl.65712AD7        User
0018ACC8 65726029 657D8930 B8  afctrl.657D8930        User
0018AD80 657D8930 65726029 14  afctrl.65726029        User
0018AD94 6576D400 657D8930 3C  afctrl.657D8930        User
0018ADD0 30845AF9 6576D400 4C  afctrl.6576D400        User
0018AE1C 30845C9C 30845AF9 48  gf.30845AF9            User
0018AE64 30845B2D 30845C9C 48  gf.30845C9C            User
0018AEAC 30845C9C 30845B2D 48  gf.30845B2D            User
0018AEF4 30845B2D 30845C9C 48  gf.30845C9C            User
0018AF3C 30845C9C 30845B2D 48  gf.30845B2D            User
0018AF84 30845B2D 30845C9C 48  gf.30845C9C            User
0018AFCC 30845D15 30845B2D 14  gf.30845B2D            User
0018AFE0 3082A5EC 30845D15 14  gf.30845D15            User
0018AFF4 308214D4 3082A5EC 24  gf.3082A5EC            User
0018B018 308258BF 308214D4 464 gf.308214D4            User
0018B47C 6570350E 308258BF 3C  gf.308258BF            User
0018B4B8 65703590 6570350E 40  afctrl.6570350E        User
0018B4F8 657E3B75 65703590 1C  afctrl.65703590        User
0018B514 657703AA 657E3B75 64  afctrl.657E3B75        User
0018B578 30845AF9 657703AA 4C  afctrl.657703AA        User
0018B5C4 30845C9C 30845AF9 48  gf.30845AF9            User
0018B60C 30845B2D 30845C9C 48  gf.30845C9C            User
0018B654 30845C9C 30845B2D 48  gf.30845B2D            User
0018B69C 30845B2D 30845C9C 48  gf.30845C9C            User
0018B6E4 30845C9C 30845B2D 48  gf.30845B2D            User
0018B72C 30845B2D 30845C9C 48  gf.30845C9C            User
0018B774 30845D15 30845B2D 14  gf.30845B2D            User
0018B788 3082A5EC 30845D15 14  gf.30845D15            User
0018B79C 308214D4 3082A5EC 24  gf.3082A5EC            User
0018B7C0 308258BF 308214D4 464 gf.308214D4            User
0018BC24 61C13CBC 308258BF 3C  gf.308258BF            User
0018BC60 61C191D1 61C13CBC 3C  mainframe.61C13CBC     User
0018BC9C 61C1977E 61C191D1 3C  mainframe.61C191D1     User
0018BCD8 61C2B80B 61C1977E 94  mainframe.61C1977E     User
0018BD6C 61C176DA 61C2B80B 458 mainframe.61C2B80B     User
0018C1C4 61C17C15 61C176DA 34  mainframe.61C176DA     User
0018C1F8 61C8FA37 61C17C15 10  mainframe.61C17C15     User
0018C208 0408CB24 61C8FA37 894 mainframe.61C8FA37     User
0018CA9C 040B1718 0408CB24 14  preloginlogic.0408CB24 User
0018CAB0 04098043 040B1718 40  preloginlogic.040B1718 User
0018CAF0 040984AB 04098043 50  preloginlogic.04098043 User
0018CB40 0409E354 040984AB 30  preloginlogic.040984AB User
0018CB70 040877D5 0409E354 10  preloginlogic.0409E354 User
0018CB80 0407C2AC 040877D5 54  preloginlogic.040877D5 User
0018CBD4 0407CA3D 0407C2AC     preloginlogic.0407C2AC User

=================================================================================================================================================================================================
Address  To       From     Size Comment                Party 
0018B494 3087411B 39701544 20   riched20.39701544      User
0018B4B4 30874864 3087411B 30   gf.3087411B            User
0018B4E4 3089767E 30874864 10   gf.30874864            User
0018B4F4 657D8930 3089767E 14   gf.3089767E            User
0018B508 65712AD7 657D8930 30   afctrl.657D8930        User
0018B538 657D8930 65712AD7 14   afctrl.65712AD7        User
0018B54C 6578DD2C 657D8930 30   afctrl.657D8930        User
0018B57C 657839D6 6578DD2C 58   afctrl.6578DD2C        User
0018B5D4 6578B846 657839D6 34   afctrl.657839D6        User
0018B608 30845AF9 6578B846 4C   afctrl.6578B846        User
0018B654 30845C9C 30845AF9 48   gf.30845AF9            User
0018B69C 30845B2D 30845C9C 48   gf.30845C9C            User
0018B6E4 30845C9C 30845B2D 48   gf.30845B2D            User
0018B72C 30845B2D 30845C9C 48   gf.30845C9C            User
0018B774 30845D15 30845B2D 14   gf.30845B2D            User
0018B788 3082A5EC 30845D15 14   gf.30845D15            User
0018B79C 308214D4 3082A5EC 24   gf.3082A5EC            User
0018B7C0 308258BF 308214D4 464  gf.308214D4            User
0018BC24 61C13CBC 308258BF 3C   gf.308258BF            User
0018BC60 61C191D1 61C13CBC 3C   mainframe.61C13CBC     User
0018BC9C 61C1977E 61C191D1 3C   mainframe.61C191D1     User
0018BCD8 61C2B80B 61C1977E 94   mainframe.61C1977E     User
0018BD6C 61C176DA 61C2B80B 458  mainframe.61C2B80B     User
0018C1C4 61C17C15 61C176DA 34   mainframe.61C176DA     User
0018C1F8 61C8FA37 61C17C15 10   mainframe.61C17C15     User
0018C208 0408CB24 61C8FA37 894  mainframe.61C8FA37     User
0018CA9C 040B1718 0408CB24 14   preloginlogic.0408CB24 User
0018CAB0 04098043 040B1718 40   preloginlogic.040B1718 User
0018CAF0 040984AB 04098043 50   preloginlogic.04098043 User
0018CB40 0409E354 040984AB 30   preloginlogic.040984AB User
0018CB70 040877D5 0409E354 10   preloginlogic.0409E354 User
0018CB80 0407C2AC 040877D5 54   preloginlogic.040877D5 User
0018CBD4 0407CA3D 0407C2AC 6C   preloginlogic.0407C2AC User
0018CC40 0407CE29 0407CA3D 2C   preloginlogic.0407CA3D User
0018CC6C 0407A405 0407CE29 24   preloginlogic.0407CE29 User
0018CC90 300A5BFC 0407A405 58   preloginlogic.0407A405 User
0018CCE8 300A5271 300A5BFC 24   common.300A5BFC        User
0018CD0C 300996C0 300A5271 60   common.300A5271        User
0018CD6C 3009991B 300996C0 44   common.300996C0        User
0018CDB0 30099B20 3009991B 284C common.3009991B        User
0018F5FC 3009110A 30099B20 1C   common.30099B20        User
0018F618 300935C6 3009110A 2C   common.3009110A        User
0018F644 30093678 300935C6 58   common.300935C6        User
0018F69C 300937DA 30093678 8    common.30093678        User
0018F6A4 773362FA 300937DA 2C   common.300937DA        System
0018F6D0 77336D3A 773362FA 78   user32.773362FA        System
0018F748 773377C4 77336D3A 60   user32.77336D3A        System
0018F7A8 7733788A 773377C4 10   user32.773377C4        System
0018F7B8 69F0652A 7733788A 3C   user32.7733788A        User
0018F7F4 69F06059 69F0652A      hummerengine.69F0652A  User
=================================================================================================================================================================================================


Address  To       From     Siz Comment               Party 
0018EE08 3085C9C2 39701544 20  riched20.39701544     User
0018EE28 3085CC8F 3085C9C2 38  gf.3085C9C2           User
0018EE60 3089767E 3085CC8F 10  gf.3085CC8F           User
0018EE70 30845AF9 3089767E 4C  gf.3089767E           User
0018EEBC 30845C9C 30845AF9 48  gf.30845AF9           User
0018EF04 30845B2D 30845C9C 48  gf.30845C9C           User
0018EF4C 30845D15 30845B2D 14  gf.30845B2D           User
0018EF60 3082A5EC 30845D15 14  gf.30845D15           User
0018EF74 308214D4 3082A5EC 24  gf.3082A5EC           User
0018EF98 308258BF 308214D4 464 gf.308214D4           User
0018F3FC 64C14202 308258BF 3C  gf.308258BF           User
0018F438 64C8103C 64C14202 3C  chatframeapp.64C14202 User
0018F474 64C819FA 64C8103C 3C  chatframeapp.64C8103C User
0018F4B0 64CACB1D 64C819FA DC  chatframeapp.64C819FA User
0018F58C 3001033F 64CACB1D 3C  chatframeapp.64CACB1D User
0018F5C8 300106E6 3001033F 18  common.3001033F       User
0018F5E0 3001F1CC 300106E6 44  common.300106E6       User
0018F624 30013E4E 3001F1CC 38  common.3001F1CC       User
0018F65C 30015D21 30013E4E 18  common.30013E4E       User
0018F674 3001BDAC 30015D21 18  common.30015D21       User
0018F68C 61212654 3001BDAC 34  common.3001BDAC       User
0018F6C0 6121B227 61212654 10  apputil.61212654      User
0018F6D0 6121F104 6121B227 64  apputil.6121B227      User
0018F734 6121EF07 6121F104 40  apputil.6121F104      User
0018F774 69F04807 6121EF07 4C  apputil.6121EF07      User
0018F7C0 69F06364 69F04807 34  hummerengine.69F04807 User
0018F7F4 69F06059 69F06364 1C  hummerengine.69F06364 User
0018F810 69F04529 69F06059 3C  hummerengine.69F06059 User
0018F84C 69F0AF44 69F04529 510 hummerengine.69F04529 User
0018FD5C 69F0B146 69F0AF44 4C  hummerengine.69F0AF44 User
0018FDA8 004014D9 69F0B146 144 hummerengine.69F0B146 User
0018FEEC 0040128B 004014D9 C   qq.004014D9           User
0018FEF8 00401A8F 0040128B 94  qq.0040128B           User
0018FF8C 75A033AA 00401A8F C   qq.00401A8F           System
0018FF98 778B9F72 75A033AA 40  kernel32.75A033AA     System
0018FFD8 778B9F45 778B9F72 18  ntdll.778B9F72        System
0018FFF0 00000000 778B9F45     ntdll.778B9F45        User

=================================================================================================================================================================================================
Address  To       From     Siz Comment               Party 
0018EE08 3085C9C2 39701544 20  riched20.39701544     User
0018EE28 3085CC8F 3085C9C2 38  gf.3085C9C2           User
0018EE60 3089767E 3085CC8F 10  gf.3085CC8F           User
0018EE70 30845AF9 3089767E 4C  gf.3089767E           User
0018EEBC 30845C9C 30845AF9 48  gf.30845AF9           User
0018EF04 30845B2D 30845C9C 48  gf.30845C9C           User
0018EF4C 30845D15 30845B2D 14  gf.30845B2D           User
0018EF60 3082A5EC 30845D15 14  gf.30845D15           User
0018EF74 308214D4 3082A5EC 24  gf.3082A5EC           User
0018EF98 308258BF 308214D4 464 gf.308214D4           User
0018F3FC 64C14202 308258BF 3C  gf.308258BF           User
0018F438 64C8103C 64C14202 3C  chatframeapp.64C14202 User
0018F474 64C819FA 64C8103C 3C  chatframeapp.64C8103C User
0018F4B0 64CACB1D 64C819FA DC  chatframeapp.64C819FA User
0018F58C 3001033F 64CACB1D 3C  chatframeapp.64CACB1D User
0018F5C8 300106E6 3001033F 18  common.3001033F       User
0018F5E0 3001F1CC 300106E6 44  common.300106E6       User
0018F624 30013E4E 3001F1CC 38  common.3001F1CC       User
0018F65C 30015D21 30013E4E 18  common.30013E4E       User
0018F674 3001BDAC 30015D21 18  common.30015D21       User
0018F68C 61212654 3001BDAC 34  common.3001BDAC       User
0018F6C0 6121B227 61212654 10  apputil.61212654      User
0018F6D0 6121F104 6121B227 64  apputil.6121B227      User
0018F734 6121EF07 6121F104 40  apputil.6121F104      User
0018F774 69F04807 6121EF07 4C  apputil.6121EF07      User
0018F7C0 69F06364 69F04807 34  hummerengine.69F04807 User
0018F7F4 69F06059 69F06364 1C  hummerengine.69F06364 User
0018F810 69F04529 69F06059 3C  hummerengine.69F06059 User
0018F84C 69F0AF44 69F04529 510 hummerengine.69F04529 User
0018FD5C 69F0B146 69F0AF44 4C  hummerengine.69F0AF44 User
0018FDA8 004014D9 69F0B146 144 hummerengine.69F0B146 User
0018FEEC 0040128B 004014D9 C   qq.004014D9           User
0018FEF8 00401A8F 0040128B 94  qq.0040128B           User
0018FF8C 75A033AA 00401A8F C   qq.00401A8F           System
0018FF98 778B9F72 75A033AA 40  kernel32.75A033AA     System
0018FFD8 778B9F45 778B9F72 18  ntdll.778B9F72        System
0018FFF0 00000000 778B9F45     ntdll.778B9F45        User


=================================================================================================================================================================================================


=================================================================================================================================================================================================
//打开聊天对话界面 调用到两次 CreateTextServices /39701544
Address  To       From     Siz Comment               Part
0018BFF4 3087411B 39701544 20  riched20.39701544     User
0018C014 30874864 3087411B 30  gf.3087411B           User
0018C044 3089767E 30874864 10  gf.30874864           User
0018C054 657D8930 3089767E 14  gf.3089767E           User
0018C068 65712AD7 657D8930 30  afctrl.657D8930       User
0018C098 657D8930 65712AD7 14  afctrl.65712AD7       User
0018C0AC 65726029 657D8930 B8  afctrl.657D8930       User
0018C164 30845AF9 65726029 4C  afctrl.65726029       User
0018C1B0 30845C9C 30845AF9 48  gf.30845AF9           User
0018C1F8 30845B2D 30845C9C 48  gf.30845C9C           User
0018C240 30845C9C 30845B2D 48  gf.30845B2D           User
0018C288 30845B2D 30845C9C 48  gf.30845C9C           User
0018C2D0 30845C9C 30845B2D 48  gf.30845B2D           User
0018C318 30845B2D 30845C9C 48  gf.30845C9C           User
0018C360 30845D15 30845B2D 14  gf.30845B2D           User
0018C374 3082A5EC 30845D15 14  gf.30845D15           User
0018C388 308214D4 3082A5EC 24  gf.3082A5EC           User
0018C3AC 308258BF 308214D4 464 gf.308214D4           User
0018C810 6620CB98 308258BF 3C  gf.308258BF           User
0018C84C 6620CC1A 6620CB98 40  appframework.6620CB98 User
0018C88C 662DD166 6620CC1A 1C  appframework.6620CC1A User
0018C8A8 66286BD4 662DD166 3C  appframework.662DD166 User
0018C8E4 30845AF9 66286BD4 4C  appframework.66286BD4 User
0018C930 30845C9C 30845AF9 48  gf.30845AF9           User
0018C978 30845B2D 30845C9C 48  gf.30845C9C           User
0018C9C0 30845C9C 30845B2D 48  gf.30845B2D           User
0018CA08 30845B2D 30845C9C 48  gf.30845C9C           User
0018CA50 30845D15 30845B2D 14  gf.30845B2D           User
0018CA64 3082A5EC 30845D15 14  gf.30845D15           User
0018CA78 308214D4 3082A5EC 24  gf.3082A5EC           User
0018CA9C 308258BF 308214D4 464 gf.308214D4           User
0018CF00 6620CB98 308258BF 3C  gf.308258BF           User
0018CF3C 6620CC1A 6620CB98 40  appframework.6620CB98 User
0018CF7C 662DD166 6620CC1A 1C  appframework.6620CC1A User
0018CF98 662CBEC0 662DD166 34  appframework.662DD166 User
0018CFCC 64C2345B 662CBEC0 14  appframework.662CBEC0 User
0018CFE0 64C814B3 64C2345B 38  chatframeapp.64C2345B User
0018D018 64C7E975 64C814B3 3C  chatframeapp.64C814B3 User
0018D054 64C09882 64C7E975 80  chatframeapp.64C7E975 User
0018D0D4 662804AE 64C09882 3C  chatframeapp.64C09882 User
0018D110 64C04ED0 662804AE 34  appframework.662804AE User
0018D144 64C08A81 64C04ED0 5D8 chatframeapp.64C04ED0 User
0018D71C 6627F872 64C08A81 474 chatframeapp.64C08A81 User
0018DB90 6627FC23 6627F872 34  appframework.6627F872 User
0018DBC4 66280286 6627FC23 48  appframework.6627FC23 User
0018DC0C 64C029EB 66280286 18  appframework.66280286 User
0018DC24 64C03E2C 64C029EB 1C  chatframeapp.64C029EB User
0018DC40 02818782 64C03E2C 40  chatframeapp.64C03E2C User
0018DC80 61229D1F 02818782 48  afutil.02818782       User
0018DCC8 61C787EA 61229D1F     apputil.61229D1F      User

=================================================================================================================================================================================================
Address  To       From     Siz Comment               Part
0018BFF4 3087411B 39701544 20  riched20.39701544     User
0018C014 30874864 3087411B 30  gf.3087411B           User
0018C044 3089767E 30874864 10  gf.30874864           User
0018C054 657D8930 3089767E 14  gf.3089767E           User
0018C068 65712AD7 657D8930 30  afctrl.657D8930       User
0018C098 657D8930 65712AD7 14  afctrl.65712AD7       User
0018C0AC 65726029 657D8930 B8  afctrl.657D8930       User
0018C164 30845AF9 65726029 4C  afctrl.65726029       User
0018C1B0 30845C9C 30845AF9 48  gf.30845AF9           User
0018C1F8 30845B2D 30845C9C 48  gf.30845C9C           User
0018C240 30845C9C 30845B2D 48  gf.30845B2D           User
0018C288 30845B2D 30845C9C 48  gf.30845C9C           User
0018C2D0 30845C9C 30845B2D 48  gf.30845B2D           User
0018C318 30845B2D 30845C9C 48  gf.30845C9C           User
0018C360 30845D15 30845B2D 14  gf.30845B2D           User
0018C374 3082A5EC 30845D15 14  gf.30845D15           User
0018C388 308214D4 3082A5EC 24  gf.3082A5EC           User
0018C3AC 308258BF 308214D4 464 gf.308214D4           User
0018C810 6620CB98 308258BF 3C  gf.308258BF           User
0018C84C 6620CC1A 6620CB98 40  appframework.6620CB98 User
0018C88C 662DD166 6620CC1A 1C  appframework.6620CC1A User
0018C8A8 66286BD4 662DD166 3C  appframework.662DD166 User
0018C8E4 30845AF9 66286BD4 4C  appframework.66286BD4 User
0018C930 30845C9C 30845AF9 48  gf.30845AF9           User
0018C978 30845B2D 30845C9C 48  gf.30845C9C           User
0018C9C0 30845C9C 30845B2D 48  gf.30845B2D           User
0018CA08 30845B2D 30845C9C 48  gf.30845C9C           User
0018CA50 30845D15 30845B2D 14  gf.30845B2D           User
0018CA64 3082A5EC 30845D15 14  gf.30845D15           User
0018CA78 308214D4 3082A5EC 24  gf.3082A5EC           User
0018CA9C 308258BF 308214D4 464 gf.308214D4           User
0018CF00 6620CB98 308258BF 3C  gf.308258BF           User
0018CF3C 6620CC1A 6620CB98 40  appframework.6620CB98 User
0018CF7C 662DD166 6620CC1A 1C  appframework.6620CC1A User
0018CF98 662CBEC0 662DD166 34  appframework.662DD166 User
0018CFCC 64C2345B 662CBEC0 14  appframework.662CBEC0 User
0018CFE0 64C814B3 64C2345B 38  chatframeapp.64C2345B User
0018D018 64C7E975 64C814B3 3C  chatframeapp.64C814B3 User
0018D054 64C09882 64C7E975 80  chatframeapp.64C7E975 User
0018D0D4 662804AE 64C09882 3C  chatframeapp.64C09882 User
0018D110 64C04ED0 662804AE 34  appframework.662804AE User
0018D144 64C08A81 64C04ED0 5D8 chatframeapp.64C04ED0 User
0018D71C 6627F872 64C08A81 474 chatframeapp.64C08A81 User
0018DB90 6627FC23 6627F872 34  appframework.6627F872 User
0018DBC4 66280286 6627FC23 48  appframework.6627FC23 User
0018DC0C 64C029EB 66280286 18  appframework.66280286 User
0018DC24 64C03E2C 64C029EB 1C  chatframeapp.64C029EB User
0018DC40 02818782 64C03E2C 40  chatframeapp.64C03E2C User
0018DC80 61229D1F 02818782 48  afutil.02818782       User
0018DCC8 61C787EA 61229D1F     apputil.61229D1F      User


=================================================================================================================================================================================================


=================================================================================================================================================================================================
Address  To       From     Siz Comment               Party 
0018F370 3087411B 39701544 20  riched20.39701544     User
0018F390 30874864 3087411B 30  gf.3087411B           User
0018F3C0 3089767E 30874864 10  gf.30874864           User
0018F3D0 657D8930 3089767E 14  gf.3089767E           User
0018F3E4 65712AD7 657D8930 30  afctrl.657D8930       User
0018F414 657D8930 65712AD7 14  afctrl.65712AD7       User
0018F428 65726029 657D8930 B8  afctrl.657D8930       User
0018F4E0 657D8930 65726029 14  afctrl.65726029       User
0018F4F4 6576D400 657D8930 3C  afctrl.657D8930       User
0018F530 657C0C8A 6576D400 3C  afctrl.6576D400       User
0018F56C 662D1D73 657C0C8A 38  afctrl.657C0C8A       User
0018F5A4 662D246E 662D1D73 C   appframework.662D1D73 User
0018F5B0 662ED87A 662D246E 10  appframework.662D246E User
0018F5C0 300C882B 662ED87A 14  appframework.662ED87A User
0018F5D4 300C8BB9 300C882B 80  common.300C882B       User
0018F654 300C7D2A 300C8BB9 18  common.300C8BB9       User
0018F66C 773362FA 300C7D2A 2C  common.300C7D2A       System
0018F698 77336D3A 773362FA 78  user32.773362FA       System
0018F710 773377C4 77336D3A 60  user32.77336D3A       System
0018F770 7733788A 773377C4 10  user32.773377C4       System
0018F780 69F0652A 7733788A 44  user32.7733788A       User
0018F7C4 69F0633C 69F0652A 30  hummerengine.69F0652A User
0018F7F4 69F06059 69F0633C 1C  hummerengine.69F0633C User
0018F810 69F04529 69F06059 3C  hummerengine.69F06059 User
0018F84C 69F0AF44 69F04529 510 hummerengine.69F04529 User
0018FD5C 69F0B146 69F0AF44 4C  hummerengine.69F0AF44 User
0018FDA8 004014D9 69F0B146 144 hummerengine.69F0B146 User
0018FEEC 0040128B 004014D9 C   qq.004014D9           User
0018FEF8 00401A8F 0040128B 94  qq.0040128B           User
0018FF8C 75A033AA 00401A8F C   qq.00401A8F           System
0018FF98 778B9F72 75A033AA 40  kernel32.75A033AA     System
0018FFD8 778B9F45 778B9F72 18  ntdll.778B9F72        System
0018FFF0 00000000 778B9F45     ntdll.778B9F45        User



=================================================================================================================================================================================================
3086D938 | E8 03B30D00              | call <JMP.&CreateTextServices>          |
=================================================================================================================================================================================================
unsigned int __stdcall sub_3086D849(int a1, HDC hdc)
{
  int v2; // ebx@1
  unsigned int result; // eax@2
  int v4; // ecx@13
  int v5; // ST30_4@13
  int v6; // eax@13
  int v7; // ecx@13
  struct tagTEXTMETRICW tm; // [sp+Ch] [bp-70h]@8
  int v9; // [sp+48h] [bp-34h]@13
  int v10; // [sp+4Ch] [bp-30h]@13
  int v11; // [sp+50h] [bp-2Ch]@13
  int v12; // [sp+54h] [bp-28h]@13
  int v13; // [sp+58h] [bp-24h]@13
  int v14; // [sp+5Ch] [bp-20h]@13
  int v15; // [sp+60h] [bp-1Ch]@13
  int v16; // [sp+64h] [bp-18h]@13
  HGDIOBJ v17; // [sp+68h] [bp-14h]@7
  HGDIOBJ h; // [sp+6Ch] [bp-10h]@3
  unsigned int v19; // [sp+78h] [bp-4h]@3

  v2 = a1;
  if ( *(_DWORD *)(a1 + 0x1BC) )
  {
    a1 = 0;
    v19 = 0;
    h = CreateFontW(0xC, 0, 0, 0, 0x190, 0, 0, 0, 0, 0, 0, 0, 0x20u, L"Tahoma");
    if ( sub_3086BDFF(hdc, v2 + 0x2C, h) < 0 || sub_3086BF0B((void *)(v2 + 0xA0)) < 0 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v2 + 0x164) )
      *(_DWORD *)(v2 + 0x164) = 0x200044;
    v17 = SelectObject(hdc, h);
    if ( v17
      && (GetTextMetricsW(hdc, &tm),
          SelectObject(hdc, v17),
          dword_309ED9F4 = tm.tmAveCharWidth,
          dword_309ED9F8 = tm.tmHeight,
          nDenominator = GetDeviceCaps(hdc, 0x58),
          dword_309ED9FC = GetDeviceCaps(hdc, 0x5A),
          sub_3086C2EA(v2),
          CreateTextServices(0, v2 + 4, &a1) >= 0)
      && (**(int (__stdcall ***)(int, void *, int))a1)(a1, &unk_30976AFC, v2 + 0x15C) >= 0 )
    {
      v4 = *(_DWORD *)(v2 + 0x1BC);
      sub_30833994(&v13);
      v9 = *(_DWORD *)(v2 + 0x25C);
      v10 = *(_DWORD *)(v2 + 0x260);
      v11 = *(_DWORD *)(v2 + 0x264);
      v12 = *(_DWORD *)(v2 + 0x268);
      v14 += v10;
      v16 -= v12;
      v15 -= v11;
      v5 = v15 - (v9 + v13);
      v13 += v9;
      *(_DWORD *)(v2 + 0x18C) = sub_3086B9B8(v5, nDenominator);
      v6 = sub_3086B9B8(v16 - v14, dword_309ED9FC);
      v7 = *(_DWORD *)(v2 + 0x15C);
      *(_DWORD *)(v2 + 0x190) = v6;
      *(_DWORD *)(v2 + 0x1C8) = (*(int (__stdcall **)(int *))(*(_DWORD *)v7 + 0x24))(&v13) >= 0;
      (*(void (**)(void))(**(_DWORD **)(v2 + 0x15C) + 0x2C))();
      DeleteObject(h);
      v19 = 0xFFFFFFFF;
      if ( a1 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
      result = 0;
    }
    else
    {
LABEL_18:
      v19 = 0xFFFFFFFF;
      if ( a1 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
      result = 0x80004005;
    }
  }
  else
  {
    result = 0x80004002;
  }
  return result;
}


https://docs.microsoft.com/en-us/windows/win32/api/textserv/nf-textserv-createtextservices

The CreateTextServices function creates an instance of a text services object. 
The text services object supports a variety of interfaces, including ITextServices and the Text Object Model (TOM).


HRESULT CreateTextServices(
  IUnknown  *punkOuter,
  ITextHost *pITextHost,  //实现 ITextHost 接口的实例
  IUnknown  **ppUnk  //指向  ITextServices 的实例, 通过 ITextServices 操作 ITextHost
);
Parameters
	punkOuter
		Type: IUnknown*
		Pointer to the controlling IUnknown interface on the outer object if the text services object is being created as part of an aggregate object. 
		This parameter can be NULL if the object is not part of an aggregate.

	pITextHost
		Type: ITextHost*
		Pointer to your implementation of the ITextHost interface. This pointer must not be NULL.

	ppUnk
		Type: IUnknown**
		Pointer to a variable that receives a pointer to the private IUnknown of the text services object.
		You can call QueryInterface on this pointer to retrieve ITextServices or ITextDocument interface pointers.

Return value
	Type: HRESULT
	If the text services object was created successfully, the return value is S_OK.
	If the function fails, one of the following COM error codes are returned. For more information on COM error codes, see Error Handling in COM.


=================================================================================================================================================================================================



=================================================================================================================================================================================================




=================================================================================================================================================================================================



/*
//Riched32
1. 初始化的过程：
  INITCOMMONCONTROLSEX picc;
  picc.dwSize = sizeof(picc);
  picc.dwICC = ICC_WIN95_CLASSES;
  InitCommonControlsEx(&picc);

  //要加载richedit.dll
  LoadLibrary(L"Riched32.dll");

2.创建一个richedit的控件方法：
   g_hRichEdit = CreateWindow(RICHEDIT_CLASS, _T(""), WS_CHILD | WS_BORDER | ES_MULTILINE | WS_VISIBLE,
     10, 10, 500, 500, 
     hWnd, NULL, hInstance, NULL); 
 
// 关于windowless的rich edit：
1.看了一个介绍：个人猜测就是首先要写一个类，来实现ITextHost这个接口，
	同个这个类来把宿主窗口和无窗口的richedit联系起来。然后调用 CreateTextServices ，传入 ITextHost 指针，
	返回IUnknown指针。通过这个IUnown接口，可以查询到 ITextServices 和 ITextDocument 接口。
	最后通过这两个接口完成绝大多数功能。


	
//39701544  CreateTextServices
https://www.cnblogs.com/likwo/archive/2011/05/05/2037138.html

https://docs.microsoft.com/en-us/windows/win32/api/textserv/nl-textserv-itextservices
https://docs.microsoft.com/en-us/windows/win32/controls/about-windowless-rich-edit-controls


*/

=================================================================================================================================================================================================
unsigned int __cdecl sub_39701224(unsigned int a1, char *a2, unsigned int a3) //a2 为文本内容
{
  int v3; // esi@1
  int v4; // edi@1
  unsigned int v5; // ecx@4
  unsigned int result; // eax@10
  int v7; // esi@22
  int v8; // edi@22
  unsigned int v9; // ecx@23

  v3 = (int)a2;
  v4 = a1;
  if ( a1 > (unsigned int)a2 && a1 < (unsigned int)&a2[a3] )
  {
    v7 = (int)&a2[a3 - 4];
    v8 = a3 + a1 - 4;
    if ( v8 & 3 )
    {
      if ( a3 >= 4 )
        JUMPOUT(__CS__, *((_DWORD *)&loc_3971F6E8 + (v8 & 3) + 1));
      switch ( a3 )
      {
        case 0u:
LABEL_26:
          result = a1;
          break;
        case 1u:
LABEL_20:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
          result = a1;
          break;
        case 2u:
LABEL_30:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
          *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
          result = a1;
          break;
        case 3u:
          goto LABEL_21;
      }
    }
    else
    {
      v9 = a3 >> 2;
      if ( a3 >> 2 < 8 )
        JUMPOUT(loc_3973303B);
      qmemcpy((void *)v8, (const void *)v7, 4 * v9);
      v7 += 4 * v9;
      v8 += 4 * v9;
      switch ( a3 & 3 )
      {
        case 0u:
          goto LABEL_26;
        case 1u:
          goto LABEL_20;
        case 2u:
          goto LABEL_30;
        case 3u:
          break;
      }
LABEL_21:
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
      *(_BYTE *)(v8 + 1) = *(_BYTE *)(v7 + 1);
      result = a1;
    }
  }
  else
  {
    if ( a1 & 3 )
    {
      if ( a3 >= 4 )
        JUMPOUT(__CS__, *(void **)((char *)&off_3971F6A6 + 4 * (a1 & 3) + 2));
      JUMPOUT(__CS__, *((_DWORD *)&loc_3971F6E8 + a3 - 4));
    }
    v5 = a3 >> 2;
    switch ( a3 >> 2 )
    {
      case 4u:
        goto LABEL_5;
      case 3u:
        goto LABEL_6;
      case 2u:
        goto LABEL_7;
      case 1u:
        goto LABEL_8;
      case 0u:
        break;
      case 6u:
        goto LABEL_11;
      case 5u:
        goto LABEL_12;
      case 7u:
        *(_DWORD *)(a1 + 4 * v5 - 0x1C) = *(_DWORD *)&a2[4 * v5 - 0x1C];
LABEL_11:
        *(_DWORD *)(a1 + 4 * v5 - 0x18) = *(_DWORD *)&a2[4 * v5 - 0x18];
LABEL_12:
        *(_DWORD *)(a1 + 4 * v5 - 0x14) = *(_DWORD *)&a2[4 * v5 - 0x14];
LABEL_5:
        *(_DWORD *)(a1 + 4 * v5 - 0x10) = *(_DWORD *)&a2[4 * v5 - 0x10];
LABEL_6:
        *(_DWORD *)(a1 + 4 * v5 - 0xC) = *(_DWORD *)&a2[4 * v5 - 0xC];
LABEL_7:
        *(_DWORD *)(a1 + 4 * v5 - 8) = *(_DWORD *)&a2[4 * v5 - 8];
LABEL_8:
        *(_DWORD *)(a1 + 4 * v5 - 4) = *(_DWORD *)&a2[4 * v5 - 4];
        v3 = (int)&a2[4 * v5];
        v4 = 4 * v5 + a1;
        break;
      default:
        qmemcpy((void *)a1, a2, 4 * v5);
        v3 = (int)&a2[4 * v5];
        v4 = a1 + 4 * v5;
        break;
    }
    switch ( a3 & 3 )
    {
      case 0u:
        result = a1;
        break;
      case 1u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        result = a1;
        break;
      case 2u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        result = a1;
        break;
      case 3u:
        *(_BYTE *)v4 = *(_BYTE *)v3;
        *(_BYTE *)(v4 + 1) = *(_BYTE *)(v3 + 1);
        *(_BYTE *)(v4 + 2) = *(_BYTE *)(v3 + 2);
        result = a1;
        break;
    }
  }
  return result;
}
=================================================================================================================================================================================================//39702603 | E8 1CECFFFF              | call riched20.39701224                  |
int __stdcall sub_397025F7(int a1, int a2, int a3)
{
  return sub_39701224(a1, a2, a3);  //a2 为文本内容
}

=================================================================================================================================================================================================//39716654 | E8 9EBFFEFF              | call riched20.397025F7                  | 		(a2) eax 为文本内容, (a3)新建字符串空间
int __thiscall sub_39716614(void *this, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // eax@2
  int v5; // esi@3
  int v7; // [sp+18h] [bp-4h]@1

  v3 = a2;
  v7 = a2;
  sub_397088A7(this);
  while ( v3 )
  {
    v4 = sub_39708D1E(&a2);
    if ( !v4 )
      break;
    v5 = a2;
    if ( a2 >= v3 )
    {
      v5 = v3;
      a2 = v3;
    }
    sub_397025F7(a3, v4, 2 * v5);  //39716654
    a3 += 2 * v5;
    v3 -= v5;
    sub_3970ACC8(v5);
  }
  return v7 - v3;
}

//返回控件字符串内容
int sub_3971B3B5()
{
  if ( !dword_397DA710 )
    sub_3970CF23((int)&dword_397DA710, 0, "SysAllocStringLen"); //申请一个指定字符长度的 BSTR 指针,并初始化为一个字符串
  return dword_397DA710(); // dword_397DA710 字符串地址
}

//SysAllocString() 申请一个 BSTR 指针，并初始化为一个字符串 
//SysAllocStringLen() 申请一个指定字符长度的 BSTR 指针，并初始化为一个字符串

=================================================================================================================================================================================================//3978E2AF | E8 6083F8FF              | call riched20.39716614                 
unsigned int __thiscall sub_3978E251(_DWORD *this, int *a2)
{
  _DWORD *v2; // ebx@1
  unsigned int v3; // esi@2
  int v4; // edi@3
  int v5; // eax@5
  char v7; // [sp+8h] [bp-24h]@7
  char v8; // [sp+1Ch] [bp-10h]@9

  v2 = this;
  sub_39704068(this, 0);
  sub_39702F5E(v2);
  if ( a2 )
  {
    v4 = v2[0x35];  
    if ( v4 > 0 )
    {
      v5 = sub_3971B3B5(); //返回控件字符串内容 
	  //3978E295 断点 (v5) eax 为字符串   
	  //L"12"  //断点条件 0x320031 == [eax]
	  //L"123"  //断点条件 (0x320031 == [eax]) &&( 0x000033 == ([eax+4]&0xff ))  //注意,这里是比较了5个字节的数值
	  
      *a2 = v5; 
      if ( !v5 )
      {
        sub_39774103(v2[0x18]);
        v3 = 0x8007000E;
        goto LABEL_9;
      }
      sub_39716614(&v7, v4, v5);//3978E2AF    //赋值？
    }
    else
    {
      *a2 = 0;
    }
    v3 = 0;
    goto LABEL_9;
  }
  v3 = 0x80070057;
LABEL_9:
  sub_39704537(&v8);
  return v3;      
}

//https://help.x64dbg.com/en/latest/introduction/Formatting.html

//log {utf8[;length]@address}
 
log {utf8;8@0x0E5B2B84}
log {utf8@eax}
log {ansi[;length]@address}

log {ansi[;8]@0x0E5B2B84}

=================================================================================================================================================================================================//3086D24C | FF50 34                  | call dword ptr ds:[eax+34]              |gf
int __stdcall sub_3086D237(int a1, int a2)
{
  int v2; // ecx@1
  int result; // eax@2

  v2 = *(_DWORD *)(a1 + 0x15C);
  if ( v2 )
    result = (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 0x34))(a2); //3086D24C
  else
    result = 0x80004002;
  return result;
}

=================================================================================================================================================================================================//30870B64 | FF16                     | call dword ptr ds:[esi]                 |gf
unsigned int __thiscall sub_30870B04(_DWORD *this, _DWORD *a2)
{
  signed int v2; // ebx@1
  unsigned int result; // eax@2
  int *v4; // edi@4
  int v5; // esi@6
  int v6; // eax@6
  int v7; // eax@9
  CTXBSTR *v8; // eax@9
  int v9; // eax@10
  _DWORD *v10; // [sp+Ch] [bp-1Ch]@1
  int *v11; // [sp+10h] [bp-18h]@4
  int v12; // [sp+14h] [bp-14h]@6
  char v13; // [sp+18h] [bp-10h]@6
  unsigned int v14; // [sp+24h] [bp-4h]@4

  v10 = this;
  v2 = 0;
  if ( a2 )
  {
    v11 = 0;
    v14 = 0;
    sub_3086E714(&v11);
    v4 = v11;
    if ( v11 )
    {
      CTXBSTR::CTXBSTR(&v13);
      v5 = *v4;
      LOBYTE(v14) = 1;
      v6 = CTXBSTR::operator&(&v13);
      (*(void (__cdecl **)(int *, int))(v5 + 0x80))(v4, v6); //30870B64
      v12 = 0;
      sub_3086F943(v10, 0x45A, 0, 0, &v12); 
      if ( CTXBSTR::IsEmpty((CTXBSTR *)&v13) )
      {
        v2 = 1;
      }
      else if ( v12 & 1 )
      {
        *a2 = CTXBSTR::Copy((CTXBSTR *)&v13);
      }
      else
      {
        CTXStringW::CTXStringW(&v12, &v13);
        LOBYTE(v14) = 2;
        v7 = CTXStringW::GetLength((CTXStringW *)&v12);
        CTXStringW::Delete((CTXStringW *)&v12, v7 - 1, 1);
        v8 = (CTXBSTR *)CTXBSTR::CTXBSTR(&v10, &v12);
        *a2 = CTXBSTR::Copy(v8);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v10);
        LOBYTE(v14) = 1;
        CTXStringW::~CTXStringW((CTXStringW *)&v12);
      }
      CTXBSTR::~CTXBSTR((CTXBSTR *)&v13);
      v9 = *v4;
      v14 = 0xFFFFFFFF;
      (*(void (__cdecl **)(int *))(v9 + 8))(v4);
      result = v2;
    }
    else
    {
      result = 0x80004002;
    }
  }
  else
  {
    result = 0x80070057;
  }
  return result;
}
=================================================================================================================================================================================================//30875FA5 | E8 5AABFFFF              | call gf.30870B04                        |gf
int __stdcall sub_30875F99(int a1, int a2)
{
  return sub_30870B04(a2);
}
=================================================================================================================================================================================================//65710D7E | FF91 24040000            | call dword ptr ds:[ecx+424]             |afctrl
//再次执行
=================================================================================================================================================================================================//65710D7E | FF91 24040000            | call dword ptr ds:[ecx+424]             |
int __stdcall sub_65710D64(int a1, int a2)
{
  int v2; // eax@1
  int result; // eax@2

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    result = (*(int (__stdcall **)(int, int))(*(_DWORD *)v2 + 0x424))(v2, a2); //65710D7E
  else
    result = 0x80004005;
  return result;
}
=================================================================================================================================================================================================//6576CD26 | FF17                     | call dword ptr ds:[edi]                 |
int __thiscall sub_6576CC18(int this)
{
  int v1; // esi@1
  int v2; // eax@2
  int v3; // eax@4
  int *v4; // eax@9
  int v5; // edi@9
  int v6; // eax@9
  char *v7; // ecx@9
  int v8; // ecx@9
  int *v9; // ecx@9
  int v10; // eax@9
  bool v11; // zf@9
  int v12; // eax@10
  int v13; // ecx@10
  char *v14; // eax@10
  int v15; // ecx@10
  int v16; // ecx@11
  int v17; // eax@12
  int v18; // eax@12
  int v19; // eax@14
  int v20; // eax@14
  int v21; // eax@14
  char *v23; // [sp+20h] [bp-94h]@9
  int *v24; // [sp+24h] [bp-90h]@9
  int *v25; // [sp+28h] [bp-8Ch]@4
  int *v26; // [sp+2Ch] [bp-88h]@9
  int v27; // [sp+30h] [bp-84h]@9
  int v28; // [sp+38h] [bp-7Ch]@14
  int v29; // [sp+3Ch] [bp-78h]@4
  int v30; // [sp+40h] [bp-74h]@4
  int v31; // [sp+44h] [bp-70h]@4
  int v32; // [sp+48h] [bp-6Ch]@9
  int v33; // [sp+4Ch] [bp-68h]@9
  int v34; // [sp+50h] [bp-64h]@9
  int v35; // [sp+54h] [bp-60h]@9
  int v36; // [sp+58h] [bp-5Ch]@9
  int v37; // [sp+5Ch] [bp-58h]@9
  int v38; // [sp+60h] [bp-54h]@9
  int v39; // [sp+64h] [bp-50h]@9
  int v40; // [sp+68h] [bp-4Ch]@9
  int v41; // [sp+6Ch] [bp-48h]@7
  char v42; // [sp+70h] [bp-44h]@6
  int v43; // [sp+74h] [bp-40h]@4
  _DWORD *v44; // [sp+78h] [bp-3Ch]@9
  int v45; // [sp+7Ch] [bp-38h]@10
  char v46; // [sp+80h] [bp-34h]@9
  char v47; // [sp+84h] [bp-30h]@9
  int v48; // [sp+88h] [bp-2Ch]@4
  int v49; // [sp+8Ch] [bp-28h]@12
  int *v50; // [sp+90h] [bp-24h]@4
  int *v51; // [sp+94h] [bp-20h]@9
  char v52; // [sp+98h] [bp-1Ch]@4
  char v53; // [sp+9Ch] [bp-18h]@9
  int *v54; // [sp+A0h] [bp-14h]@10
  int *v55; // [sp+A4h] [bp-10h]@6
  int v56; // [sp+B0h] [bp-4h]@4

  v1 = this;
  if ( *(_DWORD *)(this + 0x16C) <= 0 )
  {
    v2 = *(_DWORD *)(this + 0xCC);
    if ( v2 != 3 && v2 != 5 )
    {
      v50 = (int *)sub_657677C3();
      v48 = *(_DWORD *)(v1 + 0xCC);
      *(_DWORD *)(v1 + 0xCC) = 3;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v56 = 0;
      v43 = 0;
      ((void (__thiscall *)(char *, int *))CTXBSTR::CTXBSTR)(&v52, v25);
      LOBYTE(v56) = 2;
      v3 = CTXBSTR::operator&(&v52);
      sub_6576CA56(v3);
      if ( v48 == 2 )
        CTXBSTR::operator=(v1 + 0xC8, &v52);
      (*(void (__stdcall **)(int, int *, char *))(*(_DWORD *)v1 + 0x3B0))(v1, (int *)&v55, &v42);
      if ( *(_DWORD *)(v1 + 0xAC) )
        v41 = 1;
      else
        v41 = *(_DWORD *)(v1 + 0xA8);
      v40 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      LOBYTE(v56) = 3;
      sub_6576C30E(&v46, &v32);
      LOBYTE(v56) = 4;
      sub_6576A1A5(v55);
      ((void (__thiscall *)(char *, int *, int))CTXBSTR::CTXBSTR)(&v53, v26, v27);
      v4 = *(int **)(v1 + 8);
      v5 = *v4;
      LOBYTE(v56) = 5;
      v51 = v4;
      v6 = CTXBSTR::operator&(&v53);
      (*(void (__stdcall **)(int *, int))(v5 + 0x424))(v51, v6);  //6576CD26
      CTXStringW::CTXStringW(&v47, &v53);
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v27 = v1 + 0x190;
      v26 = &v32;
      v25 = &v40;
      v24 = &v36;
      v23 = v7;
      v44 = &v23;
      LOBYTE(v56) = 7;
      CTXStringW::CTXStringW(&v23);
      v8 = *(_DWORD *)(v1 + 0xB8);
      sub_6577400B(*(_DWORD *)(v1 + 0xA4), (unsigned int)&v46, v23, v24, v25, v26);
      v26 = v55;
      v25 = &v36;
      v24 = v9;
      v44 = &v24;
      v23 = &v47;
      CTXStringW::CTXStringW(&v24);
      v10 = sub_6576A6FD((char)v23, v24, v25);
      v11 = *(_DWORD *)(v1 + 0x18C) == 0;
      v55 = (int *)v10;
      if ( !v11 )
      {
        v54 = 0;
        LOBYTE(v56) = 8;
        Util::Data::CreateTXData((Util::Data *)&v54, (struct ITXData **)v26);
        v51 = v54;
        v12 = sub_657028A3(&v44, L"bNumLimit");
        v13 = *v51;
        v25 = *(int **)(v1 + 0x190);
        v45 = v13;
        LOBYTE(v56) = 9;
        v25 = (int *)CTXBSTR::operator wchar_t *(v12);
        v24 = v51;
        (*(void (__stdcall **)(int *, int *))(v45 + 0xCC))(v51, v25);
        LOBYTE(v56) = 8;
        CTXBSTR::~CTXBSTR(&v44);
        v25 = v54;
        v14 = *(char **)(v1 + 0x18C);
        v15 = *(_DWORD *)v14;
        v24 = 0;
        v23 = v14;
        (*(void (__stdcall **)(char *, _DWORD, int *))(v15 + 0xC))(v14, 0, v54);
        LOBYTE(v56) = 7;
        if ( v54 )
        {
          v16 = *v54;
          v25 = v54;
          (*(void (__stdcall **)(int *))(v16 + 8))(v54);
        }
      }
      v25 = v50;
      v17 = *(_DWORD *)v1;
      v24 = v50;
      v23 = (char *)v1;
      (*(void (__stdcall **)(int, int, int))(v17 + 0x3C8))(v1, (int)v50, (int)v50);
      v18 = *(_DWORD *)v1;
      v25 = &v49;
      v24 = (int *)v1;
      v49 = 0;
      (*(void (__stdcall **)(int, int *))(v18 + 0x414))(v1, &v49);
      if ( v49 )
        v55 = 0;
      v25 = v55;
      v19 = *(_DWORD *)v1;
      v24 = v55;
      v23 = (char *)v1;
      (*(void (__stdcall **)(int, int *))(v19 + 0x3C8))(v1, v55);
      v20 = *(_DWORD *)v1;
      v24 = (int *)v1;
      (*(void (__stdcall **)(int))(v20 + 0xD4))(v1);
      v21 = *(_DWORD *)v1;
      v24 = (int *)v1;
      (*(void (__stdcall **)(int))(v21 + 0xD0))(v1);
      *(_DWORD *)(v1 + 0xCC) = v48;
      LOBYTE(v56) = 6;
      sub_6576A9F8((int)&v36);
      LOBYTE(v56) = 5;
      CTXStringW::~CTXStringW(&v47);
      CTXBSTR::~CTXBSTR(&v53);
      LOBYTE(v56) = 3;
      CTXStringW::~CTXStringW(&v46);
      LOBYTE(v56) = 2;
      sub_6576A9F8((int)&v32);
      CTXBSTR::~CTXBSTR(&v52);
      sub_65711967((int)&v28);
    }
  }
  return 0;
}

=================================================================================================================================================================================================//6576CF8C | E8 87FCFFFF              | call afctrl.6576CC18                    |afctrl
int __stdcall sub_6576CF77(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 0xAC) != a2 )
  {
    *(_DWORD *)(a1 + 0xAC) = a2;
    sub_6576CC18(); //6576CF8C
  }
  return 0;
}
=================================================================================================================================================================================================//6576F949 | FF91 C4050000            | call dword ptr ds:[ecx+5C4]             |
unsigned int __stdcall sub_6576F845(int a1, int a2)
{
  int v2; // ebx@1
  bool v3; // zf@1
  unsigned int result; // eax@2
  int v5; // eax@3
  int v6; // eax@4
  _DWORD *v7; // eax@9
  int v8; // edi@9
  int v9; // eax@9
  int v10; // eax@9
  int v11; // edi@9
  int *v12; // eax@9
  int v13; // ecx@9
  int v14; // ecx@13
  int v15; // eax@15
  int v16; // eax@18
  int v17; // edi@20
  int v18; // eax@20
  int v19; // eax@21
  int v20; // eax@21
  int v21; // edx@21
  int v22; // eax@21
  int v23; // edx@21
  int v24; // eax@23
  int v25; // eax@23
  int v26; // edx@23
  int v27; // eax@23
  int v28; // edx@23
  int v29; // eax@24
  int v30; // eax@27
  _DWORD *v31; // eax@27
  int v32; // edi@27
  _DWORD *v33; // eax@27
  int v34; // edi@27
  int v35; // eax@27
  _DWORD *v36; // edi@29
  void (__stdcall **v37)(_DWORD, _DWORD); // edi@30
  _DWORD *v38; // eax@31
  void (__stdcall **v39)(_DWORD, _DWORD); // edi@32
  int v40; // eax@33
  int v41; // eax@35
  int v42; // [sp-4h] [bp-48h]@3
  struct ITXData **v43; // [sp+0h] [bp-44h]@18
  int v44; // [sp+Ch] [bp-38h]@4
  int v45; // [sp+10h] [bp-34h]@4
  int v46; // [sp+14h] [bp-30h]@4
  int v47; // [sp+18h] [bp-2Ch]@4
  int v48; // [sp+1Ch] [bp-28h]@1
  int v49; // [sp+20h] [bp-24h]@21
  int v50; // [sp+24h] [bp-20h]@21
  int v51; // [sp+28h] [bp-1Ch]@9
  int v52; // [sp+2Ch] [bp-18h]@9
  int v53; // [sp+30h] [bp-14h]@18
  char v54; // [sp+34h] [bp-10h]@27
  int v55; // [sp+40h] [bp-4h]@9
  _DWORD *v56; // [sp+4Ch] [bp+8h]@9
  _DWORD *v57; // [sp+4Ch] [bp+8h]@27
  _DWORD *v58; // [sp+4Ch] [bp+8h]@27
  _DWORD *v59; // [sp+4Ch] [bp+8h]@30
  int v60; // [sp+4Ch] [bp+8h]@31

  v2 = a1;
  v48 = *(_DWORD *)(a1 + 0x80);
  v3 = *(_DWORD *)(a1 + 0x40) == 0;
  *(_DWORD *)(a1 + 0x80) = a2;
  if ( v3 )
  {
    result = 0x80004005;
  }
  else
  {
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a1 + 0xD4))(a1, v42);
    v5 = *(_DWORD *)(a1 + 0x80);
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x478))(
          *(_DWORD *)(a1 + 0x40),
          *(_DWORD *)(a1 + 0x11C));
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x3C8))(*(_DWORD *)(a1 + 0x40), 0, 0);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x45C))(*(_DWORD *)(a1 + 0x40), 0);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x130))(*(_DWORD *)(a1 + 0x40), 0);
        (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x40) + 0x460))(*(_DWORD *)(a1 + 0x40), 1);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x534))(*(_DWORD *)(a1 + 0x40), 0);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x474))(*(_DWORD *)(a1 + 0x40), 0);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x154))(*(_DWORD *)(a1 + 0x40), 0);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x5C4))(*(_DWORD *)(a1 + 0x40), 0);
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x160))(*(_DWORD *)(a1 + 0x40), 0);
        ((void (__thiscall *)(int *))CTXBSTR::CTXBSTR)(&v51);
        v7 = *(_DWORD **)(a1 + 0x40);
        v8 = *v7;
        v55 = 0;
        v56 = v7;
        v9 = CTXBSTR::operator&(&v51);
        (*(void (__stdcall **)(_DWORD *, int))(v8 + 0x5C8))(v56, v9);
        v10 = *(_DWORD *)(v2 + 0x40);
        a2 = 0;
        v11 = 0;
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v10 + 0x4A0))(v10, &a2);
        v52 = 0;
        v12 = *(int **)(v2 + 0x40);
        v13 = *v12;
        LOBYTE(v55) = 1;
        (*(void (__stdcall **)(int *, signed int, _DWORD, int *, _DWORD))(v13 + 0x330))(v12, 0x43C, 0, &v52, 0);
        if ( v52 )
          v11 = (*(int (__stdcall **)(int))(*(_DWORD *)v52 + 0x10))(v52);
        a2 += v11;
        v14 = !CTXBSTR::IsEmpty((CTXBSTR *)&v51) || a2;
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(v2 + 0x100) + 0x104))(*(_DWORD *)(v2 + 0x100), v14);
        (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(v2 + 0x4C) + 0x104))(*(_DWORD *)(v2 + 0x4C), 1);
        v15 = *(_DWORD *)v2;
        v46 = 0;
        v47 = 0;
        (*(void (__stdcall **)(int, int *))(v15 + 0x190))(v2, &v46);
        (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v2 + 0x194))(v2, ++v46, v47);
        (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v2 + 0x194))(v2, --v46, v47);
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 0x130))(v2, 0);
        LOBYTE(v55) = 0;
        if ( v52 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v52 + 8))(v52);
        CTXBSTR::~CTXBSTR(&v51);
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 0x40);
      v42 = 0;
      *(_DWORD *)(a1 + 0x110) = 1;
      (*(void (__stdcall **)(int, int))(*(_DWORD *)v6 + 0x478))(v6, v42);
      v44 = 3;
      v45 = 2;
      v46 = 3;
      v47 = 2;
      (*(void (__stdcall **)(_DWORD, signed int, signed int, signed int, signed int))(**(_DWORD **)(a1 + 0x40) + 0x1B4))(
        *(_DWORD *)(a1 + 0x40),
        3,
        2,
        3,
        2);
      (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x40) + 0x45C))(*(_DWORD *)(a1 + 0x40), 1);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x460))(*(_DWORD *)(a1 + 0x40), 0);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x418))(*(_DWORD *)(a1 + 0x40), 0);
      (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x100) + 0x104))(*(_DWORD *)(a1 + 0x100), 1);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x160))(*(_DWORD *)(a1 + 0x40), 0);
      (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x40) + 0x534))(*(_DWORD *)(a1 + 0x40), 1);
      (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x40) + 0x474))(*(_DWORD *)(a1 + 0x40), 1);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x40) + 0x154))(
        *(_DWORD *)(a1 + 0x40),
        *(_DWORD *)(a1 + 0x6C));
      (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x40) + 0x5C4))(*(_DWORD *)(a1 + 0x40), 1);  //6576F949
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x4C) + 0x104))(
        *(_DWORD *)(a1 + 0x4C),
        *(_DWORD *)(a1 + 0x84) == 1);
      (*(void (__stdcall **)(_DWORD, signed int))(**(_DWORD **)(a1 + 0x4C) + 0x104))(*(_DWORD *)(a1 + 0x4C), 1);
      if ( *(_DWORD *)(a1 + 0x40) && sub_6576EB8B(a1) <= 0 )
      {
        v44 = 3;
        v45 = 2;
        v46 = 3;
        v47 = 2;
        (*(void (__stdcall **)(_DWORD, signed int, signed int, signed int, signed int))(**(_DWORD **)(a1 + 0x40) + 0x1B4))(
          *(_DWORD *)(a1 + 0x40),
          3,
          2,
          3,
          2);
      }
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 0x130))(a1, *(_DWORD *)(a1 + 0x64));
      sub_6576F396(a1);
    }
    v53 = 0;
    v55 = 2;
    Util::Data::CreateTXData((Util::Data *)&v53, v43);
    v16 = *(_DWORD *)(v2 + 0x80);
    if ( v16 != v48 )
    {
      if ( v16 )
      {
        if ( !*(_DWORD *)(v2 + 0x84) )
        {
          v24 = *(_DWORD *)v2;
          v46 = 0;
          v47 = 0;
          (*(void (__stdcall **)(int, int *))(v24 + 0x190))(v2, &v46);
          v25 = v46 - *(_DWORD *)(v2 + 0x88);
          v26 = *(_DWORD *)v2;
          v42 = v47 - *(_DWORD *)(v2 + 0x8C);
          v46 = v25;
          v47 = v42;
          (*(void (__stdcall **)(int, int, int))(v26 + 0x194))(v2, v25, v42);
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v2 + 0x1A8))(v2, &v49);
          v27 = v49 - *(_DWORD *)(v2 + 0x90);
          v28 = *(_DWORD *)v2;
          v42 = v50 - *(_DWORD *)(v2 + 0x94);
          v49 = v27;
          v50 = v42;
          (*(void (__stdcall **)(int, int, int))(v28 + 0x1AC))(v2, v27, v42);
        }
        v29 = *(_DWORD *)(v2 + 0x120);
        if ( v29 )
          (*(void (__stdcall **)(int, int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v29 + 0x3FC))(
            v29,
            v2,
            0,
            v44,
            v45,
            v46,
            v47,
            0);
        if ( *(_DWORD *)(v2 + 0x80) != v48 )
        {
          v30 = Util::Contact::GetSelfUin(4);
          a2 = Util::Contact::IsFlagValid(v30, v42);
          ((void (__thiscall *)(char *))CTXBSTR::CTXBSTR)(&v54);
          v31 = *(_DWORD **)(v2 + 0x40);
          v32 = *v31;
          LOBYTE(v55) = 3;
          v57 = v31;
          v42 = CTXBSTR::operator&(&v54);
          (*(void (__stdcall **)(_DWORD *, int))(v32 + 0x5D8))(v57, v42);
          ((void (__thiscall *)(int *))CTXBSTR::CTXBSTR)(&v50);
          v33 = *(_DWORD **)(v2 + 0x40);
          v34 = *v33;
          LOBYTE(v55) = 4;
          v58 = v33;
          v42 = CTXBSTR::operator&(&v50);
          (*(void (__stdcall **)(_DWORD *, int))(v34 + 0x5C8))(v58, v42);
          v35 = (unsigned __int8)CTXBSTR::operator!=(&v54, &v50);
          v51 = (unsigned __int8)v35;
          if ( !a2 && v35 )
          {
            v36 = (_DWORD *)(v2 + 0x120);
            if ( !*(_DWORD *)(v2 + 0x120) )
            {
              sub_6576F567(v2 + 0x120);
              v59 = (_DWORD *)*v36;
              v37 = (void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v36 + 0x3F4);
              v42 = sub_658051DD(v2);
              (*v37)(v59, v42);
            }
            v38 = *(_DWORD **)(v2 + 0x120);
            v60 = *(_DWORD *)(v2 + 0x120);
            if ( v38 )
            {
              v39 = (void (__stdcall **)(_DWORD, _DWORD))(*v38 + 0x404);
              v42 = sub_658051DD(v2);
              (*v39)(v60, v42);
            }
            v40 = CTXBSTR::operator wchar_t *(&v54);
            sub_6576E916(v40);
          }
          v42 = v51;
          (*(void (__stdcall **)(int, const wchar_t *, int))(*(_DWORD *)v53 + 0xCC))(v53, L"bHaveExtCF", v51);
          CTXBSTR::~CTXBSTR(&v50);
          LOBYTE(v55) = 2;
          CTXBSTR::~CTXBSTR(&v54);
        }
      }
      else
      {
        v17 = *(_DWORD *)v2;
        v18 = CTXBSTR::operator&(v2 + 0x108);
        (*(void (__stdcall **)(int, int))(v17 + 0x330))(v2, v18);
        if ( !*(_DWORD *)(v2 + 0x84) )
        {
          v19 = *(_DWORD *)v2;
          v46 = 0;
          v47 = 0;
          (*(void (__stdcall **)(int, int *))(v19 + 0x190))(v2, &v46);
          v20 = *(_DWORD *)(v2 + 0x88) + v46;
          v21 = *(_DWORD *)v2;
          v42 = *(_DWORD *)(v2 + 0x8C) + v47;
          v46 = v20;
          v47 = v42;
          (*(void (__stdcall **)(int, int, int))(v21 + 0x194))(v2, v20, v42);
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v2 + 0x1A8))(v2, &v49);
          v22 = *(_DWORD *)(v2 + 0x90) + v49;
          v23 = *(_DWORD *)v2;
          v42 = *(_DWORD *)(v2 + 0x94) + v50;
          v49 = v22;
          v50 = v42;
          (*(void (__stdcall **)(int, int, int))(v23 + 0x1AC))(v2, v22, v42);
        }
      }
    }
    v41 = *(_DWORD *)v2;
    v42 = 0;
    (*(void (__stdcall **)(int))(v41 + 0x98))(v2);
    if ( *(_DWORD *)(v2 + 0x80) != v48 )
      (*(void (__stdcall **)(int, signed int, int))(*(_DWORD *)(v2 + 0x14) + 0x3C))(v2 + 0x14, 0x65, v53);
    v55 = 0xFFFFFFFF;
    if ( v53 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v53 + 8))(v53);
    result = 0;
  }
  return result;
}

=================================================================================================================================================================================================//6576F6EF | FF90 64030000            | call dword ptr ds:[eax+364]             |
int __thiscall sub_6576F6C3(char *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v6; // esi@1

  v6 = this;
  sub_65765AA6(this + 0x10, a2, a3, a4, a5, a6);
  if ( *((_DWORD *)v6 + 0x20) == 1 )
  {
    (*(void (__stdcall **)(char *, _DWORD))(*(_DWORD *)v6 + 0x364))(v6, 0); //6576F6EF
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v6 + 0x10) + 0x2C0))(*((_DWORD *)v6 + 0x10));
  }
  return 0;
}
=================================================================================================================================================================================================//6576FF61 | E8 5DF7FFFF              | call afctrl.6576F6C3                    |
int __stdcall sub_6576FF14(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6; // eax@1
  int v7; // eax@3
  int v8; // eax@4
  int v9; // eax@5
  int result; // eax@7
  int v11; // eax@12
  int v12; // eax@13

  v6 = *a3;
  if ( *a3 <= 0x6B )
  {
    if ( *a3 == 0x6B )
      return sub_6576F6C3(a2, a3, a4, a5, a6); //6576FF61
    v7 = v6 - 0x66;
    if ( !v7 )
      return sub_6576F7CD(a2, a3, a4, a5, a6);
    v8 = v7 - 1;
    if ( !v8 )
      return sub_6576F803(a2, a3, a4, a5, a6);
    v9 = v8 - 2;
    if ( !v9 )
      return sub_6576F6C3(a2, a3, a4, a5, a6);
    if ( v9 == 1 )
      return sub_6576F708(a2, a3, a4, a5, a6);
    return sub_65765AA6(a1, a2, a3, a4, a5, a6);
  }
  v11 = v6 - 0x6C;
  if ( !v11 )
    return sub_6576F708(a2, a3, a4, a5, a6);
  v12 = v11 - 0x5F;
  if ( v12 )
  {
    if ( v12 != 0x320 )
      return sub_65765AA6(a1, a2, a3, a4, a5, a6);
    result = sub_6576F5C9(a2, a3, a4, a5, a6);
  }
  else
  {
    result = sub_6576F742(a2, a3, a4, a5, a6);
  }
  return result;
}
=================================================================================================================================================================================================//3082940E | FF51 1C                  | call dword ptr ds:[ecx+1C]              |gf
int __cdecl sub_30829384(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edi@2
  int v8; // eax@7
  int v9; // [sp+Ch] [bp-18h]@2
  int v10; // [sp+10h] [bp-14h]@7
  int v11; // [sp+14h] [bp-10h]@1
  unsigned int v12; // [sp+20h] [bp-4h]@1

  sub_308290FD(a1);
  v12 = 0;
  if ( v11 )
  {
    v9 = 1;
    v6 = (*(int (__stdcall **)(int, int, int, int, int, _DWORD *, int *))(*(_DWORD *)v11 + 0x2C))(
           v11,
           a2,
           a3,
           a4,
           a5,
           a6,
           &v9);
    if ( !*a6 || !v9 )
    {
LABEL_4:
      v12 = 0xFFFFFFFF;
      if ( v11 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      return v6;
    }
  }
  sub_3082911F(a1);
  v8 = v10;
  LOBYTE(v12) = 1;
  if ( v10 )
  {
    v6 = (*(int (__stdcall **)(int, int, int, int, int, _DWORD *))(*(_DWORD *)v10 + 0x1C))(v10, a2, a3, a4, a5, a6); //3082940E
    v8 = v10;
    if ( !*a6 )
    {
      LOBYTE(v12) = 0;
      if ( v10 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      goto LABEL_4;
    }
  }
  LOBYTE(v12) = 0;
  if ( v8 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8);
  v12 = 0xFFFFFFFF;
  if ( v11 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11);
  return 0;
}
=================================================================================================================================================================================================//30825697 | E8 E83C0000              | call gf.30829384                        |

Util::GF *__cdecl Util::GF::DispatchFrameMsg(Util::GF *this, struct IGFFrame *a2, struct tagBaseArg *a3, int *a4, __int32 *a5)
{
  Util::GF *v5; // edi@1
  Util::GF *result; // eax@9
  int v7; // ecx@12
  _DWORD *v8; // eax@21
  int v9; // eax@23
  int *v10; // eax@33
  struct IGFElement *v11; // [sp-4h] [bp-58h]@0
  struct IGFElement *v12; // [sp-4h] [bp-58h]@2
  int v13; // [sp+Ch] [bp-48h]@14
  int v14; // [sp+10h] [bp-44h]@10
  int v15; // [sp+14h] [bp-40h]@10
  int v16; // [sp+18h] [bp-3Ch]@10
  char v17; // [sp+1Ch] [bp-38h]@23
  char v18; // [sp+28h] [bp-2Ch]@20
  char v19; // [sp+2Ch] [bp-28h]@22
  Util::GF *v20; // [sp+34h] [bp-20h]@4
  char v21; // [sp+38h] [bp-1Ch]@33
  Util::GF *v22; // [sp+3Ch] [bp-18h]@4
  int v23; // [sp+40h] [bp-14h]@7
  Util::GF *v24; // [sp+44h] [bp-10h]@12
  unsigned int v25; // [sp+50h] [bp-4h]@1

  v5 = this;
  sub_30825EEA(this);
  v25 = 0;
  if ( v5 && Util::GF::IsValidGFElement(v5, v11) )
  {
    this = 0;
    LOBYTE(v25) = 1;
    sub_308249DE(&this);
    if ( this
      && (v22 = 0,
          v20 = (Util::GF *)(*(int (__stdcall **)(Util::GF *, Util::GF *, struct IGFFrame *, struct tagBaseArg *, int *, int *))(*(_DWORD *)this + 0x28))(
                              this,
                              v5,
                              a2,
                              a3,
                              a4,
                              (int *)&v22),
          v22) )
    {
      LOBYTE(v25) = 0;
      if ( this )
        (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)this + 8))(this);
      v25 = 0xFFFFFFFF;
      if ( v23 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v23 + 8))(v23);
      result = v20;
    }
    else
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      LOBYTE(v25) = 2;
      if ( !a5 )
      {
        sub_309227B6(8);
        sub_30825EEA(v5);
        while ( v22 )
        {
          v24 = 0;
          v7 = *(_DWORD *)v22;
          LOBYTE(v25) = 4;
          (*(void (__stdcall **)(Util::GF *, Util::GF **))(v7 + 0xB4))(v22, &v24);
          if ( v24 && Util::GF::IsValidGFElement(v24, v12) )
            sub_308409E1(&v13, (int)&v24);
          if ( v22 != v24 )
            AtlComPtrAssign(&v22, v24);
          LOBYTE(v25) = 3;
          if ( v24 )
            (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v24 + 8))(v24);
        }
        LOBYTE(v25) = 2;
        sub_3087E330(&v18);
        while ( 1 )
        {
          v9 = sub_3087E357(&v17);
          if ( (unsigned __int8)sub_3087DFCF(v9) )
            break;
          v22 = (Util::GF *)1;
          v8 = (_DWORD *)sub_308224CA(&v18);
          v24 = (Util::GF *)sub_308292B9(*v8, v5, a2, a3, a4, &v22);
          if ( !v22 )
            goto LABEL_28;
          sub_308216F6(&v19);
        }
      }
      v22 = (Util::GF *)1;
      v24 = (Util::GF *)sub_308292B9(v5, v5, a2, a3, a4, &v22);
      if ( v22 )
      {
        v22 = (Util::GF *)1;
        v24 = (Util::GF *)sub_30829384((int)v5, (int)v5, (int)a2, (int)a3, (int)a4, &v22);
        if ( v22 )
        {
          if ( !a5 )
          {
            sub_3087E061(v14, &v13);
            while ( 1 )
            {
              sub_3087E061(v15, &v13);
              if ( (unsigned __int8)sub_309142AD(&v19) )
                break;
              v20 = (Util::GF *)1;
              v10 = (int *)sub_3080DB78(&v21);
              v24 = (Util::GF *)sub_30829384(*v10, (int)v5, (int)a2, (int)a3, (int)a4, &v20); //30825697
              if ( !v20 )
                break;
              sub_30825EC4(&v21);
            }
          }
        }
      }
LABEL_28:
      sub_3080401E((int)&v13);
      LOBYTE(v25) = 0;
      if ( this )
        (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)this + 8))(this);
      v25 = 0xFFFFFFFF;
      if ( v23 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v23 + 8))(v23);
      result = v24;
    }
  }
  else
  {
    v25 = 0xFFFFFFFF;
    if ( v23 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v23 + 8))(v23);
    result = (Util::GF *)0x80004005;
  }
  return result;
}
=================================================================================================================================================================================================//30918762 | E8 0DCDF0FF              | call <gf.?DispatchFrameMsg@GF@Util@@YAJ |
Util::GF *__stdcall sub_30918698(Util::GF *a1, void *Src, struct tagBaseArg *a3, int *a4, __int32 *a5)
{
  Util::GF *result; // eax@2
  struct IGFFrame *v6; // esi@4
  int v7; // eax@4
  int v8; // eax@7
  int v9; // eax@14
  struct IGFElement *v10; // [sp+0h] [bp-28h]@0
  Util::GF *v11; // [sp+0h] [bp-28h]@1
  int Dst; // [sp+8h] [bp-20h]@7

  if ( Util::GF::IsValidGFElement(a1, v10) )
  {
    if ( Util::GF::GetCurrentModeId(v11) == 1 )
    {
      v6 = (struct IGFFrame *)Src;
      v7 = *(_DWORD *)Src;
      if ( *(_DWORD *)Src == 0x65 || v7 == 0x66 || v7 == 0x67 )
      {
        memcpy(&Dst, Src, 0x20u);
        v8 = *(_DWORD *)Src;
        if ( *(_DWORD *)Src == 0x65 )
          Dst = 0x75;
        if ( v8 == 0x66 )
          Dst = 0x74;
        if ( v8 == 0x67 )
          Dst = 0x76;
        Util::GF::DispatchFrameMsg(a1, (struct IGFFrame *)&Dst, a3, a4, (__int32 *)1);
      }
      v9 = *(_DWORD *)a1;
      Src = 0;
      (*(void (__stdcall **)(Util::GF *, void **))(v9 + 0x114))(a1, &Src);
      if ( Src )
        result = Util::GF::DispatchFrameMsg(a1, v6, a3, a4, a5);  //30918762
      else
        result = 0;
    }
    else
    {
      result = Util::GF::DispatchFrameMsg(a1, (struct IGFFrame *)Src, a3, a4, a5);
    }
  }
  else
  {
    sub_309183DA(a1);
    result = (Util::GF *)0x80004005;
  }
  return result;
}

=================================================================================================================================================================================================//3091AA65 | E8 2EDCFFFF              | call gf.30918698    
unsigned int __stdcall sub_3091A800(int a1, HWND a2, int a3, int a4, int a5, struct tagBaseArg *a6)
{
  int v6; // eax@2
  Util::GF *v7; // eax@3
  Util::GF *v8; // ST00_4@5
  unsigned int result; // eax@10
  int v10; // ecx@36
  int Dst; // [sp+Ch] [bp-50h]@3
  char v12; // [sp+14h] [bp-48h]@3
  int v13; // [sp+1Ch] [bp-40h]@7
  int v14; // [sp+20h] [bp-3Ch]@7
  HWND v15; // [sp+24h] [bp-38h]@7
  int v16; // [sp+28h] [bp-34h]@35
  int v17; // [sp+2Ch] [bp-30h]@25
  int v18; // [sp+30h] [bp-2Ch]@17
  int v19; // [sp+34h] [bp-28h]@13
  int v20; // [sp+38h] [bp-24h]@3
  int v21; // [sp+3Ch] [bp-20h]@3
  int v22; // [sp+40h] [bp-1Ch]@11
  int v23; // [sp+44h] [bp-18h]@20
  int v24; // [sp+48h] [bp-14h]@11
  Util::GF *v25; // [sp+4Ch] [bp-10h]@3
  unsigned int v26; // [sp+58h] [bp-4h]@3

  if ( a6 && (v6 = *(_DWORD *)(a1 + 0x28)) != 0 )
  {
    v20 = 0;
    v21 = 0;
    v25 = 0;
    v26 = 0;
    sub_30829EE5(v6, &a3, &v25);
    Dst = 0;
    memset(&v12, 0, 0x18u);
    v7 = *(Util::GF **)(a1 + 0x2C);
    if ( v7 != v25 )
    {
      if ( v7 )
      {
        sub_309178DA(&Dst);
        v8 = *(Util::GF **)(a1 + 0x2C);
        Dst = 0x67;
        sub_30918698(v8, &Dst, (struct tagBaseArg *)&v20, &v21, 0);
        sub_308430BD(0);
      }
      if ( v25 )
      {
        sub_309178DA(&Dst);
        v13 = a3;
        v14 = a4;
        v15 = (HWND)a5;
        Dst = 0x66;
        sub_30918698(v25, &Dst, (struct tagBaseArg *)&v20, &v21, 0);
      }
      sub_308BB702(&v25);
    }
    if ( v25 )
    {
      sub_308BB702(&v25);
      sub_308BB702(&v25);
      *(_DWORD *)(a1 + 0x40) = *(_DWORD *)(a1 + 0x38);
      *(_DWORD *)(a1 + 0x44) = *(_DWORD *)(a1 + 0x3C);
      *(_DWORD *)(a1 + 0x38) = a3;
      *(_DWORD *)(a1 + 0x3C) = a4;
      v22 = 0;
      sub_30829141(*(_DWORD *)(a1 + 0x28));
      LOBYTE(v26) = 2;
      if ( v24 )
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v24 + 0x20))(v24, &v22);
      sub_3082E704(v25);
      LOBYTE(v26) = 3;
      v19 = 0;
      if ( !a1 || (*(int (__stdcall **)(int, int *))(*(_DWORD *)a1 + 0x114))(a1, &v19) < 0 || !v19 )
        sub_308430BD(v22);
      v18 = 0;
      if ( !a1 || (*(int (__stdcall **)(int, int *))(*(_DWORD *)a1 + 0x2E4))(a1, &v18) < 0 || !v18 )
      {
        v23 = 0;
        LOBYTE(v26) = 4;
        do
        {
          if ( !a1 || (*(int (__stdcall **)(int, int *))(*(_DWORD *)a1 + 0x2B0))(a1, &v23) < 0 || !v23 )
            break;
          sub_308430BD(v23);
          if ( v23 )
            AtlComPtrAssign(&v23, 0);
          v17 = 0;
          if ( !a1 )
            break;
        }
        while ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)a1 + 0x2E4))(a1, &v17) < 0 || !v17 );
        LOBYTE(v26) = 3;
        if ( v23 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v23 + 8))(v23);
      }
      if ( a1 && a1 != v22 && v24 )
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v24 + 0x1C))(v24, 0);
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v24 + 0x2C))(v24, a1);
      }
      sub_309178DA(&Dst);
      v15 = a2;
      v13 = a3;
      v14 = a4;
      v16 = a5;
      Dst = 0x69;
      sub_30918698(v25, &Dst, a6, &v21, 0); //30918698
      if ( v24 )
      {
        a5 = 0;
        v10 = *(_DWORD *)v24;
        LOBYTE(v26) = 5;
        (*(void (__stdcall **)(int, int *))(v10 + 0x20))(v24, &a5);
        if ( a5 == a1 && v22 != a1 && sub_30829163(*(HWND *)(a1 + 0x28))
          || a1
          && v24
          && (a6 = 0,
              a2 = 0,
              (*(void (__stdcall **)(int, struct tagBaseArg **))(*(_DWORD *)a1 + 0x20C))(a1, &a6),
              (*(void (__stdcall **)(int, HWND *))(*(_DWORD *)a1 + 0x200))(a1, &a2),
              (struct tagBaseArg *)GetFocus() != a6)
          && GetActiveWindow() == a2
          && a1 != *(_DWORD *)(a1 + 0x28) )
        {
          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v24 + 0x2C))(v24, 0);
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v24 + 0x1C))(v24, a1);
        }
        LOBYTE(v26) = 3;
        if ( a5 )
          (*(void (__stdcall **)(int))(*(_DWORD *)a5 + 8))(a5);
      }
      LOBYTE(v26) = 2;
      if ( a1 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
      LOBYTE(v26) = 1;
      if ( v24 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v24 + 8))(v24);
      LOBYTE(v26) = 0;
      if ( v22 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22);
      v26 = 0xFFFFFFFF;
      if ( v25 )
        (*(void (__stdcall **)(Util::GF *))(*(_DWORD *)v25 + 8))(v25);
    }
    result = 0;
  }
  else
  {
    result = 0x80004005;
  }
  return result;
}
                  
=================================================================================================================================================================================================//30921938 | FF90 A4000000            | call dword ptr ds:[eax+A4]              |
void __thiscall sub_309218E7(int this, HWND hWnd, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi@1
  HWND v8; // edi@2
  struct tagPOINT Point; // [sp+4h] [bp-8h]@4

  v7 = this;
  if ( *(_DWORD *)(this + 0x24) )
  {
    v8 = *(HWND *)(this + 4);
    if ( GetCapture() != v8 )
      SetCapture(v8);
    Point.x = a4;
    Point.y = a5;
    ClientToScreen(hWnd, &Point);
    (*(void (__stdcall **)(_DWORD, int, LONG, LONG, int, int))(**(_DWORD **)(v7 + 0x24) + 0xA4))( //30921938
      *(_DWORD *)(v7 + 0x24),
      a3,
      Point.x,
      Point.y,
      a6,
      a7);
  }
}

=================================================================================================================================================================================================//30920EB7 | FF52 64                  | call dword ptr ds:[edx+64]              |
LRESULT __thiscall sub_3092072C(void *this, UINT Msg, WPARAM wParam, LPARAM lParam, int a5)
{
  int v5; // eax@1
  LRESULT result; // eax@9

  v5 = a5;
  *(_DWORD *)a5 = 0;
  if ( Msg == 0x50 || Msg == 0x51 )
  {
    *(_DWORD *)a5 = 1;
    result = DefWindowProcW(*((HWND *)this + 1), Msg, wParam, lParam);
  }
  else
  {
    if ( !*((_DWORD *)this + 6) && Msg != 0x100 && Msg != 0x104 && Msg != 0x105 && Msg != 0x101 && Msg != 0x20A )
      return 0;
    if ( Msg > 0x1C )
    {
      if ( Msg > 0x125 )
      {
        if ( Msg > 0x231 )
        {
          if ( Msg > 0x291 )
          {
            if ( Msg > 0x303 )
            {
              if ( Msg == 0x304 )
              {
                (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x130))(*((_DWORD *)this + 1), a5);
                return 0;
              }
              if ( Msg == 0x312 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 0x50))(
                  *((_DWORD *)this + 1),
                  wParam,
                  (unsigned __int16)lParam,
                  (unsigned int)lParam >> 0x10,
                  a5);
                return 0;
              }
              if ( Msg == 0x31E )
                return (*(int (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x118))(
                         *((_DWORD *)this + 1),
                         wParam,
                         lParam,
                         a5);
            }
            else
            {
              if ( Msg == 0x303 )
              {
                (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x12C))(*((_DWORD *)this + 1), a5);
                return 0;
              }
              if ( Msg == 0x2A3 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x80))(
                  *((_DWORD *)this + 1),
                  wParam,
                  lParam,
                  a5);
                return 0;
              }
              if ( Msg == 0x300 )
              {
                (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x128))(*((_DWORD *)this + 1), a5);
                return 0;
              }
              if ( Msg == 0x301 )
              {
                (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x120))(*((_DWORD *)this + 1), a5);
                return 0;
              }
              if ( Msg == 0x302 )
              {
                (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x124))(*((_DWORD *)this + 1), a5);
                return 0;
              }
            }
          }
          else
          {
            if ( Msg == 0x291 )
              return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x154))(
                       *((_DWORD *)this + 1),
                       0x291,
                       wParam,
                       lParam,
                       a5);
            if ( Msg > 0x284 )
            {
              if ( Msg == 0x285 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x144))(
                         *((_DWORD *)this + 1),
                         0x285,
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x286 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x148))(
                         *((_DWORD *)this + 1),
                         0x286,
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x288 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x14C))(
                         *((_DWORD *)this + 1),
                         0x288,
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x290 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x150))(
                         *((_DWORD *)this + 1),
                         0x290,
                         wParam,
                         lParam,
                         a5);
            }
            else
            {
              if ( Msg == 0x284 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x140))(
                         *((_DWORD *)this + 1),
                         0x284,
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x232 )
                return (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x48))(*((_DWORD *)this + 1), a5);
              if ( Msg == 0x281 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x134))(
                         *((_DWORD *)this + 1),
                         0x281,
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x282 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x138))(
                         *((_DWORD *)this + 1),
                         0x282,
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x283 )
                return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x13C))(
                         *((_DWORD *)this + 1),
                         0x283,
                         wParam,
                         lParam,
                         a5);
            }
          }
        }
        else
        {
          if ( Msg == 0x231 )
            return (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x34))(*((_DWORD *)this + 1), a5);
          switch ( Msg )
          {
            case 0x216u:
              (*(void (__stdcall **)(_DWORD, LPARAM, int))(*(_DWORD *)this + 0x90))(*((_DWORD *)this + 1), lParam, a5);
              return 0;
            case 0x214u:
              (*(void (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0xEC))(
                *((_DWORD *)this + 1),
                wParam,
                lParam,
                a5);
              return 0;
            case 0x211u:
              LOBYTE(v5) = wParam != 0;
              return (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)this + 0x30))(*((_DWORD *)this + 1), v5, a5);
            case 0x212u:
              LOBYTE(v5) = wParam != 0;
              return (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)this + 0x44))(*((_DWORD *)this + 1), v5, a5);
            case 0x201u:  //30920EB7
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x64))(
                *((_DWORD *)this + 1),
                0,
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x202u:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x68))(
                *((_DWORD *)this + 1),
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x203u:
              (*(void (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x64))(
                *((_DWORD *)this + 1),
                1,
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x204u:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x6C))(
                *((_DWORD *)this + 1),
                0,
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x205u:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x70))(
                *((_DWORD *)this + 1),
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x206u:
              (*(void (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x6C))(
                *((_DWORD *)this + 1),
                1,
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x207u:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x74))(
                *((_DWORD *)this + 1),
                0,
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x208u:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x78))(
                *((_DWORD *)this + 1),
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x209u:
              (*(void (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x74))(
                *((_DWORD *)this + 1),
                1,
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x200u:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x84))(
                *((_DWORD *)this + 1),
                (signed __int16)lParam,
                SHIWORD(lParam),
                wParam,
                a5);
              return 0;
            case 0x20Au:
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x88))(
                *((_DWORD *)this + 1),
                (signed __int16)lParam,
                SHIWORD(lParam),
                SHIWORD(wParam),
                (signed __int16)wParam,
                a5);
              return 0;
            default:
              break;
          }
        }
      }
      else
      {
        if ( Msg == 0x125 )
          return (*(int (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x110))(
                   *((_DWORD *)this + 1),
                   wParam,
                   lParam,
                   a5);
        if ( Msg > 0xA3 )
        {
          if ( Msg > 0x105 )
          {
            if ( Msg == 0x106 )
            {
              (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, int))(*(_DWORD *)this + 0x100))(
                *((_DWORD *)this + 1),
                wParam,
                (signed __int16)lParam,
                a5);
              return 0;
            }
            if ( Msg == 0x10D )
              return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x158))(
                       *((_DWORD *)this + 1),
                       0x10D,
                       wParam,
                       lParam,
                       a5);
            if ( Msg == 0x10E )
              return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x15C))(
                       *((_DWORD *)this + 1),
                       0x10E,
                       wParam,
                       lParam,
                       a5);
            if ( Msg == 0x10F )
              return (*(int (__stdcall **)(_DWORD, signed int, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x160))(
                       *((_DWORD *)this + 1),
                       0x10F,
                       wParam,
                       lParam,
                       a5);
            if ( Msg == 0x110 )
              return (*(int (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x54))(
                       *((_DWORD *)this + 1),
                       wParam,
                       lParam,
                       a5);
            if ( Msg == 0x112 )
            {
              (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, _DWORD, int))(*(_DWORD *)this + 0xF0))(
                *((_DWORD *)this + 1),
                wParam,
                (signed __int16)lParam,
                SHIWORD(lParam),
                a5);
              return 0;
            }
            if ( Msg == 0x117 )
            {
              (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 0x114))(
                *((_DWORD *)this + 1),
                wParam,
                (unsigned __int16)lParam,
                (unsigned int)lParam >> 0x10,
                a5);
              return 0;
            }
          }
          else
          {
            if ( Msg == 0x105 )
            {
              (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)this + 0xFC))(
                *((_DWORD *)this + 1),
                wParam,
                0,
                (signed __int16)lParam,
                (unsigned int)lParam >> 0x10,
                a5);
              return 0;
            }
            if ( Msg > 0x100 )
            {
              if ( Msg == 0x101 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)this + 0x5C))(
                  *((_DWORD *)this + 1),
                  wParam,
                  0,
                  (signed __int16)lParam,
                  (unsigned int)lParam >> 0x10,
                  a5);
                return 0;
              }
              if ( Msg == 0x102 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, int))(*(_DWORD *)this + 0x1C))(
                  *((_DWORD *)this + 1),
                  wParam,
                  (signed __int16)lParam,
                  a5);
                return 0;
              }
              if ( Msg == 0x104 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, signed int, _DWORD, unsigned int, int))(*(_DWORD *)this + 0xF8))(
                  *((_DWORD *)this + 1),
                  wParam,
                  1,
                  (signed __int16)lParam,
                  (unsigned int)lParam >> 0x10,
                  a5);
                return 0;
              }
            }
            else
            {
              if ( Msg == 0x100 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, signed int, _DWORD, unsigned int, int))(*(_DWORD *)this + 0x58))(
                  *((_DWORD *)this + 1),
                  wParam,
                  1,
                  (signed __int16)lParam,
                  (unsigned int)lParam >> 0x10,
                  a5);
                return 0;
              }
              if ( Msg == 0xA4 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xB4))(
                  *((_DWORD *)this + 1),
                  0,
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
              if ( Msg == 0xA5 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xB8))(
                  *((_DWORD *)this + 1),
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
              if ( Msg == 0xA7 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xBC))(
                  *((_DWORD *)this + 1),
                  0,
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
              if ( Msg == 0xA8 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xC0))(
                  *((_DWORD *)this + 1),
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
            }
          }
        }
        else
        {
          if ( Msg == 0xA3 )
          {
            (*(void (__stdcall **)(_DWORD, signed int, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xB0))(
              *((_DWORD *)this + 1),
              1,
              (signed __int16)lParam,
              SHIWORD(lParam),
              wParam,
              a5);
            return 0;
          }
          if ( Msg > 0x81 )
          {
            if ( Msg > 0x86 )
            {
              if ( Msg == 0xA0 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xC4))(
                  *((_DWORD *)this + 1),
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
              if ( Msg == 0xA1 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xA8))(
                  *((_DWORD *)this + 1),
                  0,
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
              if ( Msg == 0xA2 )
              {
                (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, WPARAM, int))(*(_DWORD *)this + 0xAC))(
                  *((_DWORD *)this + 1),
                  (signed __int16)lParam,
                  SHIWORD(lParam),
                  wParam,
                  a5);
                return 0;
              }
            }
            else
            {
              if ( Msg == 0x86 )
                return (*(int (__stdcall **)(_DWORD, WPARAM, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x94))(
                         *((_DWORD *)this + 1),
                         wParam,
                         0,
                         0,
                         a5);
              if ( Msg == 0x82 )
              {
                (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0xA0))(*((_DWORD *)this + 1), a5);
                return 0;
              }
              if ( Msg == 0x83 )
                return (*(int (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x98))(
                         *((_DWORD *)this + 1),
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x84 )
                return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 0xC8))(
                         *((_DWORD *)this + 1),
                         (signed __int16)lParam,
                         SHIWORD(lParam),
                         a5);
              if ( Msg == 0x85 )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, int))(*(_DWORD *)this + 0xA4))(*((_DWORD *)this + 1), wParam, a5);
                return 0;
              }
            }
          }
          else
          {
            if ( Msg == 0x81 )
              return (*(int (__stdcall **)(_DWORD, LPARAM, int))(*(_DWORD *)this + 0x9C))(
                       *((_DWORD *)this + 1),
                       lParam,
                       a5);
            if ( Msg > 0x46 )
            {
              if ( Msg == 0x47 )
              {
                (*(void (__stdcall **)(_DWORD, LPARAM, int))(*(_DWORD *)this + 0xD8))(*((_DWORD *)this + 1), lParam, a5);
                return 0;
              }
              if ( Msg == 0x4E )
                return (*(int (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0xCC))(
                         *((_DWORD *)this + 1),
                         wParam,
                         lParam,
                         a5);
              if ( Msg == 0x7E )
              {
                (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, WPARAM, int))(*(_DWORD *)this + 0x2C))(
                  *((_DWORD *)this + 1),
                  wParam,
                  (unsigned __int16)lParam,
                  wParam >> 0x10,
                  a5);
                return 0;
              }
            }
            else
            {
              if ( Msg == 0x46 )
                return (*(int (__stdcall **)(_DWORD, LPARAM, int))(*(_DWORD *)this + 0xD4))(
                         *((_DWORD *)this + 1),
                         lParam,
                         a5);
              if ( Msg == 0x20 )
                return (*(int (__stdcall **)(_DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 0xE0))(
                         *((_DWORD *)this + 1),
                         wParam,
                         (unsigned __int16)lParam,
                         (unsigned int)lParam >> 0x10,
                         a5);
              if ( Msg == 0x21 )
                return (*(int (__stdcall **)(_DWORD, WPARAM, _DWORD, unsigned int, int))(*(_DWORD *)this + 0x7C))(
                         *((_DWORD *)this + 1),
                         wParam,
                         (unsigned __int16)lParam,
                         (unsigned int)lParam >> 0x10,
                         a5);
              if ( Msg == 0x24 )
              {
                (*(void (__stdcall **)(_DWORD, LPARAM, int))(*(_DWORD *)this + 0x4C))(*((_DWORD *)this + 1), lParam, a5);
                return 0;
              }
              if ( Msg == 0x3D )
                return (*(int (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x11C))(
                         *((_DWORD *)this + 1),
                         wParam,
                         lParam,
                         a5);
            }
          }
        }
      }
    }
    else
    {
      if ( Msg == 0x1C )
      {
        (*(void (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x18))(
          *((_DWORD *)this + 1),
          wParam,
          lParam,
          a5);
        return 0;
      }
      if ( Msg > 0xA )
      {
        if ( Msg == 0xF )
        {
          (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0xD0))(*((_DWORD *)this + 1), a5);
          return 0;
        }
        if ( Msg == 0x10 )
        {
          (*(void (__stdcall **)(_DWORD, WPARAM, int))(*(_DWORD *)this + 0x20))(*((_DWORD *)this + 1), wParam, a5);
          return 0;
        }
        if ( Msg == 0x11 )
          return (unsigned __int16)(*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0xDC))(
                                     *((_DWORD *)this + 1),
                                     a5);
        if ( Msg == 0x14 )
          return (*(int (__stdcall **)(_DWORD, WPARAM, int))(*(_DWORD *)this + 0x40))(*((_DWORD *)this + 1), wParam, a5);
        if ( Msg == 0x16 )
        {
          (*(void (__stdcall **)(_DWORD, WPARAM, int))(*(_DWORD *)this + 0x3C))(*((_DWORD *)this + 1), wParam, a5);
          return 0;
        }
        if ( Msg == 0x18 )
        {
          (*(void (__stdcall **)(_DWORD, WPARAM, LPARAM, int))(*(_DWORD *)this + 0xF4))(
            *((_DWORD *)this + 1),
            wParam,
            lParam,
            a5);
          return 0;
        }
      }
      else
      {
        if ( Msg == 0xA )
        {
          LOBYTE(v5) = wParam == 1;
          (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)this + 0x38))(*((_DWORD *)this + 1), v5, a5);
          return 0;
        }
        if ( Msg == 1 )
          return ((*(int (__stdcall **)(_DWORD, LPARAM, int))(*(_DWORD *)this + 0x24))(
                    *((_DWORD *)this + 1),
                    lParam,
                    a5) != 0)
               - 1;
        if ( Msg == 2 )
        {
          (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)this + 0x28))(*((_DWORD *)this + 1), a5);
          return 0;
        }
        if ( Msg == 3 )
        {
          (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x8C))(
            *((_DWORD *)this + 1),
            (signed __int16)lParam,
            SHIWORD(lParam),
            a5);
          return 0;
        }
        if ( Msg == 5 )
        {
          (*(void (__stdcall **)(_DWORD, WPARAM, _DWORD, _DWORD, int))(*(_DWORD *)this + 0xE8))(
            *((_DWORD *)this + 1),
            wParam,
            (signed __int16)lParam,
            SHIWORD(lParam),
            a5);
          return 0;
        }
        if ( Msg == 6 )
        {
          (*(void (__stdcall **)(_DWORD, _DWORD, LPARAM, WPARAM, int))(*(_DWORD *)this + 0x14))(
            *((_DWORD *)this + 1),
            (unsigned __int16)wParam,
            lParam,
            wParam >> 0x10,
            a5);
          return 0;
        }
        if ( Msg == 7 )
        {
          (*(void (__stdcall **)(_DWORD, WPARAM, int))(*(_DWORD *)this + 0xE4))(*((_DWORD *)this + 1), wParam, a5);
          return 0;
        }
        if ( Msg == 8 )
        {
          (*(void (__stdcall **)(_DWORD, WPARAM, int))(*(_DWORD *)this + 0x60))(*((_DWORD *)this + 1), wParam, a5);
          return 0;
        }
      }
    }
    if ( Msg - 0x400 > 0x7BFF )
    {
      if ( Msg - 0x8000 > 0x3FFF )
      {
        if ( Msg - 0xC000 > 0x3FFF )
          return 0;
        result = (*(int (__stdcall **)(_DWORD, UINT, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x10C))(
                   *((_DWORD *)this + 1),
                   Msg,
                   wParam,
                   lParam,
                   a5);
      }
      else
      {
        result = (*(int (__stdcall **)(_DWORD, UINT, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x108))(
                   *((_DWORD *)this + 1),
                   Msg,
                   wParam,
                   lParam,
                   a5);
      }
    }
    else
    {
      result = (*(int (__stdcall **)(_DWORD, UINT, WPARAM, LPARAM, int))(*(_DWORD *)this + 0x104))(
                 *((_DWORD *)this + 1),
                 Msg,
                 wParam,
                 lParam,
                 a5);
    }
  }
  return result;
}
=================================================================================================================================================================================================//3092216E | FF50 10                  | call dword ptr ds:[eax+10]              |
int __thiscall sub_30922146(void *this, int a2, unsigned int a3, int a4, int a5, int *a6, signed int a7)
{
  int v7; // eax@3
  int v8; // eax@3
  bool v9; // zf@3
  int result; // eax@4

  result = 0;
  if ( !a7 && a3 <= 0xFFFF )
  {
    v7 = *(_DWORD *)this;
    a7 = 1;
    v8 = (*(int (__stdcall **)(unsigned int, int, int, signed int *))(v7 + 16))(a3, a4, a5, &a7); //3092216E
    v9 = a7 == 0;
    *a6 = v8;
    if ( !v9 )
      result = 1;
  }
  return result;
}
=================================================================================================================================================================================================//30801A52 | FF10                     | call dword ptr ds:[eax]                 |
int __stdcall sub_30801A10(int a1, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v4; // esi@1
  UINT v5; // edi@1
  LPARAM v6; // ST0C_4@1
  WPARAM v7; // ST08_4@1
  int v8; // ST00_4@1
  LONG v9; // eax@5
  int v10; // eax@8
  int v11; // ecx@10
  int (__thiscall **v12)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax@10
  char v14; // [sp+8h] [bp-28h]@1
  LONG v15; // [sp+2Ch] [bp-4h]@4

  v4 = a1;
  v5 = Msg;
  sub_3080184C((int)&v14, *(_DWORD *)(a1 + 4), Msg, wParam, lParam, 1);
  v6 = lParam;
  Msg = *(_DWORD *)(v4 + 0x18);
  v7 = wParam;
  v8 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 0x18) = &v14;
  if ( !(**(int (__thiscall ***)(int, int, UINT, WPARAM, LPARAM, int *, _DWORD))v4)(v4, v8, v5, v7, v6, &a1, 0) ) //30801A52
  {
    if ( v5 == 0x82 )
    {
      v15 = GetWindowLongW(*(HWND *)(v4 + 4), 0xFFFFFFFC);
      a1 = sub_30801970(v4, 0x82u, wParam, lParam);
      if ( *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v4 + 0x20) != DefWindowProcW )
      {
        v9 = GetWindowLongW(*(HWND *)(v4 + 4), 0xFFFFFFFC);
        if ( v9 == v15 )
          SetWindowLongW(*(HWND *)(v4 + 4), 0xFFFFFFFC, *(_DWORD *)(v4 + 0x20));
      }
      *(_DWORD *)(v4 + 0x1C) |= 1u;
    }
    else
    {
      a1 = sub_30801970(v4, v5, wParam, lParam);
    }
  }
  v10 = *(_DWORD *)(v4 + 0x1C);
  if ( !(v10 & 1) || Msg )
  {
    *(_DWORD *)(v4 + 0x18) = Msg;
  }
  else
  {
    v11 = *(_DWORD *)(v4 + 4);
    *(_DWORD *)(v4 + 0x1C) = v10 & 0xFFFFFFFE;
    v12 = *(int (__thiscall ***)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v4;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 0x18) = 0;
    ((void (__thiscall *)(int, int))v12[3])(v4, v11);
  }
  return a1;
}

=================================================================================================================================================================================================//764A62F7 | FF55 08                  | call dword ptr ss:[ebp+8]               | user32

=================================================================================================================================================================================================

=================================================================================================================================================================================================

=================================================================================================================================================================================================

=================================================================================================================================================================================================

=================================================================================================================================================================================================

=================================================================================================================================================================================================

=================================================================================================================================================================================================

=================================================================================================================================================================================================

  
  
  
  
  
================================================================================================================================================================================================= 
0012B730  |39702608  返回到 RICHED20.39702608 来自 RICHED20.39701224  
0012B740  |39704A67  返回到 RICHED20.39704A67 来自 RICHED20.397025F7
0012B76C  |397049D3  返回到 RICHED20.397049D3 来自 RICHED20.39704A04
0012B7A4   3970445A  返回到 RICHED20.3970445A 来自 RICHED20.39704975
0012B7E4   3083BA8B  返回到 GF.3083BA8B 来自 kernel32.InterlockedDecrement
0012B7F8   30835C01  返回到 GF.30835C01
0012B7FC   30835C08  返回到 GF.30835C08 来自 GF.30949737
0012B868  |3970A7FF  返回到 RICHED20.3970A7FF 来自 RICHED20.39704265
0012B89C  |3970A920  返回到 RICHED20.3970A920 来自 RICHED20.39705445
0012B8C8  |3970DF00  返回到 RICHED20.3970DF00 来自 RICHED20.3970A89A
0012B8FC  |3972A03D  返回到 RICHED20.3972A03D 来自 RICHED20.3970A72B
0012B924  |30819833  返回到 GF.30819833 来自 GF.3084AC47
0012B938  |308F7EA8  返回到 GF.308F7EA8 来自 GF.309142AD
0012B940  |77D29CBA  返回到 USER32.SetRectEmpty
0012B950  |77D29CBA  返回到 USER32.SetRectEmpty
0012B958  |308F8438  返回到 GF.308F8438 来自 USER32.UnionRect
0012B984  |397064A4  返回到 RICHED20.397064A4
0012B9B0  |308F8518  返回到 GF.308F8518 来自 GF.308F8370
0012B9C4  |308F4692  返回到 GF.308F4692 来自 USER32.InvalidateRect
0012B9FC  |3090E4BA  返回到 GF.3090E4BA
0012BA0C   397062D9  返回到 RICHED20.397062D9 来自 RICHED20.397063FD
0012BA50   30902438  返回到 GF.30902438
0012BA58   30837653  返回到 GF.30837653 来自 GF.30949737
0012BA88   3083BA8B  返回到 GF.3083BA8B 来自 kernel32.InterlockedDecrement
0012BAA0   7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012BACC   7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012BAD0   7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
0012BAD4   7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
0012BAE8   30837653  返回到 GF.30837653 来自 GF.30949737
0012BB14   7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BB20  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012BB28  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012BB54  |30835C08  返回到 GF.30835C08 来自 GF.30949737
0012BB58  |308365B7  返回到 GF.308365B7 来自 GF.30835BB9
0012BB88  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BB94  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012BBA0  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BBAC  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012BBBC  |39705461  返回到 RICHED20.39705461
0012BBD0  |3970539D  返回到 RICHED20.3970539D 来自 RICHED20.39705445
0012BBE8  \7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012BBEC   78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
0012BBF8   78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012BC08   7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BC24   3970B77A  返回到 RICHED20.3970B77A 来自 RICHED20.3970560B
0012BD04   39704BF7  返回到 RICHED20.39704BF7 来自 RICHED20.3970593E
0012BD40   397090CD  返回到 RICHED20.397090CD 来自 RICHED20.3970B715
0012BD68   30032EC9  返回到 Common.30032EC9 来自 Common.301317BF
0012BE10   39706039  返回到 RICHED20.39706039 来自 RICHED20.39704537
0012BE3C   397098DF  返回到 RICHED20.397098DF 来自 RICHED20.39704A83
0012BE8C   3970674F  返回到 RICHED20.3970674F
0012BF6C   3086E3AD  返回到 GF.3086E3AD
0012BF7C   3086E428  返回到 GF.3086E428 来自 GF.30949737
0012BFA8   3086E3AD  返回到 GF.3086E3AD
0012BFB8   3086E428  返回到 GF.3086E428 来自 GF.30949737
0012BFE8  |3086E3AD  返回到 GF.3086E3AD
0012C018  |3085C64E  返回到 GF.3085C64E 来自 kernel32.InterlockedDecrement
0012C02C  |3086FA28  返回到 GF.3086FA28
0012C030  |3086FA30  返回到 GF.3086FA30 来自 GF.30949737
0012C05C  |30871FD7  返回到 GF.30871FD7
0012C084  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
0012C110  |308733BC  返回到 GF.308733BC 来自 GF.30871F13
0012C124  |30874D0E  返回到 GF.30874D0E 来自 GF.308733AC
0012C19C  |30876237  返回到 GF.30876237 来自 GF.30874CC4
0012C1A8  |657A75BC  返回到 AFCtrl.657A75BC
0012C1B8  |657A75BC  返回到 AFCtrl.657A75BC
0012C1C8  |657A75BC  返回到 AFCtrl.657A75BC
0012C1D8  |65768AC4  返回到 AFCtrl.65768AC4 来自 AFCtrl.657A759C
0012C20C  |6576A13E  返回到 AFCtrl.6576A13E
0012C240  |6576C976  返回到 AFCtrl.6576C976 来自 AFCtrl.6576A0F3
0012C258  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C284  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C288  |7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
0012C28C  |7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
0012C2A0  |7C9315D9  返回到 ntdll.7C9315D9 来自 ntdll.7C92E8E6
0012C2E0  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C2F0  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C308  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C31C  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C320  |7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
0012C324  |7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
0012C334  |7C9314CA  返回到 ntdll.7C9314CA 来自 ntdll.7C92E8E6
0012C378  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C38C  |3082144F  返回到 GF.3082144F 来自 GF.30949650
0012C3A4  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C3B8  |3082144F  返回到 GF.3082144F 来自 GF.30949650
0012C3F8  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
0012C424  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
0012C434  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C440  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C448  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C458  |6759DE64  返回到 AppMisc.6759DE64 来自 kernel32.InterlockedIncrement
0012C464  |3001F1A8  返回到 Common.3001F1A8
0012C478  |300DB1D2  返回到 Common.300DB1D2
0012C494  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C4A0  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C4A8  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C4B8  |7C9314F4  返回到 ntdll.7C9314F4 来自 ntdll.RtlLeaveCriticalSection
0012C4C0  |7C9314CA  返回到 ntdll.7C9314CA 来自 ntdll.7C92E8E6
0012C4F4  |7C9315A6  返回到 ntdll.7C9315A6 来自 ntdll.RtlLeaveCriticalSection
0012C50C  |7C931432  返回到 ntdll.7C931432 来自 ntdll.RtlFreeHeap
0012C510  |7C931463  返回到 ntdll.7C931463 来自 ntdll.RtlLeaveCriticalSection
0012C518  |7C931440  返回到 ntdll.7C931440 来自 ntdll.7C92E8E6
0012C544  |7C931440  返回到 ntdll.7C931440 来自 ntdll.7C92E8E6
0012C568  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C56C  |78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
0012C578  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012C58C  |3000F564  返回到 Common.3000F564 来自 ntdll.RtlDeleteCriticalSection
0012C594  |3002F72A  返回到 Common.3002F72A 来自 Common.301317BF
0012C5B0  |300DE4CC  返回到 Common.300DE4CC 来自 ntdll.RtlLeaveCriticalSection
0012C5C8  |300DE679  返回到 Common.300DE679
0012C5D8  |300D9063  返回到 Common.300D9063 来自 Common.300DE654
0012C5E4  |300DB18E  返回到 Common.300DB18E 来自 Common.300D9048
0012C5F0  |300DE4CC  返回到 Common.300DE4CC 来自 ntdll.RtlLeaveCriticalSection
0012C608  |300DE679  返回到 Common.300DE679
0012C618  |300D9063  返回到 Common.300D9063 来自 Common.300DE654
0012C624  |300DB18E  返回到 Common.300DB18E 来自 Common.300D9048
0012C630  |300DB1D2  返回到 Common.300DB1D2
0012C63C  |300DBC60  返回到 Common.300DBC60 来自 Common.301317BF
0012C660  |300DBC60  返回到 Common.300DBC60 来自 Common.301317BF
0012C664  |61D12AE7  返回到 MainFram.61D12AE7 来自 MainFram.61D93C45
0012C68C  |657BFFD1  返回到 AFCtrl.657BFFD1
0012C6A0  |03163FC4  返回到 IM.03163FC4
0012C71C  |7C80A499  返回到 kernel32.7C80A499 来自 kernel32.7C80AFDF
0012C744  |7C80A499  返回到 kernel32.7C80A499 来自 kernel32.7C80AFDF
0012C794  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C7A8  |3082144F  返回到 GF.3082144F 来自 GF.30949650
0012C7C0  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C7E4  |7710C05A  返回到 OLEAUT32.7710C05A 来自 OLEAUT32.770F1505
0012C7F0  |7710C051  返回到 OLEAUT32.7710C051 来自 kernel32.CompareStringW
0012C80C  |7710C05A  返回到 OLEAUT32.7710C05A 来自 OLEAUT32.770F1505
0012C820  |7712F583  返回到 OLEAUT32.7712F583 来自 OLEAUT32.7710C012
0012C83C  |300DB417  返回到 Common.300DB417 来自 kernel32.InterlockedIncrement
0012C848  |300DB1C1  返回到 Common.300DB1C1 来自 kernel32.InterlockedDecrement
0012C854  |300DBAC8  返回到 Common.300DBAC8 来自 Common.300DB1B4
0012C870  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C87C  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C888  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C894  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C89C  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C8A8  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C8B4  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C8BC  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C8DC  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C8F4  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C900  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C908  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C980  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C98C  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C994  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C9CC  |03168B22  返回到 IM.03168B22 来自 IM.0327D436
0012C9E0  |030FC81D  返回到 IM.030FC81D 来自 IM.03168B11
0012C9F0  |0321DEE7  返回到 IM.0321DEE7 来自 IM.030FC80C
0012CA08  |0318D674  返回到 IM.0318D674 来自 IM.0321DE9C
0012CA24  |3002F37F  返回到 Common.3002F37F 来自 kernel32.InterlockedDecrement
0012CA54  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012CA58  |78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
0012CA64  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012CA8C  |0012CAA0  返回到 0012CAA0
0012CAA0  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012CAA4  |0330F52F  返回到 IM.0330F52F 来自 <jmp.&MSVCR80.operator delete>
0012CAB0  |030D1196  返回到 IM.030D1196 来自 IM.0331D26F
0012CAC4  |031869D6  返回到 IM.031869D6 来自 IM.0331D26F
0012CAF8  |031664E0  返回到 IM.031664E0 来自 IM.03163F01
0012CB28  |300DB1D2  返回到 Common.300DB1D2
0012CB50  |031675A5  返回到 IM.031675A5 来自 IM.031661EF
0012CB88  |03167938  返回到 IM.03167938 来自 IM.03167530
0012CBC8  |01C4C2AC  返回到 Prelogin.01C4C2AC
0012CC1C  |01C4CA3D  返回到 Prelogin.01C4CA3D 来自 Prelogin.01C4BDA3
0012CC88  |01C4CE29  返回到 Prelogin.01C4CE29 来自 Prelogin.01C4C567
0012CCB4  |01C4A405  返回到 Prelogin.01C4A405
0012CCD8  |300A5BFC  返回到 Common.300A5BFC
0012CD30  |300A5271  返回到 Common.300A5271
0012CD54  |300996C0  返回到 Common.300996C0
0012CDB4  |3009991B  返回到 Common.3009991B 来自 Common.3009960D
0012CDF8  |30099B20  返回到 Common.30099B20 来自 Common.30099883
0012F644  |3009110A  返回到 Common.3009110A
0012F660  |300935C6  返回到 Common.300935C6
0012F68C  |30093678  返回到 Common.30093678 来自 Common.30093443
0012F6A4  |300CFCA0  返回到 Common.300CFCA0 来自 Common.30061025
0012F6E4  |300937DA  返回到 Common.300937DA 来自 Common.300935F2
0012F6EC  |77D18734  返回到 USER32.77D18734
0012F718  |77D18816  返回到 USER32.77D18816 来自 USER32.77D1870C
0012F780  |77D189CD  返回到 USER32.77D189CD 来自 USER32.77D1875F
0012F7B8  |69F060DC  返回到 HummerEn.69F060DC 来自 HummerEn.69F04FFB
0012F7E0  |77D18A10  返回到 USER32.77D18A10 来自 USER32.77D188F1
0012F7F0  |69F0652A  返回到 HummerEn.69F0652A 来自 USER32.DispatchMessageW
0012F7FC  |69F0633C  返回到 HummerEn.69F0633C 来自 HummerEn.69F064C3
0012F82C  |69F06059  返回到 HummerEn.69F06059
0012F848  |69F04529  返回到 HummerEn.69F04529
0012F850  |69F04BFA  返回到 HummerEn.69F04BFA 来自 HummerEn.69F04513
0012F884  |69F0AF44  返回到 HummerEn.69F0AF44 来自 HummerEn.69F04BD9
0012F950  |7C935BD8  返回到 ntdll.7C935BD8 来自 ntdll.RtlFreeUnicodeString
0012F960  |7C935C3D  返回到 ntdll.7C935C3D 来自 ntdll.7C92FE57
0012F994  |78147344  返回到 MSVCR80.78147344 来自 MSVCR80.781472B7
0012F9A8  |7C9396BF  返回到 ntdll.7C9396BF 来自 ntdll.wcsncpy
0012F9CC  |7C80AF15  返回到 kernel32.7C80AF15 来自 ntdll.RtlGetVersion
0012F9E0  |300E7FCD  返回到 Common.300E7FCD 来自 kernel32.GetVersionExW
0012F9E4  |300E7FE1  返回到 Common.300E7FE1 来自 Common.301316D8
0012FA48  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012FAC8  |7C931066  返回到 ntdll.7C931066 来自 ntdll.RtlLeaveCriticalSection
0012FD94  |69F0B146  返回到 HummerEn.69F0B146 来自 HummerEn.69F0A4A4
0012FDE0  |004014D9  返回到 QQ.004014D9
0012FF24  |0040128B  返回到 QQ.0040128B 来自 QQ.0040128F
0012FF30  |00401A8F  返回到 QQ.00401A8F 来自 QQ.00401280
0012FF4C  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012FF98  |00402017  返回到 QQ.00402017 来自 kernel32.QueryPerformanceCounter
0012FFC4   7C817067  返回到 kernel32.7C817067
0012FFCC   7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072


================================================================================================================
0012B730  |39702608  返回到 RICHED20.39702608 来自 RICHED20.39701224
	
------------	
	查找签名的字符串定位   01D55138
3970126A    89448F F0       mov dword ptr ds:[edi+ecx*4-0x10],eax

 
ESI 027B3A14 UNICODE "aa1197661" //ce 查找 , 有一个地址引用了 027B3A14,为 02C228C8
EDI 01D55138 UNICODE "aa1197661"
 
------------ 
	//查到传递的 ESI 值 027B3A14  定位 02C228C8   //dd [02C228C8]

  //内存写断点 02C228C8  
300DBAC3    E8 ECF6FFFF     call Common.300DB1B4    //频繁刷新，应该是通用方法
300DBAC8    83C3 10         add ebx,0x10
300DBACB    891F            mov dword ptr ds:[edi],ebx     ; ds:[edi] 为  02C228C8

 
 EBX 06C4A37C UNICODE "aa1197662"

 06C4A37C 每次运行qq或断线,会变化
 
 //条件断点
  [UNICODE ebx]=="aa1197663"     //注意 ebx是存的是字符串的地址. 如果ebx存的是一个指针，则要用  [UNICODE [ebx]]=="aa1197663"
   [ebx]==0x610061   //unicode "aa" 的数值
   [ebx+4]==0x310031   //unicode "11" 的数值
------------
  //查到 06C4A37C 在 04DA8448 引用了 
//内存写断点 04DA8448 , 发现帐号也在这块.. //dd [04DA8448]


---------------------------------------------------------------------------------------------
LONG __thiscall sub_300DB1B4(int this)
{
  int v1; // esi@1
  LONG result; // eax@1
  void *v3; // eax@2

  v1 = this;
  result = InterlockedDecrement((LPLONG)(this + 4));
  if ( result <= 0 )
  {
    v3 = sub_300DB193();
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)v3 + 4))(v3, v1);
  }
  return result;
}
------------
_DWORD *__thiscall sub_300DBA89(_DWORD *this, void **a2)
{
  _DWORD *v2; // edi@1
  int v3; // esi@1
  char *v4; // ecx@1
  int v5; // esi@1
  int v6; // ebx@4

  v2 = this;
  v3 = *this;
  v4 = (char *)*a2 - 16;
  v5 = v3 - 16;
  if ( v4 != (char *)v5 )
  {
    if ( *(_DWORD *)(v5 + 4) >= 0 )
    {
      v6 = sub_300DB3F2((int)v4);
      sub_300DB1B4(v5);
      *v2 = v6 + 16;
    }
    else
    {
      sub_300DB835(v2, *a2, *((_DWORD *)*a2 - 1) >> 1);
    }
  }
  return v2;
}
------------

------------


------------


------------


------------


------------


------------


------------


==================================================
0012B740  |39704A67  返回到 RICHED20.39704A67 来自 RICHED20.397025F7
==================================================
0012B76C  |397049D3  返回到 RICHED20.397049D3 来自 RICHED20.39704A04
==================================================
0012B7A4   3970445A  返回到 RICHED20.3970445A 来自 RICHED20.39704975
==================================================
0012B7E4   3083BA8B  返回到 GF.3083BA8B 来自 kernel32.InterlockedDecrement
==================================================
0012B7F8   30835C01  返回到 GF.30835C01
==================================================
0012B7FC   30835C08  返回到 GF.30835C08 来自 GF.30949737
==================================================
0012B868  |3970A7FF  返回到 RICHED20.3970A7FF 来自 RICHED20.39704265
==================================================
0012B89C  |3970A920  返回到 RICHED20.3970A920 来自 RICHED20.39705445
==================================================
0012B8C8  |3970DF00  返回到 RICHED20.3970DF00 来自 RICHED20.3970A89A
==================================================
0012B8FC  |3972A03D  返回到 RICHED20.3972A03D 来自 RICHED20.3970A72B
==================================================
0012B924  |30819833  返回到 GF.30819833 来自 GF.3084AC47
==================================================
0012B938  |308F7EA8  返回到 GF.308F7EA8 来自 GF.309142AD
==================================================
0012B940  |77D29CBA  返回到 USER32.SetRectEmpty
==================================================
0012B950  |77D29CBA  返回到 USER32.SetRectEmpty
==================================================
0012B958  |308F8438  返回到 GF.308F8438 来自 USER32.UnionRect
==================================================
0012B984  |397064A4  返回到 RICHED20.397064A4
==================================================
0012B9B0  |308F8518  返回到 GF.308F8518 来自 GF.308F8370
==================================================
0012B9C4  |308F4692  返回到 GF.308F4692 来自 USER32.InvalidateRect
==================================================
0012B9FC  |3090E4BA  返回到 GF.3090E4BA
==================================================
0012BA0C   397062D9  返回到 RICHED20.397062D9 来自 RICHED20.397063FD
==================================================
0012BA50   30902438  返回到 GF.30902438
==================================================
0012BA58   30837653  返回到 GF.30837653 来自 GF.30949737
==================================================
0012BA88   3083BA8B  返回到 GF.3083BA8B 来自 kernel32.InterlockedDecrement
==================================================
0012BAA0   7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012BACC   7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012BAD0   7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
==================================================
0012BAD4   7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
==================================================
0012BAE8   30837653  返回到 GF.30837653 来自 GF.30949737
==================================================
0012BB14   7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012BB20  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012BB28  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012BB54  |30835C08  返回到 GF.30835C08 来自 GF.30949737
==================================================
0012BB58  |308365B7  返回到 GF.308365B7 来自 GF.30835BB9
==================================================
0012BB88  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012BB94  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012BBA0  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012BBAC  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012BBBC  |39705461  返回到 RICHED20.39705461
==================================================
0012BBD0  |3970539D  返回到 RICHED20.3970539D 来自 RICHED20.39705445
==================================================
0012BBE8  \7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012BBEC   78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
==================================================
0012BBF8   78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
==================================================
0012BC08   7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012BC24   3970B77A  返回到 RICHED20.3970B77A 来自 RICHED20.3970560B
==================================================
0012BD04   39704BF7  返回到 RICHED20.39704BF7 来自 RICHED20.3970593E
==================================================
0012BD40   397090CD  返回到 RICHED20.397090CD 来自 RICHED20.3970B715
==================================================
0012BD68   30032EC9  返回到 Common.30032EC9 来自 Common.301317BF
==================================================
0012BE10   39706039  返回到 RICHED20.39706039 来自 RICHED20.39704537
==================================================
0012BE3C   397098DF  返回到 RICHED20.397098DF 来自 RICHED20.39704A83
==================================================
0012BE8C   3970674F  返回到 RICHED20.3970674F
==================================================
0012BF6C   3086E3AD  返回到 GF.3086E3AD
.text:3086E3AA                 call    dword ptr [eax+0Ch]

int __stdcall sub_3086DAF0(int a1, int a2, int a3, wchar_t *Str, int pvParam)
{
  int v5; // esi@12
  int v6; // eax@12
  int v7; // ebx@14
  int v8; // eax@14
  int v9; // eax@14
  int v10; // eax@14
  int v11; // eax@15
  int v12; // eax@17
  int v13; // eax@18
  bool v14; // sf@20
  int v15; // eax@24
  int v16; // eax@27
  int v17; // eax@27
  int v18; // eax@27
  int v19; // eax@27
  int v20; // eax@39
  int v21; // eax@40
  int v22; // eax@41
  int v23; // eax@42
  int v24; // eax@42
  void (__stdcall **v25)(_DWORD, _DWORD); // ebx@44
  int v26; // eax@44
  int v27; // ebx@48
  int v28; // eax@48
  int v29; // ecx@50
  size_t v30; // eax@52
  wchar_t *v31; // ecx@59
  int *v32; // eax@61
  int v33; // ecx@63
  int v34; // esi@66
  int v35; // ecx@66
  int v36; // eax@67
  unsigned __int16 v37; // bx@68
  int v38; // ecx@69
  int v39; // ebx@74
  int v40; // ebx@79
  int v41; // ebx@82
  unsigned int v42; // eax@83
  bool v43; // zf@85
  int v44; // eax@85
  unsigned int v45; // eax@91
  double v46; // st7@92
  int v47; // esi@92
  TXTimer *v48; // ST0C_4@92
  double v49; // st6@92
  unsigned int v50; // ST0C_4@92
  int v51; // ecx@98
  int v52; // eax@102
  int *v53; // ecx@103
  int v54; // ebx@113
  int v55; // ecx@117
  signed int v56; // eax@122
  int v57; // ecx@125
  int v58; // ecx@131
  int v60; // ecx@134
  int *v61; // ecx@136
  int v62; // edx@136
  int v63; // eax@139
  int v65; // [sp+Ch] [bp-4Ch]@74
  int v66; // [sp+10h] [bp-48h]@74
  char v67; // [sp+14h] [bp-44h]@42
  char v68; // [sp+18h] [bp-40h]@40
  char v69; // [sp+1Ch] [bp-3Ch]@27
  char v70; // [sp+20h] [bp-38h]@27
  int v71; // [sp+24h] [bp-34h]@28
  int v72; // [sp+28h] [bp-30h]@34
  char v73; // [sp+2Ch] [bp-2Ch]@14
  char v74; // [sp+30h] [bp-28h]@48
  char v75; // [sp+34h] [bp-24h]@36
  char v76; // [sp+38h] [bp-20h]@36
  char v77; // [sp+3Ch] [bp-1Ch]@27
  int v78; // [sp+40h] [bp-18h]@36
  int v79; // [sp+44h] [bp-14h]@27
  int v80; // [sp+48h] [bp-10h]@1
  int v81; // [sp+54h] [bp-4h]@14
  CTXStringW *v82; // [sp+60h] [bp+8h]@14

  v80 = 0;
  if ( (unsigned int)a2 > 0x43B )
  {
    if ( (unsigned int)a2 <= 0x447 )
    {
      if ( a2 == 1095 )
      {
        sub_3086D1D6(Str);
      }
      else if ( a2 == 1087 )
      {
        if ( Str )
        {
          v56 = 0;
          if ( a3 )
          {
            *(_DWORD *)(a1 + 356) &= 0xFFFFFEFF;
            v56 = 32;
          }
          else
          {
            *(_DWORD *)(a1 + 356) |= 0x100u;
          }
          v57 = *(_DWORD *)(a1 + 348);
          if ( v57 )
            (*(void (__stdcall **)(signed int, signed int))(*(_DWORD *)v57 + 76))(32, v56);
        }
      }
      else
      {
        if ( a2 == 1091 )
        {
          v54 = *(_DWORD *)(a1 + 380);
          if ( pvParam )
            *(_DWORD *)pvParam = v54;
          v43 = a3 == 0;
          *(_DWORD *)(a1 + 376) = a3 == 0;
          *(_DWORD *)(a1 + 380) = Str;
          if ( !v43 )
            *(_DWORD *)(a1 + 380) = GetSysColor(5);
          v55 = *(_DWORD *)(a1 + 348);
          if ( v55 )
            (*(void (__stdcall **)(signed int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v55 + 12))(21, 0, 0, 0);
          if ( v54 != *(_DWORD *)(a1 + 380) )
            (*(void (__stdcall **)(_DWORD, signed int))(*(_DWORD *)(a1 + 4) + 36))(0, 1);
          return v80;
        }
        if ( a2 == 1092 )
        {
          if ( !(a3 & 1) )
          {
            sub_3086D19B(Str);
            return v80;
          }
        }
        else if ( a2 == 1093 )
        {
          *(_DWORD *)(a1 + 372) = Str;
        }
      }
LABEL_131:
      v58 = *(_DWORD *)(a1 + 348);
      if ( !v58 )
        return v80;
      return (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v58 + 12))(a2, a3, Str, pvParam);   //=> RICHED20
    }
    if ( a2 == 1101 )
    {
      sub_3086D06A(a3, Str);
      v53 = (int *)pvParam;
      v63 = *(_DWORD *)(a1 + 356) & 0x10089C0;
      *(_DWORD *)pvParam = v63;
      if ( !*(_DWORD *)(a1 + 364) )
        return v80;
      v52 = v63 | 1;
LABEL_141:
      *v53 = v52;
      return v80;
    }
    if ( a2 != 1102 )
    {
      if ( a2 != 1249 )
        goto LABEL_131;
      v34 = a1;
      v60 = *(_DWORD *)(a1 + 348);
      if ( !v60 )
        return v80;
      v36 = (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v60 + 12))(1249, a3, Str, pvParam);
LABEL_136:
      v61 = *(int **)(v34 + 348);
      v62 = *v61;
      v80 = v36;
      (*(void (__thiscall **)(int *, signed int, signed int))(v62 + 76))(v61, 0x80000, 0x80000);
      return v80;
    }
    v52 = sub_3086C2D2(a1);
LABEL_103:
    v53 = (int *)pvParam;
    goto LABEL_141;
  }
  if ( a2 == 1083 )
  {
    v52 = *(_DWORD *)(a1 + 372);
    goto LABEL_103;
  }
  if ( (unsigned int)a2 > 0x115 )
  {
    if ( a2 != 522 )
    {
      if ( a2 == 770 )
      {
        sub_3086BC23(a1 + 556, a1 + 560);
        v33 = *(_DWORD *)(a1 + 348);
        if ( !v33 )
          return v80;
        return (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v33 + 12))(770, a3, Str, pvParam);
      }
      if ( a2 == 1077 )
      {
        v31 = Str;
        if ( !Str )
          v31 = (wchar_t *)0x10000;
        *(_DWORD *)(a1 + 368) = v31;
        v32 = *(int **)(a1 + 348);
        if ( v32 )
          (*(void (__thiscall **)(int *, signed int, signed int))(*v32 + 76))(v32, 0x8000, 0x8000);
        return v80;
      }
      goto LABEL_131;
    }
    if ( a3 & 0xC )
    {
      v34 = a1;
      v35 = *(_DWORD *)(a1 + 348);
      if ( !v35 )
        return v80;
      v36 = (*(int (__stdcall **)(signed int, int, wchar_t *, int))(*(_DWORD *)v35 + 12))(522, a3, Str, pvParam);
      goto LABEL_136;
    }
    v37 = -((unsigned int)a3 >> 16);
    a2 = v37;
    pvParam = 0;
    a3 = SystemParametersInfoW(0x68u, 0, &pvParam, 0);
    Str = (wchar_t *)(signed __int16)v37;
    if ( abs((signed __int16)v37) < 120 )
      return v80;
    v38 = a3;
    if ( (unsigned int)a3 <= 0 || (unsigned int)pvParam <= 0 )
      return v80;
    if ( pvParam == -1 )
    {
      v51 = *(_DWORD *)a1;
      if ( (signed __int16)v37 <= 0 )
        (*(void (__stdcall **)(int, signed int, signed int, _DWORD, _DWORD))(v51 + 32))(a1, 277, 2, 0, 0);
      else
        (*(void (__stdcall **)(int, signed int, signed int, _DWORD, _DWORD))(v51 + 32))(a1, 277, 3, 0, 0);
      return v80;
    }
    if ( !a3 )
      v38 = 1;
    v65 = 0;
    v66 = 0;
    v79 = 0;
    v72 = 0;
    v71 = 0;
    v39 = pvParam * v38 * ((signed int)Str / 120);
    (*(void (__stdcall **)(int *, int *, int *, int *, int *))(**(_DWORD **)(a1 + 348) + 24))(
      &v65,
      &v66,
      &v79,
      &v72,
      &v71);
    if ( !v71 )
    {
      if ( v39 <= 0 )
      {
        if ( v39 < 0 )
        {
          v40 = -v39;
          do
          {
            (*(void (__stdcall **)(int, signed int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 32))(a1, 277, 0, 0, 0);
            --v40;
          }
          while ( v40 );
        }
      }
      else
      {
        do
        {
          --v39;
          (*(void (__stdcall **)(int, signed int, signed int, _DWORD, _DWORD))(*(_DWORD *)a1 + 32))(a1, 277, 1, 0, 0);
        }
        while ( v39 );
      }
      return v80;
    }
    v41 = 20 * v39;
    if ( !v41 )
      return v80;
    *(_DWORD *)(a1 + 576) += 12;
    v42 = *(_DWORD *)(a1 + 576);
    if ( v42 >= 0x32 )
      v42 = 50;
    v43 = (_WORD)a2 == 0;
    v14 = (signed __int16)a2 < 0;
    *(_DWORD *)(a1 + 576) = v42;
    v44 = *(_DWORD *)(a1 + 600);
    if ( v14 || v43 )
    {
      if ( v44 )
      {
        if ( v44 == 2 )
        {
          *(_DWORD *)(a1 + 600) = 0;
          goto LABEL_97;
        }
        goto LABEL_89;
      }
    }
    else
    {
      if ( v44 == 2 )
      {
        *(_DWORD *)(a1 + 600) = 1;
LABEL_97:
        *(_DWORD *)(a1 + 580) = v41;
        *(_DWORD *)(a1 + 576) = 12;
        goto LABEL_90;
      }
      if ( !v44 )
      {
LABEL_89:
        *(_DWORD *)(a1 + 576) = 0;
        *(_DWORD *)(a1 + 580) = 0;
        *(_DWORD *)(a1 + 600) = 2;
LABEL_90:
        if ( *(_DWORD *)(a1 + 600) != 2 )
        {
          v45 = *(_DWORD *)(a1 + 576);
          if ( v45 > 0 )
          {
            v46 = (double)v45;
            v47 = a1 + 528;
            v48 = *(TXTimer **)(a1 + 528);
            v49 = ((double)*(signed int *)(a1 + 580) + (double)*(signed int *)(a1 + 580)) / (v46 * v46);
            *(double *)(v47 + 64) = v49;
            *(double *)(v47 + 56) = v46 * v49;
            TXTimer::EraseTimerCallback(v48, (struct ITXTimerCallback *)0x65);
            TXTimer::SetInterval((TXTimer *)0xA, *(_DWORD *)(a1 + 528), (struct ITXTimerCallback *)0x65, v50);
          }
        }
        return v80;
      }
    }
    *(_DWORD *)(a1 + 580) += v41;
    goto LABEL_90;
  }
  if ( a2 == 277 )
  {
    if ( (_WORD)a3 == 5 )
    {
      *(_DWORD *)(a1 + 540) = (unsigned int)a3 >> 16;
      sub_3086D5F6(a1);
    }
    goto LABEL_131;
  }
  if ( a2 == 12 )
  {
    v29 = *(_DWORD *)(a1 + 348);
    if ( !v29
      || (v80 = (*(int (__stdcall **)(signed int, int, wchar_t *, _DWORD))(*(_DWORD *)v29 + 12))(12, a3, Str, 0),
          v80 >= 0) )
    {
      v30 = wcslen(Str);
      if ( v30 > *(_DWORD *)(a1 + 368) )
        *(_DWORD *)(a1 + 368) = v30;
      goto LABEL_10;
    }
  }
  else
  {
    if ( a2 == 24 )
    {
      sub_3086D20F(a3);
      return v80;
    }
    if ( a2 != 78 )
    {
      if ( a2 == 207 )
      {
        sub_3086D031(a3);
LABEL_10:
        *(_DWORD *)pvParam = 1;
        return v80;
      }
      goto LABEL_131;
    }
    if ( a3 == 768 )
    {
      v5 = a1;
      v6 = *(_DWORD *)(a1 + 508);
      if ( v6 == 2 || v6 == 1 )
      {
        CTXBSTR::CTXBSTR(&v73);
        v7 = *(_DWORD *)a1;
        v81 = 0;
        v8 = CTXBSTR::operator&(&v73);
        (*(void (__stdcall **)(int, int))(v7 + 132))(a1, v8);
        CTXStringW::CTXStringW(&a2, &v73);
        v9 = *(_DWORD *)(a1 + 556);
        LOBYTE(v81) = 1;
        v82 = (CTXStringW *)(a1 + 564);
        pvParam = v9;
        v10 = CTXStringW::GetLength((CTXStringW *)(v5 + 564));
        if ( pvParam >= v10 )
          v11 = CTXStringW::GetLength((CTXStringW *)(v5 + 564));
        else
          v11 = pvParam;
        *(_DWORD *)(v5 + 556) = v11;
        pvParam = *(_DWORD *)(v5 + 560);
        v12 = CTXStringW::GetLength((CTXStringW *)(v5 + 564));
        if ( pvParam >= v12 )
          v13 = CTXStringW::GetLength((CTXStringW *)(v5 + 564));
        else
          v13 = pvParam;
        v14 = *(_DWORD *)(v5 + 556) < 0;
        *(_DWORD *)(v5 + 560) = v13;
        if ( v14 )
          *(_DWORD *)(v5 + 556) = CTXStringW::GetLength((CTXStringW *)(v5 + 564));
        if ( *(_DWORD *)(v5 + 560) < 0 )
          *(_DWORD *)(v5 + 560) = CTXStringW::GetLength((CTXStringW *)(v5 + 564));
        v15 = *(_DWORD *)(v5 + 556);
        if ( v15 > *(_DWORD *)(v5 + 560) )
          *(_DWORD *)(v5 + 560) = v15;
        if ( sub_3086BA0F(&a2) > *(_DWORD *)(v5 + 368) )
        {
          CTXStringW::CTXStringW(&Str);
          LOBYTE(v81) = 2;
          CTXStringW::CTXStringW(&v77);
          LOBYTE(v81) = 3;
          CTXStringW::CTXStringW(&a3);
          v16 = *(_DWORD *)(v5 + 560);
          LOBYTE(v81) = 4;
          pvParam = v16;
          v17 = CTXStringW::GetLength(v82);
          v79 = v17 - pvParam;
          v18 = CTXStringW::Mid(v82, &v70, *(_DWORD *)(v5 + 556));
          LOBYTE(v81) = 5;
          CTXStringW::operator=(&v77, v18);
          LOBYTE(v81) = 4;
          CTXStringW::~CTXStringW((CTXStringW *)&v70);
          CTXStringW::GetLength((CTXStringW *)&a2);
          v19 = CTXStringW::Mid(&a2, &v69, *(_DWORD *)(v5 + 556));
          LOBYTE(v81) = 6;
          CTXStringW::operator=(&Str, v19);
          LOBYTE(v81) = 4;
          CTXStringW::~CTXStringW((CTXStringW *)&v69);
          if ( sub_3086BA0F(v82) >= 0 )
            v71 = sub_3086BA0F(v82);
          else
            v71 = 0;
          if ( sub_3086BA0F(&v77) >= 0 )
            pvParam = sub_3086BA0F(&v77);
          else
            pvParam = 0;
          if ( sub_3086BA0F(&Str) >= 0 )
            v72 = sub_3086BA0F(&Str);
          else
            v72 = 0;
          CTXStringW::CTXStringW(&v78);
          LOBYTE(v81) = 7;
          CTXStringW::CTXStringW(&v75);
          LOBYTE(v81) = 8;
          CTXStringW::CTXStringW(&v76);
          LOBYTE(v81) = 9;
          if ( v72 <= pvParam )
            CTXStringW::operator=(&v78, &Str);
          else
            sub_3086BA84((int)&Str, *(_DWORD *)(v5 + 368) + pvParam - v71, (int)&v78);
          pvParam = *(_DWORD *)(v5 + 556);
          v20 = CTXStringW::GetLength(v82);
          if ( v20 >= pvParam )
          {
            v21 = CTXStringW::Mid(v82, &v68, 0);
            LOBYTE(v81) = 10;
            CTXStringW::operator=(&v75, v21);
            LOBYTE(v81) = 9;
            CTXStringW::~CTXStringW((CTXStringW *)&v68);
          }
          v22 = CTXStringW::GetLength(v82);
          if ( v22 - v79 >= 0 )
          {
            v23 = CTXStringW::GetLength(v82);
            v24 = CTXStringW::Mid(v82, &v67, v23 - v79);
            LOBYTE(v81) = 11;
            CTXStringW::operator=(&v76, v24);
            LOBYTE(v81) = 9;
            CTXStringW::~CTXStringW((CTXStringW *)&v67);
          }
          CTXStringW::operator=(&a3, &Src);
          CTXStringW::operator+=(&a3, &v75);
          CTXStringW::operator+=(&a3, &v78);
          pvParam = CTXStringW::GetLength((CTXStringW *)&a3);
          CTXStringW::operator+=(&a3, &v76);
          *(_DWORD *)(v5 + 556) = 0;
          *(_DWORD *)(v5 + 560) = 0;
          if ( sub_3086BA0F(&a2) > *(_DWORD *)(v5 + 368) )
          {
            CTXStringW::operator=(v82, &a3);
            v25 = (void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 136);
            v26 = CTXStringW::operator wchar_t const *(&a3);
            (*v25)(v5, v26);
          }
          if ( pvParam > 0 )
            sub_3086BC5E(pvParam, pvParam);
          LOBYTE(v81) = 8;
          CTXStringW::~CTXStringW((CTXStringW *)&v76);
          LOBYTE(v81) = 7;
          CTXStringW::~CTXStringW((CTXStringW *)&v75);
          LOBYTE(v81) = 4;
          CTXStringW::~CTXStringW((CTXStringW *)&v78);
          LOBYTE(v81) = 3;
          CTXStringW::~CTXStringW((CTXStringW *)&a3);
          LOBYTE(v81) = 2;
          CTXStringW::~CTXStringW((CTXStringW *)&v77);
          LOBYTE(v81) = 1;
          CTXStringW::~CTXStringW((CTXStringW *)&Str);
        }
        CTXBSTR::CTXBSTR(&v74);
        v27 = *(_DWORD *)v5;
        LOBYTE(v81) = 12;
        v28 = CTXBSTR::operator&(&v74);
        (*(void (__cdecl **)(int, int))(v27 + 132))(v5, v28);
        CTXStringW::operator=(v82, &v74);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v74);
        LOBYTE(v81) = 0;
        CTXStringW::~CTXStringW((CTXStringW *)&a2);
        CTXBSTR::~CTXBSTR((CTXBSTR *)&v73);
      }
    }
  }
  return v80;
}


==================================================
0012BF7C   3086E428  返回到 GF.3086E428 来自 GF.30949737  //sub_3086DAF0
==================================================
0012BFA8   3086E3AD  返回到 GF.3086E3AD	 //sub_3086DAF0
==================================================
0012BFB8   3086E428  返回到 GF.3086E428 来自 GF.30949737//sub_3086DAF0
==================================================
0012BFE8  |3086E3AD  返回到 GF.3086E3AD //sub_3086DAF0
==================================================
0012C018  |3085C64E  返回到 GF.3085C64E 来自 kernel32.InterlockedDecrement

LONG __stdcall sub_3085C63C(int a1)
{
  LONG v1; // edi@1

  v1 = InterlockedDecrement((volatile LONG *)(a1 + 12));  		 //.faq 后面的栈是怎样来的, 怎样调到 sub_3086DAF0
  if ( !v1 && a1 )
    (*(void (__thiscall **)(int, signed int))(*(_DWORD *)a1 + 216))(a1, 1);
  return v1;
}
==================================================
0012C02C  |3086FA28  返回到 GF.3086FA28
signed int __thiscall sub_3086F943(_DWORD *this, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // edi@1
  int v6; // esi@1
  signed int result; // eax@2
  int v8; // eax@5
  int v9; // ecx@5
  int v10; // eax@12
  int v11; // ST14_4@12
  int v12; // [sp-4h] [bp-28h]@0
  int v13; // [sp+Ch] [bp-18h]@5
  int v14; // [sp+10h] [bp-14h]@5
  int v15; // [sp+14h] [bp-10h]@1
  int v16; // [sp+20h] [bp-4h]@1

  v5 = this;
  v15 = 0;
  v16 = 0;
  sub_3086E714(&v15);
  v6 = v15;
  if ( v15 )
  {
    if ( !v5[171] )
      sub_3086B90D(0);
    v14 = 0;
    v8 = (*(int (__stdcall **)(int, int, int, int, int *, int))(*(_DWORD *)v6 + 32))(v6, a2, a3, a4, &v14, v12);
    v9 = v14;
    v13 = v8;
    if ( a5 )
      *a5 = v14;
    if ( a2 == 1249 && v9 && !v8 )
    {
      a2 = 0;
      LOBYTE(v16) = 1;
      Util::Data::CreateTXData((Util::Data *)&a2);
      (*(void (__stdcall **)(int, const wchar_t *, int))(*(_DWORD *)a2 + 224))(a2, L"wParam", a3);
      (*(void (__stdcall **)(int, const wchar_t *, int))(*(_DWORD *)a2 + 224))(a2, L"lParam", a4);
      sub_30915507((int (__thiscall ***)(_DWORD))v5 + 94, 676, a2);
      LOBYTE(v16) = 0;
      if ( a2 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2);
    }
    sub_3086B90D(1);
    v10 = *(_DWORD *)v6;
    v16 = -1;
    (*(void (__thiscall **)(int))(v10 + 8))(v11);
    result = v13;
  }
  else
  {
    result = -2147467262;
  }
  return result;
}
==================================================
0012C030  |3086FA30  返回到 GF.3086FA30 来自 GF.30949737  //sub_3086F943
==================================================
0012C05C  |30871FD7  返回到 GF.30871FD7
int __thiscall sub_30871F13(int this, wchar_t *Str1, int a3, int a4)
{
  int *v4; // esi@1
  int v5; // edi@1
  int result; // eax@2
  bool v7; // zf@7
  int *v8; // eax@7
  int v9; // ecx@7
  int v10; // eax@13
  const wchar_t *v11; // eax@13
  const wchar_t *v12; // eax@13
  char v13; // [sp+Ch] [bp-88h]@13
  char v14; // [sp+10h] [bp-84h]@13
  int v15; // [sp+14h] [bp-80h]@7
  int v16; // [sp+18h] [bp-7Ch]@7
  int v17; // [sp+1Ch] [bp-78h]@10
  char v18; // [sp+20h] [bp-74h]@11
  int v19; // [sp+24h] [bp-70h]@5
  int v20; // [sp+28h] [bp-6Ch]@5
  char Dst; // [sp+2Ch] [bp-68h]@5
  int v22; // [sp+90h] [bp-4h]@11

  v4 = (int *)a3;
  v5 = this;
  if ( *(_DWORD *)(this + 568) )
  {
    if ( Str1 )
    {
      v19 = 0;
      v20 = 92;
      memset(&Dst, 0, 0x58u);
      if ( !a3 )
      {
        sub_3086F943((_DWORD *)v5, 1082, 1, (int)&v20, &v19);
        v4 = &v20;
      }
      v15 = 0;
      sub_3086FD6B(&v15, &v16);
      sub_3086F943((_DWORD *)v5, 1092, 1, (int)v4, &v19);
      v7 = wcscmp(Str1, L"\r") == 0;
      v8 = *(int **)(v5 + 568);
      v9 = *v8;
      if ( v7 )
        (*(void (__stdcall **)(int *, signed int, int, const wchar_t *, int *))(v9 + 32))(v8, 194, a4, L"\r\n", &v19);
      else
        (*(void (__stdcall **)(int *, signed int, int, const wchar_t *, int *))(v9 + 32))(v8, 194, a4, Str1, &v19);
      v16 = 0;
      v17 = 0;
      sub_3086FD6B(&v16, &v17);
      sub_3086FF5C(v15, v17);
      if ( *(_DWORD *)(v5 + 472) )
      {
        CTXStringW::CTXStringW(&v18, (char *)v4 + 26);
        v22 = 0;
        if ( !CTXStringW::IsEmpty((CTXStringW *)&v18) && (unsigned __int16)CTXStringW::operator[](&v18, 0) == 64 )
        {
          v10 = CTXStringW::CTXStringW(&v13, v5 + 498);
          LOBYTE(v22) = 1;
          operator+(&v14, L"@", v10);
          LOBYTE(v22) = 3;
          CTXStringW::~CTXStringW((CTXStringW *)&v13);
          v11 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v14);
          wcsncpy((wchar_t *)v4 + 13, v11, 0x1Fu);
          *((_WORD *)v4 + 44) = 0;
          sub_3086F943((_DWORD *)v5, 1092, 1, (int)v4, 0);
          v12 = (const wchar_t *)CTXStringW::operator wchar_t const *(&v18);
          wcsncpy((wchar_t *)v4 + 13, v12, 0x1Fu);
          *((_WORD *)v4 + 44) = 0;
          LOBYTE(v22) = 0;
          CTXStringW::~CTXStringW((CTXStringW *)&v14);
        }
        v22 = -1;
        CTXStringW::~CTXStringW((CTXStringW *)&v18);
      }
      sub_3086F943((_DWORD *)v5, 1092, 1, (int)v4, &v19);
      sub_3086FF5C(v16, v17);
      result = 0;
    }
    else
    {
      result = -2147024809;
    }
  }
  else
  {
    result = -2147467262;
  }
  return result;
}
==================================================
0012C084  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
==================================================
0012C110  |308733BC  返回到 GF.308733BC 来自 GF.30871F13
int __thiscall sub_308733AC(void *this, wchar_t *Str1, int a3)
{
  return sub_30871F13((int)this, Str1, a3, 0);
}
==================================================
0012C124  |30874D0E  返回到 GF.30874D0E 来自 GF.308733AC
int __thiscall sub_30874CC4(void *this, wchar_t *Str1)
{
  void *v2; // esi@1
  int Dst; // [sp+8h] [bp-60h]@1

  v2 = this;
  sub_30874C44();
  memset(&Dst, 0, 0x5Cu);
  Dst = 92;
  sub_3086FFC1(&Dst);
  return sub_308733AC(v2, Str1, (int)&Dst);
}
==================================================
0012C19C  |30876237  返回到 GF.30876237 来自 GF.30874CC4
int __stdcall sub_30876226(int a1, wchar_t *Str1)
{
  return sub_30874CC4((void *)(a1 + 8), Str1);
}
==================================================
0012C1A8  |657A75BC  返回到 AFCtrl.657A75BC
==================================================
0012C1B8  |657A75BC  返回到 AFCtrl.657A75BC
==================================================
0012C1C8  |657A75BC  返回到 AFCtrl.657A75BC
int __stdcall sub_657A759C(int a1, int a2)
{
  int v2; // eax@1
  int result; // eax@2

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    result = (*(int (__stdcall **)(int, int))(*(_DWORD *)v2 + 1064))(v2, a2);
  else
    result = -2147467259;
  return result;
}
==================================================
0012C1D8  |65768AC4  返回到 AFCtrl.65768AC4 来自 AFCtrl.657A759C
int __stdcall sub_65768A26(int a1, int a2)
{
  int v2; // eax@1
  int v3; // edi@1
  char v5; // [sp+Ch] [bp-14h]@1
  char v6; // [sp+10h] [bp-10h]@1

  sub_65714E01(L"file", 674, L"func", 3, L"JJ_LNN_CF3_xnbg2", L"put_text %s", a2);
  ((void (__thiscall *)(char *, int))CTXStringW::CTXStringW)(&v6, a2);
  CTXStringW::Replace((CTXStringW *)&v6, L"\r", &word_6585C33C);
  CTXStringW::Replace((CTXStringW *)&v6, L"\n", &word_6585C33C);
  CTXBSTR::CTXBSTR(&v5, &v6);
  *(_DWORD *)(a1 + 336) = -1;
  CTXBSTR::operator=(a1 + 200, &v5);
  v2 = CTXBSTR::operator wchar_t *(&v5);
  v3 = sub_657A759C(a1, v2);
  sub_65767E8B(a1);
  CTXBSTR::~CTXBSTR(&v5);
  CTXStringW::~CTXStringW(&v6);
  return v3;
}
==================================================
0012C20C  |6576A13E  返回到 AFCtrl.6576A13E
==================================================
0012C240  |6576C976  返回到 AFCtrl.6576C976 来自 AFCtrl.6576A0F3
==================================================
0012C258  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012C284  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012C288  |7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
==================================================
0012C28C  |7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
==================================================
0012C2A0  |7C9315D9  返回到 ntdll.7C9315D9 来自 ntdll.7C92E8E6
==================================================
0012C2E0  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>  //sub_30821402
==================================================
0012C2F0  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012C308  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C31C  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012C320  |7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
==================================================
0012C324  |7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
==================================================
0012C334  |7C9314CA  返回到 ntdll.7C9314CA 来自 ntdll.7C92E8E6
==================================================
0012C378  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>  //sub_30821402
==================================================
0012C38C  |3082144F  返回到 GF.3082144F 来自 GF.30949650  //sub_30821402
bool __stdcall sub_30821402(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int Buf1; // [sp+8h] [bp-24h]@1
  int v10; // [sp+Ch] [bp-20h]@1
  int v11; // [sp+10h] [bp-1Ch]@1
  int v12; // [sp+14h] [bp-18h]@1
  int Buf2; // [sp+18h] [bp-14h]@1
  int v14; // [sp+1Ch] [bp-10h]@1
  int v15; // [sp+20h] [bp-Ch]@1
  int v16; // [sp+24h] [bp-8h]@1

  Buf1 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  Buf2 = a5;
  v14 = a6;
  v15 = a7;
  v16 = a8;
  return memcmp(&Buf1, &Buf2, 0x10u) < 0;
}
==================================================
0012C3A4  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>  //sub_30821402
==================================================
0012C3B8  |3082144F  返回到 GF.3082144F 来自 GF.30949650  //sub_30821402
==================================================
0012C3F8  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
==================================================
0012C424  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
==================================================
0012C434  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C440  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012C448  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C458  |6759DE64  返回到 AppMisc.6759DE64 来自 kernel32.InterlockedIncrement
==================================================
0012C464  |3001F1A8  返回到 Common.3001F1A8
==================================================
0012C478  |300DB1D2  返回到 Common.300DB1D2
==================================================
0012C494  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C4A0  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012C4A8  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C4B8  |7C9314F4  返回到 ntdll.7C9314F4 来自 ntdll.RtlLeaveCriticalSection
==================================================
0012C4C0  |7C9314CA  返回到 ntdll.7C9314CA 来自 ntdll.7C92E8E6
==================================================
0012C4F4  |7C9315A6  返回到 ntdll.7C9315A6 来自 ntdll.RtlLeaveCriticalSection
==================================================
0012C50C  |7C931432  返回到 ntdll.7C931432 来自 ntdll.RtlFreeHeap
==================================================
0012C510  |7C931463  返回到 ntdll.7C931463 来自 ntdll.RtlLeaveCriticalSection
==================================================
0012C518  |7C931440  返回到 ntdll.7C931440 来自 ntdll.7C92E8E6
==================================================
0012C544  |7C931440  返回到 ntdll.7C931440 来自 ntdll.7C92E8E6
==================================================
0012C568  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C56C  |78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
==================================================
0012C578  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
==================================================
0012C58C  |3000F564  返回到 Common.3000F564 来自 ntdll.RtlDeleteCriticalSection
==================================================
0012C594  |3002F72A  返回到 Common.3002F72A 来自 Common.301317BF
==================================================
0012C5B0  |300DE4CC  返回到 Common.300DE4CC 来自 ntdll.RtlLeaveCriticalSection
==================================================
0012C5C8  |300DE679  返回到 Common.300DE679
==================================================
0012C5D8  |300D9063  返回到 Common.300D9063 来自 Common.300DE654
==================================================
0012C5E4  |300DB18E  返回到 Common.300DB18E 来自 Common.300D9048
==================================================
0012C5F0  |300DE4CC  返回到 Common.300DE4CC 来自 ntdll.RtlLeaveCriticalSection
==================================================
0012C608  |300DE679  返回到 Common.300DE679
==================================================
0012C618  |300D9063  返回到 Common.300D9063 来自 Common.300DE654
==================================================
0012C624  |300DB18E  返回到 Common.300DB18E 来自 Common.300D9048
==================================================
0012C630  |300DB1D2  返回到 Common.300DB1D2
==================================================
0012C63C  |300DBC60  返回到 Common.300DBC60 来自 Common.301317BF
==================================================
0012C660  |300DBC60  返回到 Common.300DBC60 来自 Common.301317BF
==================================================
0012C664  |61D12AE7  返回到 MainFram.61D12AE7 来自 MainFram.61D93C45
==================================================
0012C68C  |657BFFD1  返回到 AFCtrl.657BFFD1
==================================================
0012C6A0  |03163FC4  返回到 IM.03163FC4
==================================================
0012C71C  |7C80A499  返回到 kernel32.7C80A499 来自 kernel32.7C80AFDF
==================================================
0012C744  |7C80A499  返回到 kernel32.7C80A499 来自 kernel32.7C80AFDF
==================================================
0012C794  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>  //sub_30821402
==================================================
0012C7A8  |3082144F  返回到 GF.3082144F 来自 GF.30949650	//sub_30821402
==================================================
0012C7C0  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>  //sub_30821402
==================================================
0012C7E4  |7710C05A  返回到 OLEAUT32.7710C05A 来自 OLEAUT32.770F1505
==================================================
0012C7F0  |7710C051  返回到 OLEAUT32.7710C051 来自 kernel32.CompareStringW
==================================================
0012C80C  |7710C05A  返回到 OLEAUT32.7710C05A 来自 OLEAUT32.770F1505
==================================================
0012C820  |7712F583  返回到 OLEAUT32.7712F583 来自 OLEAUT32.7710C012
==================================================
0012C83C  |300DB417  返回到 Common.300DB417 来自 kernel32.InterlockedIncrement
==================================================
0012C848  |300DB1C1  返回到 Common.300DB1C1 来自 kernel32.InterlockedDecrement
==================================================
0012C854  |300DBAC8  返回到 Common.300DBAC8 来自 Common.300DB1B4
==================================================
0012C870  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C87C  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C888  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C894  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012C89C  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C8A8  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C8B4  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012C8BC  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C8DC  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C8F4  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C900  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012C908  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C980  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
==================================================
0012C98C  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012C994  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012C9CC  |03168B22  返回到 IM.03168B22 来自 IM.0327D436
==================================================
0012C9E0  |030FC81D  返回到 IM.030FC81D 来自 IM.03168B11
==================================================
0012C9F0  |0321DEE7  返回到 IM.0321DEE7 来自 IM.030FC80C
==================================================
0012CA08  |0318D674  返回到 IM.0318D674 来自 IM.0321DE9C
==================================================
0012CA24  |3002F37F  返回到 Common.3002F37F 来自 kernel32.InterlockedDecrement
==================================================
0012CA54  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
==================================================
0012CA58  |78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
==================================================
0012CA64  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
==================================================
0012CA8C  |0012CAA0  返回到 0012CAA0
==================================================
0012CAA0  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
==================================================
0012CAA4  |0330F52F  返回到 IM.0330F52F 来自 <jmp.&MSVCR80.operator delete>
==================================================
0012CAB0  |030D1196  返回到 IM.030D1196 来自 IM.0331D26F
==================================================
0012CAC4  |031869D6  返回到 IM.031869D6 来自 IM.0331D26F
==================================================
0012CAF8  |031664E0  返回到 IM.031664E0 来自 IM.03163F01
==================================================
0012CB28  |300DB1D2  返回到 Common.300DB1D2
==================================================
0012CB50  |031675A5  返回到 IM.031675A5 来自 IM.031661EF
==================================================
0012CB88  |03167938  返回到 IM.03167938 来自 IM.03167530
==================================================
0012CBC8  |01C4C2AC  返回到 Prelogin.01C4C2AC
==================================================
0012CC1C  |01C4CA3D  返回到 Prelogin.01C4CA3D 来自 Prelogin.01C4BDA3
==================================================
0012CC88  |01C4CE29  返回到 Prelogin.01C4CE29 来自 Prelogin.01C4C567
==================================================
0012CCB4  |01C4A405  返回到 Prelogin.01C4A405
==================================================
0012CCD8  |300A5BFC  返回到 Common.300A5BFC
==================================================
0012CD30  |300A5271  返回到 Common.300A5271
==================================================
0012CD54  |300996C0  返回到 Common.300996C0
==================================================
0012CDB4  |3009991B  返回到 Common.3009991B 来自 Common.3009960D
==================================================
0012CDF8  |30099B20  返回到 Common.30099B20 来自 Common.30099883
==================================================
0012F644  |3009110A  返回到 Common.3009110A
==================================================
0012F660  |300935C6  返回到 Common.300935C6
==================================================
0012F68C  |30093678  返回到 Common.30093678 来自 Common.30093443
==================================================
0012F6A4  |300CFCA0  返回到 Common.300CFCA0 来自 Common.30061025
==================================================
0012F6E4  |300937DA  返回到 Common.300937DA 来自 Common.300935F2
==================================================
0012F6EC  |77D18734  返回到 USER32.77D18734
==================================================
0012F718  |77D18816  返回到 USER32.77D18816 来自 USER32.77D1870C
==================================================
0012F780  |77D189CD  返回到 USER32.77D189CD 来自 USER32.77D1875F
==================================================
0012F7B8  |69F060DC  返回到 HummerEn.69F060DC 来自 HummerEn.69F04FFB
==================================================
0012F7E0  |77D18A10  返回到 USER32.77D18A10 来自 USER32.77D188F1
==================================================
0012F7F0  |69F0652A  返回到 HummerEn.69F0652A 来自 USER32.DispatchMessageW
==================================================
0012F7FC  |69F0633C  返回到 HummerEn.69F0633C 来自 HummerEn.69F064C3
==================================================
0012F82C  |69F06059  返回到 HummerEn.69F06059
==================================================
0012F848  |69F04529  返回到 HummerEn.69F04529
==================================================
0012F850  |69F04BFA  返回到 HummerEn.69F04BFA 来自 HummerEn.69F04513
==================================================
0012F884  |69F0AF44  返回到 HummerEn.69F0AF44 来自 HummerEn.69F04BD9
==================================================
0012F950  |7C935BD8  返回到 ntdll.7C935BD8 来自 ntdll.RtlFreeUnicodeString
==================================================
0012F960  |7C935C3D  返回到 ntdll.7C935C3D 来自 ntdll.7C92FE57
==================================================
0012F994  |78147344  返回到 MSVCR80.78147344 来自 MSVCR80.781472B7
==================================================
0012F9A8  |7C9396BF  返回到 ntdll.7C9396BF 来自 ntdll.wcsncpy
==================================================
0012F9CC  |7C80AF15  返回到 kernel32.7C80AF15 来自 ntdll.RtlGetVersion
==================================================
0012F9E0  |300E7FCD  返回到 Common.300E7FCD 来自 kernel32.GetVersionExW
==================================================
0012F9E4  |300E7FE1  返回到 Common.300E7FE1 来自 Common.301316D8
==================================================
0012FA48  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
==================================================
0012FAC8  |7C931066  返回到 ntdll.7C931066 来自 ntdll.RtlLeaveCriticalSection
==================================================
0012FD94  |69F0B146  返回到 HummerEn.69F0B146 来自 HummerEn.69F0A4A4
==================================================
0012FDE0  |004014D9  返回到 QQ.004014D9
==================================================
0012FF24  |0040128B  返回到 QQ.0040128B 来自 QQ.0040128F
==================================================
0012FF30  |00401A8F  返回到 QQ.00401A8F 来自 QQ.00401280
==================================================
0012FF4C  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================
0012FF98  |00402017  返回到 QQ.00402017 来自 kernel32.QueryPerformanceCounter
==================================================
0012FFC4   7C817067  返回到 kernel32.7C817067
==================================================
0012FFCC   7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
==================================================

===========================


0012B724   01D54AF4
0012B728   01D547B8
0012B72C  /0012B768
0012B730  |39702608  返回到 RICHED20.39702608 来自 RICHED20.39701224
0012B734  |01D55138  UNICODE "aa1197668"
0012B738  |06C4AACC  UNICODE "aa1197668"
0012B73C  |00000012
0012B740  |39704A67  返回到 RICHED20.39704A67 来自 RICHED20.397025F7
0012B744  |01D55138  UNICODE "aa1197668"
0012B748  |06C4AACC  UNICODE "aa1197668"
0012B74C  |00000012
0012B750  |00000000
0012B754  |01D54AF4
0012B758  |00000000
0012B75C  |00000009
0012B760  |0000000D
0012B764  |00000000
0012B768  ]0012B7A0
0012B76C  |397049D3  返回到 RICHED20.397049D3 来自 RICHED20.39704A04
0012B770  |00000089
0012B774  |06C4AACC  UNICODE "aa1197668"
0012B778  |00000000
0012B77C  |00000000
0012B780  |01D54AEC
0012B784  |01D52880
0012B788  |00000000
0012B78C  |01D52860
0012B790  |00000009
0012B794  |0012B808
0012B798  |00000000
0012B79C  |00000000
0012B7A0  \0012B808
0012B7A4   3970445A  返回到 RICHED20.3970445A 来自 RICHED20.39704975
0012B7A8   00000000
0012B7AC   00000009
0012B7B0   06C4AACC  UNICODE "aa1197668"
0012B7B4   0012B7E8
0012B7B8   0012B848
0012B7BC   00000000
0012B7C0   00000000
0012B7C4   00000009
0012B7C8   00000000
0012B7CC   01D5433C
0012B7D0   01D54AE8
0012B7D4   0000027B
0012B7D8   00000000
0012B7DC   00000001
0012B7E0   00020520  UNICODE "S.0\system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C"
0012B7E4   3083BA8B  返回到 GF.3083BA8B 来自 kernel32.InterlockedDecrement
0012B7E8   00000000
0012B7EC   00000000
0012B7F0   00000000
0012B7F4   0012B820
0012B7F8   30835C01  返回到 GF.30835C01
0012B7FC   30835C08  返回到 GF.30835C08 来自 GF.30949737
0012B800   C2922264
0012B804   00000000
0012B808   00000000
0012B80C   0012B840
0012B810   003E0000
0012B814   00000001
0012B818   01D55058
0012B81C   00000000
0012B820   00000000
0012B824   00000000
0012B828   00000000
0012B82C   0012B960
0012B830   00000000
0012B834   7C92E900  ntdll.7C92E900
0012B838   7C930208  ntdll.7C930208
0012B83C   00000000
0012B840   0012B8F0
0012B844   00000000
0012B848   00000000
0012B84C   00000000
0012B850   00000000
0012B854   00000000
0012B858   01D549F0
0012B85C   00000000
0012B860   00000000
0012B864  /0012B8F8
0012B868  |3970A7FF  返回到 RICHED20.3970A7FF 来自 RICHED20.39704265
0012B86C  |01D54998
0012B870  |00000009
0012B874  |06C4AACC  UNICODE "aa1197668"
0012B878  |00000000
0012B87C  |00000009
0012B880  |0012BCD0
0012B884  |00000052
0012B888  |01D54AE8
0012B88C  |00000000
0012B890  |00000009
0012B894  |01D54AE8
0012B898  |0012B8C4
0012B89C  |3970A920  返回到 RICHED20.3970A920 来自 RICHED20.39705445
0012B8A0  |01D5433C
0012B8A4  |01D54AF4
0012B8A8  |00000000
0012B8AC  |01D54AE8
0012B8B0  |01D54C50
0012B8B4  |00000000
0012B8B8  |00000000
0012B8BC  |01D54998
0012B8C0  |00000000
0012B8C4  |0012B900
0012B8C8  |3970DF00  返回到 RICHED20.3970DF00 来自 RICHED20.3970A89A
0012B8CC  |00000000
0012B8D0  |0012B90C
0012B8D4  |00000000
0012B8D8  |01D55058
0012B8DC  |00000000
0012B8E0  |00150778
0012B8E4  |00000000
0012B8E8  |00000000
0012B8EC  |01D52860
0012B8F0  |00000000
0012B8F4  |FFFFFFFF
0012B8F8  ]0012B980
0012B8FC  |3972A03D  返回到 RICHED20.3972A03D 来自 RICHED20.3970A72B
0012B900  |00000009
0012B904  |06C4AACC  UNICODE "aa1197668"
0012B908  |00000000
0012B90C  |00000000
0012B910  |0012BCD0
0012B914  |00000052
0012B918  |0012BD20
0012B91C  |0000000D
0012B920  |FFFFFFFF
0012B924  |30819833  返回到 GF.30819833 来自 GF.3084AC47
0012B928  |0012B9B4
0012B92C  |0012B9B4
0012B930  |309EE6B0  GF.309EE6B0
0012B934  |0012B958
0012B938  |308F7EA8  返回到 GF.308F7EA8 来自 GF.309142AD
0012B93C  |0012B948
0012B940  |77D29CBA  返回到 USER32.SetRectEmpty
0012B944  |014EF5E0
0012B948  |309EE6B0  GF.309EE6B0
0012B94C  |014EF5E0
0012B950  |77D29CBA  返回到 USER32.SetRectEmpty
0012B954  |0012B9AC
0012B958  |308F8438  返回到 GF.308F8438 来自 USER32.UnionRect
0012B95C  |00000000
0012B960  |00000000
0012B964  |00000000
0012B968  |01D55058
0012B96C  |00000001
0012B970  |00000000
0012B974  |00000000
0012B978  |00000000
0012B97C  |00000000
0012B980  ]0012BA08
0012B984  |397064A4  返回到 RICHED20.397064A4
0012B988  |00000009
0012B98C  |06C4AACC  UNICODE "aa1197668"
0012B990  |00000000
0012B994  |00000001
0012B998  |0012BCD0
0012B99C  |00000052
0012B9A0  |01D54998
0012B9A4  |00000000
0012B9A8  |01D54AE8
0012B9AC  |0012B9C0
0012B9B0  |308F8518  返回到 GF.308F8518 来自 GF.308F8370
0012B9B4  |00020520  UNICODE "S.0\system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C"
0012B9B8  |0012BA5C
0012B9BC  |02B5F408
0012B9C0  |0012B9F8
0012B9C4  |308F4692  返回到 GF.308F4692 来自 USER32.InvalidateRect
0012B9C8  |00020520  UNICODE "S.0\system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C"
0012B9CC  |0012BA5C
0012B9D0  |00000000
0012B9D4  |02B4EDC8
0012B9D8  |00000000
0012B9DC  |02B5F400
0012B9E0  |C2922044
0012B9E4  |00000000
0012B9E8  |0012BAB8
0012B9EC  |02B0C3E0
0012B9F0  |00000001
0012B9F4  |000003A8
0012B9F8  |00000000
0012B9FC  |3090E4BA  返回到 GF.3090E4BA
0012BA00  |01D54998
0012BA04  |01D54AE8
0012BA08  \0012BCA8
0012BA0C   397062D9  返回到 RICHED20.397062D9 来自 RICHED20.397063FD
0012BA10   00000009
0012BA14   06C4AACC  UNICODE "aa1197668"
0012BA18   00000000
0012BA1C   00000000
0012BA20   00000000
0012BA24   00000000
0012BA28   0012BCD0
0012BA2C   00000000
0012BA30   00000000
0012BA34   000003A8
0012BA38   000004B0
0012BA3C   00000001
0012BA40   06C4AACC  UNICODE "aa1197668"
0012BA44   00000000
0012BA48   01D54998
0012BA4C   0012BA58
0012BA50   30902438  返回到 GF.30902438
0012BA54   0012BB14
0012BA58   30837653  返回到 GF.30837653 来自 GF.30949737
0012BA5C   0000004F
0012BA60   00000032
0012BA64   000000FC
0012BA68   00000049
0012BA6C   00000006
0012BA70   0000001B
0012BA74   00000126
0012BA78   0000027B
0012BA7C   00000000
0012BA80   00000001
0012BA84   00020520  UNICODE "S.0\system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C"
0012BA88   3083BA8B  返回到 GF.3083BA8B 来自 kernel32.InterlockedDecrement
0012BA8C   02B4EF50
0012BA90   00000000
0012BA94   02B4EDC0
0012BA98   0012BACC
0012BA9C   01D50000
0012BAA0   7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012BAA4   00000004
0012BAA8   01D50748
0012BAAC   01D50000
0012BAB0   01D550C0
0012BAB4   0012BAA4
0012BAB8   0024DAE0
0012BABC   0012BCE8
0012BAC0   7C92E900  ntdll.7C92E900
0012BAC4   7C930208  ntdll.7C930208
0012BAC8   FFFFFFFF
0012BACC   7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012BAD0   7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
0012BAD4   7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
0012BAD8   00000000
0012BADC   01D55058
0012BAE0   01D54998
0012BAE4   00000000
0012BAE8   30837653  返回到 GF.30837653 来自 GF.30949737
0012BAEC   00000049
0012BAF0   00000017
0012BAF4   000000F6
0012BAF8   0000002E
0012BAFC   00000000
0012BB00   00000000
0012BB04   00000120
0012BB08   00000260
0012BB0C   0012BB1C
0012BB10   00000000
0012BB14   7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BB18   02936B38
0012BB1C  /0012BBE8
0012BB20  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012BB24  |003E0868
0012BB28  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012BB2C  |00000000
0012BB30  |02936B40
0012BB34  |02B655F8
0012BB38  |00000000
0012BB3C  |0012BC0C
0012BB40  |02B5B2A0
0012BB44  |02B0C3D8
0012BB48  |0012BBD8
0012BB4C  |0012BA4C
0012BB50  |00000100
0012BB54  |30835C08  返回到 GF.30835C08 来自 GF.30949737
0012BB58  |308365B7  返回到 GF.308365B7 来自 GF.30835BB9
0012BB5C  |0012BB7C
0012BB60  |0012BC1C
0012BB64  |02B5B298
0012BB68  |00015760
0012BB6C  |00000005
0012BB70  |0012BACC
0012BB74  |00000000
0012BB78  |0012BBB4
0012BB7C  |7C92E900  ntdll.7C92E900
0012BB80  |0012BB90
0012BB84  |00000000
0012BB88  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BB8C  |04D789F0
0012BB90  |0012BC5C
0012BB94  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012BB98  |0012BBA8
0012BB9C  |00000000
0012BBA0  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BBA4  |04D787D0
0012BBA8  |0012BC74
0012BBAC  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012BBB0  |0012BBC0
0012BBB4  |00000000
0012BBB8  |00000003
0012BBBC  |39705461  返回到 RICHED20.39705461
0012BBC0  |00000003
0012BBC4  |0012BBD4
0012BBC8  |01D54AE8
0012BBCC  |0012BC2C
0012BBD0  |3970539D  返回到 RICHED20.3970539D 来自 RICHED20.39705445
0012BBD4  |01D5433C
0012BBD8  |00000444
0012BBDC  |0012BDBC
0012BBE0  |01D54998
0012BBE4  |FFFFFFFF
0012BBE8  \7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012BBEC   78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
0012BBF0   003E0000
0012BBF4   00000000
0012BBF8   78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012BBFC   0012BC0C
0012BC00   0012BC10
0012BC04   00000000
0012BC08   7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012BC0C   057A8470
0012BC10   0012BCDC
0012BC14   00000444
0012BC18   0012BDBC
0012BC1C   01D54998
0012BC20   0012BCDC
0012BC24   3970B77A  返回到 RICHED20.3970B77A 来自 RICHED20.3970560B
0012BC28   01D54AE8
0012BC2C   00000444
0012BC30   00000001
0012BC34   0012BC44
0012BC38   F800003F
0012BC3C   00000000
0012BC40   00000000
0012BC44   0000005C
0012BC48   F800003F
0012BC4C   04000000
0012BC50   7C92E900  ntdll.7C92E900
0012BC54   003E0000
0012BC58   00000004
0012BC5C   0012BBB8
0012BC60   00000000
0012BC64   01D55058
0012BC68   00000000
0012BC6C   00000000
0012BC70   002000C0
0012BC74   00000000
0012BC78   FFFFFFFF
0012BC7C   00000011
0012BC80   00000000
0012BC84   00000001
0012BC88   00000000
0012BC8C   00000000
0012BC90   000000C0
0012BC94   00000000
0012BC98   00000000
0012BC9C   01D54AE8
0012BCA0   00000000
0012BCA4   00000001
0012BCA8   00000000
0012BCAC   00000000
0012BCB0   00000000
0012BCB4   01D5433C
0012BCB8   002000C0
0012BCBC   00000000
0012BCC0   0012BD70
0012BCC4   00000000
0012BCC8   01D550C0
0012BCCC   00000001
0012BCD0   00000000
0012BCD4   01D54998
0012BCD8   00000000
0012BCDC   00000040
0012BCE0   00000000
0012BCE4   06C4AACC  UNICODE "aa1197668"
0012BCE8   01000000
0012BCEC   01D5490D
0012BCF0   00000000
0012BCF4   00000000
0012BCF8   00000009
0012BCFC   00000000
0012BD00   0012BDD4
0012BD04   39704BF7  返回到 RICHED20.39704BF7 来自 RICHED20.3970593E
0012BD08   3FFFFFF6
0012BD0C   06C4AADE
0012BD10   00000000
0012BD14   00000000
0012BD18   00000000
0012BD1C   00000000
0012BD20   00000012
0012BD24   000004B0
0012BD28   00000000
0012BD2C   01D54998
0012BD30   00000100
0012BD34   00000000
0012BD38   00000001
0012BD3C   0012BDFC
0012BD40   397090CD  返回到 RICHED20.397090CD 来自 RICHED20.3970B715
0012BD44   00000001
0012BD48   0012BDBC
0012BD4C   0012BEDC
0012BD50   F800003F
0012BD54   00108000
0012BD58   00000000
0012BD5C   00000000
0012BD60   01D54998
0012BD64   02B68518
0012BD68   30032EC9  返回到 Common.30032EC9 来自 Common.301317BF
0012BD6C   397CF2E0  RICHED20.397CF2E0
0012BD70   397CF2D0  RICHED20.397CF2D0
0012BD74   01D55058
0012BD78   01D54A5C
0012BD7C   00000000
0012BD80   00000000
0012BD84   00000000
0012BD88   01D54998
0012BD8C   00000000
0012BD90   00000000
0012BD94   00000000
0012BD98   01D54C50
0012BD9C   00000000
0012BDA0   00000000
0012BDA4   00000000
0012BDA8   00000000
0012BDAC   00000000
0012BDB0   00000000
0012BDB4   00000000
0012BDB8   0000FFFF
0012BDBC   00000000
0012BDC0   397CE130  RICHED20.397CE130
0012BDC4   397CE12C  RICHED20.397CE12C
0012BDC8   00000001
0012BDCC   00000000
0012BDD0   0012BF1C
0012BDD4   01D54740
0012BDD8   01D54998
0012BDDC   00000000
0012BDE0   00000000
0012BDE4   00000000
0012BDE8   01D54998
0012BDEC   0012BF44
0012BDF0   00000000
0012BDF4   00000000
0012BDF8   00000000
0012BDFC   01D55058
0012BE00   0012C048
0012BE04   00000000
0012BE08   0012BF3C
0012BE0C   0012BF3C
0012BE10   39706039  返回到 RICHED20.39706039 来自 RICHED20.39704537
0012BE14   00000000
0012BE18   02B68518
0012BE1C   00000000
0012BE20   00000001
0012BE24   00000001
0012BE28   00000001
0012BE2C   01D54AE8
0012BE30   00000002
0012BE34   00000000
0012BE38   0012BF7C
0012BE3C   397098DF  返回到 RICHED20.397098DF 来自 RICHED20.39704A83
0012BE40   06C4AACC  UNICODE "aa1197668"
0012BE44   0000C002
0012BE48   000004B0
0012BE4C   00000000
0012BE50   0012BFE0
0012BE54   00000000
0012BE58   00000115
0012BE5C   02B68518
0012BE60   00000190
0012BE64   00000000
0012BE68   00000804
0012BE6C   00000000
0012BE70   00000001
0012BE74   00000000
0012BE78   00000000
0012BE7C   0000FFFF
0012BE80   00000000
0012BE84   0012C0D8
0012BE88   00000000
0012BE8C   3970674F  返回到 RICHED20.3970674F
0012BE90   0012C0D8
0012BE94   00000000
0012BE98   0012BFCC
0012BE9C   0012BFCC
0012BEA0   397CE130  RICHED20.397CE130
0012BEA4   397CE12C  RICHED20.397CE12C
0012BEA8   00000001
0012BEAC   00000000
0012BEB0   00000000
0012BEB4   01D54740
0012BEB8   01D54998
0012BEBC   00000000
0012BEC0   00000000
0012BEC4   3083BA81  GF.3083BA81
0012BEC8   01D54998
0012BECC   00000000
0012BED0   00000000
0012BED4   00000000
0012BED8   38353737
0012BEDC   397CE130  RICHED20.397CE130
0012BEE0   397CE12C  RICHED20.397CE12C
0012BEE4   00000001
0012BEE8   00000000
0012BEEC   00000000
0012BEF0   01D54740
0012BEF4   01D54998
0012BEF8   00000000
0012BEFC   00000000
0012BF00   3083BA81  GF.3083BA81
0012BF04   01D54998
0012BF08   00000000
0012BF0C   00000000
0012BF10   00000000
0012BF14   01879504  UNICODE "1677588503"
0012BF18   00000000
0012BF1C   397CE130  RICHED20.397CE130
0012BF20   397CE12C  RICHED20.397CE12C
0012BF24   00000001
0012BF28   00000000
0012BF2C   00000000
0012BF30   01D54740
0012BF34   01D54998
0012BF38   00000000
0012BF3C   00000000
0012BF40   00000001
0012BF44   01D54998
0012BF48   00000000
0012BF4C   0012BF20
0012BF50   00000020
0012BF54   0000000D
0012BF58   02020C90  ASCII 66,"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"
0012BF5C   0012BEA0
0012BF60   00000000
0012BF64   00000000
0012BF68   0012BFDC
0012BF6C   3086E3AD  返回到 GF.3086E3AD
0012BF70   00000434
0012BF74   00000000
0012BF78   0012C048
0012BF7C   3086E428  返回到 GF.3086E428 来自 GF.30949737
0012BF80   C2922598
0012BF84   0145DD50
0012BF88   02B68518
0012BF8C   00000000
0012BF90   00000001
0012BF94   01D54998
0012BF98   0012BEDC
0012BF9C   00000000
0012BFA0   00000000
0012BFA4   0012C018
0012BFA8   3086E3AD  返回到 GF.3086E3AD
0012BFAC   00000444
0012BFB0   00000001
0012BFB4   0012C138
0012BFB8   3086E428  返回到 GF.3086E428 来自 GF.30949737
0012BFBC   C2925A5C
0012BFC0   0145DD50
0012BFC4   02B68518
0012BFC8   00000000
0012BFCC   00000000
0012BFD0   0012C014
0012BFD4   30952540  GF.30952540
0012BFD8   0012BF1C
0012BFDC   00000000
0012BFE0   00000000
0012BFE4  /0012C058
0012BFE8  |3086E3AD  返回到 GF.3086E3AD
0012BFEC  |000000C2
0012BFF0  |0000C002
0012BFF4  |06C4AACC  UNICODE "aa1197668"
0012BFF8  |0012C09C
0012BFFC  |C2925A1C
0012C000  |0145DD50
0012C004  |0012C138
0012C008  |06C4AACC  UNICODE "aa1197668"
0012C00C  |0012C050
0012C010  |30952540  GF.30952540
0012C014  |FFFFFFFF
0012C018  |3085C64E  返回到 GF.3085C64E 来自 kernel32.InterlockedDecrement
0012C01C  |02B68524
0012C020  |0145DD50
0012C024  |02B68518
0012C028  |0012C05C
0012C02C  |3086FA28  返回到 GF.3086FA28
0012C030  |3086FA30  返回到 GF.3086FA30 来自 GF.30949737
0012C034  |C2925A18
0012C038  |0145DD50
0012C03C  |0012C138
0012C040  |06C4AACC  UNICODE "aa1197668"
0012C044  |00000000
0012C048  |00000000
0012C04C  |0012C100  指向下一个 SEH 记录的指针
0012C050  |30952540  SE处理程序
0012C054  |FFFFFFFF
0012C058  ]0012C10C
0012C05C  |30871FD7  返回到 GF.30871FD7
0012C060  |02B68518
0012C064  |000000C2
0012C068  |00000000
0012C06C  |06C4AACC  UNICODE "aa1197668"
0012C070  |0012C09C
0012C074  |C2925B48
0012C078  |06C4AACC  UNICODE "aa1197668"
0012C07C  |0145DD50
0012C080  |300D9102  Common.CTXBSTR::operator wchar_t *
0012C084  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
0012C088  |06C4AACC  UNICODE "aa1197668"
0012C08C  |00000000
0012C090  |00000000
0012C094  |00000400
0012C098  |00000000
0012C09C  |00000000
0012C0A0  |0000005C
0012C0A4  |00000000
0012C0A8  |00000000
0012C0AC  |00000000
0012C0B0  |00000000
0012C0B4  |00000000
0012C0B8  |00000000
0012C0BC  |00000000
0012C0C0  |00000000
0012C0C4  |00000000
0012C0C8  |00000000
0012C0CC  |00000000
0012C0D0  |00000000
0012C0D4  |00000000
0012C0D8  |00000000
0012C0DC  |00000000
0012C0E0  |00000000
0012C0E4  |00000000
0012C0E8  |00000000
0012C0EC  |00000000
0012C0F0  |00000000
0012C0F4  |00000000
0012C0F8  |00000000
0012C0FC  |C2925B48
0012C100  |0012C1FC  指向下一个 SEH 记录的指针
0012C104  |3095266C  SE处理程序
0012C108  |FFFFFFFF
0012C10C  ]0012C120
0012C110  |308733BC  返回到 GF.308733BC 来自 GF.30871F13
0012C114  |06C4AACC  UNICODE "aa1197668"
0012C118  |0012C138
0012C11C  |00000000
0012C120  ]0012C198
0012C124  |30874D0E  返回到 GF.30874D0E 来自 GF.308733AC
0012C128  |06C4AACC  UNICODE "aa1197668"
0012C12C  |0012C138
0012C130  |6585C33C  AFCtrl.6585C33C
0012C134  |029A1E48
0012C138  |0000005C
0012C13C  |F800003F
0012C140  |00000000
0012C144  |000000B4
0012C148  |00000000
0012C14C  |00000000
0012C150  |00540086
0012C154  |00680061
0012C158  |006D006F
0012C15C  |00000061
0012C160  |00000000
0012C164  |00000000
0012C168  |00000000
0012C16C  |00000000
0012C170  |00000000
0012C174  |00000000
0012C178  |00000000
0012C17C  |00000000
0012C180  |00000000
0012C184  |00000000
0012C188  |00000000
0012C18C  |00000000
0012C190  |00000000
0012C194  |C2925BDC
0012C198  ]0012C1A4
0012C19C  |30876237  返回到 GF.30876237 来自 GF.30874CC4
0012C1A0  |06C4AACC  UNICODE "aa1197668"
0012C1A4  ]0012C1B4
0012C1A8  |657A75BC  返回到 AFCtrl.657A75BC
0012C1AC  |0145DD48
0012C1B0  |06C4AACC  UNICODE "aa1197668"
0012C1B4  ]0012C1C4
0012C1B8  |657A75BC  返回到 AFCtrl.657A75BC
0012C1BC  |02AD8F68
0012C1C0  |06C4AACC  UNICODE "aa1197668"
0012C1C4  ]0012C1D4
0012C1C8  |657A75BC  返回到 AFCtrl.657A75BC
0012C1CC  |0148AB90
0012C1D0  |06C4AACC  UNICODE "aa1197668"
0012C1D4  ]0012C208
0012C1D8  |65768AC4  返回到 AFCtrl.65768AC4 来自 AFCtrl.657A759C
0012C1DC  |029A1E48
0012C1E0  |06C4AACC  UNICODE "aa1197668"
0012C1E4  |C364A78D
0012C1E8  |300B024C  Common.CTXBSTR::CTXBSTR
0012C1EC  |029A1E48
0012C1F0  |300D9102  Common.CTXBSTR::operator wchar_t *
0012C1F4  |06C4AACC  UNICODE "aa1197668"
0012C1F8  |06C4AACC  UNICODE "aa1197668"
0012C1FC  |0012C230  指向下一个 SEH 记录的指针
0012C200  |65842844  SE处理程序
0012C204  |00000001
0012C208  ]0012C23C
0012C20C  |6576A13E  返回到 AFCtrl.6576A13E
0012C210  |029A1E48
0012C214  |06C4A724  UNICODE "aa1197668"
0012C218  |C364A7B9
0012C21C  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C220  |029A1E48
0012C224  |00000000
0012C228  |06C4A724  UNICODE "aa1197668"
0012C22C  |65892C80  AFCtrl.65892C80
0012C230  |0012C67C  指向下一个 SEH 记录的指针
0012C234  |65842AE3  SE处理程序
0012C238  |00000001
0012C23C  ]0012C688
0012C240  |6576C976  返回到 AFCtrl.6576C976 来自 AFCtrl.6576A0F3
0012C244  |06C4A724  UNICODE "aa1197668"
0012C248  |C364A30D
0012C24C  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C250  |029A1E48
0012C254  |00000000
0012C258  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C25C  |00000005
0012C260  |00150778
0012C264  |00150000
0012C268  |057A8478
0012C26C  |0012C25C
0012C270  |0C000000
0012C274  |0012C4A0
0012C278  |7C92E900  ntdll.7C92E900
0012C27C  |7C930208  ntdll.7C930208
0012C280  |FFFFFFFF
0012C284  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C288  |7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
0012C28C  |7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
0012C290  |04C91CFC
0012C294  |04C91CFC
0012C298  |00000000
0012C29C  |06C4AD9C  UNICODE "   11677588503"
0012C2A0  |7C9315D9  返回到 ntdll.7C9315D9 来自 ntdll.7C92E8E6
0012C2A4  |04D4CE3C
0012C2A8  |057A8478
0012C2AC  |00000000
0012C2B0  |00000000
0012C2B4  |06C4AD9C  UNICODE "   11677588503"
0012C2B8  |00000014
0012C2BC  |06C4C02C  UNICODE "aa1197668"
0012C2C0  |00000005
0012C2C4  |018784B4  UNICODE "platformAuthSetting"
0012C2C8  |00000013
0012C2CC  |00000020
0012C2D0  |00F46C98
0012C2D4  |06C4AD9C  UNICODE "   11677588503"
0012C2D8  |0012C344
0012C2DC  |0012C31C
0012C2E0  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C2E4  |0012C2F8
0012C2E8  |0012C31C
0012C2EC  |003E0000
0012C2F0  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C2F4  |00000009
0012C2F8  |003E0838
0012C2FC  |003E0000
0012C300  |04C91CE8
0012C304  |0012C2F4
0012C308  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C30C  |0012C538
0012C310  |7C92E900  ntdll.7C92E900
0012C314  |7C930208  ntdll.7C930208
0012C318  |FFFFFFFF
0012C31C  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012C320  |7C93017B  返回到 ntdll.7C93017B 来自 ntdll.7C9301D1
0012C324  |7C9301BB  返回到 ntdll.7C9301BB 来自 ntdll.7C92E8E6
0012C328  |00000040
0012C32C  |00000000
0012C330  |00000040
0012C334  |7C9314CA  返回到 ntdll.7C9314CA 来自 ntdll.7C92E8E6
0012C338  |04D4CE3C
0012C33C  |04D4CE3C
0012C340  |00000000
0012C344  |7FFDE000
0012C348  |7FFDD000
0012C34C  |057A8478
0012C350  |0012C2A4
0012C354  |0000000A
0012C358  |0012C3E0
0012C35C  |7C92E900  ntdll.7C92E900
0012C360  |0012C370
0012C364  |00000020
0012C368  |00F46C98
0012C36C  |0012C3B0
0012C370  |0012C3DC
0012C374  |0012C3B4
0012C378  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C37C  |0012C390
0012C380  |0012C3A0
0012C384  |00000010
0012C388  |0012C3CC
0012C38C  |3082144F  返回到 GF.3082144F 来自 GF.30949650
0012C390  |00000020
0012C394  |00F46C98
0012C398  |0012C3DC
0012C39C  |0012C408
0012C3A0  |0012C3E0
0012C3A4  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C3A8  |0012C3BC
0012C3AC  |0012C3CC
0012C3B0  |00000010
0012C3B4  |0012C3F8
0012C3B8  |3082144F  返回到 GF.3082144F 来自 GF.30949650
0012C3BC  |1258C474
0012C3C0  |47992C71
0012C3C4  |04DF318B
0012C3C8  |0B516C07
0012C3CC  |1BA0BDE7
0012C3D0  |4D131C57
0012C3D4  |9E0F79B7
0012C3D8  |485C8D22
0012C3DC  |C29259A4
0012C3E0  |0012C41C
0012C3E4  |00000020
0012C3E8  |00FA24B8
0012C3EC  |00F9E2E8
0012C3F0  |61DE9B04  MainFram.61DE9B04
0012C3F4  |0012C40C
0012C3F8  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
0012C3FC  |00FFBE14
0012C400  |61DE9B04  MainFram.61DE9B04
0012C404  |00000010
0012C408  |00FFC7F8
0012C40C  |00F9E2C0
0012C410  |00000020
0012C414  |0012C578
0012C418  |00F9E2C0
0012C41C  |00FFBE14
0012C420  |0012C438
0012C424  |3001CF86  返回到 Common.3001CF86 来自 <jmp.&MSVCR80.memcmp>
0012C428  |61DE9B04  MainFram.61DE9B04
0012C42C  |0012C43C
0012C430  |00000000
0012C434  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C438  |057A8470
0012C43C  |0012C508
0012C440  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C444  |00150778
0012C448  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C44C  |057A8498
0012C450  |057A8478
0012C454  |04C91CFC
0012C458  |6759DE64  返回到 AppMisc.6759DE64 来自 kernel32.InterlockedIncrement
0012C45C  |029E6E5C
0012C460  |0012C498
0012C464  |3001F1A8  返回到 Common.3001F1A8
0012C468  |029E6E50
0012C46C  |80070490
0012C470  |003E5A70
0012C474  |029E6818
0012C478  |300DB1D2  返回到 Common.300DB1D2
0012C47C  |00000000
0012C480  |057A8478
0012C484  |00F9E308
0012C488  |00F9E2E8
0012C48C  |0012C49C
0012C490  |00000000
0012C494  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C498  |04C91CE0
0012C49C  |0012C568
0012C4A0  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C4A4  |003E0838
0012C4A8  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C4AC  |00000000
0012C4B0  |04C91CE8
0012C4B4  |00000001
0012C4B8  |7C9314F4  返回到 ntdll.7C9314F4 来自 ntdll.RtlLeaveCriticalSection
0012C4BC  |7C99B120  ntdll.7C99B120
0012C4C0  |7C9314CA  返回到 ntdll.7C9314CA 来自 ntdll.7C92E8E6
0012C4C4  |04C91CFC
0012C4C8  |04C91CFC
0012C4CC  |00000000
0012C4D0  |00150000
0012C4D4  |7FFDD000
0012C4D8  |057A8478
0012C4DC  |0012C430
0012C4E0  |00000000
0012C4E4  |0012C56C
0012C4E8  |0001E900
0012C4EC  |00000005
0012C4F0  |0012C44C
0012C4F4  |7C9315A6  返回到 ntdll.7C9315A6 来自 ntdll.RtlLeaveCriticalSection
0012C4F8  |0012C534
0012C4FC  |7C92E900  ntdll.7C92E900
0012C500  |7C930040  ntdll.7C930040
0012C504  |FFFFFFFF
0012C508  |00000048
0012C50C  |7C931432  返回到 ntdll.7C931432 来自 ntdll.RtlFreeHeap
0012C510  |7C931463  返回到 ntdll.7C931463 来自 ntdll.RtlLeaveCriticalSection
0012C514  |7C99B120  ntdll.7C99B120
0012C518  |7C931440  返回到 ntdll.7C931440 来自 ntdll.7C92E8E6
0012C51C  |057A8498
0012C520  |057A8478
0012C524  |04C91CFC
0012C528  |7FFDD000
0012C52C  |0012C51C
0012C530  |003E0000
0012C534  |0012C578
0012C538  |7C92E900  ntdll.7C92E900
0012C53C  |7C931448  ntdll.7C931448
0012C540  |FFFFFFFF
0012C544  |7C931440  返回到 ntdll.7C931440 来自 ntdll.7C92E8E6
0012C548  |000113C1
0012C54C  |00000009
0012C550  |0012C4AC
0012C554  |04C91CE8
0012C558  |0012C5A4
0012C55C  |7C92E900  ntdll.7C92E900
0012C560  |7C930040  ntdll.7C930040
0012C564  |FFFFFFFF
0012C568  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C56C  |78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
0012C570  |003E0000
0012C574  |00000000
0012C578  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012C57C  |C29C136C
0012C580  |00000000
0012C584  |04C91CE8
0012C588  |00000001
0012C58C  |3000F564  返回到 Common.3000F564 来自 ntdll.RtlDeleteCriticalSection
0012C590  |04C91CFC
0012C594  |3002F72A  返回到 Common.3002F72A 来自 Common.301317BF
0012C598  |C2938D32
0012C59C  |0012C57C
0012C5A0  |04C91CE8
0012C5A4  |0012C600
0012C5A8  |78138CED  MSVCR80.78138CED
0012C5AC  |BA959AB8
0012C5B0  |300DE4CC  返回到 Common.300DE4CC 来自 ntdll.RtlLeaveCriticalSection
0012C5B4  |302817B0  Common.302817B0
0012C5B8  |300DC6E7  Common.CTXStringW::GetBSTR
0012C5BC  |06C4A714
0012C5C0  |300D9102  Common.CTXBSTR::operator wchar_t *
0012C5C4  |0012C5D4
0012C5C8  |300DE679  返回到 Common.300DE679
0012C5CC  |06C4A714
0012C5D0  |06C4A714
0012C5D4  |0012C5E0
0012C5D8  |300D9063  返回到 Common.300D9063 来自 Common.300DE654
0012C5DC  |06C4A714
0012C5E0  |0012C5EC
0012C5E4  |300DB18E  返回到 Common.300DB18E 来自 Common.300D9048
0012C5E8  |06C4A714
0012C5EC  |0012C620
0012C5F0  |300DE4CC  返回到 Common.300DE4CC 来自 ntdll.RtlLeaveCriticalSection
0012C5F4  |302817B0  Common.302817B0
0012C5F8  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C5FC  |06D269E4
0012C600  |00000000
0012C604  |0012C614
0012C608  |300DE679  返回到 Common.300DE679
0012C60C  |06D269E4
0012C610  |06D269E4
0012C614  |0012C620
0012C618  |300D9063  返回到 Common.300D9063 来自 Common.300DE654
0012C61C  |06D269E4
0012C620  |0012C62C
0012C624  |300DB18E  返回到 Common.300DB18E 来自 Common.300D9048
0012C628  |06D269E4
0012C62C  |0012C660
0012C630  |300DB1D2  返回到 Common.300DB1D2
0012C634  |06D269E4
0012C638  |0012C678
0012C63C  |300DBC60  返回到 Common.300DBC60 来自 Common.301317BF
0012C640  |C2938EEA
0012C644  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C648  |00000000
0012C64C  |00000000
0012C650  |0012C678
0012C654  |0012C67C
0012C658  |30146EBD  Common.30146EBD
0012C65C  |00000000
0012C660  |300DBC60  返回到 Common.300DBC60 来自 Common.301317BF
0012C664  |61D12AE7  返回到 MainFram.61D12AE7 来自 MainFram.61D93C45
0012C668  |C366E692
0012C66C  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C670  |02933658
0012C674  |00000000
0012C678  |C364A30D
0012C67C  |0012CAE8  指向下一个 SEH 记录的指针
0012C680  |65850A18  SE处理程序
0012C684  |FFFFFFFF
0012C688  ]0012C69C
0012C68C  |657BFFD1  返回到 AFCtrl.657BFFD1
0012C690  |00000003
0012C694  |63FDF817
0012C698  |300D9102  Common.CTXBSTR::operator wchar_t *
0012C69C  ]0012CAF4
0012C6A0  |03163FC4  返回到 IM.03163FC4
0012C6A4  |02B682F0
0012C6A8  |00000003
0012C6AC  |63FDF817
0012C6B0  |C39F4BC7
0012C6B4  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C6B8  |300D9102  Common.CTXBSTR::operator wchar_t *
0012C6BC  |00000000
0012C6C0  |00000000
0012C6C4  |04D7DE48
0012C6C8  |04D7DE70
0012C6CC  |04D7DE7C
0012C6D0  |0012C6C0
0012C6D4  |04D7DE4C
0012C6D8  |0012C6C0
0012C6DC  |04D7DE70
0012C6E0  |04D82130
0012C6E4  |006E004F
0012C6E8  |004D0049
0012C6EC  |006F0043
0012C6F0  |0074006E
0012C6F4  |00630061
0012C6F8  |00490074
0012C6FC  |0066006E
0012C700  |0045006F
0012C704  |00740076
0012C708  |00000000
0012C70C  |06C4C030  UNICODE "1197668"
0012C710  |018796B8  UNICODE "06519067"
0012C714  |02020C03  ASCII "fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"...
0012C718  |0012C7C4
0012C71C  |7C80A499  返回到 kernel32.7C80A499 来自 kernel32.7C80AFDF
0012C720  |00152F38
0012C724  |0C000000
0012C728  |00000000
0012C72C  |0000000A
0012C730  |00000000
0012C734  |01879518
0012C738  |06C4C040
0012C73C  |00000000
0012C740  |0012C7EC
0012C744  |7C80A499  返回到 kernel32.7C80A499 来自 kernel32.7C80AFDF
0012C748  |00152F38
0012C74C  |00000000
0012C750  |06C4C02C  UNICODE "aa1197668"
0012C754  |0000000A
0012C758  |01879504  UNICODE "1677588503"
0012C75C  |0000000A
0012C760  |00000000
0012C764  |00000000
0012C768  |06C4C02C  UNICODE "aa1197668"
0012C76C  |00000014
0012C770  |003E0000
0012C774  |00000000
0012C778  |00000000
0012C77C  |0000000A
0012C780  |00000020
0012C784  |00F46C98
0012C788  |06C4C02C  UNICODE "aa1197668"
0012C78C  |0012C7F8
0012C790  |0012C7D0
0012C794  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C798  |0012C7AC
0012C79C  |00000000
0012C7A0  |00152F38
0012C7A4  |0012C7E8
0012C7A8  |3082144F  返回到 GF.3082144F 来自 GF.30949650
0012C7AC  |00000020
0012C7B0  |00000000
0012C7B4  |0012C7F8
0012C7B8  |0012C824
0012C7BC  |0012C7FC
0012C7C0  |30821437  返回到 GF.30821437 来自 <jmp.&MSVCR80.memcmp>
0012C7C4  |0012C81C
0012C7C8  |00152F38
0012C7CC  |00000400
0012C7D0  |00000000
0012C7D4  |018796B4  UNICODE "1606519067"
0012C7D8  |0000000A
0012C7DC  |06C4C02C  UNICODE "aa1197668"
0012C7E0  |0000000A
0012C7E4  |7710C05A  返回到 OLEAUT32.7710C05A 来自 OLEAUT32.770F1505
0012C7E8  |06C4C02C  UNICODE "aa1197668"
0012C7EC  |0012C844
0012C7F0  |7710C051  返回到 OLEAUT32.7710C051 来自 kernel32.CompareStringW
0012C7F4  |00000400
0012C7F8  |00000000
0012C7FC  |06C4C02C  UNICODE "aa1197668"
0012C800  |0000000A
0012C804  |01879504  UNICODE "1677588503"
0012C808  |0000000A
0012C80C  |7710C05A  返回到 OLEAUT32.7710C05A 来自 OLEAUT32.770F1505
0012C810  |01879504  UNICODE "1677588503"
0012C814  |00000020
0012C818  |06C4C02C  UNICODE "aa1197668"
0012C81C  |0012C848
0012C820  |7712F583  返回到 OLEAUT32.7712F583 来自 OLEAUT32.7710C012
0012C824  |00000400
0012C828  |00000000
0012C82C  |018796B4  UNICODE "1606519067"
0012C830  |0000000A
0012C834  |06C4C02C  UNICODE "aa1197668"
0012C838  |0000000A
0012C83C  |300DB417  返回到 Common.300DB417 来自 kernel32.InterlockedIncrement
0012C840  |018794F8
0012C844  |0012C8F8
0012C848  |300DB1C1  返回到 Common.300DB1C1 来自 kernel32.InterlockedDecrement
0012C84C  |30281798  Common.30281798
0012C850  |30281794  Common.30281794
0012C854  |300DBAC8  返回到 Common.300DBAC8 来自 Common.300DB1B4
0012C858  |00000000
0012C85C  |029536E8
0012C860  |0012C8F8
0012C864  |0012C874
0012C868  |0012C878
0012C86C  |00000000
0012C870  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C874  |0012C884
0012C878  |00000000
0012C87C  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C880  |0012C890
0012C884  |00000000
0012C888  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C88C  |05802480
0012C890  |0012C95C
0012C894  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C898  |00150778
0012C89C  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C8A0  |0012C8B0
0012C8A4  |00000000
0012C8A8  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C8AC  |04D784D0
0012C8B0  |0012C97C
0012C8B4  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C8B8  |003E0748
0012C8BC  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C8C0  |04D784D8
0012C8C4  |04D784D8
0012C8C8  |02953F88
0012C8CC  |02953F88
0012C8D0  |04DA0E18
0012C8D4  |3180A033  KernelUt.CResultCollection::QueryItemCount
0012C8D8  |003E0718
0012C8DC  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C8E0  |0155C608
0012C8E4  |04D83DD0
0012C8E8  |02953FBC
0012C8EC  |0012C8FC
0012C8F0  |00000000
0012C8F4  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C8F8  |04D834F8
0012C8FC  |0012C9C8
0012C900  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C904  |003E07A8
0012C908  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C90C  |02953F88
0012C910  |04D83500
0012C914  |3180A033  KernelUt.CResultCollection::QueryItemCount
0012C918  |003E0000
0012C91C  |00000020
0012C920  |0012C988
0012C924  |00150000
0012C928  |00000010
0012C92C  |0012C888
0012C930  |00010010  UNICODE "PROFILE=C:\Documents and Settings\All Users"
0012C934  |00000004
0012C938  |003E0000
0012C93C  |00010018  UNICODE "ILE=C:\Documents and Settings\All Users"
0012C940  |00000005
0012C944  |003E0000
0012C948  |7C930040  ntdll.7C930040
0012C94C  |0012C988
0012C950  |003E0000
0012C954  |7C930040  ntdll.7C930040
0012C958  |FFFFFFFF
0012C95C  |0001003D
0012C960  |00000004
0012C964  |0012C8C0
0012C968  |00000030
0012C96C  |0012C9B8
0012C970  |7C92E900  ntdll.7C92E900
0012C974  |7C930040  ntdll.7C930040
0012C978  |0012C988
0012C97C  |00000000
0012C980  |7C930098  返回到 ntdll.7C930098 来自 ntdll.7C922AB0
0012C984  |04D4CA18
0012C988  |0012CA54
0012C98C  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012C990  |003E06E8
0012C994  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012C998  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012C99C  |04D4CA20
0012C9A0  |00000000
0012C9A4  |04D83500
0012C9A8  |0001A033
0012C9AC  |00000006
0012C9B0  |0012C990
0012C9B4  |00242178
0012C9B8  |0012CA64
0012C9BC  |78138CED  MSVCR80.78138CED
0012C9C0  |02953F88
0012C9C4  |0012CA2C
0012C9C8  |0012C9DC
0012C9CC  |03168B22  返回到 IM.03168B22 来自 IM.0327D436
0012C9D0  |029518D0
0012C9D4  |02953F88
0012C9D8  |02953F88
0012C9DC  |0012C9EC
0012C9E0  |030FC81D  返回到 IM.030FC81D 来自 IM.03168B11
0012C9E4  |029518D0
0012C9E8  |02953F88
0012C9EC  |0012CA04
0012C9F0  |0321DEE7  返回到 IM.0321DEE7 来自 IM.030FC80C
0012C9F4  |00000010
0012C9F8  |02953F88
0012C9FC  |02953F88
0012CA00  |029518D0
0012CA04  |0012CA34
0012CA08  |0318D674  返回到 IM.0318D674 来自 IM.0321DE9C
0012CA0C  |0012CA2C
0012CA10  |02953F88
0012CA14  |04D784D8
0012CA18  |02953F88
0012CA1C  |003E0000
0012CA20  |02953FBC
0012CA24  |3002F37F  返回到 Common.3002F37F 来自 kernel32.InterlockedDecrement
0012CA28  |0293320C
0012CA2C  |02953F88
0012CA30  |02953FBC
0012CA34  |0001CA70
0012CA38  |00000002
0012CA3C  |0012C998
0012CA40  |C39F4B43
0012CA44  |0012CA90
0012CA48  |7C92E900  ntdll.7C92E900
0012CA4C  |7C930040  ntdll.7C930040
0012CA50  |FFFFFFFF
0012CA54  |7C93003D  返回到 ntdll.7C93003D 来自 ntdll.7C92E8E6
0012CA58  |78134C39  返回到 MSVCR80.78134C39 来自 ntdll.RtlFreeHeap
0012CA5C  |003E0000
0012CA60  |00000000
0012CA64  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012CA68  |C29C1C78
0012CA6C  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012CA70  |0012CAC4
0012CA74  |00000000
0012CA78  |63FDF817
0012CA7C  |FFFFFFFE
0012CA80  |FFFFFFFE
0012CA84  |00000000
0012CA88  |0012CA68
0012CA8C  |0012CAA0  返回到 0012CAA0
0012CA90  |0012CAE4
0012CA94  |78138CED  MSVCR80.78138CED
0012CA98  |BA959AB8
0012CA9C  |FFFFFFFE
0012CAA0  |78134C58  返回到 MSVCR80.78134C58 来自 MSVCR80.78138CD9
0012CAA4  |0330F52F  返回到 IM.0330F52F 来自 <jmp.&MSVCR80.operator delete>
0012CAA8  |04D4CA20
0012CAAC  |0156E74C
0012CAB0  |030D1196  返回到 IM.030D1196 来自 IM.0331D26F
0012CAB4  |C39F4BC3
0012CAB8  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012CABC  |300D9102  Common.CTXBSTR::operator wchar_t *
0012CAC0  |00000000
0012CAC4  |031869D6  返回到 IM.031869D6 来自 IM.0331D26F
0012CAC8  |00000000
0012CACC  |00000000
0012CAD0  |00000000
0012CAD4  |0012CAC4
0012CAD8  |04D4CA24
0012CADC  |0012CAC4
0012CAE0  |04D4CA24
0012CAE4  |C39F4BC7
0012CAE8  |0012CB40  指向下一个 SEH 记录的指针
0012CAEC  |03364D7C  SE处理程序
0012CAF0  |00000001
0012CAF4  ]0012CB4C
0012CAF8  |031664E0  返回到 IM.031664E0 来自 IM.03163F01
0012CAFC  |63FDF817
0012CB00  |C39F4A7F
0012CB04  |04D83628
0012CB08  |30169160  Common.30169160
0012CB0C  |00000000
0012CB10  |06C4A724  UNICODE "aa1197668"
0012CB14  |0156E748
0012CB18  |06C4A724  UNICODE "aa1197668"
0012CB1C  |5FF5CD0C
0012CB20  |06C4A844  UNICODE "aa1197668"
0012CB24  |5FF5CDAC
0012CB28  |300DB1D2  返回到 Common.300DB1D2
0012CB2C  |06D269E4
0012CB30  |0290A0B4
0012CB34  |63FDF817
0012CB38  |06C4A844  UNICODE "aa1197668"
0012CB3C  |0156E6A8
0012CB40  |0012CB78  指向下一个 SEH 记录的指针
0012CB44  |0333379E  SE处理程序
0012CB48  |00000005
0012CB4C  ]0012CB84
0012CB50  |031675A5  返回到 IM.031675A5 来自 IM.031661EF
0012CB54  |029331F8
0012CB58  |30169160  Common.30169160
0012CB5C  |029331F8
0012CB60  |C39F4AB7
0012CB64  |300D9102  Common.CTXBSTR::operator wchar_t *
0012CB68  |04D820A8
0012CB6C  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012CB70  |06D269F4
0012CB74  |0156E6A8
0012CB78  |0012CBB8  指向下一个 SEH 记录的指针
0012CB7C  |0332FCD8  SE处理程序
0012CB80  |FFFFFFFF
0012CB84  ]0012CBC4
0012CB88  |03167938  返回到 IM.03167938 来自 IM.03167530
0012CB8C  |00D83628
0012CB90  |04D820A8
0012CB94  |C39F4AF7
0012CB98  |0155FD08
0012CB9C  |04D83438
0012CBA0  |00000000
0012CBA4  |06D269F4
0012CBA8  |00000000
0012CBAC  |00000067
0012CBB0  |00000001
0012CBB4  |81CDE650
0012CBB8  |0012CC0C  指向下一个 SEH 记录的指针
0012CBBC  |033339E5  SE处理程序
0012CBC0  |FFFFFFFF
0012CBC4  ]0012CC18
0012CBC8  |01C4C2AC  返回到 Prelogin.01C4C2AC
0012CBCC  |0156E6B0
0012CBD0  |04D83628
0012CBD4  |00169160
0012CBD8  |C3670850
0012CBDC  |300D9102  Common.CTXBSTR::operator wchar_t *
0012CBE0  |0155FD08
0012CBE4  |3007EE3E  Common.CTXBSTR::~CTXBSTR
0012CBE8  |0155FD38
0012CBEC  |01582668
0012CBF0  |00000000
0012CBF4  |04D83438
0012CBF8  |0155FD08
0012CBFC  |0155FD38
0012CC00  |00000000
0012CC04  |0155FDA0
0012CC08  |04D83628
0012CC0C  |0012CC78  指向下一个 SEH 记录的指针
0012CC10  |01CCFC3E  SE处理程序
0012CC14  |00000001
0012CC18  ]0012CC84
0012CC1C  |01C4CA3D  返回到 Prelogin.01C4CA3D 来自 Prelogin.01C4BDA3
0012CC20  |06C4A844  UNICODE "aa1197668"
0012CC24  |00000000
0012CC28  |00169160
0012CC2C  |318764A0  KernelUt.318764A0
0012CC30  |C36708CC
0012CC34  |0012CE30
0012CC38  |0155FD08
0012CC3C  |0000001F
0012CC40  |0155FDC0
0012CC44  |01582568
0012CC48  |2CA10067
0012CC4C  |0012CD0C
0012CC50  |0496F956
0012CC54  |0155FD38
0012CC58  |0496F956
0012CC5C  |0155FDC0
0012CC60  |01582568
0012CC64  |00000001
0012CC68  |00000000
0012CC6C  |00000000
0012CC70  |00000000
0012CC74  |00000081
0012CC78  |0012CD20  指向下一个 SEH 记录的指针
0012CC7C  |01CCFDB8  SE处理程序
0012CC80  |00000005
0012CC84  ]0012CCB0
0012CC88  |01C4CE29  返回到 Prelogin.01C4CE29 来自 Prelogin.01C4C567
0012CC8C  |0496F956
0012CC90  |00000067
0012CC94  |01030DAC
0012CC98  |0000001F
0012CC9C  |8112CE30
0012CCA0  |0012CDE4
0012CCA4  |01566CD8
0012CCA8  |0155FD08
0012CCAC  |00000000
0012CCB0  ]0012CCD4
0012CCB4  |01C4A405  返回到 Prelogin.01C4A405
0012CCB8  |00000000
0012CCBC  |06C4AEBC  UNICODE "223.166.151.94"
0012CCC0  |00001F40
0012CCC4  |0000001F
0012CCC8  |0012CE30
0012CCCC  |0012CDE4
0012CCD0  |0012CDE4
0012CCD4  ]0012CD2C
0012CCD8  |300A5BFC  返回到 Common.300A5BFC
0012CCDC  |0156C228
0012CCE0  |00000000
0012CCE4  |06C4AEBC  UNICODE "223.166.151.94"
0012CCE8  |00001F40
0012CCEC  |0000001F
0012CCF0  |0012CE30
0012CCF4  |0012CDE4
0012CCF8  |C29385A6
0012CCFC  |00000000
0012CD00  |01566CD8
0012CD04  |00000000
0012CD08  |301743A8  Common.301743A8
0012CD0C  |0012CD20
0012CD10  |04C46A38
0012CD14  |04C46A3C
0012CD18  |04C46A3C
0012CD1C  |00000001
0012CD20  |0012CDA4  指向下一个 SEH 记录的指针
0012CD24  |30143242  SE处理程序
0012CD28  |00000000
0012CD2C  ]0012CD50
0012CD30  |300A5271  返回到 Common.300A5271
0012CD34  |00000000
0012CD38  |06C4AEBC  UNICODE "223.166.151.94"
0012CD3C  |00001F40
0012CD40  |0000001F
0012CD44  |0012CE30
0012CD48  |00000001
0012CD4C  |014EE18C
0012CD50  ]0012CDB0
0012CD54  |300996C0  返回到 Common.300996C0
0012CD58  |01520EC0
0012CD5C  |00000000
0012CD60  |06C4AEBC  UNICODE "223.166.151.94"
0012CD64  |00001F40
0012CD68  |0000001F
0012CD6C  |0012CE30
0012CD70  |0012CDE4
0012CD74  |C293853A
0012CD78  |00000000
0012CD7C  |014EE138
0012CD80  |00000000
0012CD84  |0012CDFC
0012CD88  |02AC3360
0012CD8C  |02AC3364
0012CD90  |02AC3364
0012CD94  |0012CD84
0012CD98  |02AC3364
0012CD9C  |0012CD84
0012CDA0  |02AC3360
0012CDA4  |0012CDE8  指向下一个 SEH 记录的指针
0012CDA8  |30141B10  SE处理程序
0012CDAC  |00000000
0012CDB0  ]0012CDF4
0012CDB4  |3009991B  返回到 Common.3009991B 来自 Common.3009960D
0012CDB8  |00000000
0012CDBC  |06C4AEBC  UNICODE "223.166.151.94"
0012CDC0  |00001F40
0012CDC4  |0000001F
0012CDC8  |0012CE30
0012CDCC  |0012CDE4
0012CDD0  |C293857E
0012CDD4  |00000000
0012CDD8  |014EE138
0012CDDC  |00000000
0012CDE0  |00000000
0012CDE4  |00000001
0012CDE8  |0012F634  指向下一个 SEH 记录的指针
0012CDEC  |30142311  SE处理程序
0012CDF0  |00000002
0012CDF4  ]0012F640
0012CDF8  |30099B20  返回到 Common.30099B20 来自 Common.30099883
0012CDFC  |06C4AEBC  UNICODE "223.166.151.94"
0012CE00  |06C4A9F4  UNICODE "223.166.151.94"
0012CE04  |00001F40
0012CE08  |0000001F
0012CE0C  |0012CE30
0012CE10  |C293BECA
0012CE14  |01568AE8
0012CE18  |0158AFE0
0012CE1C  |00000000
0012CE20  |00001F40
0012CE24  |FFFFFFFF
0012CE28  |FFFFFFFF
0012CE2C  |06C4A9F4  UNICODE "223.166.151.94"
0012CE30  |005D3202
0012CE34  |63A12C67
0012CE38  |0017F8FD
0012CE3C  |C9040000
0012CE40  |95F8F2AB
0012CE44  |5C3BAC05
0012CE48  |7369D034
0012CE4C  |000332A7
0012CE50  |00000000
0012CE54  |00000000
0012CE58  |00000000
0012CE5C  |00000000
0012CE60  |00000000
0012CE64  |00000000
0012CE68  |00000000
0012CE6C  |00000000
0012CE70  |00000000
0012CE74  |00000000
0012CE78  |00000000
0012CE7C  |00000000
0012CE80  |00000000
0012CE84  |00000000
0012CE88  |00000000
0012CE8C  |00000000
0012CE90  |00000000
0012CE94  |00000000
0012CE98  |00000000
0012CE9C  |00000000
0012CEA0  |00000000
0012CEA4  |00000000
0012CEA8  |00000000
0012CEAC  |00000000
0012CEB0  |00000000
0012CEB4  |00000000
0012CEB8  |00000000
0012CEBC  |00000000
0012CEC0  |00000000
0012CEC4  |00000000
0012CEC8  |00000000
0012CECC  |00000000
0012CED0  |00000000
0012CED4  |00000000
0012CED8  |00000000
0012CEDC  |00000000
0012CEE0  |00000000
0012CEE4  |00000000
0012CEE8  |00000000
0012CEEC  |00000000
0012CEF0  |00000000
0012CEF4  |00000000
0012CEF8  |00000000
0012CEFC  |00000000
0012CF00  |00000000
0012CF04  |00000000
0012CF08  |00000000
0012CF0C  |00000000
0012CF10  |00000000
0012CF14  |00000000
0012CF18  |00000000
0012CF1C  |00000000
0012CF20  |00000000
0012CF24  |00000000
0012CF28  |00000000
0012CF2C  |00000000
0012CF30  |00000000
0012CF34  |00000000
0012CF38  |00000000
0012CF3C  |00000000
0012CF40  |00000000
0012CF44  |00000000
0012CF48  |00000000
0012CF4C  |00000000
0012CF50  |00000000
0012CF54  |00000000
0012CF58  |00000000
0012CF5C  |00000000
0012CF60  |00000000
0012CF64  |00000000
0012CF68  |00000000
0012CF6C  |00000000
0012CF70  |00000000
0012CF74  |00000000
0012CF78  |00000000
0012CF7C  |00000000
0012CF80  |00000000
0012CF84  |00000000
0012CF88  |00000000
0012CF8C  |00000000
0012CF90  |00000000
0012CF94  |00000000
0012CF98  |00000000
0012CF9C  |00000000
0012CFA0  |00000000
0012CFA4  |00000000
0012CFA8  |00000000
0012CFAC  |00000000
0012CFB0  |00000000
0012CFB4  |00000000
0012CFB8  |00000000
0012CFBC  |00000000
0012CFC0  |00000000
0012CFC4  |00000000
0012CFC8  |00000000
0012CFCC  |00000000
0012CFD0  |00000000
0012CFD4  |00000000
0012CFD8  |00000000
0012CFDC  |00000000
0012CFE0  |00000000
0012CFE4  |00000000
0012CFE8  |00000000
0012CFEC  |00000000
0012CFF0  |00000000
0012CFF4  |00000000
0012CFF8  |00000000
0012CFFC  |00000000
0012D000  |00000000
0012D004  |00000000
0012D008  |00000000
0012D00C  |00000000
0012D010  |00000000
0012D014  |00000000
0012D018  |00000000
0012D01C  |00000000
0012D020  |00000000
0012D024  |00000000
0012D028  |00000000
0012D02C  |00000000
0012D030  |00000000
0012D034  |00000000
0012D038  |00000000
0012D03C  |00000000
0012D040  |00000000
0012D044  |00000000
0012D048  |00000000
0012D04C  |00000000
0012D050  |00000000
0012D054  |00000000
0012D058  |00000000
0012D05C  |00000000
0012D060  |00000000
0012D064  |00000000
0012D068  |00000000
0012D06C  |00000000
0012D070  |00000000
0012D074  |00000000
0012D078  |00000000
0012D07C  |00000000
0012D080  |00000000
0012D084  |00000000
0012D088  |00000000
0012D08C  |00000000
0012D090  |00000000
0012D094  |00000000
0012D098  |00000000
0012D09C  |00000000
0012D0A0  |00000000
0012D0A4  |00000000
0012D0A8  |00000000
0012D0AC  |00000000
0012D0B0  |00000000
0012D0B4  |00000000
0012D0B8  |00000000
0012D0BC  |00000000
0012D0C0  |00000000
0012D0C4  |00000000
0012D0C8  |00000000
0012D0CC  |00000000
0012D0D0  |00000000
0012D0D4  |00000000
0012D0D8  |00000000
0012D0DC  |00000000
0012D0E0  |00000000
0012D0E4  |00000000
0012D0E8  |00000000
0012D0EC  |00000000
0012D0F0  |00000000
0012D0F4  |00000000
0012D0F8  |00000000
0012D0FC  |00000000
0012D100  |00000000
0012D104  |00000000
0012D108  |00000000
0012D10C  |00000000
0012D110  |00000000
0012D114  |00000000
0012D118  |00000000
0012D11C  |00000000
0012D120  |00000000
0012D124  |00000000
0012D128  |00000000
0012D12C  |00000000
0012D130  |00000000
0012D134  |00000000
0012D138  |00000000
0012D13C  |00000000
0012D140  |00000000
0012D144  |00000000
0012D148  |00000000
0012D14C  |00000000
0012D150  |00000000
0012D154  |00000000
0012D158  |00000000
0012D15C  |00000000
0012D160  |00000000
0012D164  |00000000
0012D168  |00000000
0012D16C  |00000000
0012D170  |00000000
0012D174  |00000000
0012D178  |00000000
0012D17C  |00000000
0012D180  |00000000
0012D184  |00000000
0012D188  |00000000
0012D18C  |00000000
0012D190  |00000000
0012D194  |00000000
0012D198  |00000000
0012D19C  |00000000
0012D1A0  |00000000
0012D1A4  |00000000
0012D1A8  |00000000
0012D1AC  |00000000
0012D1B0  |00000000
0012D1B4  |00000000
0012D1B8  |00000000
0012D1BC  |00000000
0012D1C0  |00000000
0012D1C4  |00000000
0012D1C8  |00000000
0012D1CC  |00000000
0012D1D0  |00000000
0012D1D4  |00000000
0012D1D8  |00000000
0012D1DC  |00000000
0012D1E0  |00000000
0012D1E4  |00000000
0012D1E8  |00000000
0012D1EC  |00000000
0012D1F0  |00000000
0012D1F4  |00000000
0012D1F8  |00000000
0012D1FC  |00000000
0012D200  |00000000
0012D204  |00000000
0012D208  |00000000
0012D20C  |00000000
0012D210  |00000000
0012D214  |00000000
0012D218  |00000000
0012D21C  |00000000
0012D220  |00000000
0012D224  |00000000
0012D228  |00000000
0012D22C  |00000000
0012D230  |00000000
0012D234  |00000000
0012D238  |00000000
0012D23C  |00000000
0012D240  |00000000
0012D244  |00000000
0012D248  |00000000
0012D24C  |00000000
0012D250  |00000000
0012D254  |00000000
0012D258  |00000000
0012D25C  |00000000
0012D260  |00000000
0012D264  |00000000
0012D268  |00000000
0012D26C  |00000000
0012D270  |00000000
0012D274  |00000000
0012D278  |00000000
0012D27C  |00000000
0012D280  |00000000
0012D284  |00000000
0012D288  |00000000
0012D28C  |00000000
0012D290  |00000000
0012D294  |00000000
0012D298  |00000000
0012D29C  |00000000
0012D2A0  |00000000
0012D2A4  |00000000
0012D2A8  |00000000
0012D2AC  |00000000
0012D2B0  |00000000
0012D2B4  |00000000
0012D2B8  |00000000
0012D2BC  |00000000
0012D2C0  |00000000
0012D2C4  |00000000
0012D2C8  |00000000
0012D2CC  |00000000
0012D2D0  |00000000
0012D2D4  |00000000
0012D2D8  |00000000
0012D2DC  |00000000
0012D2E0  |00000000
0012D2E4  |00000000
0012D2E8  |00000000
0012D2EC  |00000000
0012D2F0  |00000000
0012D2F4  |00000000
0012D2F8  |00000000
0012D2FC  |00000000
0012D300  |00000000
0012D304  |00000000
0012D308  |00000000
0012D30C  |00000000
0012D310  |00000000
0012D314  |00000000
0012D318  |00000000
0012D31C  |00000000
0012D320  |00000000
0012D324  |00000000
0012D328  |00000000
0012D32C  |00000000
0012D330  |00000000
0012D334  |00000000
0012D338  |00000000
0012D33C  |00000000
0012D340  |00000000
0012D344  |00000000
0012D348  |00000000
0012D34C  |00000000
0012D350  |00000000
0012D354  |00000000
0012D358  |00000000
0012D35C  |00000000
0012D360  |00000000
0012D364  |00000000
0012D368  |00000000
0012D36C  |00000000
0012D370  |00000000
0012D374  |00000000
0012D378  |00000000
0012D37C  |00000000
0012D380  |00000000
0012D384  |00000000
0012D388  |00000000
0012D38C  |00000000
0012D390  |00000000
0012D394  |00000000
0012D398  |00000000
0012D39C  |00000000
0012D3A0  |00000000
0012D3A4  |00000000
0012D3A8  |00000000
0012D3AC  |00000000
0012D3B0  |00000000
0012D3B4  |00000000
0012D3B8  |00000000
0012D3BC  |00000000
0012D3C0  |00000000
0012D3C4  |00000000
0012D3C8  |00000000
0012D3CC  |00000000
0012D3D0  |00000000
0012D3D4  |00000000
0012D3D8  |00000000
0012D3DC  |00000000
0012D3E0  |00000000
0012D3E4  |00000000
0012D3E8  |00000000
0012D3EC  |00000000
0012D3F0  |00000000
0012D3F4  |00000000
0012D3F8  |00000000
0012D3FC  |00000000
0012D400  |00000000
0012D404  |00000000
0012D408  |00000000
0012D40C  |00000000
0012D410  |00000000
0012D414  |00000000
0012D418  |00000000
0012D41C  |00000000
0012D420  |00000000
0012D424  |00000000
0012D428  |00000000
0012D42C  |00000000
0012D430  |00000000
0012D434  |00000000
0012D438  |00000000
0012D43C  |00000000
0012D440  |00000000
0012D444  |00000000
0012D448  |00000000
0012D44C  |00000000
0012D450  |00000000
0012D454  |00000000
0012D458  |00000000
0012D45C  |00000000
0012D460  |00000000
0012D464  |00000000
0012D468  |00000000
0012D46C  |00000000
0012D470  |00000000
0012D474  |00000000
0012D478  |00000000
0012D47C  |00000000
0012D480  |00000000
0012D484  |00000000
0012D488  |00000000
0012D48C  |00000000
0012D490  |00000000
0012D494  |00000000
0012D498  |00000000
0012D49C  |00000000
0012D4A0  |00000000
0012D4A4  |00000000
0012D4A8  |00000000
0012D4AC  |00000000
0012D4B0  |00000000
0012D4B4  |00000000
0012D4B8  |00000000
0012D4BC  |00000000
0012D4C0  |00000000
0012D4C4  |00000000
0012D4C8  |00000000
0012D4CC  |00000000
0012D4D0  |00000000
0012D4D4  |00000000
0012D4D8  |00000000
0012D4DC  |00000000
0012D4E0  |00000000
0012D4E4  |00000000
0012D4E8  |00000000
0012D4EC  |00000000
0012D4F0  |00000000
0012D4F4  |00000000
0012D4F8  |00000000
0012D4FC  |00000000
0012D500  |00000000
0012D504  |00000000
0012D508  |00000000
0012D50C  |00000000
0012D510  |00000000
0012D514  |00000000
0012D518  |00000000
0012D51C  |00000000
0012D520  |00000000
0012D524  |00000000
0012D528  |00000000
0012D52C  |00000000
0012D530  |00000000
0012D534  |00000000
0012D538  |00000000
0012D53C  |00000000
0012D540  |00000000
0012D544  |00000000
0012D548  |00000000
0012D54C  |00000000
0012D550  |00000000
0012D554  |00000000
0012D558  |00000000
0012D55C  |00000000
0012D560  |00000000
0012D564  |00000000
0012D568  |00000000
0012D56C  |00000000
0012D570  |00000000
0012D574  |00000000
0012D578  |00000000
0012D57C  |00000000
0012D580  |00000000
0012D584  |00000000
0012D588  |00000000
0012D58C  |00000000
0012D590  |00000000
0012D594  |00000000
0012D598  |00000000
0012D59C  |00000000
0012D5A0  |00000000
0012D5A4  |00000000
0012D5A8  |00000000
0012D5AC  |00000000
0012D5B0  |00000000
0012D5B4  |00000000
0012D5B8  |00000000
0012D5BC  |00000000
0012D5C0  |00000000
0012D5C4  |00000000
0012D5C8  |00000000
0012D5CC  |00000000
0012D5D0  |00000000
0012D5D4  |00000000
0012D5D8  |00000000
0012D5DC  |00000000
0012D5E0  |00000000
0012D5E4  |00000000
0012D5E8  |00000000
0012D5EC  |00000000
0012D5F0  |00000000
0012D5F4  |00000000
0012D5F8  |00000000
0012D5FC  |00000000
0012D600  |00000000
0012D604  |00000000
0012D608  |00000000
0012D60C  |00000000
0012D610  |00000000
0012D614  |00000000
0012D618  |00000000
0012D61C  |00000000
0012D620  |00000000
0012D624  |00000000
0012D628  |00000000
0012D62C  |00000000
0012D630  |00000000
0012D634  |00000000
0012D638  |00000000
0012D63C  |00000000
0012D640  |00000000
0012D644  |00000000
0012D648  |00000000
0012D64C  |00000000
0012D650  |00000000
0012D654  |00000000
0012D658  |00000000
0012D65C  |00000000
0012D660  |00000000
0012D664  |00000000
0012D668  |00000000
0012D66C  |00000000
0012D670  |00000000
0012D674  |00000000
0012D678  |00000000
0012D67C  |00000000
0012D680  |00000000
0012D684  |00000000
0012D688  |00000000
0012D68C  |00000000
0012D690  |00000000
0012D694  |00000000
0012D698  |00000000
0012D69C  |00000000
0012D6A0  |00000000
0012D6A4  |00000000
0012D6A8  |00000000
0012D6AC  |00000000
0012D6B0  |00000000
0012D6B4  |00000000
0012D6B8  |00000000
0012D6BC  |00000000
0012D6C0  |00000000
0012D6C4  |00000000
0012D6C8  |00000000
0012D6CC  |00000000
0012D6D0  |00000000
0012D6D4  |00000000
0012D6D8  |00000000
0012D6DC  |00000000
0012D6E0  |00000000
0012D6E4  |00000000
0012D6E8  |00000000
0012D6EC  |00000000
0012D6F0  |00000000
0012D6F4  |00000000
0012D6F8  |00000000
0012D6FC  |00000000
0012D700  |00000000
0012D704  |00000000
0012D708  |00000000
0012D70C  |00000000
0012D710  |00000000
0012D714  |00000000
0012D718  |00000000
0012D71C  |00000000
0012D720  |00000000
0012D724  |00000000
0012D728  |00000000
0012D72C  |00000000
0012D730  |00000000
0012D734  |00000000
0012D738  |00000000
0012D73C  |00000000
0012D740  |00000000
0012D744  |00000000
0012D748  |00000000
0012D74C  |00000000
0012D750  |00000000
0012D754  |00000000
0012D758  |00000000
0012D75C  |00000000
0012D760  |00000000
0012D764  |00000000
0012D768  |00000000
0012D76C  |00000000
0012D770  |00000000
0012D774  |00000000
0012D778  |00000000
0012D77C  |00000000
0012D780  |00000000
0012D784  |00000000
0012D788  |00000000
0012D78C  |00000000
0012D790  |00000000
0012D794  |00000000
0012D798  |00000000
0012D79C  |00000000
0012D7A0  |00000000
0012D7A4  |00000000
0012D7A8  |00000000
0012D7AC  |00000000
0012D7B0  |00000000
0012D7B4  |00000000
0012D7B8  |00000000
0012D7BC  |00000000
0012D7C0  |00000000
0012D7C4  |00000000
0012D7C8  |00000000
0012D7CC  |00000000
0012D7D0  |00000000
0012D7D4  |00000000
0012D7D8  |00000000
0012D7DC  |00000000
0012D7E0  |00000000
0012D7E4  |00000000
0012D7E8  |00000000
0012D7EC  |00000000
0012D7F0  |00000000
0012D7F4  |00000000
0012D7F8  |00000000
0012D7FC  |00000000
0012D800  |00000000
0012D804  |00000000
0012D808  |00000000
0012D80C  |00000000
0012D810  |00000000
0012D814  |00000000
0012D818  |00000000
0012D81C  |00000000
0012D820  |00000000
0012D824  |00000000
0012D828  |00000000
0012D82C  |00000000
0012D830  |00000000
0012D834  |00000000
0012D838  |00000000
0012D83C  |00000000
0012D840  |00000000
0012D844  |00000000
0012D848  |00000000
0012D84C  |00000000
0012D850  |00000000
0012D854  |00000000
0012D858  |00000000
0012D85C  |00000000
0012D860  |00000000
0012D864  |00000000
0012D868  |00000000
0012D86C  |00000000
0012D870  |00000000
0012D874  |00000000
0012D878  |00000000
0012D87C  |00000000
0012D880  |00000000
0012D884  |00000000
0012D888  |00000000
0012D88C  |00000000
0012D890  |00000000
0012D894  |00000000
0012D898  |00000000
0012D89C  |00000000
0012D8A0  |00000000
0012D8A4  |00000000
0012D8A8  |00000000
0012D8AC  |00000000
0012D8B0  |00000000
0012D8B4  |00000000
0012D8B8  |00000000
0012D8BC  |00000000
0012D8C0  |00000000
0012D8C4  |00000000
0012D8C8  |00000000
0012D8CC  |00000000
0012D8D0  |00000000
0012D8D4  |00000000
0012D8D8  |00000000
0012D8DC  |00000000
0012D8E0  |00000000
0012D8E4  |00000000
0012D8E8  |00000000
0012D8EC  |00000000
0012D8F0  |00000000
0012D8F4  |00000000
0012D8F8  |00000000
0012D8FC  |00000000
0012D900  |00000000
0012D904  |00000000
0012D908  |00000000
0012D90C  |00000000
0012D910  |00000000
0012D914  |00000000
0012D918  |00000000
0012D91C  |00000000
0012D920  |00000000
0012D924  |00000000
0012D928  |00000000
0012D92C  |00000000
0012D930  |00000000
0012D934  |00000000
0012D938  |00000000
0012D93C  |00000000
0012D940  |00000000
0012D944  |00000000
0012D948  |00000000
0012D94C  |00000000
0012D950  |00000000
0012D954  |00000000
0012D958  |00000000
0012D95C  |00000000
0012D960  |00000000
0012D964  |00000000
0012D968  |00000000
0012D96C  |00000000
0012D970  |00000000
0012D974  |00000000
0012D978  |00000000
0012D97C  |00000000
0012D980  |00000000
0012D984  |00000000
0012D988  |00000000
0012D98C  |00000000
0012D990  |00000000
0012D994  |00000000
0012D998  |00000000
0012D99C  |00000000
0012D9A0  |00000000
0012D9A4  |00000000
0012D9A8  |00000000
0012D9AC  |00000000
0012D9B0  |00000000
0012D9B4  |00000000
0012D9B8  |00000000
0012D9BC  |00000000
0012D9C0  |00000000
0012D9C4  |00000000
0012D9C8  |00000000
0012D9CC  |00000000
0012D9D0  |00000000
0012D9D4  |00000000
0012D9D8  |00000000
0012D9DC  |00000000
0012D9E0  |00000000
0012D9E4  |00000000
0012D9E8  |00000000
0012D9EC  |00000000
0012D9F0  |00000000
0012D9F4  |00000000
0012D9F8  |00000000
0012D9FC  |00000000
0012DA00  |00000000
0012DA04  |00000000
0012DA08  |00000000
0012DA0C  |00000000
0012DA10  |00000000
0012DA14  |00000000
0012DA18  |00000000
0012DA1C  |00000000
0012DA20  |00000000
0012DA24  |00000000
0012DA28  |00000000
0012DA2C  |00000000
0012DA30  |00000000
0012DA34  |00000000
0012DA38  |00000000
0012DA3C  |00000000
0012DA40  |00000000
0012DA44  |00000000
0012DA48  |00000000
0012DA4C  |00000000
0012DA50  |00000000
0012DA54  |00000000
0012DA58  |00000000
0012DA5C  |00000000
0012DA60  |00000000
0012DA64  |00000000
0012DA68  |00000000
0012DA6C  |00000000
0012DA70  |00000000
0012DA74  |00000000
0012DA78  |00000000
0012DA7C  |00000000
0012DA80  |00000000
0012DA84  |00000000
0012DA88  |00000000
0012DA8C  |00000000
0012DA90  |00000000
0012DA94  |00000000
0012DA98  |00000000
0012DA9C  |00000000
0012DAA0  |00000000
0012DAA4  |00000000
0012DAA8  |00000000
0012DAAC  |00000000
0012DAB0  |00000000
0012DAB4  |00000000
0012DAB8  |00000000
0012DABC  |00000000
0012DAC0  |00000000
0012DAC4  |00000000
0012DAC8  |00000000
0012DACC  |00000000
0012DAD0  |00000000
0012DAD4  |00000000
0012DAD8  |00000000
0012DADC  |00000000
0012DAE0  |00000000
0012DAE4  |00000000
0012DAE8  |00000000
0012DAEC  |00000000
0012DAF0  |00000000
0012DAF4  |00000000
0012DAF8  |00000000
0012DAFC  |00000000
0012DB00  |00000000
0012DB04  |00000000
0012DB08  |00000000
0012DB0C  |00000000
0012DB10  |00000000
0012DB14  |00000000
0012DB18  |00000000
0012DB1C  |00000000
0012DB20  |00000000
0012DB24  |00000000
0012DB28  |00000000
0012DB2C  |00000000
0012DB30  |00000000
0012DB34  |00000000
0012DB38  |00000000
0012DB3C  |00000000
0012DB40  |00000000
0012DB44  |00000000
0012DB48  |00000000
0012DB4C  |00000000
0012DB50  |00000000
0012DB54  |00000000
0012DB58  |00000000
0012DB5C  |00000000
0012DB60  |00000000
0012DB64  |00000000
0012DB68  |00000000
0012DB6C  |00000000
0012DB70  |00000000
0012DB74  |00000000
0012DB78  |00000000
0012DB7C  |00000000
0012DB80  |00000000
0012DB84  |00000000
0012DB88  |00000000
0012DB8C  |00000000
0012DB90  |00000000
0012DB94  |00000000
0012DB98  |00000000
0012DB9C  |00000000
0012DBA0  |00000000
0012DBA4  |00000000
0012DBA8  |00000000
0012DBAC  |00000000
0012DBB0  |00000000
0012DBB4  |00000000
0012DBB8  |00000000
0012DBBC  |00000000
0012DBC0  |00000000
0012DBC4  |00000000
0012DBC8  |00000000
0012DBCC  |00000000
0012DBD0  |00000000
0012DBD4  |00000000
0012DBD8  |00000000
0012DBDC  |00000000
0012DBE0  |00000000
0012DBE4  |00000000
0012DBE8  |00000000
0012DBEC  |00000000
0012DBF0  |00000000
0012DBF4  |00000000
0012DBF8  |00000000
0012DBFC  |00000000
0012DC00  |00000000
0012DC04  |00000000
0012DC08  |00000000
0012DC0C  |00000000
0012DC10  |00000000
0012DC14  |00000000
0012DC18  |00000000
0012DC1C  |00000000
0012DC20  |00000000
0012DC24  |00000000
0012DC28  |00000000
0012DC2C  |00000000
0012DC30  |00000000
0012DC34  |00000000
0012DC38  |00000000
0012DC3C  |00000000
0012DC40  |00000000
0012DC44  |00000000
0012DC48  |00000000
0012DC4C  |00000000
0012DC50  |00000000
0012DC54  |00000000
0012DC58  |00000000
0012DC5C  |00000000
0012DC60  |00000000
0012DC64  |00000000
0012DC68  |00000000
0012DC6C  |00000000
0012DC70  |00000000
0012DC74  |00000000
0012DC78  |00000000
0012DC7C  |00000000
0012DC80  |00000000
0012DC84  |00000000
0012DC88  |00000000
0012DC8C  |00000000
0012DC90  |00000000
0012DC94  |00000000
0012DC98  |00000000
0012DC9C  |00000000
0012DCA0  |00000000
0012DCA4  |00000000
0012DCA8  |00000000
0012DCAC  |00000000
0012DCB0  |00000000
0012DCB4  |00000000
0012DCB8  |00000000
0012DCBC  |00000000
0012DCC0  |00000000
0012DCC4  |00000000
0012DCC8  |00000000
0012DCCC  |00000000
0012DCD0  |00000000
0012DCD4  |00000000
0012DCD8  |00000000
0012DCDC  |00000000
0012DCE0  |00000000
0012DCE4  |00000000
0012DCE8  |00000000
0012DCEC  |00000000
0012DCF0  |00000000
0012DCF4  |00000000
0012DCF8  |00000000
0012DCFC  |00000000
0012DD00  |00000000
0012DD04  |00000000
0012DD08  |00000000
0012DD0C  |00000000
0012DD10  |00000000
0012DD14  |00000000
0012DD18  |00000000
0012DD1C  |00000000
0012DD20  |00000000
0012DD24  |00000000
0012DD28  |00000000
0012DD2C  |00000000
0012DD30  |00000000
0012DD34  |00000000
0012DD38  |00000000
0012DD3C  |00000000
0012DD40  |00000000
0012DD44  |00000000
0012DD48  |00000000
0012DD4C  |00000000
0012DD50  |00000000
0012DD54  |00000000
0012DD58  |00000000
0012DD5C  |00000000
0012DD60  |00000000
0012DD64  |00000000
0012DD68  |00000000
0012DD6C  |00000000
0012DD70  |00000000
0012DD74  |00000000
0012DD78  |00000000
0012DD7C  |00000000
0012DD80  |00000000
0012DD84  |00000000
0012DD88  |00000000
0012DD8C  |00000000
0012DD90  |00000000
0012DD94  |00000000
0012DD98  |00000000
0012DD9C  |00000000
0012DDA0  |00000000
0012DDA4  |00000000
0012DDA8  |00000000
0012DDAC  |00000000
0012DDB0  |00000000
0012DDB4  |00000000
0012DDB8  |00000000
0012DDBC  |00000000
0012DDC0  |00000000
0012DDC4  |00000000
0012DDC8  |00000000
0012DDCC  |00000000
0012DDD0  |00000000
0012DDD4  |00000000
0012DDD8  |00000000
0012DDDC  |00000000
0012DDE0  |00000000
0012DDE4  |00000000
0012DDE8  |00000000
0012DDEC  |00000000
0012DDF0  |00000000
0012DDF4  |00000000
0012DDF8  |00000000
0012DDFC  |00000000
0012DE00  |00000000
0012DE04  |00000000
0012DE08  |00000000
0012DE0C  |00000000
0012DE10  |00000000
0012DE14  |00000000
0012DE18  |00000000
0012DE1C  |00000000
0012DE20  |00000000
0012DE24  |00000000
0012DE28  |00000000
0012DE2C  |00000000
0012DE30  |00000000
0012DE34  |00000000
0012DE38  |00000000
0012DE3C  |00000000
0012DE40  |00000000
0012DE44  |00000000
0012DE48  |00000000
0012DE4C  |00000000
0012DE50  |00000000
0012DE54  |00000000
0012DE58  |00000000
0012DE5C  |00000000
0012DE60  |00000000
0012DE64  |00000000
0012DE68  |00000000
0012DE6C  |00000000
0012DE70  |00000000
0012DE74  |00000000
0012DE78  |00000000
0012DE7C  |00000000
0012DE80  |00000000
0012DE84  |00000000
0012DE88  |00000000
0012DE8C  |00000000
0012DE90  |00000000
0012DE94  |00000000
0012DE98  |00000000
0012DE9C  |00000000
0012DEA0  |00000000
0012DEA4  |00000000
0012DEA8  |00000000
0012DEAC  |00000000
0012DEB0  |00000000
0012DEB4  |00000000
0012DEB8  |00000000
0012DEBC  |00000000
0012DEC0  |00000000
0012DEC4  |00000000
0012DEC8  |00000000
0012DECC  |00000000
0012DED0  |00000000
0012DED4  |00000000
0012DED8  |00000000
0012DEDC  |00000000
0012DEE0  |00000000
0012DEE4  |00000000
0012DEE8  |00000000
0012DEEC  |00000000
0012DEF0  |00000000
0012DEF4  |00000000
0012DEF8  |00000000
0012DEFC  |00000000
0012DF00  |00000000
0012DF04  |00000000
0012DF08  |00000000
0012DF0C  |00000000
0012DF10  |00000000
0012DF14  |00000000
0012DF18  |00000000
0012DF1C  |00000000
0012DF20  |00000000
0012DF24  |00000000
0012DF28  |00000000
0012DF2C  |00000000
0012DF30  |00000000
0012DF34  |00000000
0012DF38  |00000000
0012DF3C  |00000000
0012DF40  |00000000
0012DF44  |00000000
0012DF48  |00000000
0012DF4C  |00000000
0012DF50  |00000000
0012DF54  |00000000
0012DF58  |00000000
0012DF5C  |00000000
0012DF60  |00000000
0012DF64  |00000000
0012DF68  |00000000
0012DF6C  |00000000
0012DF70  |00000000
0012DF74  |00000000
0012DF78  |00000000
0012DF7C  |00000000
0012DF80  |00000000
0012DF84  |00000000
0012DF88  |00000000
0012DF8C  |00000000
0012DF90  |00000000
0012DF94  |00000000
0012DF98  |00000000
0012DF9C  |00000000
0012DFA0  |00000000
0012DFA4  |00000000
0012DFA8  |00000000
0012DFAC  |00000000
0012DFB0  |00000000
0012DFB4  |00000000
0012DFB8  |00000000
0012DFBC  |00000000
0012DFC0  |00000000
0012DFC4  |00000000
0012DFC8  |00000000
0012DFCC  |00000000
0012DFD0  |00000000
0012DFD4  |00000000
0012DFD8  |00000000
0012DFDC  |00000000
0012DFE0  |00000000
0012DFE4  |00000000
0012DFE8  |00000000
0012DFEC  |00000000
0012DFF0  |00000000
0012DFF4  |00000000
0012DFF8  |00000000
0012DFFC  |00000000
0012E000  |00000000
0012E004  |00000000
0012E008  |00000000
0012E00C  |00000000
0012E010  |00000000
0012E014  |00000000
0012E018  |00000000
0012E01C  |00000000
0012E020  |00000000
0012E024  |00000000
0012E028  |00000000
0012E02C  |00000000
0012E030  |00000000
0012E034  |00000000
0012E038  |00000000
0012E03C  |00000000
0012E040  |00000000
0012E044  |00000000
0012E048  |00000000
0012E04C  |00000000
0012E050  |00000000
0012E054  |00000000
0012E058  |00000000
0012E05C  |00000000
0012E060  |00000000
0012E064  |00000000
0012E068  |00000000
0012E06C  |00000000
0012E070  |00000000
0012E074  |00000000
0012E078  |00000000
0012E07C  |00000000
0012E080  |00000000
0012E084  |00000000
0012E088  |00000000
0012E08C  |00000000
0012E090  |00000000
0012E094  |00000000
0012E098  |00000000
0012E09C  |00000000
0012E0A0  |00000000
0012E0A4  |00000000
0012E0A8  |00000000
0012E0AC  |00000000
0012E0B0  |00000000
0012E0B4  |00000000
0012E0B8  |00000000
0012E0BC  |00000000
0012E0C0  |00000000
0012E0C4  |00000000
0012E0C8  |00000000
0012E0CC  |00000000
0012E0D0  |00000000
0012E0D4  |00000000
0012E0D8  |00000000
0012E0DC  |00000000
0012E0E0  |00000000
0012E0E4  |00000000
0012E0E8  |00000000
0012E0EC  |00000000
0012E0F0  |00000000
0012E0F4  |00000000
0012E0F8  |00000000
0012E0FC  |00000000
0012E100  |00000000
0012E104  |00000000
0012E108  |00000000
0012E10C  |00000000
0012E110  |00000000
0012E114  |00000000
0012E118  |00000000
0012E11C  |00000000
0012E120  |00000000
0012E124  |00000000
0012E128  |00000000
0012E12C  |00000000
0012E130  |00000000
0012E134  |00000000
0012E138  |00000000
0012E13C  |00000000
0012E140  |00000000
0012E144  |00000000
0012E148  |00000000
0012E14C  |00000000
0012E150  |00000000
0012E154  |00000000
0012E158  |00000000
0012E15C  |00000000
0012E160  |00000000
0012E164  |00000000
0012E168  |00000000
0012E16C  |00000000
0012E170  |00000000
0012E174  |00000000
0012E178  |00000000
0012E17C  |00000000
0012E180  |00000000
0012E184  |00000000
0012E188  |00000000
0012E18C  |00000000
0012E190  |00000000
0012E194  |00000000
0012E198  |00000000
0012E19C  |00000000
0012E1A0  |00000000
0012E1A4  |00000000
0012E1A8  |00000000
0012E1AC  |00000000
0012E1B0  |00000000
0012E1B4  |00000000
0012E1B8  |00000000
0012E1BC  |00000000
0012E1C0  |00000000
0012E1C4  |00000000
0012E1C8  |00000000
0012E1CC  |00000000
0012E1D0  |00000000
0012E1D4  |00000000
0012E1D8  |00000000
0012E1DC  |00000000
0012E1E0  |00000000
0012E1E4  |00000000
0012E1E8  |00000000
0012E1EC  |00000000
0012E1F0  |00000000
0012E1F4  |00000000
0012E1F8  |00000000
0012E1FC  |00000000
0012E200  |00000000
0012E204  |00000000
0012E208  |00000000
0012E20C  |00000000
0012E210  |00000000
0012E214  |00000000
0012E218  |00000000
0012E21C  |00000000
0012E220  |00000000
0012E224  |00000000
0012E228  |00000000
0012E22C  |00000000
0012E230  |00000000
0012E234  |00000000
0012E238  |00000000
0012E23C  |00000000
0012E240  |00000000
0012E244  |00000000
0012E248  |00000000
0012E24C  |00000000
0012E250  |00000000
0012E254  |00000000
0012E258  |00000000
0012E25C  |00000000
0012E260  |00000000
0012E264  |00000000
0012E268  |00000000
0012E26C  |00000000
0012E270  |00000000
0012E274  |00000000
0012E278  |00000000
0012E27C  |00000000
0012E280  |00000000
0012E284  |00000000
0012E288  |00000000
0012E28C  |00000000
0012E290  |00000000
0012E294  |00000000
0012E298  |00000000
0012E29C  |00000000
0012E2A0  |00000000
0012E2A4  |00000000
0012E2A8  |00000000
0012E2AC  |00000000
0012E2B0  |00000000
0012E2B4  |00000000
0012E2B8  |00000000
0012E2BC  |00000000
0012E2C0  |00000000
0012E2C4  |00000000
0012E2C8  |00000000
0012E2CC  |00000000
0012E2D0  |00000000
0012E2D4  |00000000
0012E2D8  |00000000
0012E2DC  |00000000
0012E2E0  |00000000
0012E2E4  |00000000
0012E2E8  |00000000
0012E2EC  |00000000
0012E2F0  |00000000
0012E2F4  |00000000
0012E2F8  |00000000
0012E2FC  |00000000
0012E300  |00000000
0012E304  |00000000
0012E308  |00000000
0012E30C  |00000000
0012E310  |00000000
0012E314  |00000000
0012E318  |00000000
0012E31C  |00000000
0012E320  |00000000
0012E324  |00000000
0012E328  |00000000
0012E32C  |00000000
0012E330  |00000000
0012E334  |00000000
0012E338  |00000000
0012E33C  |00000000
0012E340  |00000000
0012E344  |00000000
0012E348  |00000000
0012E34C  |00000000
0012E350  |00000000
0012E354  |00000000
0012E358  |00000000
0012E35C  |00000000
0012E360  |00000000
0012E364  |00000000
0012E368  |00000000
0012E36C  |00000000
0012E370  |00000000
0012E374  |00000000
0012E378  |00000000
0012E37C  |00000000
0012E380  |00000000
0012E384  |00000000
0012E388  |00000000
0012E38C  |00000000
0012E390  |00000000
0012E394  |00000000
0012E398  |00000000
0012E39C  |00000000
0012E3A0  |00000000
0012E3A4  |00000000
0012E3A8  |00000000
0012E3AC  |00000000
0012E3B0  |00000000
0012E3B4  |00000000
0012E3B8  |00000000
0012E3BC  |00000000
0012E3C0  |00000000
0012E3C4  |00000000
0012E3C8  |00000000
0012E3CC  |00000000
0012E3D0  |00000000
0012E3D4  |00000000
0012E3D8  |00000000
0012E3DC  |00000000
0012E3E0  |00000000
0012E3E4  |00000000
0012E3E8  |00000000
0012E3EC  |00000000
0012E3F0  |00000000
0012E3F4  |00000000
0012E3F8  |00000000
0012E3FC  |00000000
0012E400  |00000000
0012E404  |00000000
0012E408  |00000000
0012E40C  |00000000
0012E410  |00000000
0012E414  |00000000
0012E418  |00000000
0012E41C  |00000000
0012E420  |00000000
0012E424  |00000000
0012E428  |00000000
0012E42C  |00000000
0012E430  |00000000
0012E434  |00000000
0012E438  |00000000
0012E43C  |00000000
0012E440  |00000000
0012E444  |00000000
0012E448  |00000000
0012E44C  |00000000
0012E450  |00000000
0012E454  |00000000
0012E458  |00000000
0012E45C  |00000000
0012E460  |00000000
0012E464  |00000000
0012E468  |00000000
0012E46C  |00000000
0012E470  |00000000
0012E474  |00000000
0012E478  |00000000
0012E47C  |00000000
0012E480  |00000000
0012E484  |00000000
0012E488  |00000000
0012E48C  |00000000
0012E490  |00000000
0012E494  |00000000
0012E498  |00000000
0012E49C  |00000000
0012E4A0  |00000000
0012E4A4  |00000000
0012E4A8  |00000000
0012E4AC  |00000000
0012E4B0  |00000000
0012E4B4  |00000000
0012E4B8  |00000000
0012E4BC  |00000000
0012E4C0  |00000000
0012E4C4  |00000000
0012E4C8  |00000000
0012E4CC  |00000000
0012E4D0  |00000000
0012E4D4  |00000000
0012E4D8  |00000000
0012E4DC  |00000000
0012E4E0  |00000000
0012E4E4  |00000000
0012E4E8  |00000000
0012E4EC  |00000000
0012E4F0  |00000000
0012E4F4  |00000000
0012E4F8  |00000000
0012E4FC  |00000000
0012E500  |00000000
0012E504  |00000000
0012E508  |00000000
0012E50C  |00000000
0012E510  |00000000
0012E514  |00000000
0012E518  |00000000
0012E51C  |00000000
0012E520  |00000000
0012E524  |00000000
0012E528  |00000000
0012E52C  |00000000
0012E530  |00000000
0012E534  |00000000
0012E538  |00000000
0012E53C  |00000000
0012E540  |00000000
0012E544  |00000000
0012E548  |00000000
0012E54C  |00000000
0012E550  |00000000
0012E554  |00000000
0012E558  |00000000
0012E55C  |00000000
0012E560  |00000000
0012E564  |00000000
0012E568  |00000000
0012E56C  |00000000
0012E570  |00000000
0012E574  |00000000
0012E578  |00000000
0012E57C  |00000000
0012E580  |00000000
0012E584  |00000000
0012E588  |00000000
0012E58C  |00000000
0012E590  |00000000
0012E594  |00000000
0012E598  |00000000
0012E59C  |00000000
0012E5A0  |00000000
0012E5A4  |00000000
0012E5A8  |00000000
0012E5AC  |00000000
0012E5B0  |00000000
0012E5B4  |00000000
0012E5B8  |00000000
0012E5BC  |00000000
0012E5C0  |00000000
0012E5C4  |00000000
0012E5C8  |00000000
0012E5CC  |00000000
0012E5D0  |00000000
0012E5D4  |00000000
0012E5D8  |00000000
0012E5DC  |00000000
0012E5E0  |00000000
0012E5E4  |00000000
0012E5E8  |00000000
0012E5EC  |00000000
0012E5F0  |00000000
0012E5F4  |00000000
0012E5F8  |00000000
0012E5FC  |00000000
0012E600  |00000000
0012E604  |00000000
0012E608  |00000000
0012E60C  |00000000
0012E610  |00000000
0012E614  |00000000
0012E618  |00000000
0012E61C  |00000000
0012E620  |00000000
0012E624  |00000000
0012E628  |00000000
0012E62C  |00000000
0012E630  |00000000
0012E634  |00000000
0012E638  |00000000
0012E63C  |00000000
0012E640  |00000000
0012E644  |00000000
0012E648  |00000000
0012E64C  |00000000
0012E650  |00000000
0012E654  |00000000
0012E658  |00000000
0012E65C  |00000000
0012E660  |00000000
0012E664  |00000000
0012E668  |00000000
0012E66C  |00000000
0012E670  |00000000
0012E674  |00000000
0012E678  |00000000
0012E67C  |00000000
0012E680  |00000000
0012E684  |00000000
0012E688  |00000000
0012E68C  |00000000
0012E690  |00000000
0012E694  |00000000
0012E698  |00000000
0012E69C  |00000000
0012E6A0  |00000000
0012E6A4  |00000000
0012E6A8  |00000000
0012E6AC  |00000000
0012E6B0  |00000000
0012E6B4  |00000000
0012E6B8  |00000000
0012E6BC  |00000000
0012E6C0  |00000000
0012E6C4  |00000000
0012E6C8  |00000000
0012E6CC  |00000000
0012E6D0  |00000000
0012E6D4  |00000000
0012E6D8  |00000000
0012E6DC  |00000000
0012E6E0  |00000000
0012E6E4  |00000000
0012E6E8  |00000000
0012E6EC  |00000000
0012E6F0  |00000000
0012E6F4  |00000000
0012E6F8  |00000000
0012E6FC  |00000000
0012E700  |00000000
0012E704  |00000000
0012E708  |00000000
0012E70C  |00000000
0012E710  |00000000
0012E714  |00000000
0012E718  |00000000
0012E71C  |00000000
0012E720  |00000000
0012E724  |00000000
0012E728  |00000000
0012E72C  |00000000
0012E730  |00000000
0012E734  |00000000
0012E738  |00000000
0012E73C  |00000000
0012E740  |00000000
0012E744  |00000000
0012E748  |00000000
0012E74C  |00000000
0012E750  |00000000
0012E754  |00000000
0012E758  |00000000
0012E75C  |00000000
0012E760  |00000000
0012E764  |00000000
0012E768  |00000000
0012E76C  |00000000
0012E770  |00000000
0012E774  |00000000
0012E778  |00000000
0012E77C  |00000000
0012E780  |00000000
0012E784  |00000000
0012E788  |00000000
0012E78C  |00000000
0012E790  |00000000
0012E794  |00000000
0012E798  |00000000
0012E79C  |00000000
0012E7A0  |00000000
0012E7A4  |00000000
0012E7A8  |00000000
0012E7AC  |00000000
0012E7B0  |00000000
0012E7B4  |00000000
0012E7B8  |00000000
0012E7BC  |00000000
0012E7C0  |00000000
0012E7C4  |00000000
0012E7C8  |00000000
0012E7CC  |00000000
0012E7D0  |00000000
0012E7D4  |00000000
0012E7D8  |00000000
0012E7DC  |00000000
0012E7E0  |00000000
0012E7E4  |00000000
0012E7E8  |00000000
0012E7EC  |00000000
0012E7F0  |00000000
0012E7F4  |00000000
0012E7F8  |00000000
0012E7FC  |00000000
0012E800  |00000000
0012E804  |00000000
0012E808  |00000000
0012E80C  |00000000
0012E810  |00000000
0012E814  |00000000
0012E818  |00000000
0012E81C  |00000000
0012E820  |00000000
0012E824  |00000000
0012E828  |00000000
0012E82C  |00000000
0012E830  |00000000
0012E834  |00000000
0012E838  |00000000
0012E83C  |00000000
0012E840  |00000000
0012E844  |00000000
0012E848  |00000000
0012E84C  |00000000
0012E850  |00000000
0012E854  |00000000
0012E858  |00000000
0012E85C  |00000000
0012E860  |00000000
0012E864  |00000000
0012E868  |00000000
0012E86C  |00000000
0012E870  |00000000
0012E874  |00000000
0012E878  |00000000
0012E87C  |00000000
0012E880  |00000000
0012E884  |00000000
0012E888  |00000000
0012E88C  |00000000
0012E890  |00000000
0012E894  |00000000
0012E898  |00000000
0012E89C  |00000000
0012E8A0  |00000000
0012E8A4  |00000000
0012E8A8  |00000000
0012E8AC  |00000000
0012E8B0  |00000000
0012E8B4  |00000000
0012E8B8  |00000000
0012E8BC  |00000000
0012E8C0  |00000000
0012E8C4  |00000000
0012E8C8  |00000000
0012E8CC  |00000000
0012E8D0  |00000000
0012E8D4  |00000000
0012E8D8  |00000000
0012E8DC  |00000000
0012E8E0  |00000000
0012E8E4  |00000000
0012E8E8  |00000000
0012E8EC  |00000000
0012E8F0  |00000000
0012E8F4  |00000000
0012E8F8  |00000000
0012E8FC  |00000000
0012E900  |00000000
0012E904  |00000000
0012E908  |00000000
0012E90C  |00000000
0012E910  |00000000
0012E914  |00000000
0012E918  |00000000
0012E91C  |00000000
0012E920  |00000000
0012E924  |00000000
0012E928  |00000000
0012E92C  |00000000
0012E930  |00000000
0012E934  |00000000
0012E938  |00000000
0012E93C  |00000000
0012E940  |00000000
0012E944  |00000000
0012E948  |00000000
0012E94C  |00000000
0012E950  |00000000
0012E954  |00000000
0012E958  |00000000
0012E95C  |00000000
0012E960  |00000000
0012E964  |00000000
0012E968  |00000000
0012E96C  |00000000
0012E970  |00000000
0012E974  |00000000
0012E978  |00000000
0012E97C  |00000000
0012E980  |00000000
0012E984  |00000000
0012E988  |00000000
0012E98C  |00000000
0012E990  |00000000
0012E994  |00000000
0012E998  |00000000
0012E99C  |00000000
0012E9A0  |00000000
0012E9A4  |00000000
0012E9A8  |00000000
0012E9AC  |00000000
0012E9B0  |00000000
0012E9B4  |00000000
0012E9B8  |00000000
0012E9BC  |00000000
0012E9C0  |00000000
0012E9C4  |00000000
0012E9C8  |00000000
0012E9CC  |00000000
0012E9D0  |00000000
0012E9D4  |00000000
0012E9D8  |00000000
0012E9DC  |00000000
0012E9E0  |00000000
0012E9E4  |00000000
0012E9E8  |00000000
0012E9EC  |00000000
0012E9F0  |00000000
0012E9F4  |00000000
0012E9F8  |00000000
0012E9FC  |00000000
0012EA00  |00000000
0012EA04  |00000000
0012EA08  |00000000
0012EA0C  |00000000
0012EA10  |00000000
0012EA14  |00000000
0012EA18  |00000000
0012EA1C  |00000000
0012EA20  |00000000
0012EA24  |00000000
0012EA28  |00000000
0012EA2C  |00000000
0012EA30  |00000000
0012EA34  |00000000
0012EA38  |00000000
0012EA3C  |00000000
0012EA40  |00000000
0012EA44  |00000000
0012EA48  |00000000
0012EA4C  |00000000
0012EA50  |00000000
0012EA54  |00000000
0012EA58  |00000000
0012EA5C  |00000000
0012EA60  |00000000
0012EA64  |00000000
0012EA68  |00000000
0012EA6C  |00000000
0012EA70  |00000000
0012EA74  |00000000
0012EA78  |00000000
0012EA7C  |00000000
0012EA80  |00000000
0012EA84  |00000000
0012EA88  |00000000
0012EA8C  |00000000
0012EA90  |00000000
0012EA94  |00000000
0012EA98  |00000000
0012EA9C  |00000000
0012EAA0  |00000000
0012EAA4  |00000000
0012EAA8  |00000000
0012EAAC  |00000000
0012EAB0  |00000000
0012EAB4  |00000000
0012EAB8  |00000000
0012EABC  |00000000
0012EAC0  |00000000
0012EAC4  |00000000
0012EAC8  |00000000
0012EACC  |00000000
0012EAD0  |00000000
0012EAD4  |00000000
0012EAD8  |00000000
0012EADC  |00000000
0012EAE0  |00000000
0012EAE4  |00000000
0012EAE8  |00000000
0012EAEC  |00000000
0012EAF0  |00000000
0012EAF4  |00000000
0012EAF8  |00000000
0012EAFC  |00000000
0012EB00  |00000000
0012EB04  |00000000
0012EB08  |00000000
0012EB0C  |00000000
0012EB10  |00000000
0012EB14  |00000000
0012EB18  |00000000
0012EB1C  |00000000
0012EB20  |00000000
0012EB24  |00000000
0012EB28  |00000000
0012EB2C  |00000000
0012EB30  |00000000
0012EB34  |00000000
0012EB38  |00000000
0012EB3C  |00000000
0012EB40  |00000000
0012EB44  |00000000
0012EB48  |00000000
0012EB4C  |00000000
0012EB50  |00000000
0012EB54  |00000000
0012EB58  |00000000
0012EB5C  |00000000
0012EB60  |00000000
0012EB64  |00000000
0012EB68  |00000000
0012EB6C  |00000000
0012EB70  |00000000
0012EB74  |00000000
0012EB78  |00000000
0012EB7C  |00000000
0012EB80  |00000000
0012EB84  |00000000
0012EB88  |00000000
0012EB8C  |00000000
0012EB90  |00000000
0012EB94  |00000000
0012EB98  |00000000
0012EB9C  |00000000
0012EBA0  |00000000
0012EBA4  |00000000
0012EBA8  |00000000
0012EBAC  |00000000
0012EBB0  |00000000
0012EBB4  |00000000
0012EBB8  |00000000
0012EBBC  |00000000
0012EBC0  |00000000
0012EBC4  |00000000
0012EBC8  |00000000
0012EBCC  |00000000
0012EBD0  |00000000
0012EBD4  |00000000
0012EBD8  |00000000
0012EBDC  |00000000
0012EBE0  |00000000
0012EBE4  |00000000
0012EBE8  |00000000
0012EBEC  |00000000
0012EBF0  |00000000
0012EBF4  |00000000
0012EBF8  |00000000
0012EBFC  |00000000
0012EC00  |00000000
0012EC04  |00000000
0012EC08  |00000000
0012EC0C  |00000000
0012EC10  |00000000
0012EC14  |00000000
0012EC18  |00000000
0012EC1C  |00000000
0012EC20  |00000000
0012EC24  |00000000
0012EC28  |00000000
0012EC2C  |00000000
0012EC30  |00000000
0012EC34  |00000000
0012EC38  |00000000
0012EC3C  |00000000
0012EC40  |00000000
0012EC44  |00000000
0012EC48  |00000000
0012EC4C  |00000000
0012EC50  |00000000
0012EC54  |00000000
0012EC58  |00000000
0012EC5C  |00000000
0012EC60  |00000000
0012EC64  |00000000
0012EC68  |00000000
0012EC6C  |00000000
0012EC70  |00000000
0012EC74  |00000000
0012EC78  |00000000
0012EC7C  |00000000
0012EC80  |00000000
0012EC84  |00000000
0012EC88  |00000000
0012EC8C  |00000000
0012EC90  |00000000
0012EC94  |00000000
0012EC98  |00000000
0012EC9C  |00000000
0012ECA0  |00000000
0012ECA4  |00000000
0012ECA8  |00000000
0012ECAC  |00000000
0012ECB0  |00000000
0012ECB4  |00000000
0012ECB8  |00000000
0012ECBC  |00000000
0012ECC0  |00000000
0012ECC4  |00000000
0012ECC8  |00000000
0012ECCC  |00000000
0012ECD0  |00000000
0012ECD4  |00000000
0012ECD8  |00000000
0012ECDC  |00000000
0012ECE0  |00000000
0012ECE4  |00000000
0012ECE8  |00000000
0012ECEC  |00000000
0012ECF0  |00000000
0012ECF4  |00000000
0012ECF8  |00000000
0012ECFC  |00000000
0012ED00  |00000000
0012ED04  |00000000
0012ED08  |00000000
0012ED0C  |00000000
0012ED10  |00000000
0012ED14  |00000000
0012ED18  |00000000
0012ED1C  |00000000
0012ED20  |00000000
0012ED24  |00000000
0012ED28  |00000000
0012ED2C  |00000000
0012ED30  |00000000
0012ED34  |00000000
0012ED38  |00000000
0012ED3C  |00000000
0012ED40  |00000000
0012ED44  |00000000
0012ED48  |00000000
0012ED4C  |00000000
0012ED50  |00000000
0012ED54  |00000000
0012ED58  |00000000
0012ED5C  |00000000
0012ED60  |00000000
0012ED64  |00000000
0012ED68  |00000000
0012ED6C  |00000000
0012ED70  |00000000
0012ED74  |00000000
0012ED78  |00000000
0012ED7C  |00000000
0012ED80  |00000000
0012ED84  |00000000
0012ED88  |00000000
0012ED8C  |00000000
0012ED90  |00000000
0012ED94  |00000000
0012ED98  |00000000
0012ED9C  |00000000
0012EDA0  |00000000
0012EDA4  |00000000
0012EDA8  |00000000
0012EDAC  |00000000
0012EDB0  |00000000
0012EDB4  |00000000
0012EDB8  |00000000
0012EDBC  |00000000
0012EDC0  |00000000
0012EDC4  |00000000
0012EDC8  |00000000
0012EDCC  |00000000
0012EDD0  |00000000
0012EDD4  |00000000
0012EDD8  |00000000
0012EDDC  |00000000
0012EDE0  |00000000
0012EDE4  |00000000
0012EDE8  |00000000
0012EDEC  |00000000
0012EDF0  |00000000
0012EDF4  |00000000
0012EDF8  |00000000
0012EDFC  |00000000
0012EE00  |00000000
0012EE04  |00000000
0012EE08  |00000000
0012EE0C  |00000000
0012EE10  |00000000
0012EE14  |00000000
0012EE18  |00000000
0012EE1C  |00000000
0012EE20  |00000000
0012EE24  |00000000
0012EE28  |00000000
0012EE2C  |00000000
0012EE30  |00000000
0012EE34  |00000000
0012EE38  |00000000
0012EE3C  |00000000
0012EE40  |00000000
0012EE44  |00000000
0012EE48  |00000000
0012EE4C  |00000000
0012EE50  |00000000
0012EE54  |00000000
0012EE58  |00000000
0012EE5C  |00000000
0012EE60  |00000000
0012EE64  |00000000
0012EE68  |00000000
0012EE6C  |00000000
0012EE70  |00000000
0012EE74  |00000000
0012EE78  |00000000
0012EE7C  |00000000
0012EE80  |00000000
0012EE84  |00000000
0012EE88  |00000000
0012EE8C  |00000000
0012EE90  |00000000
0012EE94  |00000000
0012EE98  |00000000
0012EE9C  |00000000
0012EEA0  |00000000
0012EEA4  |00000000
0012EEA8  |00000000
0012EEAC  |00000000
0012EEB0  |00000000
0012EEB4  |00000000
0012EEB8  |00000000
0012EEBC  |00000000
0012EEC0  |00000000
0012EEC4  |00000000
0012EEC8  |00000000
0012EECC  |00000000
0012EED0  |00000000
0012EED4  |00000000
0012EED8  |00000000
0012EEDC  |00000000
0012EEE0  |00000000
0012EEE4  |00000000
0012EEE8  |00000000
0012EEEC  |00000000
0012EEF0  |00000000
0012EEF4  |00000000
0012EEF8  |00000000
0012EEFC  |00000000
0012EF00  |00000000
0012EF04  |00000000
0012EF08  |00000000
0012EF0C  |00000000
0012EF10  |00000000
0012EF14  |00000000
0012EF18  |00000000
0012EF1C  |00000000
0012EF20  |00000000
0012EF24  |00000000
0012EF28  |00000000
0012EF2C  |00000000
0012EF30  |00000000
0012EF34  |00000000
0012EF38  |00000000
0012EF3C  |00000000
0012EF40  |00000000
0012EF44  |00000000
0012EF48  |00000000
0012EF4C  |00000000
0012EF50  |00000000
0012EF54  |00000000
0012EF58  |00000000
0012EF5C  |00000000
0012EF60  |00000000
0012EF64  |00000000
0012EF68  |00000000
0012EF6C  |00000000
0012EF70  |00000000
0012EF74  |00000000
0012EF78  |00000000
0012EF7C  |00000000
0012EF80  |00000000
0012EF84  |00000000
0012EF88  |00000000
0012EF8C  |00000000
0012EF90  |00000000
0012EF94  |00000000
0012EF98  |00000000
0012EF9C  |00000000
0012EFA0  |00000000
0012EFA4  |00000000
0012EFA8  |00000000
0012EFAC  |00000000
0012EFB0  |00000000
0012EFB4  |00000000
0012EFB8  |00000000
0012EFBC  |00000000
0012EFC0  |00000000
0012EFC4  |00000000
0012EFC8  |00000000
0012EFCC  |00000000
0012EFD0  |00000000
0012EFD4  |00000000
0012EFD8  |00000000
0012EFDC  |00000000
0012EFE0  |00000000
0012EFE4  |00000000
0012EFE8  |00000000
0012EFEC  |00000000
0012EFF0  |00000000
0012EFF4  |00000000
0012EFF8  |00000000
0012EFFC  |00000000
0012F000  |00000000
0012F004  |00000000
0012F008  |00000000
0012F00C  |00000000
0012F010  |00000000
0012F014  |00000000
0012F018  |00000000
0012F01C  |00000000
0012F020  |00000000
0012F024  |00000000
0012F028  |00000000
0012F02C  |00000000
0012F030  |00000000
0012F034  |00000000
0012F038  |00000000
0012F03C  |00000000
0012F040  |00000000
0012F044  |00000000
0012F048  |00000000
0012F04C  |00000000
0012F050  |00000000
0012F054  |00000000
0012F058  |00000000
0012F05C  |00000000
0012F060  |00000000
0012F064  |00000000
0012F068  |00000000
0012F06C  |00000000
0012F070  |00000000
0012F074  |00000000
0012F078  |00000000
0012F07C  |00000000
0012F080  |00000000
0012F084  |00000000
0012F088  |00000000
0012F08C  |00000000
0012F090  |00000000
0012F094  |00000000
0012F098  |00000000
0012F09C  |00000000
0012F0A0  |00000000
0012F0A4  |00000000
0012F0A8  |00000000
0012F0AC  |00000000
0012F0B0  |00000000
0012F0B4  |00000000
0012F0B8  |00000000
0012F0BC  |00000000
0012F0C0  |00000000
0012F0C4  |00000000
0012F0C8  |00000000
0012F0CC  |00000000
0012F0D0  |00000000
0012F0D4  |00000000
0012F0D8  |00000000
0012F0DC  |00000000
0012F0E0  |00000000
0012F0E4  |00000000
0012F0E8  |00000000
0012F0EC  |00000000
0012F0F0  |00000000
0012F0F4  |00000000
0012F0F8  |00000000
0012F0FC  |00000000
0012F100  |00000000
0012F104  |00000000
0012F108  |00000000
0012F10C  |00000000
0012F110  |00000000
0012F114  |00000000
0012F118  |00000000
0012F11C  |00000000
0012F120  |00000000
0012F124  |00000000
0012F128  |00000000
0012F12C  |00000000
0012F130  |00000000
0012F134  |00000000
0012F138  |00000000
0012F13C  |00000000
0012F140  |00000000
0012F144  |00000000
0012F148  |00000000
0012F14C  |00000000
0012F150  |00000000
0012F154  |00000000
0012F158  |00000000
0012F15C  |00000000
0012F160  |00000000
0012F164  |00000000
0012F168  |00000000
0012F16C  |00000000
0012F170  |00000000
0012F174  |00000000
0012F178  |00000000
0012F17C  |00000000
0012F180  |00000000
0012F184  |00000000
0012F188  |00000000
0012F18C  |00000000
0012F190  |00000000
0012F194  |00000000
0012F198  |00000000
0012F19C  |00000000
0012F1A0  |00000000
0012F1A4  |00000000
0012F1A8  |00000000
0012F1AC  |00000000
0012F1B0  |00000000
0012F1B4  |00000000
0012F1B8  |00000000
0012F1BC  |00000000
0012F1C0  |00000000
0012F1C4  |00000000
0012F1C8  |00000000
0012F1CC  |00000000
0012F1D0  |00000000
0012F1D4  |00000000
0012F1D8  |00000000
0012F1DC  |00000000
0012F1E0  |00000000
0012F1E4  |00000000
0012F1E8  |00000000
0012F1EC  |00000000
0012F1F0  |00000000
0012F1F4  |00000000
0012F1F8  |00000000
0012F1FC  |00000000
0012F200  |00000000
0012F204  |00000000
0012F208  |00000000
0012F20C  |00000000
0012F210  |00000000
0012F214  |00000000
0012F218  |00000000
0012F21C  |00000000
0012F220  |00000000
0012F224  |00000000
0012F228  |00000000
0012F22C  |00000000
0012F230  |00000000
0012F234  |00000000
0012F238  |00000000
0012F23C  |00000000
0012F240  |00000000
0012F244  |00000000
0012F248  |00000000
0012F24C  |00000000
0012F250  |00000000
0012F254  |00000000
0012F258  |00000000
0012F25C  |00000000
0012F260  |00000000
0012F264  |00000000
0012F268  |00000000
0012F26C  |00000000
0012F270  |00000000
0012F274  |00000000
0012F278  |00000000
0012F27C  |00000000
0012F280  |00000000
0012F284  |00000000
0012F288  |00000000
0012F28C  |00000000
0012F290  |00000000
0012F294  |00000000
0012F298  |00000000
0012F29C  |00000000
0012F2A0  |00000000
0012F2A4  |00000000
0012F2A8  |00000000
0012F2AC  |00000000
0012F2B0  |00000000
0012F2B4  |00000000
0012F2B8  |00000000
0012F2BC  |00000000
0012F2C0  |00000000
0012F2C4  |00000000
0012F2C8  |00000000
0012F2CC  |00000000
0012F2D0  |00000000
0012F2D4  |00000000
0012F2D8  |00000000
0012F2DC  |00000000
0012F2E0  |00000000
0012F2E4  |00000000
0012F2E8  |00000000
0012F2EC  |00000000
0012F2F0  |00000000
0012F2F4  |00000000
0012F2F8  |00000000
0012F2FC  |00000000
0012F300  |00000000
0012F304  |00000000
0012F308  |00000000
0012F30C  |00000000
0012F310  |00000000
0012F314  |00000000
0012F318  |00000000
0012F31C  |00000000
0012F320  |00000000
0012F324  |00000000
0012F328  |00000000
0012F32C  |00000000
0012F330  |00000000
0012F334  |00000000
0012F338  |00000000
0012F33C  |00000000
0012F340  |00000000
0012F344  |00000000
0012F348  |00000000
0012F34C  |00000000
0012F350  |00000000
0012F354  |00000000
0012F358  |00000000
0012F35C  |00000000
0012F360  |00000000
0012F364  |00000000
0012F368  |00000000
0012F36C  |00000000
0012F370  |00000000
0012F374  |00000000
0012F378  |00000000
0012F37C  |00000000
0012F380  |00000000
0012F384  |00000000
0012F388  |00000000
0012F38C  |00000000
0012F390  |00000000
0012F394  |00000000
0012F398  |00000000
0012F39C  |00000000
0012F3A0  |00000000
0012F3A4  |00000000
0012F3A8  |00000000
0012F3AC  |00000000
0012F3B0  |00000000
0012F3B4  |00000000
0012F3B8  |00000000
0012F3BC  |00000000
0012F3C0  |00000000
0012F3C4  |00000000
0012F3C8  |00000000
0012F3CC  |00000000
0012F3D0  |00000000
0012F3D4  |00000000
0012F3D8  |00000000
0012F3DC  |00000000
0012F3E0  |00000000
0012F3E4  |00000000
0012F3E8  |00000000
0012F3EC  |00000000
0012F3F0  |00000000
0012F3F4  |00000000
0012F3F8  |00000000
0012F3FC  |00000000
0012F400  |00000000
0012F404  |00000000
0012F408  |00000000
0012F40C  |00000000
0012F410  |00000000
0012F414  |00000000
0012F418  |00000000
0012F41C  |00000000
0012F420  |00000000
0012F424  |00000000
0012F428  |00000000
0012F42C  |00000000
0012F430  |00000000
0012F434  |00000000
0012F438  |00000000
0012F43C  |00000000
0012F440  |00000000
0012F444  |00000000
0012F448  |00000000
0012F44C  |00000000
0012F450  |00000000
0012F454  |00000000
0012F458  |00000000
0012F45C  |00000000
0012F460  |00000000
0012F464  |00000000
0012F468  |00000000
0012F46C  |00000000
0012F470  |00000000
0012F474  |00000000
0012F478  |00000000
0012F47C  |00000000
0012F480  |00000000
0012F484  |00000000
0012F488  |00000000
0012F48C  |00000000
0012F490  |00000000
0012F494  |00000000
0012F498  |00000000
0012F49C  |00000000
0012F4A0  |00000000
0012F4A4  |00000000
0012F4A8  |00000000
0012F4AC  |00000000
0012F4B0  |00000000
0012F4B4  |00000000
0012F4B8  |00000000
0012F4BC  |00000000
0012F4C0  |00000000
0012F4C4  |00000000
0012F4C8  |00000000
0012F4CC  |00000000
0012F4D0  |00000000
0012F4D4  |00000000
0012F4D8  |00000000
0012F4DC  |00000000
0012F4E0  |00000000
0012F4E4  |00000000
0012F4E8  |00000000
0012F4EC  |00000000
0012F4F0  |00000000
0012F4F4  |00000000
0012F4F8  |00000000
0012F4FC  |00000000
0012F500  |00000000
0012F504  |00000000
0012F508  |00000000
0012F50C  |00000000
0012F510  |00000000
0012F514  |00000000
0012F518  |00000000
0012F51C  |00000000
0012F520  |00000000
0012F524  |00000000
0012F528  |00000000
0012F52C  |00000000
0012F530  |00000000
0012F534  |00000000
0012F538  |00000000
0012F53C  |00000000
0012F540  |00000000
0012F544  |00000000
0012F548  |00000000
0012F54C  |00000000
0012F550  |00000000
0012F554  |00000000
0012F558  |00000000
0012F55C  |00000000
0012F560  |00000000
0012F564  |00000000
0012F568  |00000000
0012F56C  |00000000
0012F570  |00000000
0012F574  |00000000
0012F578  |00000000
0012F57C  |00000000
0012F580  |00000000
0012F584  |00000000
0012F588  |00000000
0012F58C  |00000000
0012F590  |00000000
0012F594  |00000000
0012F598  |00000000
0012F59C  |00000000
0012F5A0  |00000000
0012F5A4  |00000000
0012F5A8  |00000000
0012F5AC  |00000000
0012F5B0  |00000000
0012F5B4  |00000000
0012F5B8  |00000000
0012F5BC  |00000000
0012F5C0  |00000000
0012F5C4  |00000000
0012F5C8  |00000000
0012F5CC  |00000000
0012F5D0  |00000000
0012F5D4  |00000000
0012F5D8  |00000000
0012F5DC  |00000000
0012F5E0  |00000000
0012F5E4  |00000000
0012F5E8  |00000000
0012F5EC  |00000000
0012F5F0  |00000000
0012F5F4  |00000000
0012F5F8  |00000000
0012F5FC  |00000000
0012F600  |00000000
0012F604  |00000000
0012F608  |00000000
0012F60C  |00000000
0012F610  |00000000
0012F614  |00000000
0012F618  |00000000
0012F61C  |00000000
0012F620  |00000000
0012F624  |00000000
0012F628  |00000000
0012F62C  |00000000
0012F630  |C293BECA
0012F634  |0012F67C  指向下一个 SEH 记录的指针
0012F638  |30142370  SE处理程序
0012F63C  |00000001
0012F640  ]0012F65C
0012F644  |3009110A  返回到 Common.3009110A
0012F648  |00000000
0012F64C  |00000000
0012F650  |01568AE8
0012F654  |00000000
0012F658  |01568B0C
0012F65C  ]0012F688
0012F660  |300935C6  返回到 Common.300935C6
0012F664  |00000000
0012F668  |C293BE02
0012F66C  |302813C8  Common.302813C8
0012F670  |04C8DBB0
0012F674  |302813CC  Common.302813CC
0012F678  |01568AE8
0012F67C  |0012F76C  指向下一个 SEH 记录的指针
0012F680  |301461FE  SE处理程序
0012F684  |00000000
0012F688  ]0012F6E0
0012F68C  |30093678  返回到 Common.30093678 来自 Common.30093443
0012F690  |00000424
0012F694  |000000A6
0012F698  |3009379C  Common.3009379C
0012F69C  |00000000
0012F6A0  |0012F750
0012F6A4  |300CFCA0  返回到 Common.300CFCA0 来自 Common.30061025
0012F6A8  |302813CC  Common.302813CC
0012F6AC  |0158F110
0012F6B0  |0012F6D0
0012F6B4  |302813CC  Common.302813CC
0012F6B8  |0158F110
0012F6BC  |0158F110
0012F6C0  |0012F6D4
0012F6C4  |302813CC  Common.302813CC
0012F6C8  |04D775C8
0012F6CC  |3009379C  Common.3009379C
0012F6D0  |04C8DBB0
0012F6D4  |0012F6E8
0012F6D8  |302813C8  Common.302813C8
0012F6DC  |00000001
0012F6E0  ]0012F6E8
0012F6E4  |300937DA  返回到 Common.300937DA 来自 Common.300935F2
0012F6E8  ]0012F714
0012F6EC  |77D18734  返回到 USER32.77D18734
0012F6F0  |00020528  UNICODE "system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C:\WI"
0012F6F4  |00000373
0012F6F8  |00000424
0012F6FC  |00000001
0012F700  |3009379C  Common.3009379C
0012F704  |DCBAABCD
0012F708  |00000000
0012F70C  |0012F750
0012F710  |3009379C  Common.3009379C
0012F714  ]0012F77C
0012F718  |77D18816  返回到 USER32.77D18816 来自 USER32.77D1870C
0012F71C  |3009379C  Common.3009379C
0012F720  |00020528  UNICODE "system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C:\WI"
0012F724  |00000373
0012F728  |00000424
0012F72C  |00000001
0012F730  |0012F814
0012F734  |0012F80C
0012F738  |0066B930
0012F73C  |00000014
0012F740  |00000001
0012F744  |00000000
0012F748  |00000000
0012F74C  |00000010
0012F750  |00000000
0012F754  |0012F784
0012F758  |00000000
0012F75C  |00000000
0012F760  |00000000
0012F764  |0012F730
0012F768  |0012F914
0012F76C  |0012F7CC  指向下一个 SEH 记录的指针
0012F770  |77D4048F  SE处理程序
0012F774  |77D18830  USER32.77D18830
0012F778  |00000000
0012F77C  ]0012F7DC
0012F780  |77D189CD  返回到 USER32.77D189CD 来自 USER32.77D1875F
0012F784  |00000000
0012F788  |3009379C  Common.3009379C
0012F78C  |00020528  UNICODE "system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C:\WI"
0012F790  |00000373
0012F794  |00000424
0012F798  |00000001
0012F79C  |0066B944
0012F7A0  |00000001
0012F7A4  |00F48320
0012F7A8  |0012F80C
0012F7AC  |00008FFF
0012F7B0  |00000001
0012F7B4  |0012F7EC
0012F7B8  |69F060DC  返回到 HummerEn.69F060DC 来自 HummerEn.69F04FFB
0012F7BC  |00000424
0012F7C0  |00000000
0012F7C4  |0012F7A4
0012F7C8  |0012F80C
0012F7CC  |0012F874  指向下一个 SEH 记录的指针
0012F7D0  |77D4048F  SE处理程序
0012F7D4  |77D189F0  USER32.77D189F0
0012F7D8  |FFFFFFFF
0012F7DC  ]0012F7EC
0012F7E0  |77D18A10  返回到 USER32.77D18A10 来自 USER32.77D188F1
0012F7E4  |0012F80C
0012F7E8  |00000000
0012F7EC  ]0012F828
0012F7F0  |69F0652A  返回到 HummerEn.69F0652A 来自 USER32.DispatchMessageW
0012F7F4  |0012F80C
0012F7F8  |69F10C00  HummerEn.69F10C00
0012F7FC  |69F0633C  返回到 HummerEn.69F0633C 来自 HummerEn.69F064C3
0012F800  |00000000
0012F804  |00F48320
0012F808  |69F10C10  UNICODE "func"
0012F80C  |00020528  UNICODE "system;C:\WINDOWS.0;.;C:\Program Files\Tencent\QQIntl1\Bin\;C:\WINDOWS.0\system32;C:\WINDOWS.0;C:\WI"
0012F810  |00000373
0012F814  |00000424
0012F818  |00000001
0012F81C  |0496F956
0012F820  |000000B4
0012F824  |0000002F
0012F828  ]0012F844
0012F82C  |69F06059  返回到 HummerEn.69F06059
0012F830  |69F109E8  UNICODE "/MLogin"
0012F834  |69F10C04  UNICODE "file"
0012F838  |0012FA64
0012F83C  |0012FD00
0012F840  |00000001
0012F844  ]0012F880
0012F848  |69F04529  返回到 HummerEn.69F04529
0012F84C  |0012FA64
0012F850  |69F04BFA  返回到 HummerEn.69F04BFA 来自 HummerEn.69F04513
0012F854  |C292100C
0012F858  |69F109E8  UNICODE "/MLogin"
0012F85C  |69F10C04  UNICODE "file"
0012F860  |69F10C10  UNICODE "func"
0012F864  |00000001
0012F868  |01472F00
0012F86C  |0012FA64
0012F870  |00000000
0012F874  |0012FD84  指向下一个 SEH 记录的指针
0012F878  |69F0E9D9  SE处理程序
0012F87C  |00000000
0012F880  ]0012FD90
0012F884  |69F0AF44  返回到 HummerEn.69F0AF44 来自 HummerEn.69F04BD9
0012F888  |C292151C
0012F88C  |7C92FE01  ntdll.RtlGetLastWin32Error
0012F890  |69F00000  HummerEn.69F00000
0012F894  |00000000
0012F898  |00000000
0012F89C  |00001000
0012F8A0  |00010000  UNICODE "ALLUSERSPROFILE=C:\Documents and Settings\All Users"
0012F8A4  |7FFEFFFF
0012F8A8  |00000001
0012F8AC  |00000001
0012F8B0  |0000024A
0012F8B4  |00010000  UNICODE "ALLUSERSPROFILE=C:\Documents and Settings\All Users"
0012F8B8  |18010017
0012F8BC  |00000020
0012F8C0  |00000010
0012F8C4  |7FFFFFFF
0012F8C8  |7FFFFFFF
0012F8CC  |FFFFFFFF
0012F8D0  |FFFFFFFF
0012F8D4  |7FFE0000  ASCII "knu"
0012F8D8  |7CD1E000
0012F8DC  |00000000
0012F8E0  |00000000
0012F8E4  |00000003
0012F8E8  |00000000
0012F8EC  |00000000
0012F8F0  |00000000
0012F8F4  |302817A4  Common.302817A4
0012F8F8  |302817A4  Common.302817A4
0012F8FC  |00000000
0012F900  |00000000
0012F904  |302817A4  Common.302817A4
0012F908  |00369E99
0012F90C  |00000000
0012F910  |69F110B4  HummerEn.69F110B4
0012F914  |00000000
0012F918  |00000000
0012F91C  |00000000
0012F920  |00000000
0012F924  |00000000
0012F928  |0012F93C
0012F92C  |00000002
0012F930  |00000002
0012F934  |01023BC0
0012F938  |00FBC820
0012F93C  |00F47838
0012F940  |0000C07E
0012F944  |0012FD98
0012F948  |69F11240  UNICODE "InitAutoUpdate"
0012F94C  |01023BC0
0012F950  |7C935BD8  返回到 ntdll.7C935BD8 来自 ntdll.RtlFreeUnicodeString
0012F954  |0012F998
0012F958  |0012FB38
0012F95C  |00000001
0012F960  |7C935C3D  返回到 ntdll.7C935C3D 来自 ntdll.7C92FE57
0012F964  |76990000  ole32.76990000
0012F968  |7C99B214  ntdll.7C99B214
0012F96C  |FFFFFFFD
0012F970  |00000000
0012F974  |0012FD8C
0012F978  |0012FB30
0012F97C  |00000000
0012F980  |0012FB38
0012F984  |00000000
0012F988  |0012FB28
0012F98C  |00000000
0012F990  |0012F9B0
0012F994  |78147344  返回到 MSVCR80.78147344 来自 MSVCR80.781472B7
0012F998  |0012F9F0
0012F99C  |7FFDE000
0012F9A0  |0012F9E8
0012F9A4  |0012F9C8
0012F9A8  |7C9396BF  返回到 ntdll.7C9396BF 来自 ntdll.wcsncpy
0012F9AC  |0012F9FC  UNICODE "Service Pack 3"
0012F9B0  |7F6F06C2  UNICODE "Service Pack 3"
0012F9B4  |0000000E
0012F9B8  |00000000
0012F9BC  |0000011C
0012F9C0  |0012F9E8
0012F9C4  |00000000
0012F9C8  |0012F9DC
0012F9CC  |7C80AF15  返回到 kernel32.7C80AF15 来自 ntdll.RtlGetVersion
0012F9D0  |0012F9E8
0012F9D4  |7C92FE01  ntdll.RtlGetLastWin32Error
0012F9D8  |69F00000  HummerEn.69F00000
0012F9DC  |0012FB00
0012F9E0  |300E7FCD  返回到 Common.300E7FCD 来自 kernel32.GetVersionExW
0012F9E4  |300E7FE1  返回到 Common.300E7FE1 来自 Common.301316D8
0012F9E8  |00000114
0012F9EC  |00000005
0012F9F0  |00000001
0012F9F4  |00000A28
0012F9F8  |00000002
0012F9FC  |00650053  ASCII "Animate32"
0012FA00  |00760072
0012FA04  |00630069
0012FA08  |00200065
0012FA0C  |00610050
0012FA10  |006B0063
0012FA14  |00330020
0012FA18  |00000000
0012FA1C  |00000000
0012FA20  |00000000
0012FA24  |00000000
0012FA28  |00000000
0012FA2C  |00000000
0012FA30  |00000000
0012FA34  |00000000
0012FA38  |00000000
0012FA3C  |00000000
0012FA40  |0012FA74
0012FA44  |00150000
0012FA48  |7C930202  返回到 ntdll.7C930202 来自 ntdll.7C92E8E6
0012FA4C  |00000005
0012FA50  |00150778
0012FA54  |00150000
0012FA58  |00000000
0012FA5C  |0012FA4C
0012FA60  |00000000
0012FA64  |69F10C44  HummerEn.69F10C44
0012FA68  |00000000
0012FA6C  |000000C0
0012FA70  |0294EC60
0012FA74  |00000008
0012FA78  |00000000
0012FA7C  |00000000
0012FA80  |0012FDBC
0012FA84  |02C5A1A8
0012FA88  |02C5A1A8
0012FA8C  |02C5A370
0012FA90  |0012FAC4
0012FA94  |003E0000
0012FA98  |00000000
0012FA9C  |00000000
0012FAA0  |00000000
0012FAA4  |00000000
0012FAA8  |00F48320
0012FAAC  |0012FA9C
0012FAB0  |00000000
0012FAB4  |00000000
0012FAB8  |00000000
0012FABC  |00000000
0012FAC0  |00000000
0012FAC4  |7C930001  ntdll.7C930001
0012FAC8  |7C931066  返回到 ntdll.7C931066 来自 ntdll.RtlLeaveCriticalSection
0012FACC  |7C930100  ntdll.7C930100
0012FAD0  |0000002C
0012FAD4  |00000000
0012FAD8  |0000002C
0012FADC  |00000000
0012FAE0  |0000000F
0012FAE4  |00000000
0012FAE8  |02B41708
0012FAEC  |00000018
0012FAF0  |00000000
0012FAF4  |00000000
0012FAF8  |00167A08
0012FAFC  |FFFFFFFF
0012FB00  |00000000
0012FB04  |00000000
0012FB08  |00000000
0012FB0C  |00000000
0012FB10  |0012F864
0012FB14  |00000000
0012FB18  |00000000
0012FB1C  |00000010
0012FB20  |0FC4007D
0012FB24  |00000000
0012FB28  |00000000
0012FB2C  |00000000
0012FB30  |00000000
0012FB34  |00000000
0012FB38  |00251E9C
0012FB3C  |69F10A40  HummerEn.69F10A40
0012FB40  |00250001
0012FB44  |00000000
0012FB48  |000001B0
0012FB4C  |0114FEB8
0012FB50  |00F90C40
0012FB54  |00000F84
0012FB58  |000001FA
0012FB5C  |69676F4C
0012FB60  |006C6163
0012FB64  |7C80B4C0  kernel32.7C80B4C0
0012FB68  |00F40000
0012FB6C  |00000007
0012FB70  |0000000F
0012FB74  |003A0043
0012FB78  |0050005C
0012FB7C  |006F0072
0012FB80  |00720067
0012FB84  |006D0061
0012FB88  |00460020
0012FB8C  |006C0069
0012FB90  |00730065
0012FB94  |0054005C
0012FB98  |006E0065
0012FB9C  |00650063
0012FBA0  |0074006E
0012FBA4  |0051005C
0012FBA8  |00490051
0012FBAC  |0074006E
0012FBB0  |0031006C
0012FBB4  |0042005C
0012FBB8  |006E0069
0012FBBC  |0051005C
0012FBC0  |002E0051
0012FBC4  |00780065
0012FBC8  |00000065
0012FBCC  |00000000
0012FBD0  |00000000
0012FBD4  |00000000
0012FBD8  |00000000
0012FBDC  |00000000
0012FBE0  |00000000
0012FBE4  |00000000
0012FBE8  |00000000
0012FBEC  |00000000
0012FBF0  |00000000
0012FBF4  |00000000
0012FBF8  |00000000
0012FBFC  |00000000
0012FC00  |00000000
0012FC04  |00000000
0012FC08  |00000000
0012FC0C  |00000000
0012FC10  |00000000
0012FC14  |00000000
0012FC18  |00000000
0012FC1C  |00000000
0012FC20  |00000000
0012FC24  |00000000
0012FC28  |00000000
0012FC2C  |00000000
0012FC30  |00000000
0012FC34  |00000000
0012FC38  |00000000
0012FC3C  |00000000
0012FC40  |00000000
0012FC44  |00000000
0012FC48  |00000000
0012FC4C  |00000000
0012FC50  |00000000
0012FC54  |00000000
0012FC58  |00000000
0012FC5C  |00000000
0012FC60  |00000000
0012FC64  |00000000
0012FC68  |00000000
0012FC6C  |00000000
0012FC70  |00000000
0012FC74  |00000000
0012FC78  |00000000
0012FC7C  |00000000
0012FC80  |00000000
0012FC84  |00000000
0012FC88  |00000000
0012FC8C  |00000000
0012FC90  |00000000
0012FC94  |00000000
0012FC98  |00000000
0012FC9C  |00000000
0012FCA0  |00000000
0012FCA4  |00000000
0012FCA8  |00000000
0012FCAC  |00000000
0012FCB0  |00000000
0012FCB4  |00000000
0012FCB8  |00000000
0012FCBC  |00000000
0012FCC0  |00000000
0012FCC4  |00000000
0012FCC8  |00000000
0012FCCC  |00000000
0012FCD0  |00000000
0012FCD4  |00000000
0012FCD8  |00000000
0012FCDC  |00000000
0012FCE0  |00000000
0012FCE4  |00000000
0012FCE8  |00000000
0012FCEC  |00000000
0012FCF0  |00000000
0012FCF4  |00000000
0012FCF8  |00000000
0012FCFC  |00000000
0012FD00  |00000000
0012FD04  |00000000
0012FD08  |00000000
0012FD0C  |00000000
0012FD10  |00000000
0012FD14  |00000000
0012FD18  |00000000
0012FD1C  |00000000
0012FD20  |00000000
0012FD24  |00000000
0012FD28  |00000000
0012FD2C  |00000000
0012FD30  |00000000
0012FD34  |00000000
0012FD38  |00000000
0012FD3C  |00000000
0012FD40  |00000000
0012FD44  |00000000
0012FD48  |00000000
0012FD4C  |00000000
0012FD50  |00000000
0012FD54  |00000000
0012FD58  |00000000
0012FD5C  |00000000
0012FD60  |00000000
0012FD64  |00000000
0012FD68  |00000000
0012FD6C  |00000000
0012FD70  |00000000
0012FD74  |00000000
0012FD78  |00000000
0012FD7C  |00000000
0012FD80  |C292151C
0012FD84  |0012FFB0  指向下一个 SEH 记录的指针
0012FD88  |69F0E30C  SE处理程序
0012FD8C  |00000007
0012FD90  ]0012FDDC
0012FD94  |69F0B146  返回到 HummerEn.69F0B146 来自 HummerEn.69F0A4A4
0012FD98  |69F10EF4  HummerEn.69F10EF4
0012FD9C  |000001F8
0012FDA0  |00000000
0012FDA4  |00001101
0012FDA8  |00000318
0012FDAC  |69F1229C  HummerEn.69F1229C
0012FDB0  |00F907E0
0012FDB4  |69F1229C  HummerEn.69F1229C
0012FDB8  |00F90818
0012FDBC  |001679E0
0012FDC0  |FFFFFFFF
0012FDC4  |00000000
0012FDC8  |00000000
0012FDCC  |00000000
0012FDD0  |00000000
0012FDD4  |01022A08
0012FDD8  |0012FD98
0012FDDC  ]0012FF20
0012FDE0  |004014D9  返回到 QQ.004014D9
0012FDE4  |0000000A
0012FDE8  |00404458  QQ.00404458
0012FDEC  |00000001
0012FDF0  |00000000
0012FDF4  |89032D56
0012FDF8  |1F657F53
0012FDFC  |BEA5B1E1
0012FE00  |00000114
0012FE04  |00000005
0012FE08  |00000001
0012FE0C  |00000A28
0012FE10  |00000002
0012FE14  |00650053  ASCII "Animate32"
0012FE18  |00760072
0012FE1C  |00630069
0012FE20  |00200065
0012FE24  |00610050
0012FE28  |006B0063
0012FE2C  |00330020
0012FE30  |00000000
0012FE34  |00000000
0012FE38  |00000000
0012FE3C  |00000000
0012FE40  |00000000
0012FE44  |00000000
0012FE48  |00000000
0012FE4C  |00000000
0012FE50  |00000000
0012FE54  |00000000
0012FE58  |00000000
0012FE5C  |00000000
0012FE60  |00000000
0012FE64  |00000000
0012FE68  |00000000
0012FE6C  |00000000
0012FE70  |00000000
0012FE74  |00000000
0012FE78  |00000000
0012FE7C  |00000000
0012FE80  |00000000
0012FE84  |00000000
0012FE88  |00000000
0012FE8C  |00000000
0012FE90  |00000000
0012FE94  |00000000
0012FE98  |00000000
0012FE9C  |00000000
0012FEA0  |00000000
0012FEA4  |00000000
0012FEA8  |00000000
0012FEAC  |00000000
0012FEB0  |00000000
0012FEB4  |00000000
0012FEB8  |00000000
0012FEBC  |00000000
0012FEC0  |00000000
0012FEC4  |00000000
0012FEC8  |00000000
0012FECC  |00000000
0012FED0  |00000000
0012FED4  |00000000
0012FED8  |00000000
0012FEDC  |00000000
0012FEE0  |00000000
0012FEE4  |00000000
0012FEE8  |00000000
0012FEEC  |00000000
0012FEF0  |00000000
0012FEF4  |00000000
0012FEF8  |00000000
0012FEFC  |00000000
0012FF00  |00000000
0012FF04  |00000000
0012FF08  |00000000
0012FF0C  |00000000
0012FF10  |00000000
0012FF14  |C2CEE6F9
0012FF18  |FFFFFFFE
0012FF1C  |C29C2855
0012FF20  ]0012FF2C
0012FF24  |0040128B  返回到 QQ.0040128B 来自 QQ.0040128F
0012FF28  |0000000A
0012FF2C  ]0012FFC0
0012FF30  |00401A8F  返回到 QQ.00401A8F 来自 QQ.00401280
0012FF34  |00400000  QQ.00400000
0012FF38  |00000000
0012FF3C  |000207BC  UNICODE "C:\Program Files\Tencent\QQIntl1\Bin\QQ.exe "
0012FF40  |0000000A
0012FF44  |C29C2A61
0012FF48  |0012EF30
0012FF4C  |7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012FF50  |7FFDE000
0012FF54  |00000044
0012FF58  |00020890
0012FF5C  |00020870  UNICODE "WinSta0\Default"
0012FF60  |00020818  UNICODE "C:\Program Files\Tencent\QQIntl1\Bin\QQ.exe"
0012FF64  |00000000
0012FF68  |00000000
0012FF6C  |00000000
0012FF70  |00000000
0012FF74  |00000000
0012FF78  |00000000
0012FF7C  |00000000
0012FF80  |00000000
0012FF84  |00000000
0012FF88  |00000000
0012FF8C  |00369E99
0012FF90  |00000000
0012FF94  |0012FFBC
0012FF98  |00402017  返回到 QQ.00402017 来自 kernel32.QueryPerformanceCounter
0012FF9C  |000207BC  UNICODE "C:\Program Files\Tencent\QQIntl1\Bin\QQ.exe "
0012FFA0  |00000000
0012FFA4  |00000000
0012FFA8  |0012FF44
0012FFAC  |DF2AAF18
0012FFB0  |0012FFE0  指向下一个 SEH 记录的指针
0012FFB4  |00401C61  SE处理程序
0012FFB8  |C2CEE6D9
0012FFBC  |00000001
0012FFC0  \0012FFF0
0012FFC4   7C817067  返回到 kernel32.7C817067
0012FFC8   0012EF30
0012FFCC   7C930021  返回到 ntdll.7C930021 来自 ntdll.7C930072
0012FFD0   7FFDE000
0012FFD4   8054C6B8
0012FFD8   0012FFC8
0012FFDC   89BF6A00
0012FFE0   FFFFFFFF  SEH 链尾部
0012FFE4   7C839AC0  SE处理程序
0012FFE8   7C817070  kernel32.7C817070
0012FFEC   00000000
0012FFF0   00000000
0012FFF4   00000000
0012FFF8   00401BFB  QQ.<ModuleEntryPoint>
0012FFFC   00000000

