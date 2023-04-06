#include<stdio.h>
int main(void)

{int a,b,c,d,e,f;

printf("Please input a:");
scanf("%d",&a);
b=a/1000;
c=a/100-b*10;
d=a/10-(b*100+c*10);
e=a-(b*1000+c*100+d*10);
f=e*1000+d*100+c*10+b;
printf("b=%d\nc=%d\nd=%d\ne=%d\nf=%d\n",b,c,d,e,f);

return 0;
}