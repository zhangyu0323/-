#include<stdio.h>
int main(void)
{
	int a,b,line;
	for (a=1,line=1;a<=7;a++,line++)
	{
		if (line<=4)
		{
			for(b=1;b<=5-a;b++)
			printf(" ");//打印空格
			for(b=1;b<=2*a-1;b++)
			printf("*");
			printf("\n");
		}
		else
		{
			for (b=1;b<=a-3;b++)
			printf(" ");//打印空格
			for (b=1;b<=15-2*a;b++)
			printf("*");
			printf("\n");
		}
	}
return 0;
}