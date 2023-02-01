//.............................lower triangle...................//
#include<stdio.h>
void readmatrix(int r,int e,int (*ptr)[e]);
void lowertriangle(int r,int e,int (*ptr)[e]);
void display(int r,int e,int (*ptr)[e]);
void main()
{
        int ptr[3][3];
        printf("read inputs for matrix\n");
        readmatrix(3,3,ptr);
        lowertriangle(3,3,ptr);
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

void lowertriangle(int r,int e,int (*ptr)[e])          //...........lowertriangle..........//
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<e;j++)
                {
                        if(i>=j)
                        {
                                printf("%d ",ptr[i][j]);

                        }
                        else
                                printf("  ");
                }

        printf("\n");
        }
}
void display(int r,int e,int (*ptr)[e])              //................display.............//
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<e;j++)
                        printf("%d ",ptr[i][j]);
                printf("\n");
        }
}

