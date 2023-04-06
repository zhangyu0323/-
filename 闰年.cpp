#include<stdio.h>

int main(void)
{
	int a;
	printf("Please input a:");
	scanf("%d",&a);
	
	if(a%4==0&&a%100!=0)
	{printf("This is run nian");
	}
	else
	{printf("This isn't run nian\n");
	}
	
	if(a%400==0)
	{printf("This is run nian");
	}
	
	return 0;
}