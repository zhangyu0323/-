#include<stdio.h>

int main(void)
{
	int i,a,b=1;//b为变量，为0则是合数。
	printf("Enter i:");
	scanf("%d",&i);
	
	for(a=2;a<i;a++)
	{
		if(i%a==0)
		{
			b=0;
			break;
		}
	}
	if(b==1)
	{
		printf("%d是素数",i);
	}
	else
	{
		printf("%d不是素数",i);
	}
	
	return 0;
}