#include<stdio.h>
int main(void)

{
	int a,b,c,d,e;
	
	for(a=2;a<=99;a++)
	{
		b=a*a;
		if(b<=100)
		c=b%10;
		else
		d=b%100;
		
		if(c==a||d==a)
		printf("同构数是%d\n",a);
		
	}
	
	return 0;
}