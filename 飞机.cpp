#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)

{
	int i,j;
	int x=5,y=10,isFire=0,ny=5,isKilled=0;
	char input;
	
	while(1)
	{
		system("cls");//清屏函数
		
		if(!isKilled)
		
		{
			for(j=0;j<ny;j++)
			printf(" ");
			printf("+\n");
		}
		
		if(isFire==0)
		{
			for(i=0;i<x;i++)
			printf("\n");
		}
		
		else
		{
			for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
				    printf(" ");
				printf(" |\n");
			}
			if(y+2==ny)
			    isKilled=1;
			isFire=0;
		}
		//下面为飞机图案
		for(j=0;j<y;j++)
	    	printf(" ");
		printf("  *\n");
		
		for(j=0;j<y;j++)
    		printf(" ");
		printf("*****\n");
		
		for(j=0;j<y;j++)
    		printf(" ");
		printf(" * * \n");
		
		if(kbhit())
		{
			input=getch();
			if(input== 'a')
    		y--;
		
    		if(input== 'd')
    		y++;
		
    		if(input== 'w')
    		x--;
		
    		if(input== 's')
    		x++;
    		
    		if(input== ' ')
    		isFire=1;
    		
    		
  		}
	}
	return 0;
}