#include<stdio.h>
int main(void)

{
	int a,b,c,d,e;
	for(a=0;a<=20;a++)
	{
		
		for(b=0;b<=33;b++)
		{
			for(c=0;c<=300;c+=3)
			{
				d=5*a+3*b+c/3;
				e=a+b+c;
				if(d==100&&e==100)
				printf("翁鸡有%d母鸡有%d雏鸡有%d\n",a,b,c);
				else
				continue;
			}
		}
	}
	
	return 0;
}