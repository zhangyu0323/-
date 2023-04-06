#include<stdio.h>
int main(void)

{
	int a,b,c;
	/*printf("输入一串数字a:");
	scanf("%d",&a);*/

	for (a=1;a<=9999;a++)
	{
    	c=a;
		b=b*10+a%10;
		a=a/10;
		if(b==c)
    	printf("%d是回文数\n",c);
	}
    	
	/*else
	printf("%d不是回文数",c);*/
	
	return 0;
}