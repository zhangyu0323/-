//求n!
#include<stdio.h>
int main(void)

{  int n,a=1,b=1;//声明变量
	printf("Please input n:");//让操作者输入n
	scanf("%d",&n);//将n变成变量
	
	while(a<=n)
	{
		b=b*a;
		a++;
	}
	printf("n!=%d",b);
	
	return 0;
}