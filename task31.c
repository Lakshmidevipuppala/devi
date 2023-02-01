#include<stdio.h>
#include<stdlib.h>
int read_integer(int *ptr,int n);

//void display_integer(int *ptr,int n);
void largest_integer(int *ptr,int n);
//void ascending_order(int *ptr,int n);
//void binary_conversion(int *ptr,int n);
//void second_biggest(int *ptr,int n);
void main()
{
	int *ptr;
	int i,n;
	ptr=(int*)malloc(5*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
	       	exit(1);
	}


	read_integer(ptr,5);
	largest_integer(ptr,5);

        //display_integer(ptr,5);
	
	//ascending_order(ptr,5);
	//binary_conversion(ptr,5);
	//second_biggest(ptr,5);
	free(ptr);
}
int read_integer(int *ptr, int n)   //read integer//
{
        int i;
        for (i=0;i<n;i++)
        {
                printf("enter the input\n");
                scanf("%d",&ptr[i]);
        }
}

/*void display_integer(int *ptr,int n)   //display integer//
{
        int i;
        for(i=0;i<5;i++)
        {
                printf("%d element %p-%d\n",i+1,ptr+i,*(ptr+i));
        }
}*/

void largest_integer(int *ptr,int n)    //largest integer//
{
        int i;
        int largest=0;
        for(i=0;i<n;i++)
        {
                if(largest<ptr[i])
                        largest=ptr[i];
	}
                printf("biggest element:%d",largest);
}

/*void ascending_order(int *ptr,int n)   //ascending_order//
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
void binary_conversion(int *ptr,int n)  // decimal_binary conversion//
{
	int sum=0,i,j=1,temp,rem;
	for(i=0;i<n;i++)
	{
		temp=ptr[i];
		sum=0;
		j=1;
	while(temp!=0)
	{
		rem=temp%2;
		sum=sum+j*rem;
		temp=temp/2;
		j=j*10;
	}
		printf("%d\n",sum);
	}
	
	
}
void second_biggest(int *ptr,int n) //second-biggest//
{
	int i=0,big=0,_2big=0,temp;
	do
	{
		temp=ptr[i];
		if(temp>big)
		{
			_2big=big;
		big=temp;
		}
	else if(temp>_2big)
		_2big=temp;
	i++;
	}while(i<n);
	printf("%d\n",_2big);
}*/







