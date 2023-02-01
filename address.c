#include<stdio.h>
void main()
{
	int KB=1024;
	int str=0x500;
	printf("a-block str=%p:lst=%p\n",str,(str+756-1));
	printf("b-block str=%p:lst=%p\n",(str+756),(str+1012-1));
	printf("c-block str=%p:lst=%p\n",(str+1012),(str+1268-1));
	printf("d-block str=%p:lst=%p\n",(str+1268),(str+1524-1));
	int x;
	printf("enter the address");
	scanf("%x",&x);
	if((x>=str)&&(x<str+1524))
	{
	if(x<=(str+756-1))
		 printf("a-block");
	else if(x<=(str+1012-1))
		  printf("b-block");
	else if(x<=(str+1268-1))
		   printf("c-block");
         else
		   printf("d-block");
	}
	 else
	 printf("invalid address");
}

