#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include"header.h"
void main(void)
{
	int num,opt,res,sum=0;
	int temp;
	while(1)
	{
		printf("menu\n 0.exit\n 1.reverse_integer\n");        //functions//
		printf("select the option");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:__fpurge(stdin);
			       printf("enter the num\n");      //reverse integer//
			       scanf("%d",&num);
			       res=reverse_integer(num);
			       printf("%d\n",res);
			       break;
			       }
			       }
			
}
