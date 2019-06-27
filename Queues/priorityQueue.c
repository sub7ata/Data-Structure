#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node
{
	int priority;
	int data;
	struct node *link;
}*front=NULL;
int main()
{
	int choice;
	while(1)
	{
		printf("\n**********MENUE**********\n");
		printf("1.INSERT:\n");
		printf("2.DELETE:\n");
		printf("3.DISPLAY:\n");
		printf("0.QUIT:\n");
		printf("****ENTER YOUR CHOICE****\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			insert();
			break;
			case 2:
			delete();
			break;
			case 3:
			display();
			break;
			case 0:
			exit(1);
			default:
			printf("Wrong Choice\n");
		}
	}
}
void insert()
{
	struct node  *temp,*ptr;
	ptr=front;
	if(ptr==NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter priority:\n");
		scanf("%d",&temp->priority);
		printf("Enter data:\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		ptr=temp;
		front=ptr;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter priority:\n");
		scanf("%d",&temp->priority);
		printf("Enter data:\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(temp->priority<ptr->priority)
		{
			temp->link=ptr;
			front=temp;
		}
		else
		{	while(ptr->link!=NULL)
			{
				ptr=ptr->link;
			}
			ptr->link=temp;		
		}	
	}
	printf("Sucessfull insert:\n");
}
void delete()
{
	if(front==NULL)
	{
		printf("Queue is empty! Delete is impossiable:\n");
		return;
	}
	struct node *temp,*pre;
	temp=front;
	pre=temp->link;
	free(temp);
	front=pre;

	printf("Sucessfull delete:\n");
}
void display()
{
	struct node *temp;
	temp=front;
	if(temp==NULL)
	{
		printf("Queue is empty!\n");
		return;
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
	}
}















