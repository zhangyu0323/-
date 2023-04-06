//计算面积周长
#include<stdio.h>
#define Pi 3.14159
main(void)
{double r,h,c,s1,s2,v1,v2;//r为半径，h为圆柱高，c为周长，s1为圆面积，s2为球表面积，v1为球体积，v2为圆柱体积

printf("please input r:");
scanf("%lf",&r);
printf("please input h:");
scanf("%lf",&h);
c=2*Pi*r;
s1=Pi*r*r;
s2=4*Pi*r*r;
v1=4.0/3*Pi*r*r*r;
v2=s1*h;
printf("c=%.3lf\ns1=%.3lf\ns2=%.3lf\nv1=%.3lf\nv2=%.3lf",c,s1,s2,v1,v2);

return 0;
}
