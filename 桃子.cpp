/*计算猴子第一天摘了多少桃子*/
#include <stdio.h>
main()
{
	int a,b=1;
	for(a=1;a<10;a++)/*利用for循环，进行9次循环*/
	b=2*(b+1);
	
	printf("b=%d",b);/*输出*/
	
	return 0;
}