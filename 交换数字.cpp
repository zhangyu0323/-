//abc 交换数字
#include<stdio.h>

int main(void)
{
	double a,b,c,d,e;
	printf("Please input a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	d=a;
	e=b;
	a=c;
	b=d;
	c=e;
	
	printf("a=%lf\nb=%lf\nc=%lf",a,b,c);
	
	return 0;
}