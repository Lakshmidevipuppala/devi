#include<stdio.h>
void main()
{
	int min,max,rem,temp;
	int sum=0;
	printf("enter the number min:max");
	scanf("%d:%d",&min,&max);
	while(min<=max)
	{
		temp=min;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum*10+rem;
		}
		if(sum==min)
				printf("%d-%d\n",min,sum);
		min++;
	}
}
