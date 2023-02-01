#include<stdio.h>
void main()
{
/*int x;
printf("enter the input\n");
scanf("%d",&x);
((x%3==0)&&(x%5==0))?printf("x is divisible by 3&5"):printf("x is not divisible by 3&5");
((x%3!=0)||(x%5!=0))?printf("x is not divisible by 3&5"):printf("x is divisible by 3&5");
char x;
printf("enter the character\n");
scanf("%c",&x);
((x>=65)&&(x<=90))?printf("upper case"):(((x>=97)&&(x<=122))?printf("lower case"):printf("other than alphabet\n"));*/
char x;
printf("enter character");
scanf("%c",&x);
((x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U')||(x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))?printf("vowel\n"):printf("not a vowel\n");
}
