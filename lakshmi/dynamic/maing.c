#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
#include"fundec.h"
void main()
{
	char src[100];
	int opt;
	int i,n;
	int arr[5];
	while(1)
	{
		printf("\n1.remove_space\n2.rotate_elements\n");
		printf("select the option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:__fpurge(stdin);
			       printf("enter the string\n");
			       scanf("%[^\ns]",src);
			       remove_space(src);	       //fun calling//
			       break;
			case 2:	__fpurge(stdin);
			        printf("enter the elements\n");
				for(i=0;i<5;i++)
				{	scanf("%d",&arr[i]);
				}
				printf("number of times to be rotated:");
				scanf("%d",&n);
				rotate_elements(arr,n);
				break;
			default:printf("invalid option\n");
		}
	}
}
