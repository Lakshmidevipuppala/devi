//........................second least.....................//
#define NM 5
#include<stdio.h>
#include<stdlib.h>
int read_integer(int *ptr,int n);
int second_least(int *ptr,int n);
void main()
{
	int arr[NM],i;
	int least=0,_2least=0;
	read_integer(arr,NM);
	second_least(arr,NM);
}
int read_integer(int *ptr,int n)            //read_integer//
{
	int i;
	for(i=0;i<NM;i++)
	{
		printf("enter the input\n");
		scanf("%d",&ptr[i]);
	}
}
int second_least(int *ptr,int n)            //second_least//
{
	int j;
	int l1,l2,l3;
	int temp=0;
	for(j=0;j<n;j++)
	{
		if(temp<ptr[j])
		{
			temp=ptr[j];
		}
	}
	l1=temp;
	l2=temp;
	l3=temp;
	for(j=0;j<n;j++)
	{
		if(ptr[j]<=l1)
		{
			if(l3==l1)
			{
				l2=l1;
				l1=ptr[j];
			}
			else if(ptr[j]!=l1)
			{
				l2=l1;
				l1=ptr[j];
			}
		}
		else if(ptr[j]<l2)
			l2=ptr[j];
	}
	printf("second least element:%d",l2);
}


	 

