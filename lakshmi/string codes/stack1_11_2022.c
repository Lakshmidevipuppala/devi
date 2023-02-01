#include<stdio.h>
#include<stdlib.h>
int i=-1,flg=0;
void push(int *ptr,int num);
void pop();
void display(int *ptr);
int search(int *ptr,int num);
void main()
{
	int stack[5];
	int opt,num,pos,j;
       	while(1)
       	{
		printf("menu\n0.exit\n1.push\n2.pop\n3.display\n4.search\n");
		printf("select the option");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:printf("enter the value\n");
			       scanf("%d",&num);
			       push(stack,num);
			       break;
			case 2:pop();
			       break;
			case 3:display(stack);
			       break;
			case 4:printf("enter the input\n");
			       scanf("%d",&num);
			       pos=search(stack,num);
			       if(pos==-1)
			       {
				       printf("element not found\n");
				       break;
			       }
			       printf("element found at %d\n",pos);
			       break;
			default:printf("invalid option\n");
		}
	}
}
void push(int *ptr,int num)
{
	if(i==4)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
		i++;
		flg++;
	}	ptr[i]=num;
}

void pop()
{
	if(i!=-1)
	{
		--i;
		flg--;
	}
	else
		printf("Stack is empty\n");
	

}
void display(int *ptr)
{
	int j;
	if(i==-1)
	{
		printf("stack is empty\n");
		return;
	}
	for(j=0;j<flg;j++)
	{
		printf("%d\n",ptr[j]);
	}
}
int search(int *ptr,int num)
{
	int j;
	if(i==-1)
	{
		printf("stack is empty\n");
		return -1;
	}
	for(j=0;j<=i;j++)
	{
		if(ptr[j]==num)
			return j+1;
	}
	return -1;
}


