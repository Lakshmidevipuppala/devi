//...............reverse_string recursion..........//
#include<stdio.h>
#include<string.h>
void reverse_string(char *src,int i,int l);
int i=0;
void main()
{
	int l;
	char src[10];
	printf("enter the string:\n");
	scanf("%[^\n]s",src);
	l=strlen(src);
	reverse_string(src,i,l);
	printf("%s\n",src);
}
void reverse_string(char *src,int i, int l)
{

	char temp;
	if(i<l)
	{
		temp=src[i];
	        src[i]=src[l-1];
		src[l-1]=temp;
		i++;
		l--;
		reverse_string(src,i,l);
	}
}


