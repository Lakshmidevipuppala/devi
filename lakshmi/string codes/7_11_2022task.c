#include<stdio_ext.h>
#include<string.h>
void vowel(char *ptr);
void reverse(char *ptr);
void delete(char *ptr,char c);
void main()
{
	char src[100];
	char c,temp;
	printf("enter the string\n");
	scanf("%[^\n]s",src);
	printf("enter the character to be deleted\n");
	__fpurge(stdin);
	scanf("%c",&c);
	vowel(src);
	reverse(src);
	delete(src,c);
}

void vowel(char *ptr)
{
	int i,count=0,j;
	for(i=0;ptr[i]!='\0';i++)
	{
		if((ptr[i]=='a')||(ptr[i]=='e')||(ptr[i]=='i')||(ptr[i]=='o')||(ptr[i]=='u')||(ptr[i]=='A')||(ptr[i]=='E')||(ptr[i]=='I')||(ptr[i]=='O')||(ptr[i]=='U'))
		{
			count++;
		}


	}
	printf("%d\n",count);
}

void reverse(char *ptr)
{
	int i,j,l; 
	int s1=0,temp=0;
	l=strlen(ptr);
	for(i=0;i<=l;i++)
	{
		if((ptr[i]==' ')||(i==l))
		{
			for(j=(i-1),s1;j>s1;s1++,j--)
			{
				temp=ptr[s1];
				ptr[s1]=ptr[j];
				ptr[j]=temp;
			}
			s1=i+1;
		}

	}
	printf("%s\n",ptr);
}

void delete(char *ptr,char c)
{
	int i,j;
	for(i=0;ptr[i]!='\0';i++)
	{
		if(ptr[i]==c)
		{
			for(j=i;ptr[j]!='\0';j++)
			{
				ptr[j]=ptr[j+1];
		
			}
			i--;
		}
	
	}
	printf("%s",ptr);

}



