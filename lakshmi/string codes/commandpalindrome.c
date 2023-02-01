#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
	int i,stat;
	char src[100];
	printf("enter the string");
	scanf("%s",src);
	for(i=0;i<argc;i++)
	{
		stat=palindrome(argv[i]);
		if(stat==0)
			printf("%s\n",argv[i]);
	}
}
int palindrome(char *cptr)
{
	int i,j;
	j=strlen(cptr);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		if(cptr[i]!=cptr[j])
			return -1;
	}
	printf("%s",cptr);
	return 0;
}

