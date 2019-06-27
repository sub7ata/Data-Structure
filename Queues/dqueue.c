#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int arr[MAX];
int front=-1;
int rear=-1;
int isFULL();
int isEMPTY();
void insertFront();
void insertRear();
int deleteFront();
int deleteRear();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\n**********MENUE*********\n");
		printf("1.INSERT(front)\n");
		printf("2.INSERT(rear)\n");
		printf("3.DELETE(front)\n");
		printf("4.DELETE(rear)\n");
		printf("9.DISPLAY\n");
		printf("0.QUIT\n");
		printf("*****ENTER YOUR CHOICE****\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			insertFront();
			break;
			case 2:
			insertRear();
			break;
			case 3:
			deleteFront();
			break;
			case 4:
			deleteRear();
			break;
			case 9:
			display();
			break;
			case 0:
			exit(1);
			default:
			printf("Wring Choice:\n");
			
		}
	}
	return 0;
}
int isFULL()
{
	if(front==0&&rear==MAX-1||front==rear+1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int isEMPTY()
{
	if(front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void insertFront()
{
	int data;
	if(isFULL())
	{
		printf("\nOverflow! Insert impossible:\n");
		return;
	}
	else if(front==-1)
	{	
		front=0;
		rear=0;
		printf("\nInsert Data for insert fornt:\n");
		scanf("%d",&data);
		arr[front]=data;
		
	}
	else if(front==0)
	{	front=MAX-1;
		printf("\nInsert Data for insert fornt:\n");
		scanf("%d",&data);
		arr[front]=data;
	}
	else
	{
		front=front-1;
		printf("\nInsert Data for insert fornt:\n");
		scanf("%d",&data);
		arr[front]=data;
	}
	printf("\nFront Insert Sucessfull\n");
}


void insertRear()
{
	int data;
	if(isFULL())
	{
		printf("\nQueue is full!\n");
		return;
	}
	else if(rear==-1)
	{
		rear=0;
		front=0;
		printf("\nInsert Data for insert rear:\n");
		scanf("%d",&data);
		arr[rear]=data;
	}
	else
	{
		rear++;
		printf("\nInsert Data for insert rear:\n");
		scanf("%d",&data);
		arr[rear]=data;
	}
	printf("\nRear Insert Sucessfull\n");
}

int deleteFront()
{
	int data;
	if(isEMPTY())
	{
		printf("\nQueue is FULL!\n");
	}
	
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==MAX-1)
	{
		front=0;
	}	
	else
	{
		front=front+1;
	}
	printf("\nFront Delete Sucessfull\n");
}
int deleteRear()
{
	
	if(isEMPTY())
	{
		printf("\nQueue is empty!\n");
	}
	if(rear==0)
	{
		rear=MAX-1;
	}
	else if(rear==front)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		rear=rear-1;
	}
	printf("\nRear Delete Sucessfull\n");
}
void display()
{
	int i,k;
	if(isEMPTY())
	{
		printf("\nQueue is empty!\n");
		return;
	}
	printf("\nEntered elements are:\n");
	i=front;
	if(front<=rear)
	{
		printf("\nFront-%d, Rear-%d\n",front,rear);
		while(i<=rear)
		{
			printf("%d->",arr[i]);
			i++;
		}
	}
	else
	{	
		printf("\nFront-%d, Rear-%d\n",front,rear);
		k=0;
		while(k<=rear)
		{
			printf("%d->",arr[k]);
			k++;
		}
		
		while(i<=MAX-1)
		{
			printf("%d->",arr[i]);
			i++;
		}
		
	}
	
}




