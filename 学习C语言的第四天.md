#                                学习C语言的第四天

## 第四讲

#### 数制

1.c语言中10就是十进制的10，用0x 0X表示十六进制，0x10就是十六进制的10

![c8f8c3df5f0e77bd7d5e450ad0148cd5](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\c8f8c3df5f0e77bd7d5e450ad0148cd5.png)

2.二进制表示八进制是三位数，表示十六进制是四位数

#### 码制

1.在二进制中x的补数就是-x的八位数补码



2.可以加signed强调int(有符号整型signed int)int是简写4字节或2字节
如果有个地方必须用有符号数，怕别人修改可以强调一下



3.无符号整型(unsigned int不可省略)

![2543c2893a8c7695b445db6f6342b8cd](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\2543c2893a8c7695b445db6f6342b8cd.png)

4.有符号字符变量(signed char)简写char
只占一个字节

![900ce11088895cc1766178e9aa0b34f0](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\900ce11088895cc1766178e9aa0b34f0.jpg)

5.无符号字符变量(unsigned char)

![b2fd379b83dcc0dd4c239f9d7c19edd7](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\b2fd379b83dcc0dd4c239f9d7c19edd7.jpg)

6.字符<字母abcdefg>使用''(单引号)，用%c占位![1ea17619eb55a28b20a0d5bfcbd647e5](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\1ea17619eb55a28b20a0d5bfcbd647e5.jpg)
占位符用%c，打印出来就是g
如果是%d，打印出来是g的ASC||码数(A65 a97)
char zimu='g';
printf("%c", zimu); // %c 把数字103翻译成字符 → 输出 g
printf("%d", zimu); // %d 直接输出底层数字 → 输出 103![711d7592f809f08520537430ce60802b](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\711d7592f809f08520537430ce60802b.jpg)

![39ce4097b37de309677a333a8a243d4c](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\39ce4097b37de309677a333a8a243d4c.jpg)



%c会输出g加了一个用户的逻辑



7.浮点数
单精度浮点数float 1符号位 8指数位 23尾数
双精度浮点数double 1符号位 11指数位 52尾数
float的指数位有127的偏移量(固定)
举个小例子（float）
十进制  5.0 

1. 转二进制： 101.0 

2. 写成二进制科学计数：1.01×2^2
  符号位=0（正数）
  指数= 2 + 127 = 129
  尾数=01（后面补0填满23位）
  float比较中谨慎使用== !=
  用%m.nf控制输出几位小数，m(可以省略，用%.nf)指这个数整体占多少格，n表示保留小数点后多少位

  ![9c9d6ada0bba5b32406ff018345afa0e](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\9c9d6ada0bba5b32406ff018345afa0e.jpg)

8.define
#define u8  unsigned char   // 无符号 8位 0~255
#define s8  signed char     // 有符号8位 -128~127
#define u16 unsigned short  // 无符号16位
#define s16 signed short
#define u32 unsigned int
#define s32 signed int
说明后声明变量可以直接用u8 a;u32 b



9.逻辑类型强转换(不改变物理实在)
在意义的层面进行更改，int取6.7得整数6读出来

![b49584afe8a49d918ed5b59a8c9006ac](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\b49584afe8a49d918ed5b59a8c9006ac.jpg)

#### 补充(课上)



![5fad1e7d282165e1ed580455fbad7259](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\5fad1e7d282165e1ed580455fbad7259.jpg)

自己定义了一个函数fun，系统先执行main(有且只有一个)，到其中的fun时跳出main执行上面的fun，到return再回来继续执行main
xy为形参，对应main里的ab的值，与ab的位置有关![389f8e74053681aae1d8848e17db1396](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\389f8e74053681aae1d8848e17db1396.jpg)

![d7133cc85fb14ba58c1a15c72da2d0ba](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\d7133cc85fb14ba58c1a15c72da2d0ba.jpg)

![2b3c331705eb81dbbf0e19f3f5e0a6ca](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\7b6b355ce79bc07fe5c4279c265d3373\2b3c331705eb81dbbf0e19f3f5e0a6ca.jpg)