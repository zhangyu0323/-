//将华氏温度转化为摄氏度
#include<stdio.h>
int main()

{double F,c;//F为华氏温度，c为摄氏度

printf("Please input F:");
scanf("%lf",&F);
c=5.0/9*(F-32);
printf("c=%.2lf",c);

return 0;
}

