#include<stdio.h>
#include<stdlib.h>
#define R 3
#define C 3
void main()
{
	int m=0,i,j;
	int count;
	int ptr[R][C];
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&ptr[i][j]);
			if(ptr[i][j]!=0)
				count++;
		}
	}

int (*ptr1)[3];
ptr1=(int (*)[3])malloc(count*3*sizeof(int));
if(ptr1==NULL)
{
	printf("memory is not allocated\n");
}
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		if(ptr[i][j]!=0)
		{
			ptr1[m][0]=i;
			ptr1[m][1]=j;
			ptr1[m][2]=ptr[i][j];
			printf("%d %d %d\n",ptr1[m][0],ptr1[m][1],ptr1[m][2]);
			m++;
		}
	}
}
}


