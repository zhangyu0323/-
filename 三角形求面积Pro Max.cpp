//输入三条边，然后判断其是否构成三角形，构成则求面积，反之重新输入。
#include<stdio.h>
#include"math.h"
int main ()
{double a,b,c,p,area;
 printf("Please input a,b,c\n:");
 scanf("%lf%lf%lf",&a,&b,&c);
 if(a+b>c&&a+c>b&&b+c>a)
  {
  	p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("三角形的面积是%lf",area);
  }
  else
   for(printf("Please reinput a,b,c\n:"), scanf("%lf%lf%lf",&a,&b,&c);a+b<c||a+c<b||b+c<a;printf("Please reinput a,b,c\n:"), scanf("%lf%lf%lf",&a,&b,&c))
   {
   }
   p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("三角形的面积是%lf",area);
    
   return 0;
   
}