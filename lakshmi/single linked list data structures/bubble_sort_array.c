//...........................Bubble__sorting_array....................//

#include<stdio.h>
void bubble_sort(int *ptr,int n);
void display(int *ptr,int n);
void main()
{
        int arr[5]={5,3,1,4,2};
        bubble_sort(arr,5);
        display(arr,5);

}
void bubble_sort(int *ptr,int n)
{
        int i,j,temp,e;
        for(e=n;e>0;e--)
        {
                for(i=0;i<e;i++)
                {
			j=i+1;
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


