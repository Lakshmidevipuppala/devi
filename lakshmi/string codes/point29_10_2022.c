     //pointers using  function//
#include<stdio.h>
#include<stdlib.h>
int read_integer(int*ptr,int n);
void diplay_integer(int*ptr,int n);
void biggest_integer(int*ptr,int n);
void second_biggest_value(int*ptr,int n);
void binary_conversion(int*ptr,int n);
void ascending_order(int*ptr,int n);
void main()
{
	int *ptr;
	int i,n,opt,temp,num;
	ptr=(int*)malloc(5*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed to allocate memory in heap\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the input");
	        scanf("%d",&ptr[i]);
	}
	while(1)
	{
		printf("0.exit\n,1.read_integer\n2.display_integer\n3.biggest_integer\n4.second_biggest_value\n5.binary-conversion\n6.ascending_order\n");
		printf("enter the option");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			       break;
			case 1:read_integer(ptr,n);
			       break;
			case 2:display_integer(ptr,n);
			       break;
			case 3:biggest_integer(ptr,n);
			       break;
			case 4:second_biggest_value(ptr,n);
			       break;
			case 5:binary_conversion(ptr,n);
			       break;
			case 6:ascending_order(ptr,n);
			       break;
			default:printf("enter valid option");
				break;
		}
			free(ptr);
	}
}
int read_integer(int *ptr, int n)   //read integer//
{
	int i;
	for (i=0;i<n;i++);
	{
		printf("enter the input\n");
		scanf("%d",&ptr[i]);
	}
	return i;
}
void display_integer(int *ptr,int n)   //display integer//
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d element %p-%d\n",i+1,ptr+i,*(ptr+i));
	}
}
void biggest_integer(int*ptr,int n)    //biggest integer//
{
	int i,j;
	int biggest=0;
	for(i=0;i<n;i++)
	{
		if(biggest<ptr[i])
			biggest=ptr[i];
		printf("biggest element:%d",ptr[i]);
	}
}
void second_biggest_value(int*ptr,int n)      //second biggest value//
{
	int i,j;
	int second=0;
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(second_biggest_value<ptr[i])
			{
				second_biggest_value=ptr[i];
			}
		}
	}
	printf("second_biggest element:%d\n",second_biggest);
}
void binary_conversion(int*ptr,int n)
{
	int i=1,sum=0,temp,num;
	for(i=0;i<n;i++)
	{
		num=ptr[i];
		sum=0;
		i=1;
		while(temp!=0)
		{
			temp=num%2;
			num==num/2;
			sum=sum+i*temp;
			i=i*10;
		}
		printf("%d-%d\n",ptr[i],sum);
	}
}
void ascending_order(int*ptr,int n)
{
	int i,j;
	int temp=0;
	for(i=0;i<n;i++)
	{
		for(i=j+1;i<n;i++)
		{
			if(ptr[j]>ptr[i])
			{
			temp=ptr[i];
		        ptr[i]=ptr[j];
			ptr[j]=temp;
			}
		}
		for(j=0;j<n;j++)
		{
			printf("%d",ptr[j]);
		}
		printf("\n");
	}
}

