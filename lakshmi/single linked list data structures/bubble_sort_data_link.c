//.............................bubble_______sortings_data------------&&&&   LINKS---------->>>>>>>>>>>>> data structures...........................................//

#include<stdio.h>
#include<stdlib.h>
void create_list(int *iptr,int n);
void bubble_sorting_data();
void display();
void bubble_sorting_link();
struct node
{
        int data;
        struct node *link;
};
struct node *head=NULL;
void main()
{
        int opt,i,n;
        int count;
        int *ptr;
        while(1)
        {
                printf("menu\n0.exit\n1.create_list\n2.selection_sorting_data\n3.display\n4.sorting_link\n");
                printf("enter the option\n");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0:exit(0);
                               break;
                        case 1:printf("enter the count\n");
                                scanf("%d",&count);
                                ptr=(int *)malloc(count*sizeof(int));
                                if(ptr==NULL)
                                        exit(1);
                                for(i=0;i<count;i++)
                                {
                                        printf("enter the input\n");
                                        scanf("%d",&ptr[i]);
                                }
                                create_list(ptr,count);
                                free(ptr);
                                break;
                        case 2:bubble_sorting_data();
                               break;
                        case 3:display();
                               break;
                        case 4:bubble_sorting_link();
                               break;
                        default:printf("invalid option\n");
                                break;
                }
        }
}
void bubble_sorting_data()
{
        int temp;
        struct node *p,*q,*e;
        if(head==NULL)
        {
                printf("list is empty\n");
		return;
	}
	for(e=NULL;head->link!=e;e=q)
	{
        for(p=head;p->link!=e;p=p->link)
        {
		q=p->link;
	       	if(p->data>q->data)
	      	{
		       	temp=p->data;
                        p->data=q->data;
                        q->data=temp;
                        }
                }
        }
}
void display()
{
        struct node *temp;
        if(head==NULL)    //..............list is empty..............//
        {
                printf("list is empty\n");
                return;
        }
        temp=head;        //.......list contains nodes..........//
        while(temp!=NULL)  //.........traverse............//
        {
                printf("%d\n",temp->data);
                temp=temp->link;
        }
}
void create_list(int *iptr,int n)
{
        int i;
        struct node *ptr,*start=NULL,*previous,*temp;
        for(i=0;i<n;i++)
        {
                ptr=(struct node *)malloc(1*sizeof(struct node));
                if(ptr==NULL)
                {
                        printf("failed to allocate memory\n");
                        exit(2);
                }
                ptr->data=iptr[i];
                ptr->link=NULL;
                if(start==NULL)
                        start=ptr;
                else
                        previous->link=ptr;
                previous=ptr;
        }
        if(head==NULL)
        {
                head=start;
                return;
        }
        temp=head;
        while(temp->link!=NULL)
        {
                temp=temp->link;
        }
        temp->link=start;
}
void bubble_sorting_link()
{
        struct node *p,*q,*r,*temp,*e;
	for(e=NULL;head->link!=e;e=q)
	{
        for(r=p=head;p->link!=e;r=p,p=p->link)
        {
		q=p->link;
                 if(p->data>q->data)
		 {
                         p->link=q->link;
                         q->link=p;
                          if(p!=head)
                           r->link=q;
                           else
                               head=q;
                                temp=p;
                                p=q;
                                q=temp;
                        }
                }
        }
}

