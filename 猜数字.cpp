#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a,b,c=0,d;
	srand((unsigned)time(NULL));
	a=rand()%100;
	do
	{
		printf("输入两位数字:");
    	scanf("%d",&b);
    	c++;
    	printf("你已经猜测%d次\n",c);
    	
    	if(b>a)
    	{
    		printf("你输入数字偏大\n");
		}
		else if(b<a)
		{
			printf("你输入数字偏小\n");
		}
    	
    	
	}
	
	while(b!=a&&c<=9);
	
	if(c<=9)
	{
		printf("你猜测正确，数字为%d\n",a);
	}
	else
	{
		printf("你真笨");
    }

	return 0;
}