#include<stdio.h>
void main()
	{
		int min,max,dec=0,i=1,rem,temp;
		printf("enter the number");
		scanf("%d%d",&min,&max);
range:
		if(min<=max)
		{
			dec=0;
			i=1;
			temp=min;
decimal:
			if(temp>0)
			{
				rem=temp%10;
				if(rem>1)
					goto outof loop;
			}
			temp=temp/10;
			dec=dec+rem*i;
			i=i*2;
			goto decimal;
		}
outofloop:
		if(rem>1)
		{
			min++;
			goto range;
		}
		printf("%d%d\n",min,dec);
		min++;
		goto range;
	}

