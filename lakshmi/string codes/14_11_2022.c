//...............remove the extra spaces in a given string  &&&& rotate the elements in given array .....................//

//.......................................using switch case   ----- extra spaces & rotate elements.......................................................//
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
void remove_space(char *src);       //fun decalaration//
void rotate_elements(int *arr,int n);
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
void remove_space(char *src)           // remove_space fun definition//
{
	int i,j;
	for(i=0;src[i]!='\0';i++)
	{
			if((src[i]==' ')&&(src[i+1]==' '))
			{
				for(j=i;src[j]!='\0';j++)
				src[j]=src[j+1];
				i--;
			}
	}
	printf("%s",src);
}
void rotate_elements(int *arr,int n)       //rotate_elements fun definition//
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=arr[0];
		for(j=0;j<5-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[5-1]=temp;
	}
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
}





