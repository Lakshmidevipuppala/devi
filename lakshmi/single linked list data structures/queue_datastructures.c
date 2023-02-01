//............................................QUEUE ---->>>>>>>>>>SINGLE LINKED LIST OPERATIONS................................//

#include<stdio_ext.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *front=NULL;
struct node *rare=NULL;
void insert (int val); //.........function declaration.........//
void delete();
void display();
void count();
int search(int num);
void reverse_queue();
void deleteduplicate_queue();
void delete_particularnode(int num);
void swap_link(int num,int val);
void create_list(int *iptr,int n);
void create_queue(int *iptr,int n);
void main()
{
        int num,i,val,pos,opt,n,q;
        int *ptr;
        while(1)
        {
                printf("menu\n0.exit\n1.insert\n2.delete\n3.display\n4.count\n5.search\n6.reverse_queue\n7.deleteduplicate_queue\n8.delete_particularnode\n9.swap_link\n10.create_list\n11.create_queue\n");
                printf("enter the option\n");
                scanf("%d",&opt);
                __fpurge(stdin);
                switch(opt)
		{
		       
			case 0:exit(0);
                               break;
                        case 1:printf("enter the data\n");
                               scanf("%d",&val);
                               insert(val);        //..........function call.........//
                               break;
                        case 2:delete();
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
                        case 6:reverse_queue();
                                break;
                        case 7:deleteduplicate_queue();
			       break;
                        case 8:printf("enter the number\n");
			       scanf("%d",&num);
			       delete_particularnode(num);
                                break;
                        case 9:printf("enter the elements to be swapped\n");
                               scanf("%d-%d",&num,&val);
			       swap_link(num,val);
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
                                create_queue(ptr,n);
                                break;
                        default:printf("invalid option\n");
                                break;
                }
        }
}
//.........................................function defintion........................................................//

void insert(int val)
{
	//struct node *rare,*front;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	ptr->data=val;
	ptr->link=NULL;
	if(rare==NULL)
	{
		front=rare=ptr;
		return;
	}
	rare->link=ptr;
	rare=ptr;
}
void delete()
{
	struct node *temp;
	if(rare==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	else if(front->link==NULL)
	{
		free(front);
		front=rare=NULL;
		return;
	}
	else
	{
		temp=front;
		front=front->link;
		free(temp);
	}
}
void display()
{
        struct node *temp;
        if(front==NULL)    //..............list is empty..............//
        {
                printf("list is empty\n");
                return;
        }
        temp=front;        //.......list contains nodes..........//
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
        if(front==NULL)    //..........list is empty......//
        {
                printf("list is empty\n");
                return ;
        }
        temp=front;   //.........list contains nodes.....//
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
        if(front==NULL)       //..........list is empty.......//
        {
                printf("list is empty\n");
                return pos;
        }
        temp=front;    //.........list contains nodes..........//
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
void reverse_queue()
{
	struct node *previous,*current,*next;
	if(rare==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	previous=NULL;
	current=front;
	while(current!=NULL)
	{
		next=current->link;
		current->link=previous;
		previous=current;
		current=next;
	}
	rare=front;
	front=previous;
}
void deleteduplicate_queue()
{
	struct node *p,*q,*s;
	if(rare==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	for(p=front;p!=NULL;p=p->link)
	{
		for(s=p,q=p->link;q!=NULL;s=q,q=q->link)
		{
			if(p->data==q->data)
			{
				s->link=q->link;
				if(q==rare)
					rare=s;
				free(q);
			}
			q=s;
		}
	}
}
void delete_particularnode(int num)
{
	struct node *previous,*current,*temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	if(front->data==num)
	{
		if(front->link==NULL)
		{
			free(front);
				front=rare=NULL;
			return;
		}
		temp=front;
		front=front->link;
		free(temp);
		return;
	}
	current=front->link;
	previous=front;
	while(current!=NULL)
	{
		previous->link=current->link;
		if(current==rare)
		{
			rare=previous;
		}
		free(current);
		return;
	}
	previous=current;
	current=current->link;
	}
	printf("element not found\n");
}
void swap_link(int num,int val)
{
        int pos1=0,pos2=0;
        struct node *p,*q,*s,*r,*temp;
        if(num==val)
	{
                return;
	}
        if(front==NULL)
        {
                printf("queue is empty\n");
                return;
        }
        q=p=front;
        while(p!=NULL)
        {
                pos1++;
                if(p->data==num)
                        break;
                r=p;
                p=p->link;
        }
        while(q!=NULL)
        {
                pos2++;
                if(q->data==val)
                        break;
                s=q;
                q=q->link;
        }
        if((p==NULL)||(q==NULL))
        {
                printf("element not found\n");
                return;
        }
        if(pos1>pos2)
        {
                temp=p;
                p=q;
                q=temp;
                temp=r;
                r=s;
                s=temp;
        }
        if(p->link!=q)
        {
                temp=p->link;
                p->link=q->link;
                q->link=temp;
                if(p!=front)
                        r->link=q;
                else
                        front=q;
		s->link=p;
		if(q==rare)
			rare=p;
	}
        else
        {
                p->link=q->link;
                q->link=p;
                if(p!=front)
                        r->link=q;
                else
                        front=q;
		if(q==rare)
			rare=p;
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
        if(front==NULL)
        {
                front=start;
                return;
        }
        temp=front;
        while(temp->link!=NULL)
        {
                temp=temp->link;
        }
        temp->link=start;
}
void create_queue(int *iptr,int n)
{
	int i;
	struct node *ptr;
	for(i=0;i<n;i++)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		ptr->data=iptr[i];
		ptr->link=NULL;
		if(rare==NULL)
			rare=front=ptr;
		rare->link=ptr;
		rare=ptr;
	}
}
