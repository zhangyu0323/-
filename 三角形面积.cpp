//知三边，求三角形面积
#include<stdio.h>
#include<math.h>

int main(void)
{
	double a,b,c,p,area;
	printf("Please input a&b&c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if (a>b+c||b>a+c||c>a+b)
	{
		p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("area=%lf",area);
	}
	
	else
	{
   		for (printf("数据有误，请重新输入:"),scanf("%lf%lf%lf",&a,&b,&c);a<=b+c||b<=a+c||c<=a+b;printf("数据有误，请重新输入:"),scanf("%lf%lf%lf",&a,&b,&c))	
      	{
    		
    	}
		
	}
	
	
	
    	
	return 0;
	
}