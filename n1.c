#include<stdio.h>
int x;
main()
{
	x=30;
	int x=40;
	printf("%d\n",x);
	{
		x=50;
		printf("%d\n",x);
		int x=60;
		printf("%d\n",x);
	}
	printf("%d\n",x);

}
