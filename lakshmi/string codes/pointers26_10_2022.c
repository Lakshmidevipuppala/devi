#include<stdio.h>
void main()
{
	printf(".........character.......");
	char x=65;
	char *ch;
	ch=&x;
	*ch=66;
	printf("%p-%c-%d-%d\n",&x,x,sizeof(&x),sizeof(x));
	printf("%p-%d\n",ch,sizeof(ch));
	printf("%c-%d\n",*ch,sizeof(*ch));
	printf("%p-%d\n",&ch,sizeof(&ch));
        
	printf(".......integer................");
	int y=10;
	int *ptr;
	ptr=&y;
	*ptr=20;
	printf("%p-%d-%d-%d\n",&y,y,sizeof(&y),sizeof(y));
	printf("%p-%d\n",ptr,sizeof(ptr));
	printf("%d-%d\n",*ptr,sizeof(*ptr));
	printf("%p-%d\n",&ptr,sizeof(&ptr));

	printf("........shortinteger..........");
	short int a=10;
	short int *si;
	si=&a;
	*si=20;
	printf("%p-%d-%d-%d\n",&a,a,sizeof(&a),sizeof(a));
	printf("%p-%d\n",si,sizeof(si));
	printf("%d-%d\n",*si,sizeof(*si));
	printf("%p-%d\n",&si,sizeof(&si));

	printf(".........float.........");
	float v=10;
	float *f;
	f=&v;
	*f=20;
	printf("%p-%f-%d-%d\n",&v,v,sizeof(&v),sizeof(v));
        printf("%p-%f\n",f,sizeof(f));
        printf("%f-%d\n",*f,sizeof(*f));
        printf("%p-%d\n",&f,sizeof(&f));

        printf("..........double...........");
	double j=10;
	double *d;
	d=&j;
	*d=20;
	printf("%p-%f-%d-%d\n",&j,j,sizeof(&j),sizeof(j));
        printf("%p-%d\n",d,sizeof(d));
        printf("%f-%d\n",*d,sizeof(*d));
        printf("%p-%d\n",&d,sizeof(&d));
}


