#include<stdio.h>
int r1,r2;
float volum1,volum2;
float pi=3.14;
int main(void)
{
    printf("请输入圆1的半径:");
    scanf("%d",&r1);
    printf("请输入圆2的半径:");
    scanf("%d",&r2);
    volum1=4.0/3.0*pi*r1*r1*r1;
    volum2=4.0/3.0*pi*r2*r2*r2;
    printf("圆1的体积为:%f",volum1);
    printf("圆2的体积为:%f",volum2);


    return 0;
}
}