#include<stdio.h>
int main(void)

{
	int a=2,i=10000,b,c;
	
	for(a=2;a<10000;a++)
	{
		for(b=2;b*b<=a;b++)
		{
			if(a%b==0)
				break;
	    
		}
		
		if(b*b>a)
        	{
		printf("%d ",a);
		c++;
		if(c%10==0)
		{
			printf("\n");
		}
	}
	} 
return 0;
}
