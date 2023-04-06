#include<stdio.h>
int main(void)

{double y,x;

printf("Please input x:");
scanf("%lf",&x);

if(x>-5&&x<0)
{printf("y=%lf",x);
}

if(x==0)
{y=x-1;
printf("y=%lf",y);
}


if(x>0&&x<10)
{
y=x+1;
printf("y=%lf",y);
}


return 0;
}