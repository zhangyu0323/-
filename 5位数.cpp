/*输入至多五位数，并判断倒序*/
#include<stdio.h>

main()
{
	 int a,b,c,d,e,f;
	
	printf("please input a(0<a&&a<10000)\n");
	 scanf("%d",&a);
	 printf("a=%d\n",a);
	 if(a>100000)
	 { printf("You are disobedient");
	
	 }
	else if(a<100000&&a>10000)
	 {
	 	b=a/10000;
	 	c=a/1000-b*10;
	 	d=a/100-b*100-c*10;
	 	e=a/10-b*1000-c*100-d*10;
	 	f=a-b*10000-c*1000-d*100-e*10;
	 	a=f*10000+e*1000+d*100+c*10+b;
	 	 printf("a=%d",a);
	 	
	 }
	 else if (a<10000&&a>1000)
	 {
	 	c=a/1000;
	 	d=a/100-c*10;
	 	e=a/10-c*100-d*10;
	 	f=a-c*1000-d*100-e*10;
	 	a=f*1000+e*100+d*10+c;
	 	 printf("a=%d",a);
	 }
	 else if (a<1000&a>100)
	 {
	 	d=a/100;
	 	e=a/10-d*10;
	 	f=a-d*100-e*10;
	 	a=f*100+e*10+d;
	 	 printf("a=%d我",a);
	 }
	 else if (a<100&&a>10)
	 {
	 	e=a/10;
	 	f=a-e*10;
	 	a=f*10+e;
	 	 printf("a=%d",a);
	 }
	 
	 else printf("a=%d",a);
	 
	 
	 return 0;
	
	 
	 
	 
	 
}