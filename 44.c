#include<stdio.h>
void main()
{
int a,b;
printf("enter the values a,b");
scanf("%d%d",&a,&b);
if(a<b)
printf("%d is less than %d\n",a,b);
if(a<=b)
printf("%d is less than or equal to %d\n",a,b);
if(a==b)
printf("%d is equal to %d\n",a,b);
if(a!=0)
printf("%d is not equal to %d\n",a,b);
if(a>b)
printf("%d is greater than %d\n",a,b);
if(a>=b)
printf("%d is greater than or equal to %d\n",a,b); 
}
