//............................................STACK ---->>>>>>>>>>SINGLE LINKED LIST OPERATIONS................................/////////////////

#include<stdio_ext.h>
#include<stdlib.h>
void add_at_beginning(int num); //.........function declaration.........//
void delete_at_beginning();
void display();
void count();
int search(int num);
void reverse_list();
void swap_data(int num,int val);
void delete_duplicatenode();
void delete_list();
void create_list(int *iptr,int n);
void create_stack(int *iptr,int n);
struct node
{
        int data;
        struct node *link;
};
struct node *head=NULL;
void main()
{
        int num,i,val,pos,opt,n,q;
        int *ptr;
        while(1)
	{
		printf("menu\n0.exit\n1.add_at_beginning\n2.delete_at_beginning\n3.display\n4.count\n5.search\n6.reverse_list\n7.swap_data\n8.delete_duplicatenode\n9.delete_list\n10.create_list\n11.create_stack\n");
		printf("enter the option\n");
		scanf("%d",&opt);
		__fpurge(stdin);
		switch(opt)
		{
			case 0:exit(0);
                               break;
                        case 1:printf("enter the data\n");
                               scanf("%d",&num);
                               add_at_beginning(num);        //..........function call.........//
                               break;
                        case 2:delete_at_beginning();
                               break;
                        case 3:display();
                               break;
                        case 4:count();
                               break;
                        case 5:printf("enter the input\n");
                               scanf("%d",&num);
                               pos=search(num);
                               if(pos!=0)
                               {
                                       printf("element found at %d\n",pos);
                               }
                               else
                               {
                                       printf("element not  found at %d\n",pos);
                               }
                               break;
		       	case 6:reverse_list();
                                break;
		       	case 7:printf("enter the elements to be swapped\n");
                                scanf("%d-%d",&num,&val);
                                swap_data(num,val);
                                break;
		       	case 8:delete_duplicatenode();
                                break;
		       	case 9:delete_list();
                               break;
		      	case 10:printf("enter the no.of elements in q\n");
                                scanf("%d",&q);
                                ptr=(int *)malloc(q*sizeof(int));
                                if(ptr==NULL)
                                        exit(1);
                                for(i=0;i<q;i++)
                                {
                                        printf("enter the input\n");
                                        scanf("%d",&ptr[i]);
                                }
                                create_list(ptr,q);
                                free(ptr);
                                break;
			case 11:printf("enter the number\n");
				scanf("%d",&num);
				create_stack(ptr,n);
				break;
			default:printf("invalid option\n");
				break;
		}
	}
}
//.................function defintion for single linked list operations...................//

void add_at_beginning(int num)

{
        struct node *ptr=(struct node *)malloc(1*sizeof(struct node));  //.........dynamically allocate.........//
        if(ptr==NULL)    //..........list is empty
        {
                printf("failed to allocate memory\n");
                exit(1);
        }
        ptr->data=num;       //..........list contains nodes...........//
        ptr->link=head;
        head=ptr;
}
void delete_at_beginning()
{
        struct node *temp;
        if(head==NULL)   //........list is empty.........//
        {
                printf("list is empty\n");
                return;
        }
        temp=head;   //......list contains single node.....//
        head=head->link;    //......list contains nodes....//
        free(temp);
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
void count()
{
        struct node *temp;
        int count=0;
        if(head==NULL)    //..........list is empty......//
        {
                printf("list is empty\n");
                return ;
        }
        temp=head;   //.........list contains nodes.....//
        while(temp!=NULL) //....traverse.....//
        {
                count++;
	       	temp=temp->link;
        }
		printf("number of elements %d\n",count);
}
int  search(int num)
{
        struct node *temp;
        int pos=0;
        if(head==NULL)       //..........list is empty.......//
        {
                printf("list is empty\n");
                return pos;
        }
        temp=head;    //.........list contains nodes..........//
        while(temp!=NULL)
        {
                pos++;
                if(temp->data==num)
                {
                        return pos;
                }
                        temp=temp->link;
        }
        return 0;
}
void reverse_list()
{
        struct node *previous,*current,*next;
        if(head==NULL)
        {
                printf("list is empty\n");
                return;
        }
        previous=NULL;
        current=head;
        while(current!=NULL)
        {
                next=current->link;
                current->link=previous;
                previous=current;
                current=next;
        }
        head=previous;
}
void swap_data(int num,int val)
{
        int temp;
        struct node *p1,*p2;
        if(head==NULL)
        {
                printf("list is empty\n");
                return;
        }
        p1=p2=head;
        while(p1!=NULL)
        {
                if(p1->data==num)
                        break;
                p1=p1->link;
        }
        while(p2!=NULL)
        {
                if(p2->data==val)
                        break;
                p2=p2->link;
        }
        if((p1==NULL)||(p2==NULL))
        {
                printf("data not found\n");
                return;
        }
        temp=p1->data;
        p1->data=p2->data;
        p2->data=temp;
}
void delete_duplicatenode()
{
        struct node *p,*q,*s,*temp;
        if(head==NULL)
        {
                printf("list is empty\n");
                return;
        }
        for(p=head;p!=NULL;p=p->link)
        {
                for(s=p,q=p->link;q!=NULL;s=q,q=q->link)
                {
                        if(p->data==q->data)
                        {
                                s->link=q->link;
                                free(q);
                                q=s;
                        }
                }
        }
}
void delete_list()
{
        struct node *temp;
        if(head==NULL)  //.........list is empty......//
        {
                printf("list is empty\n");
                return;
        }
        while(head!=NULL)
        {
                temp=head; //..........list contains nodes.....//
                head=head->link;
                free(temp);
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
void create_stack(int *iptr,int n)
{
	int i;
	struct node *ptr;
	for(i=0;i<n;i++)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		ptr->data=iptr[i];
		ptr->link=head;
		head=ptr;
	}
}
