#include<stdio.h>
void main()
{
	unsigned long int str=0x1f20000;
	unsigned int x;
	unsigned long int KB=1024;
	unsigned long int MB=1024*KB;
	unsigned long int GB=1024*MB;
	unsigned long int totalsize=2*GB;
	printf("total size:0x%lx-0x%lx\n",str,str+2048*MB-1);
	printf("partition-1:0x%lx-0x%lx\n",str,str+1024*MB-1);
	printf("partition1 part1 block\n",str,str+512*MB-1);
	printf("partition1 part2 block\n",str+512*MB,str+1024*MB-1);
	printf("partition-2:0x%lx-0x%lx\n",str+1024*MB,str+2048*MB-1);
	printf("partition2 part1 block\n",str+1024*MB,str+1536*MB-1);
	printf("partition2 part2 block\n",str+1536*MB,str+2048*MB-1);
	printf("Enter value");
	scanf("%lx",&x);
	if((x>=str)&&(x<=str+2048*MB-1))
	{
		if(x<=str+512*MB-1)
			printf("partition1 part1 block");
		else if(x<=str+1024*MB-1)
			printf("partition1 part2 block");
		else if(x<=str+1536*MB-1)
			printf("partition2 part1 block");
		else
			printf("partition2 part2 block");
	}
	else
		printf("invalid address");
}
