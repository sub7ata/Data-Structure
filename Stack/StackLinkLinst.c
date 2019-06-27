#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=0;
int push(struct node *value);
void peek(struct node *start);
void pop(struct node *start);
void display(struct node *value);
struct node
{
	int data;
	struct node *link;
}*value;
int main()
{

	int choice;
	while(1)
	{
		printf("\n**********MENU**********\n");
		printf("1.PUSH:\n");
		printf("2.POP:\n");
		printf("3.PEEK:\n");
		printf("4.DISPLAY:\n");
		printf("5.QUIT:\n");
		printf("*****ENTER YOUR CHOICE*****\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push(value);
			break;
			case 2:
			pop(value);
			break;
			case 3:
			peek(value);
			break;
			case 4:
			display(value);
			break;
			case 5:
			exit(1);
			default:
			printf("Wrong Choice:\n");
		}
		
	}
	return 0;
}

int push(struct node *start)
{
	struct node *temp,*ptr;
	temp=start;
	if(top==MAX)	
	{
		printf("\nOverflow! Stack is full:\n");
	}
	else if(start==NULL)
	{	top++;
		ptr=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\n");
		scanf("%d",&ptr->data);
		ptr->link=NULL;
		temp=ptr;
		value=temp;
		printf("\nPush Sucessfull!\n");
	}
	else
	{	top++;
		ptr=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\n");
		scanf("%d",&ptr->data);
		ptr->link=NULL;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=ptr;
		start=temp;
		printf("\nPush Sucessfull!\n");
	}
	
}

void display(struct node *start)
{	
	struct node *temp;
	temp=start;
	if(temp==NULL)
	{
		
		printf("List is empty:\n");
		return;
	}
	else
	{	
		printf("\nTop-%d\n\n",top);
		while(temp!=NULL)
		{
			printf("[%d]->",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}	
}

void peek(struct node *start)
{
	struct node *temp;
	temp=start;
	if(start==NULL)
	{
		printf("\nList is empty!\n");
		return;
	}
	else
	{
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}		
		printf("\nTop- %d\n",top);
		printf("\n[%d]",temp->data);
		printf("\n");
	}
}

void pop(struct node *start)
{
	struct node *temp,*next;
	temp=start;
	if(start==NULL && top==0)
	{
		printf("\nUnderflow! List is empty:\n");
		return;
	}
	else if(top==1)
	{
		top=top-1;
		free(temp);
		temp=NULL;
		value=temp;
		printf("\nPop Sucessfull!\n");
	}
	else
	{
		top=top-1;
		while(temp->link->link!=NULL)
		{
			temp=temp->link;
		}
		next=temp->link;
		free(next);
		temp->link=NULL;
		start=temp;
		printf("\nPop Sucessfull!\n");
	}
	
}









