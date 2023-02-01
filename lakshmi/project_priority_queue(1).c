//..........................project   priority  queue  ...............//

/*NAME:P.V.V.Lakshmi Devi
MISS ID_No:MISSES0431*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *previous;
	int data;
	int priority;
	struct node *next;
};
struct node *head=NULL;
void insert(int num,int priority);
void display();
void priority_display(int priority);
void create_list();
void selection_sort_data();
void selection_sort_link();
void delete_all();
void delete_begin();
void delete_priority_data(int num,int priority);
void delete_priority(int priority);
void main()
{
	int num,opt,priority;
	int i,q,n;
	int *ptr;
	while(1)
	{
		printf("..........................................\n");
		printf("\nmenu\n0.exit\n1.insert\n2.display\n3.prioritydisplay\n4.createlist\n5.selection_sort_data\n6.selection_sort_link\n7.deleteall\n8.deleteatbegin\n9.deletebydataandpriority\n10.deletebypriority\n");
		printf("enter the option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			       break;
			case 1:printf("enter the number\n");
			       scanf("%d",&num);
			       printf("enter the priority\n");
			       scanf("%d",&priority);
			       insert(num,priority);
			       break;
			case 2:display();
			       break;
			case 3:printf("enter the priority\n");
			       scanf("%d",&priority);
			       priority_display(priority);
			       break;
			 case 4:create_list();
				       break;
			case 5:selection_sort_data();
			       break;
			case 6:selection_sort_link();
			       break;
			case 7:delete_all();
			       break;
			case 8:delete_begin();
			       break;
			case 9:printf("enter the number\n");
			       scanf("%d",&num);
			       printf("enter the priority\n");
			       scanf("%d",&priority);
			       delete_priority_data(num,priority);
			       break;
			case 10:printf("enter the priority\n");
				scanf("%d",&priority);
			        delete_priority(priority);
				break;
			default:printf("invalid option\n");
		}
	}
}
void insert(int num,int priority)
{
	struct node *temp,*constant;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate to memory in heap\n");
		exit(1);
	}
	ptr->data=num;
	ptr->priority=priority;
	if(head==NULL)              //......queue empty........//
	{
		ptr->previous=NULL;
		ptr->next=NULL;
		head=ptr;
		return;
		
	}
	temp=head;
	while(temp!=NULL)
	{
		if(priority<temp->priority)  //...add after node....//
			break;
			constant=temp;
			temp=temp->next;
			
	}
	if(temp==NULL)    //....last node.......//
	{
	ptr->previous=constant;
	ptr->next=constant->next;
	constant->next=ptr;
	return;
	}
	
	else   //..........add before node..........//
	{
		ptr->previous=temp->previous;
		ptr->next=temp;
		if(temp!=head)
			temp->previous->next=ptr;
		if(temp==head)
			head=ptr;
		temp->previous=ptr;
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("data=%d\t,priority=%d\t\n",temp->data,temp->priority);
		temp=temp->next;
	}
}
void priority_display(int priority)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	
	{
		if(temp->priority==priority)
		printf("data=%d\t,priority=%d\t\n",temp->data,temp->priority);
		temp=temp->next;
	}
	
}
void create_list()
{
	int i,priority,num,q;

	printf("enter the no.of elements in q\n");
	 scanf("%d",&q);
	 for(i=0;i<q;i++)
	  {
		  printf("enter the input\n");
		  scanf("%d",&num);
		  printf("enter the priority\n");
		 scanf("%d",&priority);
		 insert(num,priority);
	  }
}
void selection_sort_data()
{
	struct node *p,*q;
	int temp;
	for(p=head;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->priority==q->priority)
			{
				if(p->data>q->data)
				{
					temp=p->data;
					p->data=q->data;
					q->data=temp;
				}
			}
			else 
				continue;
		}
	}
}
void selection_sort_link()
{
	struct node *p,*q,*temp;
	for(p=head;p->next!=NULL;p=p->next)
        {
                for(q=p->next;q!=NULL;q=q->next)
                {
                        if(p->priority==q->priority)
                        {
                                if(p->data>q->data)
                                {
					if(p->next!=q)   //.......non adjacent nodes.....//
					{
						temp=p->previous;
						p->previous=q->previous;
						q->previous=temp;
						temp=p->next;
						p->next=q->next;
						q->next=temp;
						p->previous->next=p;
						q->next->previous=q;
						if(p!=head)
						{
							q->previous->next=q;
						}
						else
							head=q;
						return;
					}
					else                                  //.....adjacent nodes........//
						q->previous=p->previous;
					p->previous=q;
					p->next=q->next;
					q->next=p;
					if(p->next!=NULL)
					p->next->previous=p;
					if(p!=head)
					{
						q->previous->next=q;
					}
					else
						head=q;
				}
				temp=p;
				p=q;
				q=temp;
			}
		}
	}
}






void delete_all()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		head=temp->next;
		free(temp);
		temp=temp->next;
	}
}
void delete_begin()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty\n");
		return;
	}
                temp=head;	
		head=head->next;
		head->previous=NULL;
		free(temp);
}
void delete_priority_data(int num,int priority)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	if((head->priority==priority)&&(head->data==num))
	{
		if(head->next==NULL)    //.....first node contains null.......//
		{
			free(head);
			head=NULL;
			return;
		}
		temp=head;            //........it is also a first node but it contains next node base address...........//
		head=head->next;
		head->previous=NULL;
		free(temp);
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if((temp->priority==priority)&&(temp->data==num))   //..........middle node.........//
		{
			temp->next->previous=temp->previous;
			temp->previous->next=temp->next;
			free(temp);
			return;
		}
		temp=temp->next;
	}
	if(temp->next==NULL)        //.........last node.......//
	{
		temp->previous->next=temp->next;
		free(temp);
		return;
	}
	printf("element not found\n");
}
void delete_priority(int priority)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	if(priority<head->priority)
	{
		if(head->next==NULL)
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
	temp=head;
	while(temp!=NULL)
	{
		if(priority>temp->priority)
		{
			temp->next->previous=temp->previous;
			temp->previous->next=temp->next;
			free(temp);
			return;
		}
		temp=temp->next;
	}
	if(temp==NULL)
	{
		temp->previous->next=temp->next;
		free(temp);
		return;
	}
	printf("element not found\n");
}







