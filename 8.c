#include<stdio.h>
void main()
{
int a;
int b;
printf("enter the a,b values");
scanf("%d-%d",&a,&b);
b=a*b;
a=b/a;
b=b/a;
printf("%d-%d",a,b);
}
