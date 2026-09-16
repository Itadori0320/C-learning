#                                      学习c语言的第三天

## 第三讲

#### 循环语句

1.while(表达式){语句}
while判断表达式是不是真的，是真的就执行，和if的区别是while一直在判断
变成假的就跳出循环
i＝4
while(--i)指i先-1等于3，3进入循环
……
i＝1先-1等于0，终止循环
打印得321
while(i--)指先判断i＝4非0为真进入循环-1得3
……
i＝1为真进入循环-1得0
i＝0为假终止循环
打印得3210



2.无限循环
while(1)



3.do
{}
wgile(语句)
当设定i=0时，while不会执行，再在前面➕do这个指令一定会执行



4.for语句
for(已知条件<只能做赋值>;判断条件;循环到末尾执行)
int sum=0,i=1;
while(i<=5)
{
    sum += i;
    i++;
}
int sum=0;
int i;
for(i=1; i<=5; i++)
{
    sum += i;
}
区别:for可知循环几次
如果前提条件不写for里则空着但是分号一定要打



5.break语句(终止指令)
跳转到循环结束之后



6.continue语句
跳转到循环体的末尾

![96b0ab7dff6f8988847d4deb4b15a4c0](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\96b0ab7dff6f8988847d4deb4b15a4c0.png)

7.goto语句(跳转语句)

![77a80e61acf39b9f19bcd9c0c4f8c3ce](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\77a80e61acf39b9f19bcd9c0c4f8c3ce.jpg)

8.空语句
加;

#### 代码练习

###### 1.输入一个数字判断几位数

#include"stdio.h"
int i;
int num;
int main()
{
printf("请输入一个数字");
scanf("%d",&num);
while(num>0)
   {
     num=num/10;
     i++;
   }
printf("您输入的数字为%d位",i);
  return 0;
}
若输入的数字是0会出现bug，所以可以使用do while的代码，让循环至少运行一次

###### 2.乘积阶梯运算(豆包帮助)

#include"stdio.h"
int num;
int total=1;
int i=1;
int main()
{
printf("输入");
scanf("%d",&num);
while(i<=num)
{
total=total*i;
i++;
}
printf("输出%d",total);
return 0;
}
需要计数的变量初始需要赋值

###### 3.豆包练习

#include"stdio.h"
int num;
int i=0;
int d;
int main()
{
printf("请输入你的数字");
scanf("%d",&num);
while(num>0)
{
d=num%10;
if(d%2==0)
{
i++;
}
num=num/10;
}
printf("这个数有%d个偶数",i);
return 0;
}

#### 注释![207888e96f8b946579092ec3bf1a8afa](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\207888e96f8b946579092ec3bf1a8afa.jpg)

![9323fcfcc7544c8d6b163fde46f379e5](C:\Users\77364\xwechat_files\wxid_1slxv8br9g9x22_34e7\temp\RWTemp\2026-09\9e20f478899dc29eb19741386f9343c8\9323fcfcc7544c8d6b163fde46f379e5.jpg)