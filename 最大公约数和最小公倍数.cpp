#include<stdio.h>
int main(void)

{
	int m,n,a,b,c,d=0,e;
	printf("输入两个正整数m和n:");
	scanf("%d%d",&m,&n);
	
	if(m<n)//将最大值赋给m
	{
		a=n;
		n=m;
		m=a;
	}
	for(c=1;c<=n;c++)
	{
		if(m%c==0&&n%c==0)
		{
			if(d<c);
			{
				e=c;
				d=e;
			}
		}
	}
	printf("最大公约数是%d\n",d,c);
	//以下为最小公倍数
	
	for(c=m;;c++)
	{
		if(c%m==0&&c%n==0)
		{
			printf("最小公倍数是%d",c);
			break;
		}
	}
	return 0;
}