#include<stdio.h>
void main()
{
	int x,y,quo,rem;
	printf("enter the 2 numbers");
	scanf("%d%d",&x,&y);
	if(y) /*y is non zero*/
	{
	quo=x/y;
	rem=x%y;
	printf("quo=%d,rem=%d\n",quo,rem);
	}
	else
		printf("divide by zero error\n");

}
