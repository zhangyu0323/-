#include<stdio.h>
int main(void)

{int x,y;
printf("Please input x&y:");
scanf("%d%d",&x,&y);

if((x-2)*(x-2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y+2)*(y+2)<=1||(x-2)*(x-2)+(y+2)*(y+2)<=1)
{printf("10");
}
else
{printf("0");
}



return 0;
}