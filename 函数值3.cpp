#include<stdio.h>
int main()

{
	double x,y;
	printf("pleases input x:");
	scanf("%lf",&x);
	
	switch(x>-5&&x<0)
	
	{case 1:y=x;printf("%lf",y);break;
	
	case 0:switch(x==0)
	    {case 1:y=x-1;printf("%lf",y);break;
	     case 0:
		 switch(x>0&&x<10)
	       {case 1:y=x+1;printf("%lf",y);break;}}}
	       
	return 0;
	
}