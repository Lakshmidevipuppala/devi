#define SIZE 5
#include<stdio.h>
#include<stdlib.h>
int f=-1;
int r=-1;
void insert(int *ptr,int num);
void delete();
void display(int *ptr);
void ascending(int *ptr);
void main()
{
	int arr[5];
	int opt,num;
	while(1)
	{
		printf("menu\n0.exit\n1.insert\n2.delete\n3.display\n4.ascending\n");
		printf("enter the option\n");
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
			case 4:ascending(arr);
			       break;
			default :("invalid option");
		}
	}
}
void insert(int *ptr,int num)
{
	if(f==-1)
	{
		printf("queue is empty\n");
	
		f++;		
		r++;
	}
	else if(((r==SIZE-1)&&(f==0))||(r==f-1))
	{
		printf("queue is full\n");
		return;
	}
	else if(r==SIZE-1)
	{
		r=0;
		ptr[r]=num;
		return;
	}
	else
		r++;
	ptr[r]=num;
}
void delete()
{
	if(f==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else if(f==r)
	{
		f=r=-1;
		return;
	}
        else if(f==SIZE-1)
	{
		f=0;
		return;
	}
	f++;
}
void display(int *ptr)
{
	int i;
	if(f==-1)
	{
		printf("queue is empty\n");
		return;
	}
	if(f<=r)
	{
		for(i=f;i<=r;i++)
			printf("%d\n",ptr[i]);
	}
	else if(r<f)
	{
		for(i=f;i<SIZE-1;i++)
			printf("%d\n",ptr[i]);
		for(i=0;i<=r;i++)
			printf("%d\n",ptr[i]);
	}
}
void ascending(int *ptr)
{
       	int i,j,temp;
        if(f==-1)
        {
                printf("queue is empty\n");
                return;
        }
	if(f<=r)
	{
		for(i=f;i<=r;i++)
		{
			for(j=i+1;j<=r;j++)
			{
				if(ptr[i]>ptr[j])
				{
					temp=ptr[j];
					ptr[j]=ptr[i];
					ptr[i]=temp;
				}
			}
			printf("%d",ptr[i]);
		}
	}
	else if(r<f)
	{
		for(i=0;i<5;i++)
		{
			if((i<=r)||(i>=f))
			{
				for(j=i+1;j<5;j++)
				{
					if((j<=r)||(j>=f))
					{
						if((ptr[i]>ptr[j]))
						{
							temp=ptr[i];
							ptr[i]=ptr[j];
							ptr[j]=temp;
						}
					}
				}
				printf("%d",ptr[i]);
			}
		}
	}
}





































