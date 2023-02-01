//............

#include<stdio.h>
void main()
{
	int i,x,count=0;
	printf("enter the number\n");
	scanf("%d",&x);
	for(i=31;i>=0;i--)
	{
		if(x&(0x1<<i))
		{
			count++;
		}
	}
		if(count==1)
		{
			printf("number is the power of 2\n");
		}
		else
			printf("number is the not power of 2\n");
}



