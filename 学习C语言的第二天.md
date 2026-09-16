#                                    学习C语言的第二天

## 第二讲

#### 符号应用

1.赋值"="把右值赋给左值

2.a++指先赋值后+1
    ++a指先+1后赋值
eg.int a＝5;
      int b＝a++;
printf("a＝%d,b＝%d",a,b);
此时a＝6，b＝5
       int a = 5;
       int b = ++a;
printf("a = %d,b = %d",a,b);
输出：a = 6，b = 6
自减同上

3./ %用作负数时结果难以确定，%操作不能是浮点数

#### 选择语句

1.关系运算符
＞   ＜   >=（大于等于）  <=（小于等于）
真1假0
6＜7是真的得1
6＞7是假的得0

2.判等运算符
      ==（等于）   !＝（不等于）
      5==5是1
      5!=5是0

3.逻辑运算符
   &&（逻辑与，并且）全真才真，一假即假
   ||（逻辑或，或者）一真即真，全假才假
   !（逻辑非，取反）真变假，假变真
int a = 5;
printf("%d", !a);  //a非0为真，取反 →0
printf("%d", !0);  //0是假，取反 →1
ps:C语言中只有数字0才代表【假(0)】，其他数字都是【真(1)】

4.if语句
  if(表达式)
   语句
  else
   语句
语句中只能输入一行代码，如果多行需要加花括号

5.条件表达式
int a,b=2,c=3
a=b<c?b:c;
指a=b<c如果是真的则结果为b(2)，假的结果为c(3)

6.布尔值
_Bool只有两种状态，真和假

7.switch语句:找到匹配的常量，开始顺序往后执行
switch(变量)
{
case常量:
语句
break;(中止执行)
……
……
default:(类似else)
语句
break;
}
break输在每个case的后面，case后的常量不能堆叠7,8,9❌

#### 代码练习

###### 1.输入数字并判断是奇数还是偶数

`#include"stdio.h"`
`int num;`
`int main()`
`{`
`printf("请输入数字:");`
`scanf("%d",&num);`
`if(num%2==0)`
`printf("您输出的数为偶数");`
`else`
`printf("您输出的数为奇数");`
  `return 0;`
`}`

###### 2.输出的奇数✖️3偶数✖️5再显示

`#include"stdio.h"`
`int num;`
`int main()`
`{`
`printf("请输入数字:");`
`scanf("%d",&num);`
`if(num%2==0)`
`{num=num*5;
printf("您输出的数为偶数:%d",num);
}
else
{num=num*3;`
`printf("您输出的数为奇数:%d",num);`
`}`
  `return 0;`
`}`

###### 3.成绩系统

`#include"stdio.h"`
`int grade;`
`int main()`
`{`
`printf("请输入您的成绩");`
`scanf("%d",&grade);`
`if(grade==10)`
`{`
`printf("满分");`
`}`
`else if(grade>=7&&grade<=9)`
`{`
`printf("优秀");`
`}`
`else if(grade==6)`
`{`
`printf("及格");`
`}`
`else if(grade>=0&grade<=5)`
`{`
`printf("不及格");`
`}`
`else`
`{`
`printf("成绩输入有误");`
`}`
  `return 0;`
`}`

###### 4.成绩系统(switch版)

`#include"stdio.h"`
`int grade;`
`int main()`
`{`
`printf("请输入您的成绩");`
`scanf("%d",&grade);`
  `switch(grade)`
  `{`
    `case 10:`
       `printf("满分");`
       `break;   
    case 9:`
    `case 8:`
    `case 7:`
       `printf("优秀");`
       `break;   
    case 6:`
       `printf("及格");   
       break;   
    case 5:`
    `case 4:`
    `case 3:`
    `case 2:`
    `case 1:`
    `case 0:`
       `printf("不及格");`
       `break;   
    default:`
       `printf("您输入的成绩错误");`
       `break;`
   `}`
`return 0;`
`}`

#### 注释

1.多选项时使用else if，为保证代码运行顺利建议if后的代码都加{}，else if  和  else同样
if后面可以没有else，如果多if时，else只适用上面最近的if
2.表示区间值时不能用7＞a＞2，得用7>a&&a＜2
    同样相等时用==