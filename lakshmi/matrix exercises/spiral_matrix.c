#include<stdio.h>
#define R 4
#define C 4
void main()
{
	int arr[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j,n=4;
	int start,end;
	for(start=0,end=n-1;start<=end;start++,end--)
	{
		for(i=start;i<=end;i++)
			printf("%d ",arr[start][i]);
		for(i=start+1;i<=end;i++)
			printf("%d ",arr[i][end]);
		for(i=end-1;i>=start;i--)
			printf("%d ",arr[end][i]);
		for(i=end-1;i>=start+1;i--)
			printf("%d ",arr[i][start]);
	}
}











































/*	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&arr[i][j]);
			printf("%d",arr[i][j]);
		}
	}


	for(i=0;j=0;j<C,j++)
	{
		printf("%d ",arr[i][j]);
	}
	

	for(i=i+1;j=j-1;j<R,i++)
	{
		printf("%d ",arr[i][j]);
	}
	

	for(i=i-1;j=j-1;j>=0,j--)
	{
		printf("%d ",arr[i][j]);
	}
	

	for(i=i-1;i>0;i--)
	{
		printf("%d ",arr[i][j]);
	}


	for(i=i+1;j=j+1;j<(C-1),j++)
	{
		printf("%d ",arr[i][j]);
	}

	for(i,j;i<(R-1);i++)
	{
		printf("%d ",arr[i][j]);
	}
	
        
	for(i=i-1;j=j-1;j>0,j++)
	{
		printf("%d ",arr[i][j]);
	}
}
*/	
