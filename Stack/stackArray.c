#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push(int item);
void pop(int item);
void peek();
void Search();
void SearchData();
void Update();
void Reverse();
void display();
int main(void)
{
	int choice,value;
	while(1)
	{
		printf("\n\n************MENU************\n");
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.PEEK\n");
		printf("4.SEARCH BY POSITION\n");
		printf("5.SEARCH BY DATA\n");
		printf("6.UPDATE\n");
		printf("7.REVERSE\n");
		printf("8.DISPLAY\n");
		printf("0.QUIT\n");
		printf("******ENTER YOUR CHOICE******\n");
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
		peek();
		break;
		case 4:
		Search();
		break;
		case 5:
		SearchData();
		break;
		case 6:
		Update();
		break;
		case 7:
		Reverse();
		break;
		case 8:
		display();
		break;
		case 0:
		exit(1);
		break;
		default:
		printf("\nWronge Choice:\n");
	}
	}
}
void push(int item)
{
	if(top==SIZE-1)
	{
		printf("\nOverflow! Insertion Impossible:\n");
		return;
	}
	else
	{
		top++;
		printf("\nEnter value for insert:\n");
		scanf("%d",&item);
		stack[top]=item;
		printf("\nInsertion/Push Sucessful!:\n");
		return;
	}
}

void pop(int item)
{
	if(top==-1)
	{
		printf("\nUnderfloaw! Delete Imposible:\n");
		return;
	}
	else
	{
		printf("\nDeleted: %d\n",stack[top]);
		top--;
		
	}
}

void peek()
{
	if(top==-1)
	{
		printf("\nStack is Empty! Underflow!\n");
		return;
	}
	else
	{
		int temp;
		temp=stack[top];
		printf("\nTop of the stack- %d\n",temp);
	}
}
void display()
{
	if(top==-1)
	{
		printf("\nStack is empty!\n");
		return;
	}
	else
	{
		int i;
		printf("\nStck data is:\n\n");
		printf("[ ");
		for(i=top;i>=0;i--)
		{
			printf("%d ",stack[i]);
		}
		printf("]");
	}
	printf("\n\nNode- %d",top+1);
}
void Search()
{
	int i,position;
	if(top==-1)
	{
		printf("\nStack is empty!\n");
		return;
	}
	else
	{
		printf("\nEnter position for find data:\n");
		scanf("%d",&position);
		if(position<0||position>top)
		{
			printf("\nInvalid position:\n");
			return;
		}
		else
		{
			for(i=top;i>position;i--);	
			printf("\nData is- %d\n",stack[i]);
		}
	}
}
void SearchData()
{
	int i,position,data,flag=0;
	if(top==-1)
	{
		printf("\nStack is empty!\n");
		return;
	}
	else
	{
		printf("\nEnter data for find position:\n");
		scanf("%d",&data);
		for(i=top;i>=0;i--)
		{
			if(stack[i]==data)
			{
				printf("\nPosition- %d\n",i);
				flag=1;
			}
		}
		if(flag==0)
			{
				printf("\n%d -is not avaliable in stack:\n",data);
				return;
			}
	}
	
}

void Update()
{
	
	int i,position,num;
	if(top==-1)
	{
		printf("\nStack is empty!\n");
		return;
	}
	else
	{
		printf("\nEnter position for Update data:\n");
		scanf("%d",&position);
		if(position<0||position>top)
		{
			printf("\nInvalid position:\n");
			return;
		}
		else
		{
			for(i=top;i>position;i--);	
			printf("\nEnter data for update:\n");
			scanf("%d",&num);
			stack[i]=num;
		}
	}
	printf("\nUpdate Sucessful:\n");
	
}


void Reverse()
{
	int i,j,arr[SIZE];
	if(top==-1)
	{
		printf("\nStack is empty!\n");
		return;
	}
	else
	{
		for(i=top,j=0;i>=0;i--,j++)
		{
			arr[j]=stack[i];
		}
		for(i=0,j=0;i<=top;i++,j++)
		{
			stack[i]=arr[j];
		}
		
	}
	printf("\nReverse Sucessful\n");
}


