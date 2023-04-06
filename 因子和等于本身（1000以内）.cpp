#include<stdio.h>
int main(void)
{
	int a,b,c,d;//a为因子，b为被除数
	
	for(b=1;b<=1000;b++)
	{	c=0;
    	for(a=1;a<b;a++)
    	{
	   		if(b%a==0)
    		c=c+a;
    	}
	    if(b==c)
		{
			printf("完数是%d",b);
			for(a=2;a<b;a++)
			{
				if(b%a==0)
	    		printf("因子是%d\n",a);
			}
			
		}
		
	}
	return 0;
}