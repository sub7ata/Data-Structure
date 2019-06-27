#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int STK[MAX];
int top_A=-1;
int top_B=-1;
void push_A();
void push_B();
void pop_A();
void pop_B();
void display();
int main(void)
{
	int choice;
	while(1)
	{
		printf("\n***********MENU************\n");
		printf("1.PUSH:\n");
		printf("2.PUSH-2:\n");
		printf("3.POP:\n");
		printf("4.POP-2:\n");
		printf("5.Display.\n");
		printf("0.Quit:\n");
		printf("*****ENTER YOUR CHOICE*****\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push_A();
			break;
			case 2:
			push_B();
			break;;
			case 3:
			pop_A();
			break;
			case 4:
			pop_B();
			break;
			case 5:
			display();
			break;
			case 0:
			exit(1);
			default:
			printf("\nWorng Choice:\n");
		}
	}
	return 0;
}

void push_A()
{	
	int data;
	if(top_A+1==top_B||top_A+1==MAX)
	{
		printf("Overflow!\n");
		return;
	}
	else
	{
		
		top_A+=1;
		printf("Enter Data:\n");
		scanf("%d",&data);
		STK[top_A]=data;
	}
}

void push_B()
{
	int data;
	if(top_B==top_A+1||top_A+1==MAX)
	{
		printf("Overflow!\n");
		return;
	}
	else
	{
		if(top_B==-1)
		{
			top_B=MAX;
			top_B-=1;
			printf("Enter Data:\n");
			scanf("%d",&data);
			STK[top_B]=data;
		}
		else
		{
			top_B-=1;
			printf("Enter Data:\n");
			scanf("%d",&data);
			STK[top_B]=data;
		}
	}
}
void pop_A()
{
	if(top_A==-1)
	{
		printf("\nStack-1 is empty!\n");
		return;
	}
	else
	{
		top_A-=1;
		printf("\nPOP of Stack-1 is Sucessfully!\n");
	}
}
void pop_B()
{
	if(top_B==MAX||top_B==-1)
	{
		printf("\nStack-2 is empty!\n");
	 	return;
	}
	else
	{	if(top_B+1==MAX)
		{
			top_B=-1;
			printf("\nPOP of Stack-2 is Sucessfully!\n");
		}
		else
		{
			top_B+=1;
			printf("\nPOP of Stack-2 is Sucessfully!\n");
		}
	}
}
void display()
{
	int i,j;
	if(top_A==-1&&top_B==-1||top_A==-1&&top_B==MAX)
	{
		printf("\nUnderflow!\n");
		return;
	}
	else
	{
		printf("Top1: %d, Top2: %d\n\n",top_A,top_B);
		for(i=0;i<=top_A; i++)
		{
			printf("%d->",STK[i]);
		}
		if(top_B==-1)
		{
			return;
		}
		else
		{
			for(j=top_B;j<=MAX-1;j++)
			{
				printf("%d->",STK[j]);
			}
		}
	}
}









