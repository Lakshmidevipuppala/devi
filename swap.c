#include<stdio.h>
void swap(int,int);
void swap(int a,int b)
{
	int x=a,y=b,temp;
	printf("swap:x:%p-%d\n",&x,x);
	printf("swap:y:%p-%d\n",&y,y);
	temp=x;
	x=y;
	y=temp;
	printf("swap:x:%p-%d\n",&x,x);
	printf("swap:y:%p-%d\n",&y,y);
}
void main()
{
	int a=10,b=20;
	printf("main:a:%p-%d\n",&a,a);
	printf("main:b:%p-%d\n",&b,b);
	swap(a,b);
	printf("main:a:%p-%d\n",&a,a);
	printf("main:b:%p-%d\n",&b,b);
}
