#                      学习c语言的第一天

## 第一讲

#### 文件保存地

1.创立文件夹把每个应用分门别类的弄好，放在D盘

2.对熊猫学习的c语言代码放在一个地方

#### 编写代码

1.符号

\n换行

%d占位置

%f数据带小数点

scanf用户端可以输入

int是整数 float是带小数的

//单行注释

/* */多行注释

2.计算长方体的体积

`#include<stdio.h>`

`int length,width,high,volum;`

`int main()`

`{`

`printf("请输入长方体的长：");`

`scanf("%d",&length);`

`printf("请输入长方体的宽：");`

`scanf("%d",&width);`

`printf("请输入长方体的高：");`

`scanf("%d",&high);`

`volum=length*width*high;`

`printf("长方体的体积是；%d",volum);`

return 0;

`}`

#### 随堂练习

1.输入两个圆得出体积

`#include<stdio.h>`
`int r1,r2;`
`float volum1,volum2;`
`float pi=3.14;`
`int main(void)`
`{`
`printf("请输入圆1的半径:");`
`scanf("%d",&r1);`
`printf("请输入圆2的半径:");`
`scanf("%d",&r2);`
`volum1=4.0/3.0*pi*r1*r1*r1;`
`volum2=4.0/3.0*pi*r2*r2*r2;`
`printf("圆1的体积为:%f",volum1);`
`printf("圆2的体积为:%f",volum2);`

`return 0;`
`}`

#### 注意事项

1.打完代码每行后面要加    **<u>；</u>**

2.输入的函数一定要在花括号内

3.分数要带小数点 

​    eg.4/3  应为4.0/3或4/3.0或4.0/3.0

   因为输入的是int，正常的4/3结果是1

