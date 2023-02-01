//............invalid memory access..........//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	int x=10;
	int *ptr=&x;
	printf("%d\n",*ptr);
	free(ptr);
	printf("%d\n",*ptr);
}
