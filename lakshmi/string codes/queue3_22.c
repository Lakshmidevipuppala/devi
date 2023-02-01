#define SIZE 5
#include<stdio.h>
#include<stdlib.h>
int f=-1;
int r=-1;
void insert(int *ptr,int num);
void delete();
void display(int *ptr);
int search(int *ptr,int num);
void main()
{
	int opt,num,pos;
	int arr[SIZE];
	while(1)
	{
	printf("menu\n0.exit\n1.insert\n2.delete\n3.display\n4.search\n");
	printf("enter the option");
	scanf("%d",&opt);
	switch(opt)
	{
		case 0:exit(0);
		case 1:printf("enter the value\n");
		       scanf("%d",&num);
		       insert(arr,num);
		       break;
		case 2:delete();
		       break;
		case 3:display(arr);
		       break;
		case 4:printf("enter the input\n");
		       scanf("%d",&num);
		       pos=search(arr,num);
		       if(pos==-1)
		       {
			       printf("element not found\n");
			       break;
		       }
		       printf("element found at %d\n",pos);
		       break;
		default:printf("invalid option");
	}
	}
}
void insert(int *ptr,int num)
{
	if(f==-1)
	{
	//	printf("queue is empty\n");
		f++;
		r++;
		ptr[r]=num;
	}
	else 
	{
		r++;
		ptr[r]=num;
	}
}
void delete()
{
	if(f==-1)
	{
		printf("queue is empty");
	}
	f++;
}
void display(int *ptr)
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
int search(int *ptr,int num)
{
	int j;
	if(f==-1)
	{
		printf("queue is empty\n");
		return -1;
	}
	for(j=f;j<=r;j++)
	{
		if(ptr[j]==num)
			return j+1;
	}
	return -1;
}
