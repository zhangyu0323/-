/*aear*/
#include<stdio.h>
#define PI 3.14159
void butler();
int main(void)

{double s,r;/* 定义两个变量*/
r=5.0;
s=r*r*PI;
printf("s=%f\n",s);
butler();/*引入下一个函数*/

return 0;
}

void butler()

{double a,c;/*定义两个变量*/
a=6.0;
c=2*a*PI;
printf("c=%f",c);
}