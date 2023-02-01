//................recursion function to print 1 to 10 numbers.............//
#include<stdio.h>
void recursion(int num);
void main()
{
	int num=1;
	recursion(num);
}
void recursion(int num)
{
	if(num>10)
		return;
	printf("num: %d\n",num);
	num++;
	recursion(num);
}
