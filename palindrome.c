#include<stdio.h>
void main()
{
	int x,sum=0,rem;
	printf("enter the number");
	scanf("%d",&x);
	while(x>0)
	{
		rem=x%10;
		sum=sum*10+rem;
		x=x/10;
	}
	printf("%d",sum);
}
