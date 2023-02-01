#include<stdio.h>
#include<stdlib.h>
void read_integer(void *ptr,int n);

//void display_integer(void *ptr,int n);
//void largest_integer(void *ptr,int n);
//void ascending_order(void *ptr,int n);
//void binary_conversion(void *ptr,int n);
void second_biggest(void *ptr,int n);
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
        //largest_integer(ptr,5);

        //display_integer(ptr,5);

        //ascending_order(ptr,5);
        //binary_conversion(ptr,5);
        second_biggest(ptr,5);
        free(ptr);
}
void read_integer(void *ptr, int n)   //read integer//
{
        int i;
        for (i=0;i<n;i++)
        {
                printf("enter the input\n");
                scanf("%d",&((int *)ptr)[i]);
        }
}

/*void display_integer(void *ptr,int n)   //display integer//
{
        int i;
        for(i=0;i<5;i++)
        {
                printf("%d element %p-%d\n",i+1,((int *)ptr)+i,*(int*)(ptr+i));
        }
}*/

/*void largest_integer(void *ptr,int n)    //largest integer//
{
        int i;
	int largest=0;
        for(i=1;i<n;i++)
        {
                if((largest)<(((int *)ptr)[i]))
                        largest=(((int *)ptr)[i]);
        }
                printf("largest element:%d",largest);
}*/

/*void ascending_order(void *ptr,int n)   //ascending_order//
{
        int i,j,temp;
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(((int *)ptr)[i]>((int *)ptr)[j])
                        {
                                temp=((int *)ptr)[i];
                                ((int *)ptr)[i]=((int *)ptr)[j];
                                ((int *)ptr)[j]=temp;
                        }
                }
        }
        for(i=0;i<n;i++)
        {
                printf("%d\n",((int *)ptr)[i]);
        }
}*/
/*void binary_conversion(void *ptr,int n)  // decimal_binary conversion//
{
        int sum=0,i,j=1,temp,rem;
        for(i=0;i<n;i++)
        {
                temp=((int *)ptr)[i];
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
        

}*/
void second_biggest(void *ptr,int n) //second-biggest//
{
        int i=0,big=0,_2big=0,temp;
        do
        {
                temp=((int *)ptr)[i];
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
}



