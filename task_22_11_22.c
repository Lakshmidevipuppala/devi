#include<stdio.h>
void delete (char *src);
void main()
{
	char src[100];
	printf("enter the string\n");
	scanf("%[^\n]s",src);
	delete(src);
}
void delete(char *src)
{
	int i,j;
	char temp;
	for(i=0;src[i]!='\0';i++)
	{

		temp=src[i];
		for(j=i+1;src[j]!='\0';j++)
		{
			if(temp==src[j])
			{
			src[i]=' ';
			src[j]=' ';
			}
		}
	}
	j=0;
	for(i=0;src[i]!='\0';i++)
	{
		if(src[i]==' ')
			continue;
		src[j]=src[i];
		j++;
	}
	src[j]='\0';
	printf("%s",src);
}

