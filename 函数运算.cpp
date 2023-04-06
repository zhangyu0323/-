#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,y;
	printf("Enter x:");
	scanf("%lf",&x);
	
	if(x<2)
	{
		y=x;
	}
	
	if(x>=2&&x<6)
	{
		y=x*x+1;
	}
	
	if(x>=6&&x<10)
	{
		y=sqrt(x+1);
	}
	if(x>=10)
	{
		y=1.0/(x+1);
	}
	
	printf("x=%lf\ny=%lf\n",x,y);
}