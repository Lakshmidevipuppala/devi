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











































