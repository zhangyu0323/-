#include<stdio.h>

int main(void)
{
	int n,i,m=1,sum;
	
	printf("请输入n的值:");
	scanf("%d",&n);
	
	for (i=1;i<=n;++i)
	{
		m=m*i;
		sum=sum+m;
	}
    
    printf ("sum=%d",sum);
	return 0;
}