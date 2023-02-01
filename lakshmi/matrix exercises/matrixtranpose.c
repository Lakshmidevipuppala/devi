//............................transpose..........................//
#include<stdio.h>
void readmatrix(int r,int e,int (*ptr)[e]);
void transpose(int r,int e,int (*ptr1)[e],int (*ptr2)[r]);
void display(int r,int e,int (*ptr2)[e]);
void main()
{
	int ptr1[2][3];
	int ptr2[3][2];
	printf("read inputs for matrix\n");
        readmatrix(2,3,ptr1);
	transpose(2,3,ptr1,ptr2);
	display(3,2,ptr2);
}
void readmatrix(int r,int e,int (*ptr)[e])            //.....readmatrix1......//
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<e;j++)
                        scanf("%d",&ptr[i][j]);
                printf("\n");
        }
}

void transpose(int r,int e,int (*ptr1)[e],int (*ptr2)[r])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			ptr2[j][i]=ptr1[i][j];
		}
	}
	printf("\n");
}
void display(int r,int e,int (*ptr2)[e])              //................display.............//
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<e;j++)
                        printf("%d ",ptr2[i][j]);
                printf("\n");
        }
}


