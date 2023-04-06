
#include<stdio.h>
int main(void)
{
	int a,b,c,d,e;
	
	for(c=21;c!=1;)
	{
	
		printf("请输入你想拿走的棍子数a(a不可大于4):\n剩余棍子数为%d\n",c);
     	scanf("%d",&a);
	    if(a>=5)
	    {
	    	printf("输入数值过大，请重新输入\n");
	    	continue;
		}
		else
		{
			b=5-a;
			c=c-a-b;
        	printf("机器拿走%d根\n",b);
		}
    	
    	
	}
	printf("剩余棍子数为%d\n",c);
	printf("你输了，真笨呀！！！");
	
	return 0;
	
	
}