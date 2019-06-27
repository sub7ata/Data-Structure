#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int rear=-1;
int front=-1; 
void enQueue();
void deQueue();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\n************MENU************\n");
		printf("1.INSERT:\n");
		printf("2.PEEK:\n");
		printf("3.DELETE:\n");
		printf("4.DISPLAY:\n");
		printf("0.QUIT:\n");
		printf("******ENTER YOUR CHOICE*********\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			enQueue();
			break;
			case 2:
			break;
			case 3:
			deQueue();
			break;
			case 4:
			display();
			break;
			case 0:
			exit(1);
			break;
			default:
			printf("Wrong Choice!");
		}
	}
	return 0;
}

void enQueue()
{
	int item;
	if(front==0&&rear==MAX-1||(front==rear+1))
	{
		printf("\nError! Overflow:\n");
		return;
	}
	else if(rear==-1)
	{
		rear++;
		front++;;
	}
	else if(rear==MAX-1 && front>0)
	{
		rear=0;
	}
	else
	{
		rear+=1;	
	}
		printf("\nEnter Data:\n");
		scanf("%d",&item);
		arr[rear]=item;
		printf("\nSucessfully enqueue:\n");
}

void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\nError! Underflow:\n");
		return;
	}
	if(front<=rear)
	{
		printf("\nFront-%d, Rear-%d\n",front,rear);
		for(i=front;i<=rear;i++)
		{
			printf("[%d]->",arr[i]);
		}
	}
	else
	{	printf("\nFront-%d, Rear-%d\n",front,rear);
		for(i=front;i<=MAX-1;i++)
		{
			printf("[%d]->",arr[i]);
		}
		for(i=0;i<=rear;i++)
		{
			printf("[%d]->",arr[i]);
		}
	}
}
void deQueue()
{
	if(front==-1)
	{
		printf("\nError! Underflow:\n");
		return;
	}
	else if(front==rear)
	{
		rear=-1;
		front=-1;
	}
	else if(front==MAX-1)
	{
		front=0;
	}
	else
	{
		front+=1;
	}
	printf("\nSucessfully Dequeue:\n");
}














