/*

----------------------------------------------------------------------------------------------------
stosd(dword==>四个字节)

stosb(byte==>一个字节)

stosw(word==>两个字节)



stosd:将eax的内容复制到edi的内存空间，复制四个字节，并将edi加4个字节

mov  dword ptr es:[edi],eax

add edi,4

----------------------------------------------------------------------------------------------------

mov esi ， offset @s1
mov edi ， offset @s2
mov ecx ， 10
cld
rep movsd

1.rep movsd 每次ecx！=0便执行movsd ，然后ecx=ecx-1 movsd移动ds：[si] 到es：[di]，在32位汇编下可以用esi代替si，edi代替di

2.同时由于在一般exe中ds = es 程序起始位置所以另esi = offset @s1就可以找到变量s1 ,edi= offset @s2就可以找到变量s2

3.movsd此类指令有个性质，当标志位d=0时执行一次esi = esi +1,edi= edi+ 1  

   d=1时执行一次 esi = esi +1,edi= edi+ 1

所以此段指令的含义是从 s1 复制 ecx 个dword到s2


在 ida 里，反编译成c, rep movsd 有时会显示成 qmemcpy 
----------------------------------------------------------------------------------------------------
 
*/

 