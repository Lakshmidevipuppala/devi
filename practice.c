#include<stdio.h>
void main()
{
int x,y,z,k=10;
k+=x=2,y=x+12,z=x+y;

printf("%d %d %d %d",x,y,z,k);
}

