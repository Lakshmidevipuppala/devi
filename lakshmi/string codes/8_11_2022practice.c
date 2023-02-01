 //...............constant keywords......................//
#include<stdio.h>
void main()
{

	/*const char x=10;
	printf("%d\n",x);*/

	/*const char x=10;
	printf("%d\n",x);
	x=20;
	printf("%d\n",x);*/


	/*const char x=10;
	char *ptr=&x;
	printf("%d\n",x);
	*ptr=11;
	printf("%d\n",x);*/

	/*int x=10;
	int y=20;
	const int *ptr;
	ptr=&x;
	printf("%d\n",*ptr);
  //	*ptr=30;         //compilation error - we cannot change x value by*ptr,but we can change the address in ptr//
	ptr=&y;
	printf("%d\n",*ptr);*/

	/*int x=10;
	int *const ptr=&x;
	*ptr=20;
	int y=30;
     //	ptr=&y;
	printf("%p\n",ptr);
	printf("%d\n",x);*/

	/*int x[5]={10,20,30,40,50};
	display(x,5);
}
void display(int x[5],int n)
{
	int i;
	printf("%d\n",sizeof(x));
	for(i=0;i<n;i++)
		printf("%d\n",x[i]);*/

/*	short int *ptr1=0x5000;
	short int *ptr2=0x5008;
	printf("%d\n",(ptr2-ptr1));*/ 

	/*int x[5]={1,2,3,4,5};
	int *ptr=x;
	int ret;
	//ret=&ptr[2]-&ptr[0];
	ret=(void *)&ptr[2]-(void *)&ptr[0];
	//ret=(char *)&ptr[2]-(char *)&ptr[0];
	printf("%d\n",ret);*/

	int x=12;
	int *ptr=&x;
	int **dptr=&ptr;
	printf("%p\n",dptr);
	printf("%p\n",&dptr);
	printf("%p\n",*dptr);
	printf("%d\n",**dptr);


}
