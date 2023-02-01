#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  int_binary(int *iptr,int i);
int  ascending_order(int *iptr,int argc);
int  descending_order(int *iptr,int argc);
int  palindrome(int *iptr,int i);
void main(int argc,char *argv[])
{
	int *iptr;
	int i,j,k=0,l,stat;
	int sum=0,temp;
	for(i=2;i<argc;i++)
	{
		l=strlen(argv[i]);
		12=(int *)malloc(l*sizeof(int));
		if(iptr==NULL)
		{
			printf("failed to memory allocate\n");
			exit(1);
		}
	}
	for(i=2;i<argc;i++)
	{
		if(argv[i][0]=='-')
		{
			for(j=1;argv[i][j]!='\0';j++)
			{
				if((argv[i][j]>='0')&&(argv[i][j]<='9'))
				{
					temp=argv[i][j]-48;
					sum=sum*10+temp;
				}
			}
			sum=-sum;
		}
		else
		{
			for(j=0;argv[i][j]!='\0';j++)
			{
				if((argv[i][j]>='0')&&(argv[i][j]<='9'))
				{
					temp=argv[i][j]-48;
					sum=sum*10+temp;
				}
				else
				{
					printf("invalid input program terminated\n");
					exit(4);
				}
			}
			sum=sum;
		}
		iptr[k]=sum;
		k++;
		sum=0;
	}
	if(argc>2)
	{
		if(argv[1][0]=='-')
		{
			switch(argv[1][1])
			{
				case 'a':for(i=0;i<(argc-2);i++)
					 {
						 int_binary(iptr,i);
					 }
					 break;
				case 'b':ascending_order(iptr,argc);
					 break;
				case 'c': descending_order(iptr,argc);
					 break;
				case 'd':for(i=0;i<argc-2;i++)
					 {
						 stat=palindrome(iptr,i);
						 if(stat==iptr[i])
							 printf("palindrome\n");
						 else
							 printf("not a palindrome\n");
						 
					 }
					 break;
				default:printf("invalid option\n");
			}
		}
		else
			printf("please enter flag");
	
	}
	else
		printf("argc must be greater than 2");
}

int int_binary(int *iptr,int i)
{
	int bit;
	for(bit=31;bit>=0;bit--)
	{
		if((iptr[i]&(0x1<<bit))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
}
int ascending_order(int *iptr,int argc)
{
	int i,j;
	int temp=0;
	for(i=0;i<(argc-2);i++)
	{
		for(j=i+1;j<(argc-2);j++)
		{
			if(iptr[i]>iptr[j])
			{
				temp=iptr[i];
				iptr[i]=iptr[j];
				iptr[j]=temp;
			}
		}
		printf("%d",iptr[i]);
	}
}
int descending_order(int *iptr,int argc)
{
	int i,j;
	int temp=0;                                                                          
	for(i=0;i<(argc-2);i++)
	{
		for(j=i+1;j<(argc-2);j++)
		{
			if(iptr[i]<iptr[j])
			{
				temp=iptr[i];
				iptr[i]=iptr[j];
				iptr[j]=temp;
			}
		}
		printf("%d",iptr[i]);
	}
}
int palindrome(int  *iptr,int i)
{
	int j,rem,sum=0;
	int temp=iptr[i];
	if(temp<0)
		temp=-temp;
	else
		temp=temp;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(iptr[i]<0)
		sum=-sum;
	else
		sum=sum;
	return sum;
}
