#include<stdio.h>
void main()
{
	int sum=0,rem,i=1,j,num,count=0,bit,x,y,z;
	int opt;
	char ch;
	char sub_opt;
	printf("0.exit\n 1.bitwise operator\n 2.arithmetic operation\n 3.swap the content of varibles\n 4.upper to lower and charatcer to integer\n 5.fibonacii series\n");
	scanf("%d",&opt);
	unsigned int temp,num;
	switch(opt)
	{
		case 0:exit(0);
		case 1:__fpurge(stdin);
		       printf("select the option to perform bitwise operators\n a.set\n b.clear\n c.count the no.of 0's\n d.swap the bits\n");   //bitwsie operators//
		       scanf("%c",&sub_opt);
		       printf("enter the value:bit\n");
		       scanf("%x",&num);
			switch(sub_opt)
			       {
				       case 'a':bit=1;
					       num=num|(0x1<<bit);      //set//
					      printf("%x\n",num);
					      break;
				       case 'b':bit=1;
					      num=num&(~(0x1<<bit));   //clear//
					      printf("%x\n",num);
					      break;
				       case 'c':z=0;                     //count the no.of 0's//
					      temp=num;
					      for(bit=31;bit>=0;bit--)
					      {
						      if((temp&(0x1<<bit))==0)
							      z++;
					      }
					      printf("%d",z);
					      break;
					case 'd':temp=num;   //swap the bits//
					       for(i=0,j=7;i<j;i++,j--)
					       {
						       temp=(temp&(~((0x1<<i)|(0x1<<j)))|((temp&(0x1<<i))<<(j-i))|((temp&(0x1<<j))>>(j-i)));
					       }
					       printf("%x",temp);
					       break;
			       }
		case 2:__fpurge(stdin);
		       printf("select the option to perform arithmetic operators\n a.add\n b.sub\n c.reverse\n d.sum of digits\n");           //arithmetic operators//
		       scanf("%c",&sub_opt);
		       switch(sub_opt)
		       {
			       case 'a':__fpurge(stdin);
				       printf("enter the values of x:y");  //add//
					scanf("%d:%d",&x,&y);
				       z=x+y;
					printf("%d",z);
					break;
				case 'b':__fpurge(stdin);
					 printf("enter the values of x:y");    //sub//
					 scanf("%d:%d",&x,&y);
					z=x-y;
					 printf("%d",z);
					 break;
			        case 'c':__fpurge(stdin);
					 scanf("%d",&num);                         //reverse//
					 temp=num;
					 sum=0;
					 while(temp>0)
					 {
						 rem=temp%10;
						 temp=temp/10;
						 sum=sum*10+rem;
					 }
					 printf("%d\n",sum);
					 break;
				case 'd':__fpurge(stdin);
					 scanf("%d",&num);                           //sum of digits//
					 temp=num;
					 sum=0;
					 while(temp>0)
					 {
						 rem=temp%10;
						 temp=temp/10;
						 sum=sum+rem;
					 }
					 printf("%d\n",sum);
					 break;

		       }
		    case 3:__fpurge(stdin);
			   printf("select the option to perform swap the variables\n a.swap using 3\n b.swap using 2\n c.swap using bitwise\n");         //swap the bits//
			   scanf("%c",&sub_opt);
			   switch(sub_opt)
			   {
				   case 'a':__fpurge(stdin);      //swap using 3//
					     printf("before swaping x:y");
					    scanf("%d:%d",&x,&y);
					    z=x;
					    x=y;
					    y=z;
					    printf("after swaping %d:%d",x,y);
					    break;
			           case 'b':__fpurge(stdin);    //swap using 2//
					    printf("before swaping x:y");
					    scanf("%d:%d",&x,&y);
					    x=x+y;
					    y=x-y;
					    x=x-y;
					    printf("after swaping %d:%d",x,y);
					    break;
			           case 'c':__fpurge(stdin);
			                    scanf("%d",&num);
			                    temp=num;  //swap the bits using bitwise//
			                    for(i=0,j=31;i<j;i++,j--)
			                    {
				            temp=(temp&(~((0x1<<i)|(0x1<<j)))|((temp&(0x1<<i))<<(j-i))|((temp&(0x1<<j))>>(j-i)));
				            }
				            printf("%x",temp);
				            break;
		           }
		     case 4:__fpurge(stdin);
		            printf("select the option\n a.upper to lower and lower\n b. integer to character\n ");
		            scanf("%c",&sub_opt);
		            switch(sub_opt)
		            {
		            case 'a':__fpurge(stdin);             //upper//
		                     printf("enter character");
		                     scanf("%c",&ch);
		                     if((ch>=65)&&(ch<=90))
		                     printf("%c",ch+32);
		                    else  if((ch>=97)&&(ch<=122))    //lower//
		                     printf("%c",ch-32);
		                     else 
		                     printf("special character");
		                     break;
			    case 'b':__fpurge(stdin);                       //integer//
				     printf("enter integer constant");
				     scanf("%c",&ch);
				     printf("%d",ch-48);
				     break;
			    }
	            case 5:__fpurge(stdin);
			   printf("enter the starting values");
			   scanf("%d%d",&x,&y);
			   printf("num");
			   scanf("%d",&num);
			   printf("%d %d",x,y);
			   for(num;num>0;num--);
			   {
			   z=x+y;
			   x=y;
			   y=z;
			   printf("%d",y);
			   }
			   break;
		    default:("enter invalid option");
	



	}
}
	


	   
