#                                   学习C语言的第五天

## 第五讲

#### 数组

1.数组的格式:数组名➕【数字下标】
int num[4];//声明了一个长度为4的有符号整形数组
int num[4]={5,7,9,1};

![e4992fdd94c42dc570c0ec8aa7691784](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\e4992fdd94c42dc570c0ec8aa7691784.png)

数组的下标是从0开始的
记录五个学生的分数不需要挨个打fen1 fen2 fen3
直接int fen[5]
int arr[5] = {10,20,30,40,50};// 全部写出来
int arr[5] = {1,2};  // 写一部分，剩下自动补0
// arr[0]=1,arr[1]=2, arr[2]=0,arr[3]=0,arr[4]=0
int arr[5] = {0};// 大括号空着，全部是0
变量的顺序对应数组的顺序
#include <stdio.h>
// 定义全局数组student，一共3个空间，全部初始化为0，用来存放成绩
int student[3]={0};
int i;   // 循环变量，控制循环次数
int j;   // 临时变量，存放输入的学号
int main()
{
    // for循环：i从0开始；条件i<3；每次循环结束i++，一共循环3次
    for(i=0;i<3;i++)
    {
        printf("请输入学员的学号：");
        scanf("%d",&j);   // 读取键盘输入的学号，放到变量j
        

    printf("请输入学员的成绩：");
        // j是学号，j-1当成数组下标，把成绩存入student数组
        // 只有学号输入1、2、3的时候，下标才是0、1、2，不会越界
        scanf("%d",&student[j-1]);
    }
     return 0;
}
2.二维数组

![c34fbf4fd5b2b105593e7e3a1b4b9cfd](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\c34fbf4fd5b2b105593e7e3a1b4b9cfd.png)



3.常量数组
const 关键字，在代码运行过程中不会被修改的值

![76c48c97ae52586f210605b4fda2ebb4](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\76c48c97ae52586f210605b4fda2ebb4.png)

中括号不写数字通过花括号的字符自动决定数组的长度
const代表“只读”程序运行中不能更改这个数组的内容



![52f1bfe7a33a7549fecc813653b2612e](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\52f1bfe7a33a7549fecc813653b2612e.jpg)

#### 指针

1.每个指针都指向唯一的字节内容

![fbff940c1366f8df341d9cf988d3fe2f](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\fbff940c1366f8df341d9cf988d3fe2f.png)

2.指针变量【专门存内存地址的变量】



![b6f952b919915d0834b0802f5ad88a5a](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\b6f952b919915d0834b0802f5ad88a5a.png)

int a存的是数值，int* a_p存的是别的变量在内存的编号
&取地址符： &a  → 获取变量 a 的内存地址

*解引用符： *a_p  → 去 a_p 保存的地址里，读写里面的数据
int a;
int *a_p;   // 声明：a_p是int类型的指针变量
a = 1;      // 普通变量a赋值为1
a_p = &a;   // ✅ 把a的地址放进指针变量a_p里面，a_p里面现在存的是a的地址
*a_p = 3;   // ✅ 解引用：找到a_p保存的地址（也就是变量a），把值改成3
// 这一行执行完， a = 3;

![06c6f9d6b0c9cc9f862aa944a665d7cc](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\06c6f9d6b0c9cc9f862aa944a665d7cc.jpg)

