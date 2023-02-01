#include<stdio.h>
void main()
{
	unsigned int a,b,i;
	printf("enter the input values a b\n");
	scanf("%x %x",&a,&b);
	unsigned int c;
	char *ptr1=(char *)&a;
	char *ptr2=(char *)&b;
	char *ptr3=(char *)&c;
	for(i=0;i<4;i++)
	{
		if(i%2==0)
		
			ptr3[i]=(((char *)ptr1)[i]);
			else
			ptr3[i]=(((char *)ptr2)[i]);
	}	
		printf("%x",c);
	
 
}
