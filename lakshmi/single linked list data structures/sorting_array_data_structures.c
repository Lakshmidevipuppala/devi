//...........................selection_sorting_array....................//

#include<stdio.h>
void selection_sort(int *ptr,int n);
void display(int *ptr,int n);
void main()
{
	int arr[5]={5,3,1,4,2};
	selection_sort(arr,5);  
	display(arr,5);
	
}
void selection_sort(int *ptr,int n)
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
}
void display(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
			printf("%d ",ptr[i]);
		printf("\n");
	}
}

