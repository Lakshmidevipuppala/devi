#include<stdio.h>
main()
{
int x=5;
x=+2,x+=2,x=+x;
x+=x;
printf("%d\n",x);
}
