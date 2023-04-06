#include<stdio.h>
int main(void)
{
	int a=0,b=1,c;
	do
	{
		c=a+b;
		a=b+c;
		b=a+c;
	}
	while(c<=1000);
	
	printf("c=%d",c);
	
	return 0;
}