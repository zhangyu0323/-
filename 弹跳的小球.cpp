//弹跳的小球
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(void)

{
	int i,j,k,l,a,b;
	int x=0,y=5;//xy轴
	int left=0,right=20,top=0,bottom=10,vx=1,vy=1;//规定范围，和速度大小
    	
	while(1)
    	
	{
		
		
		
		x=x+vx;
		y=y+vy;
		
		system("cls");//清屏函数
		
		for(i=1;i<=x;i++)
			printf("\n");//打印上方的空白
		
		for(j=1;j<=y;j++)
		printf("  ");//打印左方的空白
		
		printf("o");
		printf("\n");
        Sleep(60);
		
		if(x==top||x==bottom)//碰壁后改变速度方向（竖直方向上）
		{
			vx=-vx;
     		printf("\a");
		}
		
		if(y==left||y==right)
		{
			printf("\a");
    		vy=-vy;
		}
		
		
		
	}
	
	return 0;
	
    	
}











