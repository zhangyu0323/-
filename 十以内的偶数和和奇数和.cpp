#include<stdio.h>
int main(void)
{
	int a,b,c,sum1=0,sum2=0;
	
	for(a=1;a<=10;a++)
	{
		if(a%2==0)
		{
			b=a;
			sum1=sum1+b;
		}
		else
		{
			c=a;
			sum2=sum2+c;
		}
	}
	
	printf("偶数和为%d\n奇数和为%d",sum1,sum2);
	
	return 0;
}