/*计算某年某月某日是一年中的第几天*/
#include<stdio.h>
main()
{
	int a,b,c,d,tian;
	printf("please input a year b month c day:\n");
	scanf("%d%d%d",&a,&b,&c);
	switch (b)
	{
		case 1: d=0;break;
		case 2: d=31;break;
		case 3: d=31+29;break;
		case 4: d=31+29+31;break;
		case 5: d=31+29+31+30;break;
		case 6: d=31+29+31+30+31;break;
		case 7: d=31+29+31+30+31+30;break;
		case 8: d=31+29+31+30+31+30+31;break;
		case 9: d=31+29+31+30+31+30+31+31;break;
		case 10: d=31+29+31+30+31+30+31+31+30;break;
		case 11: d=31+29+31+30+31+30+31+31+30+31;break;
		case 12: d=31+29+31+30+31+30+31+31+30+31+30;break;
		default :d=0;
		
	}
	if((a%4==0&&a%100!=0)||a%400==0)
	{if(b!=0&&c<=31)
	{if(b==2&&c<30)
	{tian=d+c;
	printf("tian=%d",tian);}
	else if((b==4||b==6||b==9||b==11)&&c<31)
	{tian=d+c;
	printf("tian=%d",tian);	}
	else if((b==3||b==5||b==7||b==8||b==10||b==12)&&c<=31)
	{tian=d+c;
	printf("tian=%d",tian);	}
	else if(b==1) 
{tian=c;
	 printf("tian=%d",tian);}
}	
	else printf("you are wrong");}

	
	
	
	
	else if(b!=0&&c<=31)
	{if(b!=0&&c<=31)
	{if(b==2&&c<29)
	{tian=d+c-1;
	printf("tian=%d",tian);}
	else if((b==4||b==6||b==9||b==11)&&c<31)
	{
	tian=d+c-1;
	printf("tian=%d",tian);}
	else if((b==3||b==5||b==7||b==8||b==10||b==12)&&c<=31)
	{
		tian=d+c-1;
	printf("tian=%d",tian);}	
	else if (b==1)
	{tian=c;
	printf("tian=%d",tian);
	}
	else printf("you are wrong");}	
	else printf("you are wrong");
	
	}
	else printf("you are wrong");
	
	
	return 0;
}