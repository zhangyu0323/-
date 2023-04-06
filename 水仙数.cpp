//计算0-999各个位数的三次方和等于本身的数字
#include<stdio.h>
int main(void)
{
	int a,b,c;
	int e=0;
	
	
	while(e<=999)
	{
	   a=e/100;
	   b=e/10%10;
	   c=e%10;
		if(a*a*a+b*b*b+c*c*c==e&&e>=100)
		{
			printf("e=%d\n",e);
		}
		e++;
	}
	
	return 0;
}