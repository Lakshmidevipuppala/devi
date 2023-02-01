#include<stdio.h>
void main()
{
	int opt,sum=0,rem,i=1,j,count=0,bit,z;
	printf("1.count no.of 0's\n 2.101 repeated\n 3.binary value\n 4.swap the bits\n 5.101 with 111\n");
	printf("select the option");
	scanf("%d",&opt);
	printf("enter the value");
	unsigned int num,temp;
	scanf("%x",&num);
	switch(opt)
	{
		case 1:z=0;  //count no.of 0's//
		       temp=num;
		       for(bit=31;bit>=0;bit--)
		       {
			       if((temp&(0x1<<bit))==0)
				       z++;
		       }
			       printf("%d",z);
			       break;
	        case 2:temp=num;   //101 repeated//
		       count=0;
		       for(bit=0;bit<=29;bit++)
		       {
			       if((((temp&(0x7<<bit)))>>bit)==(0x5))
					       count++;
		       }
		                printf("%d",count);
			        break;
		case 3:temp=num;      //print binary value//
		       for(bit=31;bit>=0;bit--)
		       {
			       if((temp&(0x1<<bit))==0)
				       printf("0");
		       
		       
			       else
				       printf("1");
		       }
			       break;
		case 4:temp=num;  //swap the bits//
			for(i=0,j=31;i<j;i++,j--)
			{
				temp=(temp&(~((0x1<<i)|(0x1<<j)))|((temp&(0x1<<i))<<(j-i))|((temp&(0x1<<j))>>(j-i)));
			}
			printf("%x",temp);
			break;
		case 5:temp=num;  //101 with 111//
		       for(i=0,j=29;i<j;i++,j--)
		       {
			       if((temp&(0x7<<bit))>>bit==(0x5))
				 temp=(temp&(~(0x7<<bit))|(0x7<<bit));
		       }
		       printf("%x",temp);
		       break;
		default:printf("invalid option");
	}
}



	


	


	




