//.................................double linked list data structures........................................//

#include<stdio_ext.h>
#include<stdlib.h>
struct node
{
        struct node *previous;
        int data;
        struct node *next;
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
//void add_after_node(int num,int val);
void delete_particular_node(int num);
//void add_beforeanode(int num,int val);
void reverse_list();
void create_list(int *iptr,int n);
//void swap_data(int num,int val);
//void swap_link(int num,int val);
void delete_duplicatenode();

void main()
{
	int num,i,val,pos,q,opt;
	int *ptr;
	while(1)
	{
		printf("menu \n0.exit \n1.add_at_beginning \n2.delete_at_beginning \n3.display \n4.count \n5.search \n6.delete_list \n7.add_at_last \n8.delete_at_last \n9.add_after_node \n10.delete_particular_node \n11.add_beforeanode \n12.reverse_list \n13.create_list \n14.swap_data \n15.swap_link \n16.delete_duplicatenode \n  ");
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
			/*case 9:printf("enter the inputs\n");
			       scanf("%d-%d",&num,&val);
			       add_after_node(num,val);
			       break;*/
			case 10:printf("enter particular num to delete\n");
				scanf("%d",&num);
				delete_particular_node(num);
				break;
			/*case 11:add_beforeanode(num,val);
				break;*/
			case 12:reverse_list();
				break;
			case 13:printf("enter the no.of elments in q\n");
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
		/*	case 14:printf("enter the elements to be swapped\n");
				scanf("%d-%d",&num,&val);
				swap_data(num,val);
				break;
			case 15:printf("enter the elements to be swapped\n");
                                scanf("%d-%d",&num,&val);
                                swap_link(num,val);
                                break;*/
			case 16:delete_duplicatenode();
				break;
			default:printf("invalid option\n");
				break;

		}
	}
}
void add_at_beginning(int num)
{
	struct node *ptr;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->previous=NULL;
	ptr->next=head;
	if(head!=NULL)
		ptr->next->previous=ptr;
	head=ptr;
}
void delete_at_beginning()
{
	struct node *temp,*next,*previous;
	if(head->next==NULL)  //list empty//
	{
		free(head);
		head=NULL;
		return;
	}
	temp=head;
	head=head->next;
	head->previous=NULL;
	free(temp);
}
void display()
{
	struct node *temp,*next;
	if(head->next==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void count()
{
        struct node *temp;
        int count=0;
        if(head->next==NULL)    //..........list is empty......//
        {
                printf("list is empty\n");
                return;
        }
        temp=head;   //.........list contains nodes.....//
        while(temp!=NULL) //....traverse.....//
        {
                count++;
                temp=temp->next;
        }
                printf("number of elmenets %d\n",count);
}
int  search(int num)
{
        struct node *temp;
        int pos=0;
        if(head->next==NULL)       //..........list is empty.......//
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
                temp=temp->next;
        }
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
        while(head->next!=NULL)
        {
                temp=head; //..........list contains nodes.....//
                head=head->next;
                free(temp);
        }
}


void add_at_last(int num)
{
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	ptr->data=num;
	ptr->next=NULL;
	if(head==NULL)
	{
		ptr->previous=NULL;
		head=ptr;
		return;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->next=ptr;
		ptr->previous=temp;
}
void delete_at_last()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	if(head->next!=NULL)
		temp->previous->next=NULL;
	else
		head=NULL;
	free(temp);
}
void create_list(int *iptr,int n)
{
	int i;
	struct node *start=NULL,*previous,*temp;
	for(i=0;i<n;i++)
	{
		struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
		ptr->data=iptr[i];
		ptr->next=NULL;
		if(start==NULL)
		{
			ptr->previous=NULL;
			start=ptr;
			previous=ptr;
		}
		else
		{
			ptr->previous=previous;
			previous->next=ptr;
			previous=ptr;
		}
	}
	if(head==NULL)
	{
		head=start;
		return;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=start;
	start->previous=temp;

}
void reverse_list()
{
	struct node *temp,*current,*previous,*nxt;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	current=head;
	while(current!=NULL)
	{
		nxt=current->next;
		temp=current->previous;
		current->previous=current->next;
		current->next=temp;
		if(current->previous==NULL)
			head=current;
		current=nxt;
	}
}
void delete_particular_node(int num)
{
	struct node *temp,*previous,*next;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==num)   //first node ----assign--data//
	{
		if(head->next==NULL)  //single node//
		{
		free(head);
		head=NULL;
		return;
		}
		temp=head;
		head=head->next;
		head->previous=NULL;
		free(temp);
		return;
	}
	temp=head->next;
	while(temp!=NULL)  //........middle node....//
	{
		if(temp->data==num)
		{
		temp->previous->next=temp->next;
		if(temp->next!=NULL)    
		{	//....last node.....//
		temp->next->previous=temp->previous;
		free(temp);
		return;
		}
		}
	temp=temp->next;
	}
	printf("element not found\n");
}
void delete_duplicatenode()
{
	struct node *temp,*p,*q;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	for(p=head;p!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->data==q->data)
			{
				temp=q;
				q->previous->next=q->next;
				if(q->next!=NULL)
				q->next->previous=q->previous;
				q=q->previous;
				free(temp);
			}
		}
	}
}



	     	       
