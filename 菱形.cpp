#include<stdio.h>
int main(void)
{
	int line,a,b,c,d;//line为行数
	
	for(a=1;a<=4;a++)
	{	
	    for(b=a;b<=4;b++)
        {
			printf(" ");
	   	}
	    for(b=1;b<=2*a-1;b++)
    	{
			printf("*");
    	}
	    printf("\n");
	}
		//分界线
    	    for(a=1;a<=3;a++)
        	{
        		for(b=1;b<=(2+a)-1;b++)//打印的空格数
				{
					printf(" ");
				}
				for(b=1;b<=7-(2*a);b++)//打印的*号
				{
					printf("*");
				}
					printf("\n");
        	}
	return 0;
	}