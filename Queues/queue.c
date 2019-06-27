/*-----Queue-----*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int rear=-1;
int front=-1;
void enQueue();
void peek();
void deQueue();
void display();
int main(void)
{
	int choice;
	while(1)
	{
		printf("\n***********MENU***********\n");
		printf("1.INSERT:\n");
		printf("2.PEEK:\n");
		printf("3.DELETE:\n");
		printf("4.DISPLAY:\n");
		printf("0.QUIT:\n");
		printf("*****ENTER YOUR CHOICE*****\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			enQueue();
			break;
			case 2:
			peek();
			break;	
			case 3:
			deQueue();
			break;
			case 4:
			display();
			break;
			case 0:
			exit(1);
			default:
			printf("\nWrong Choice!\n");
		} 
	}
}

void enQueue()
{
	int item;
	if(rear==MAX-1)
	{
		printf("\nError! OverFlow:\n");
		return;
	}
	else
	{
		if(front==-1)
		front=0;
		printf("\nEnter data:\n");
		scanf("%d",&item);
		rear+=1;
		arr[rear]=item;
	}
}
void display()
{
	int i;
	if(front==-1||front==rear+1)
	{
		printf("\nError! Queue is empty:\n");
		return;
	}
	else
	{
		printf("Front- %d, Rear- %d\n\n",front,rear);
		for(i=front;i<=rear;i++)
		{
			printf("[ %d ]->",arr[i]);
		}
		printf("\n");
	}
}

void deQueue()
{
	if(front==-1||front>rear)
	{
		printf("\nError! Underflow:\n");
		return;
	}
	else
	{
		printf("Element delete from queue is-%d\n",arr[front]);
		front+=1;
	}
}

void peek()
{
	if(front==-1||front>rear)
	{
		printf("\nError! Queue is empty:\n");
		return;
	}
	else
	{
		printf("\n[ %d ]",arr[front]);
	}
}























