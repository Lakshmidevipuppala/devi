//.....................dec_bin recursive...................//
#include<stdio.h>
int dec_binary(int num);
int sum=0,i=1;
void main()
{
	int num;
	int a;
	printf("enter the number\n");
	scanf("%d",&num);
	a=dec_binary(num);
	printf("%d",a);
}
int dec_binary(int num)
{
	int rem;
	if(num>0)
	{
		rem=num%2;
		sum=sum+rem*i;
		i=i*10;
		dec_binary(num/2);
	}
	return sum;
}


