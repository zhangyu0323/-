#include<stdio.h>
main()
{
	double n=0,c=1,b=1,e,s=1;
	
	while(c>=1e-6)
	{   
	    e=n;//算式值
	     
	    n=n+c;//除1外算式值
		s=s*b;/*阶乘值*/
		b=b+1;
		c=1.0/s;//最后一项值
		
	    
		
	}
	printf("e=%lf",e);
	
	return 0;
}