#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
//Declarations of functions//
int reverse_integer(int );
int sumofdigits(int );
int palindrome(int );
int decimal_binary(int);
int even_odd(int );
int numberofzeros(int);
int count_five(int );
int swap_bits(int);
int replace(unsigned int);
int printingintobinary(int);
void main(void)
{
	int num,opt,res,bin,i=1,j,count=0,sum=0;
	int temp;
	while(1)
	{
		printf("menu\n 0.exit\n 1.reverse_integer\n 2.sumofdigits\n \n 3.palindrome\n 4.decimal_bnary\n 5.even_odd\n 6.numberofzeros\n 7.count_five\n 8.swap_bits\n 9.replace\n 10.printingintobinary\n");        //functions//
		printf("select the option");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:__fpurge(stdin);
			       printf("enter the num\n");      //reverse integer//
			       scanf("%d",&num);
			       res=reverse_integer(num);
			       printf("%d\n",res);
			       break;
			case 2:__fpurge(stdin);
			       printf("enter the num\n");      //sumofdigits//
			       scanf("%d",&num);
			       res=sumofdigits(num);
			       printf("%d\n",res);
			       break;
			case 3:__fpurge(stdin);               //palindrome//
			       printf("enter the num");
			       scanf("%d",&num);
			       res=palindrome(num);
			       printf("%d\n",res);
			       break; 
			case 4:__fpurge(stdin);                    //decimal to binary//
			       printf("enter the num");
			       scanf("%d",&num);
			       res=decimal_binary(num);
			       printf("%d\n",res);
			       break; 
			case 5:__fpurge(stdin);                  //even_odd//
			       printf("enter the num"); 
			       scanf("%d",&num);
			       res=even_odd(num);
			       if(res==0)
                                       printf("even");
                               else
void main(void)
{
        int num,opt,res,bin,i=1,j,count=0,sum=0;
        int temp;void main(void)
{
        int num,opt,res,bin,i=1,j,count=0,sum=0;
        int temp;
        while(1)
        {
                printf("menu\n 0.exit\n 1.reverse_integer\n 2.sumofdigits\n \n 3.palindrome\n 4.decimal_bnary\n 5.even_odd\n 6.numberofzeros\n 7.count_five\n 8.swap_bits\n 9.replace\n 10.printingintobinary\n");        //functions//
                printf("select the option");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0:exit(0);
                        case 1:__fpurge(stdin);
-- INSERT --                                 22,3-17   
        while(1)
        {
                printf("menu\n 0.exit\n 1.reverse_integer\n 2.sumofdigits\n \n 3.palindrome\n 4.decimal_bnary\n 5.even_odd\n 6.numberofzeros\n 7.count_five\n 8.swap_bits\n 9.replace\n 10.printingintobinary\n");        //functions//
                printf("select the option");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0:exit(0);
                        case 1:__fpurge(stdin);
-- INSERT --                                 22,3-17                          printf("odd");
			       break;
			case 6:__fpurge(stdin);                  //numberofzeros//
			       printf("enter the num");
			       scanf("%d",&num);
			       res=numberofzeros(num);
			       printf("%d\n",res);
			       break;
			case 7:__fpurge(stdin);                  //count_five//
			       printf("enter the num");
			       scanf("%d",&num);
			       res=count_five(num);
			       printf("%d\n",res);
			       break;
			case 8:__fpurge(stdin);                 //swap_bits//
			       printf("enter the num");
			       scanf("%x",&num);
			       res=swap_bits(num);
			       printf("%x\n",res);
			       break;
			case 9:__fpurge(stdin);                //replace//
				printf("enter the num");
				scanf("%x",&num);
				res=replace(num);
				printf("%x\n",res);
				break;
			case 10:__fpurge(stdin);             //printing into binary//
				printf("enter the num");
				scanf("%x",&num);
				printingintobinary(num);
			        break;
			default:printf("enter valid option");
		}
	}
}
	int reverse_integer(int num)      //reverse integer//
	{
		int temp=num,rem,sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum*10+rem;
		}
		return sum;
 	}
	int sumofdigits(int num)         //sumofdigits//
	{
		int temp=num,rem,sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum+rem;
		}
		return sum;
	}
	int palindrome(int num)          //palindrome//
	{
		int temp=num,rem,sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			sum=sum*10+rem;
			temp=temp/10;
		}
		if(sum==num)
		return sum;
	}
	int decimal_binary(int num)      //decimal to binary//
	{
		int temp=num,i=1,rem,sum=0;
		while(temp>0)
		{
			rem=temp%2;
			temp=temp/2;
			sum=sum+i*rem;
			i=i*10;
		}
		return sum;
	}
	int even_odd(int num)      //even_odd//
	{
		int temp=num,sum=0;
		sum=temp%2;
		return sum;
	}
	int numberofzeros(int num)      //numberofzeros//
	{
		int temp=num,z=0,bit;
		for(bit=31;bit>=0;bit--)
		{
			if((temp&(0x1<<bit))==0)
				z++;
		}
		return z;
	}
	int count_five(int num)      //count_five//
	{
		int temp=num;
		int bit,count=0;
		for(bit=0;bit<=29;bit++)
		{
			if(((temp&(0x7<<bit))>>bit)==(0x5))
				count++;
		}
		return count;
	}
	int swap_bits(int num)      //swap_bits//
	{
		unsigned int temp=num;
			      int i,j;
		for(i=0,j=31;i<j;i++,j--)
		{
			temp=(temp&(~((0x1<<i)|(0x1<<j))))|((temp&(0x1<<i))<<(j-i))|((temp&(0x1<<j))>>(j-i));
		}
		return temp;
	}
	int replace(unsigned int num)      //replace 101 with 111//
	{
	  unsigned int temp=num,bit;
		for(bit=0;bit<=29;bit++)
		{
			if(((temp&(0x7<<bit))>>bit)==(0x5))
				temp=(temp&~((0x7<<bit)))|(0x7<<bit);
		}
		return temp;
	}
	int printingintobinary(int num)      //printingintobinary//
{
		int temp=num,bit;
		for(bit=31;bit>=0;bit--)
		{
			if((num&(0x1<<bit))==0)
				printf("0");
			else
				printf("1");
		}
	}






