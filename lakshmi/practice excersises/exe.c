/*#include<stdio.h>
void main()
{
	int a=10,b=3,max;
	a>b? (max=a): max=b;
	printf("%d\n",max);
	int a=10;
	a=a++;
	a=a++;
	a=a++ * a--;
	printf("%d\n",a);
	printf("%d\n",a++ * a++);
}*/
//.......................negative number......................//

/*#include<stdio.h>
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("number is negative\n");
		num=-num;
	}
		printf("value of num is:%d\n",num);
}*/

//..............................decimal number...........//
/*#include<stdio.h>
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("octal number %d=%o",num,num);
	printf("hexadecimal number %d=%x",num,num);
}*/

//....................biggest of three numbers.............../

/*#include<stdio.h>
void main()
{
	int a,b,c,big;
	printf("enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			big=a;
		else
			big=c;
	}
	else
	{
		if(b>c)
			big=b;
		else
			big=c;
	}
	printf("bigger number is:%d\n",big);
}*/

//.....................................year is leap or not........................//

/*#include<stdio.h>
void main()
{
	int year;
	printf("enter the year\n");
	scanf("%d",&year);
	if(year%100!=0)
	{
		if(year%4==0)
			printf("leap year\n");
		else
			printf("not a leap year\n");
	}
	else
	{
		if(year%400==0)

			printf("leap year\n");
		else
			printf("not a leap year\n");
	}
}*/
//....................percentage grades..................//

/*#include<stdio.h>
void main()
{
	float m1,m2,m3,m4,total,per;
	char grade;
	printf("enter the 4 subjects\n");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;
	per=total/4;
	if(per>=85)
		printf("A");
	else if(per>=70)
		printf("B");
	else if(per>=55)
		printf("C");
	else if(per>=40)
		printf("D");
	else
		printf("E");
}*/

//........................to print 10 to 1.........................//

/*#include<stdio.h>
void main()
{
	int i=10;
	while(i>0)
	{
		printf("%d\t",i);
		i=i-1;
	}
	printf("\n");
}*/

//........................to print 1 to 10................//

/*#include<stdio.h>
void main()
{
        int i=1;
        while(i<=10)
        {
                printf("%d\t",i);
                i=i+1;
        }
        printf("\n");
}*/

//.......................to print reverse order with difference of 2......................//

/*#include<stdio.h>
void main()
{
	int k=10;
	while(k>=2)
	{
		printf("%d\t",k);
		k=k-2;
	}
	printf("\n");
}*/

//........................to print normal order with sum 2...............//

/*#include<stdio.h>
void main()
{
        int k=2;
        while(k<=10)
        {
                printf("%d\t",k);
                k=k+2;
        }
        printf("\n");
}*/

//..................to print the sum of digits...............//

/*#include<stdio.h>
void main()
{
	int num,sum=0,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits=%d\n",sum);
}*/

//.............to print the product of numbers............//

/*#include<stdio.h>
void main()
{
        int num,product=1,rem;
        printf("enter the number\n");
        scanf("%d",&num);
        while(num>0)
        {
                rem=num%10;
                product=product*rem;
                num=num/10;
        }
        printf("product of digits=%d\n",product);
}*/

//................ factorial of a number..............//

/*#include<stdio.h>
void main()
{
	int num;
	long fact=1;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>1)
	{
		fact=fact*num;
		num--;
	}
	printf("factorial %d=%ld",num,fact);
}*/

//..................exercises.............//

//1.....
/*#include<stdio.h>
void main()
{
	int a=20,b=3;
	if(a>10)
	{
	 a=a-5;
	 b=b+5;
	}
	 printf("%d  %d\n",a,b);
}*/

//2.....
#include<stdio.h>
void main()
{
	int i=1,j=9;
	if(i>=5&&j<5)
	i=j+2;
	printf("%d\n",i);
}







