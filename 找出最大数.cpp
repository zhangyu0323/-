#include<stdio.h>
int main()

{
double a,b,c;

printf("Please input a,b&C:");
scanf("%lf%lf%lf",&a,&b,&c);

if(a>b&&a>c)
printf("%lf",a);

if(b>a&&b>c)
printf("%lf",b);

if(c>a&&c>b)
printf("%lf",c);

return 0;
}