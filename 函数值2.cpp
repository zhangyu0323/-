#include<stdio.h>
int main(void)

{   double x,y;
	printf("please input x:");
	scanf("%lf",&x);
	
	if(x>-5&&x<0)
	{printf("y=%lf",x);
	}
	else if(x==0)
	{y=x-1;
	printf("y=%lf",y);
	}
	else if(x>0&&x<10)
	{y=x+1;
	printf("y=%lf",y);
	}
	
	return 0;
	
	
	
}