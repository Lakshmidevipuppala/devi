//................................circular_single_linked_list..........................................//


#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
void add_begin(int num);
void delete_begin();
void display();
void count();
void add_last(int num);
void delete_last();
void delete_entirelist();
void main()
{
	int num,opt;
	while(1)
	{
		printf("menu\n0.exit\n1.add_begin\n2.delete_begin\n3.display\n4.add_last\n5.delete_last\n6.delete_entirelist\n7.count\n");
		printf("enter the option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			       break;
			case 1:printf("enter the number\n");
			       scanf("%d",&num);
			       add_begin(num);
			       break;
			case 2:delete_begin();
			       break;
			case 3:display();
			       break;
			case 4:printf("enter the number\n");
			       scanf("%d",&num);
			       add_last(num);
			       break;
			case 5:delete_last();
			       break;
			case 6:delete_entirelist();
			       break;
			case 7:count();
			       break;
			default:printf("invalid option\n");
				break;
		}
	}
}
void add_begin(int num)
{
	struct node *temp;
       struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
		ptr->data=num;
	if(head==NULL)
	{
		head=ptr->link=ptr;

		return;
	}
	temp=head;
	while(temp->link!=head)
		temp=temp->link;
	ptr->link=head;
	head=temp->link=ptr;
}

void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	do
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}while(temp!=head);
}
void delete_begin()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==head)
	{
		free(head);
		head=NULL;
		return;
	}
	temp=head;
	while(temp->link !=head)
		temp=temp->link;
	temp->link=head->link;
	free(head);
	head=temp->link;
}
void add_last(int num)
{
	struct node *temp;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
	ptr->data=num;
	if(head==NULL)
	{
		ptr->link=head;
		head=ptr;
		return;
	}
	temp=head;
	while(temp->link!=head)
		temp=temp->link;
	temp->link=ptr;
	ptr->link=head;
}
void delete_last()
{
	struct node *temp,*current,*previous;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link==head)
	{
		free(head);
		head=NULL;
		return;
	}
	current=head->link;
	previous=head;
	while(current->link!=head)
	{
		previous=current;
		current=current->link;
	}
		previous->link=head;
		free(current);
}
void delete_entirelist()
{
	struct node *temp,*temp2;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->link!=head)
	{
		free(head);
		head=NULL;
		return;
	}
	temp2=head;
	do
	{
		temp=head;
	head=head->link;
	free(temp);
	}while(head->link!=temp2);
	free(head);
	head=NULL;
}

void count()
{
        struct node *temp;
	int count=0;
        if(head==NULL)
        {
                printf("list is empty\n");
                return;
        }
        temp=head;
        do
        {
                printf("%d\n",temp->data);
		count++;
                temp=temp->link;
		//count++;
        }while(temp!=head);
}

