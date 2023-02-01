//.......................................single linked list operations............................//

#include<stdio_ext.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *head=NULL;

void add_at_beginning(int num); //.........function declaration.........//
void delete_at_beginning();
void display(); 
void count();
int search(int num);
void delete_list();
void add_at_last(int num);
void delete_at_last();
void add_after_node(int num,int val);
void delete_particular_node(int num);
void add_beforeanode(int num,int val);
void reverse_list();
void create_list(int *iptr,int n);
void swap_data(int num,int val);
void swap_link(int num,int val);
void delete_duplicatenode();
void main()

{
	int num,i,val,pos=0,opt,q;
	int *ptr;
	while(1)
	{
		printf("menu\n0.exit\n1.add_at_beginning\n2.delete_at_beginning\n3.display\n4.count\n5.search\n6.delete_list\n7.add_at_last\n8.delete_at_last\n9.add_after_node\n10.delete_particular_node\n11.add_beforeanode\n12.reverse_list\n13.create_list\n14.swap_data\n15.swap_link\n16.delete_duplicatenode\n");
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
			case 6:delete_list();
			       break;
			case 7:printf("enter the input\n");
			       scanf("%d",&num);
			       add_at_last(num);
			       break;
			case 8:delete_at_last();
			       break;
			case 9:printf("enter the inputs\n");
			       scanf("%d-%d",&num,&val);
			       add_after_node(num,val);
			       break;
			case 10:delete_particular_node(num);
				break;
			case 11:add_beforeanode(num,val);
				break;
			case 12:reverse_list();
				break;
			case 13:printf("enter the no.of elements in q\n");
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
			case 14:printf("enter the elements to be swapped\n");
				scanf("%d-%d",&num,&val);
				swap_data(num,val);
				break;
			case 15:printf("enter the elements to be swapped\n");
                                scanf("%d-%d",&num,&val);
                                swap_link(num,val);
                                break;
			case 16:delete_duplicatenode();
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
		return;
	}
	temp=head;   //.........list contains nodes.....//
	while(temp!=NULL) //....traverse.....//
	{
		count++;
		temp=temp->link;
	}
		printf("number of elmenets %d\n",count);
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
//	printf("element not found \n");
	return 0;
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
void add_at_last(int num)
{
	struct node *temp;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));        //........addatlast allocate the memory dynmically.......//
	ptr->data=num;   //......... request the memory for new node.......//
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
		return;
	}
	temp=head; //.....list contains nodes.........//
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=ptr;  //.......list contains last node i.e. newly added node..........//
}
void delete_at_last()
{
	struct node *previous,*current;  //.........it contains 2 pointers......//
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==NULL)       //......it contains single node   and also verified with first node  ..........//
	{
		free(head);
		head=NULL;
		return;
	}
	previous=head;
	current=head->link;
	while(current->link!=NULL)
	{
		previous=current;
		current=current->link;     //......deallocate the last node..........//
	}
	free(current);
	previous->link=NULL;      //.........last node update with null...........//
}
void add_after_node(int num,int val)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
		struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
			ptr->data=val;
			ptr->link=temp->link;
			temp->link=ptr;
			return;
		}
		temp=temp->link;
	}

}
void delete_particular_node(int num)
{
	struct node *previous,*current;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==num)  //single node//
	{
		if(head->link==NULL)
		{
			free(head);
			head=NULL;
			return;
		}
		current=head;
		head=head->link;
		free(current);
		return;
	}
	previous=head;
	current=head->link;
	while(current!=NULL)
	{
		if(current->data==num)
		{
			previous->link=current->link;
			free(current);
			return;
		}
		previous=current;
		current=current->link;
	}
	printf("element not found\n");
}
void add_beforeanode(int num,int val)
{
	struct node *previous,*current,*ptr;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==num)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
	ptr->data=val;
	ptr->link=head;
	head=ptr;
	return;
	}
	previous=head;
	current=head->link;
	while(current!=NULL)
	{
		if(current->data==num)
		{
			ptr=(struct node *)malloc(1*sizeof(struct node));
			ptr->data=val;
			ptr->link=current;
			previous->link=ptr;
			return;
		}
		previous=current;
		current=current->link;
	}
	printf("element not found\n");

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
void swap_link(int num,int val)
{
	int pos1=0,pos2=0;
	struct node *p,*q,*s,*r,*temp;
	if(num==val)
		return;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	p=q=head;
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
		s=r;
		r=temp;
	}
	if(p->link!=q)
	{
		temp=p->link;
		p->link=q->link;
		q->link=temp;
		if(p!=head)
			r->link=q;
		else
			head=q;
		s->link=p;
		return;
	}
	else
	{
		p->link=q->link;
		q->link=p;
		if(p!=head)
			r->link=q;
		else
			head=q;
		return;
	}
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
