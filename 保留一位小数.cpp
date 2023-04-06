//计算三角形面积
#include<stdio.h>

int main()
{
 double a;
 
 printf("Please input a:");
 scanf("%lf",&a);
 a=a*10;
 a=a+0.5;
 a=(int)a;
 a=a/10;
 
 printf("a=%lf",a);
 
 return 0;
}


