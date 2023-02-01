#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
void int_ascii(int num,int n);
int count(int num);
void repeated(char *ptr);
void concatination(char *ptr1,char *ptr2);
void palindrome(char *ptr);
int search_mystrncmp(char *ptr1,char *ptr2,int n);
void main()
{
	void *avptr;
        avptr=int_ascii;
        void *bvptr;
        bvptr=count;
        void *cvptr;
        cvptr=repeated;
	void *dvptr;
        dvptr=concatination;
        void *evptr;
        evptr=palindrome;
        void *fvptr; 
        fvptr=search_mystrncmp;
        char src[10];
        char src1[100];
        char src2[10];
        int i,n,m,num;
        int stat=0;
        int c=0;
        int opt;
        while(1)
{
	printf("menu\n0.exit\n1.int_ascii\n2.repeated\n3.concatination\n4.palindrome\n5.search_mystrncmp\n");
                printf("enter the option\n");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0:exit(0);
                        case 1:printf("enter the number\n");
                               scanf("%d",&num);
			       n=((int (*) (int))bvptr)(num);
			       ((void (*) (int,int))avptr)(num,n);
                               break;
                        case 2:printf("enter the string\n");
                               scanf("%s",src);
			       ((void (*)(char *))cvptr)(src);
                               break;
                        case 3:__fpurge(stdin);
                               printf("enter the string1\n");
                               scanf("%s",src1);
                               printf("enter the string2\n");
                               scanf("%s",src2);
			       ((void (*) (char *,char *))dvptr)(src1,src2);
                               break;
                        case 4:printf("enter the string\n");
                               scanf("%s",src);
			       ((void (*) (char *))evptr)(src);
                               break;
                        case 5:__fpurge(stdin);
                               printf("enter the string1\n");
                               scanf("%[^\n]s",src1);
                               printf("enter the string2\n");
                               scanf("%s",src2);
			       ((void (*) (char *,char *))fvptr)(src1,src2);
                               n=strlen(src2);
                               m=strlen(src1);
                                for(i=0;i<=(m-n);)
                               {
                                       stat=((int (*) (char *,char *,int))fvptr)(&src1[i],src2,n);
                                       if (stat==0)
                                       {
                                               c++;
                                               i=i+n;
					       i=i+n;
                                       }
                                       i++;
                               }
                               printf("%d\n",c);
                }
        }
}
int count(int num)
{
        int c=0;
        int temp=num;
        while(temp!=0)
        {
                c++;
                temp=temp/10;
		 }
        printf("%d\n",c);
        return c;
}
void int_ascii(int num,int n)         //int_ascii//
{
        int temp=num,i;
        int rem=0;
        char src[n];
        for(i=(n-1);i>=0;i--)
        {
                rem=temp%10;
                src[i]=rem+48;
                temp=temp/10;
		}
        src[n]='\0';
        printf("%s\n",src);
}

void repeated(char *ptr)              //repeated string//
{
        int i,j,c;
        for(i=0;ptr[i]!='\0';i++)
        {
                if(ptr[i]==' ')
                        continue;
                c=1;
                for(j=i+1;ptr[j]!='\0';j++)
			{
                        if(ptr[i]==ptr[j])
                        {
                                c++;
                                ptr[j]=' ';
                        }
  }
                printf("%c-%d\n",ptr[i],c);
        }
}

void concatination(char *ptr1,char *ptr2)          //concatination//
{
        int i,j;
	 for(i=0;ptr1[i]!='\0';i++);
        for(j=0;ptr2[j]!='\0';j++)
        {
                ptr1[i]=ptr2[j];
                i++;
        }
        ptr1[i]='\0';
        printf("%s",ptr1);
}
void palindrome(char *ptr)                      //palindrome//
{
        int i,j;
        char temp;
        int n;
	int count=0;
        n=strlen(ptr);
        for(i=0,j=(n-1);i<j;i++,j--)
        {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
        }
        for(i=0;i<n;i++)
        {
                printf("%c",ptr[i]);
        }
	printf("\n");
        for(i=0,j=(n-1);i<j;i++,j--)
        {
                if(ptr[i]==ptr[j])
                        count++;
        }
        if(count==(n/2))
        {
                printf("palindrome\n");
        }
        else
        {
                printf("not a palindrome\n");
        }
}

int  search_mystrncmp(char *ptr1,char *ptr2,int n)        //search string//
{
        int i;
        for(i=0;i<n;i++)
        {
                if(ptr1[i]!=ptr2[i])
                        return 1;
        }
        return 0;
}














