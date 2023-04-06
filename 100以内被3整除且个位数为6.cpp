#include<stdio.h>
int main(void)

{
	int a,b,c,d;
	
	for (a=3;a<=100;a++)
	{
		c=a%10;
		d=a%3;
		if (c==6&&d==0)
		printf("%d\n",a);
	}
	return 0;
}