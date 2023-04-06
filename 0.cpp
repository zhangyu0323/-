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
	for(c=n;m%c!=0||n%c!=0;c--);
	printf("最大公约数是%d\n",c);
	return 0;
}