#include<stdio.h>
void readmatrix(int ,int ,int (*)[]);
void readmatrix2(int r,int e,int (*ptr2)[]);
void addition(int r,int e,int (*ptr1)[],int (*ptr2)[],int (*ptr)[]);                 //.............matrix addition..............//
//void multiplication(int r1,int e1,int r2,int e2,int (*ptr1)[e1],int (*ptr2)[e2],int (*ptr)[e2]);        //...........matrix multiplication............//
void display(int e,int r,int (*ptr)[]);
void main()
{
	int ptr1[2][3];
	//int ptr2[3][2];      //mul//
	//int ptr[2][2]={0,0,0,0};   //mul//
	int ptr2[2][3];                 //add//
	int ptr[2][3];                   //add//
	printf("read inputs for matrix1\n");
	readmatrix(2,3,ptr1);
	printf("read inputs for matrix2\n");
	//readmatrix(3,2,ptr2);       //mul fun//
	readmatrix(2,3,ptr2);   //add func//
	addition(2,3,ptr1,ptr2,ptr);
	display(2,3,ptr);
	//multiplication(2,3,3,2,ptr1,ptr2,ptr);
	//display(2,2,ptr);
}
void readmatrix(int r,int e,int (*ptr1)[e])            //.....readmatrix1......//
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
			scanf("%d",&ptr1[i][j]);
		printf("\n");
	}
}

//....................matrix addition......................//

void addition(int r,int e,int (*ptr1)[3],int (*ptr2)[3],int (*ptr)[3])
{
  int i,j;
  for(i=0;i<r;i++)
  {
  for(j=0;j<e;j++)
  {
  ptr[i][j]=ptr1[i][j]+ptr2[i][j];
  }
  }
}

//.................matrix multiplication..............................//

/*void multiplication(int r1,int e1,int r2,int e2,int (*ptr1)[e1],int (*ptr2)[e2],int (*ptr)[e2])
{
	int i,j,k;
	for(i=0;i<r1;i++)            //first row times//
	{
		for(j=0;j<e2;j++)     //second column times//
		{
			for(k=0;k<r2;k++)  //second row times//
				ptr[i][j]+=ptr1[i][k]*ptr2[k][j];
		}
	}
}*/
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


