//.......................................structures assignment 29_11_2022.c..............................................//
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
struct student* allocation();
void read(struct student *ptr);
void swap(struct student *ptr1,struct student *ptr2);
void display(struct student *ptr);
void deallocation(struct student *ptr);
int i=0;
int j=0;
struct dob
{
	int date;
	int mnt;
	int year;
};
struct student
{
	char name[32];
	float salary;
	struct dob dt;
};
struct student_ops
{
	struct student * (*f_allocation)();
	void (*f_read)(struct student *);
	void (*f_swap)(struct student *,struct student *);
	void (*f_display)(struct student *);
	void (*f_deallocation)(struct student*);
};
void main()
{
	int opt;
	int i,j;
	struct student *s1,*s2;
	struct student_ops op;
	op.f_allocation=allocation;
	op.f_read=read;
	op.f_swap=swap;
	op.f_display=display;
	op.f_deallocation=deallocation;
	while(1)
	{
		printf("\n1.allocation\n2.read\n3.swap\n4.display\n5.deallocation\n");
		printf("enter the option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:s1=op.f_allocation();
			       s2=op.f_allocation();
			       i++;
			       break;
			case 2:op.f_read(s1);
			       op.f_read(s2);
			       if(i==0)
				       printf("failed to memory allocate\n");
			       else
				       j++;
			       break;
			case 3:op.f_swap(s1,s2);
			       break;
			case 4:if(j==0)
				       printf("no data read\n");
			       else
			       {

			       op.f_display(s1);
			       op.f_display(s2);
			       }
			       break;
			case 5:op.f_deallocation(s1);
			       op.f_deallocation(s2);
			       i=0;
			       break;
			default:printf("invalid option\n");
				break;
		}
	}
}
struct student* allocation()
{
        struct student *ptr=(struct student *)malloc(1*sizeof(struct student));
        return ptr;
}

void read(struct student *ptr)
{
	printf("enter the student\n");
	scanf("%s",ptr->name);
	__fpurge(stdin);
	printf("enter salary\n");
	scanf("%f",&ptr->salary);
	printf("enter date/mnt/year\n");
	scanf("%2d-%2d-%4d",&ptr->dt.date,&ptr->dt.mnt,&ptr->dt.year);
	__fpurge(stdin);
}
void swap(struct student *ptr1,struct student *ptr2)
{
        struct student temp;
        strcpy(temp.name,ptr1->name);
        strcpy(ptr1->name,ptr2->name);
        strcpy(ptr2->name,temp.name);
        temp.salary=ptr1->salary;
        ptr1->salary=ptr2->salary;
        ptr2->salary=temp.salary;
        temp.dt.date=ptr1->dt.date;
        ptr1->dt.date=ptr2->dt.date;
        ptr2->dt.date=temp.dt.date;
        temp.dt.mnt=ptr1->dt.mnt;
        ptr1->dt.mnt=ptr2->dt.mnt;
        ptr2->dt.mnt=temp.dt.mnt;
        temp.dt.year=ptr1->dt.year;
        ptr1->dt.year=ptr2->dt.year;
        ptr2->dt.year=temp.dt.year;	
}
void display(struct student *ptr)
{
	char name[32];
	float salary;
        struct dob dt;
	printf("%p-%s-\n",ptr->name,ptr->name);
	printf("%p-%f\n",&ptr->salary,ptr->salary);
	printf("%p-%d-%d-%d\n",&ptr->dt,ptr->dt.date,ptr->dt.mnt,ptr->dt.year);
}
void deallocation(struct student *ptr)
{
	free(ptr);
}





