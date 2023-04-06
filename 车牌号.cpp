#include<stdio.h>
int main(void)


{
	int a,b,c,d;//a是前两位数，b是后两位数,c,d是车牌号
    
	for(a=0;a<=9;a++)
	{
		for(b=0;b!=a&&b<=9;b++)
		{
			for(c=1;c<100;c++)
          	{
        		d=a*1000+a*100+b*10+b;
        		if(d==c*c)
            	{
	        		printf("d=%d",d);
            	}
        	}
    	
    	}
	
	}
	
	return 0;
}