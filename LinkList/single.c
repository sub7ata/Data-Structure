#include<stdio.h>
#include<stdlib.h>
struct node
{
	int a;
	struct node *next;
}*value;
void Display(struct node *disp);
//void Creation(struct node *start);
void Append(struct node *start);
void InsertFirst(struct node *start);
void InsertAnyPosition(struct node *start);
void InsertLast(struct node *start);
void SearchPosition(struct node *start);
void DeleteFirst(struct node *start);
void DeleteAnyPosition(struct node *start);
void DeleteLast(struct node *start);
void UpdateFirst(struct node *start);
void UpdateAnyWhere(struct node *start);
void UpdateLast(struct node *start);
void Count(struct node *start);
void Reverse(struct node *start);
void Selection(struct node *start);
int main(void)
{	
	int choice;
	while(1)
	{
	printf("\n\n**********MENU**********\n");
	//printf("1.Insert:\n");
	printf("1.Append List:\n");
	printf("2.Insert First:\n");
	printf("3.Insert Any Position:\n");
	printf("4.Insert Last:\n");
	printf("5.Delete First:\n");
	printf("6.Delete Any Position:\n");
	printf("7.Delete Last:\n");
	printf("8.Update First:\n");
	printf("9.Update Any Where:\n");
	printf("10.Update Last:\n");
	printf("11.Count:\n");
	printf("12.Reverse:\n");
	printf("13.Search element position:\n");
	printf("14.Selection sort:\n");
	printf("99.Display:\n");
	printf("0.Exit:\n");
	printf("*****Enter your choice:*****\n\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		//Creation(value);
		Append(value);
		break;	
		case 2:
		InsertFirst(value);
		break;
		case 3:
		InsertAnyPosition(value);
		break;
		case 4:
		InsertLast(value);
		break;
		case 5:
		DeleteFirst(value);
		break;
		case 6:
		DeleteAnyPosition(value);
		break;
		case 7:
		DeleteLast(value);
		break;
		case 8:
		UpdateFirst(value);
		break;
		case 9:
		UpdateAnyWhere(value);
		break;
		case 10:
		UpdateLast(value);
		break;
		case 11:
		Count(value);
		break;
		case 12:
		Reverse(value);
		break;
		case 13:
		SearchPosition(value);
		break;
		case 14:
		Selection(value);
		break;
		case 99:
		Display(value);
		break;
		case 0:
		exit(1);
		break;
		default:
		printf("Wrong Choice:");	
	}
	}
return 0;
}
void Display(struct node *disp)
{
	if(disp==NULL)
	{
		printf("\nError! List is empty to display for data:");
    	}
    	else
    	{
    		printf("\nList elements are:\n\n");
    		while(disp!=NULL)
    		{
        		printf("%d->",disp->a);
        		disp=disp->next;
    		}
    	}
}
/*void Creation(struct node *start)
{
	struct node *head=0;
	int i,num;
	printf("Enter how many node create:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(head==NULL)
		{
		start=(struct node *)malloc(sizeof(struct node));
		printf("Enter data %d:",i);
		scanf("%d",&start->a);
		start->next=NULL;
		head=start;
		value=head;
		}
		else
		{
		start=(struct node *)malloc(sizeof(struct node));
		printf("Enter data %d:",i);
		scanf("%d",&start->a);
		start->next=NULL;
		head->next=start;
		head=start;
		}
	}
}*/
void Append(struct node *start)
{
	struct node *head=0,*create,*temp;
	create=(struct node *)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&create->a);
	create->next=NULL;
	if(start==NULL)
	{
		head=create;
		value=head;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;	
		}
		temp->next=create;
		printf("\nSucessfully Append:\n");
	}
}





void InsertFirst(struct node *start)
{
	struct node *create;
	if(start==NULL)
	{
		printf("\nError! List is empty to Insert first for data:\n");
		return;
	}
	else
	{
	create=(struct node *)malloc(sizeof(struct node));
	printf("Enter data for first insert:");
	scanf("%d",&create->a);
	create->next=start;
	value=create;
	printf("\nSucessfully Insert:\n");
	}
}
void InsertAnyPosition(struct node *start)
{
	struct node *temp,*create;
	if(start==NULL)
	{
		printf("\nError! List is empty for Insert Any Where for data:\n");
		return;
	}
	else
	{
	int count=0,position,i;
	temp=start;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	count++;
	}
	printf("\nEnter any position for insert:");
	scanf("%d",&position);
	if(position<=0||position>count+2)
	{
		printf("Invalid position:");
	}
	else if(position==1)
	{
		InsertFirst(value);
	}
	else if(position==count+1)
	{
		InsertLast(value);
	}
	else
	{
		for(i=1;i<position-1;i++)
		{
			start=start->next;	
		}
		create=(struct node *)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&create->a);
		create->next=NULL;
		create->next=start->next;
		start->next=create;
		printf("\nSucessfully Insert:\n");
	}	
	}
}
void InsertLast(struct node *start)
{
	struct node *create;
	if(start==NULL)
	{
		printf("\nError! List is empty to Insert last for data:\n");
		return;
	}
	else
	{
		create=(struct node *)malloc(sizeof(struct node));
		printf("Enter data for last insert:");
		scanf("%d",&create->a);
		create->next=NULL;
		while(start->next!=NULL)
		{
			start=start->next;
		}
		start->next=create;
		printf("\nSucessfully Insert\n");
	}
}

void SearchPosition(struct node *start)
{
	int num,count=1;
	if(start==NULL)
	{
		printf("\nError! List is empty to Search position for data:\n");
		return;
	}
	else
	{
		printf("Enter the element for find position:");
		scanf("%d",&num);
		while(start!=NULL)
		{
			if(start->a==num)
			{
				printf("\nPosition is %d:",count);
			}
			start=start->next;
			count++;
		}
		printf("\nSucessfully Search:\n");
	}	
}
void DeleteFirst(struct node *start)
{
	if(start==NULL)
	{
		printf("\nError! List is empty to Delete first for data:\n");
		return;
	}
	else
	{
		value=start->next;
		free(start);
		printf("First node deleted:\n");
	}
}

void DeleteAnyPosition(struct node *start)
{
	int count=1,position,i;
	struct node *temp,*z;
	if(start==NULL)
	{
		printf("\nError! List is empty to Delete Any Where for data:\n");
		return;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			count++;
		}
		printf("Enter position for deleting:\n ");
		scanf("%d",&position);
		if(position<=0||position>count)
		{
			printf("Invalid position deleting imposiable:\n");
		}
		else if(position==1)
		{
			DeleteFirst(value);
		}
		else if(position==count)
		{
			DeleteLast(value);
		}
		else
		{
			for(i=1;i<position-1;i++)
			{
				start=start->next;		
			}
			z=start->next;
			start->next=z->next;
			free(z);
			printf("\n %d node are deleted:\n",position-1);
		}
	}

}


void DeleteLast(struct node *start)
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nError! List is empty to Delete Last for data:\n");
		return;
	}
	else
	{
		if(start->next==NULL)
		{
			DeleteFirst(value);
		}
		else
		{
			while(start->next->next!=NULL)
			{
				start=start->next;
			}
			temp=start->next;
			start->next=NULL;
			free(temp);
			printf("Last node deleted:\n");
		}
	}
}

void UpdateFirst(struct node *start)
{
	if(start==NULL)
	{
		printf("\nError! List is empty to Update First:\n");
		return;
	}
	else
	{
	printf("Enter the element for first update:");
	scanf("%d",&start->a);
	printf("\nSucessfully Updated\n");
	}
}

void UpdateAnyWhere(struct node *start)
{
	int count=1,position,i;
	struct node *ch;
	
	if(start==NULL)
	{
		printf("\nError! List id empty to Update Any Where for data:\n");
		return;
	}
	else
	{
		ch=start;
		while(ch!=NULL)
		{
		ch=ch->next;
		count++;
		}
		printf("Enter update position:\n");
		scanf("%d",&position);
		if(position<=0||position>count)
		{
			printf("Invalid position:\n");
		}
		else if(position==1)
		{
			UpdateFirst(value);
		}
		else if(position==count)
		{
			UpdateLast(value);
		}
		else
		{
			for(i=1;i<position;i++)
			{
				start=start->next;
			}
			printf("Enter new element:\n");
			scanf("%d",&start->a);
			printf("\nSucessfully Updated\n");
		}
	}
}

void UpdateLast(struct node *start)
{
	struct node *ch;
	if(start==NULL)
	{
		printf("\nError! List is empty to Update Last for data:\n");
		return;
	}
	else
	{
		ch=start;
		while(ch->next!=NULL)
		{
			ch=ch->next;
		}
		printf("Enter the element for last update:");
		scanf("%d",&ch->a);
		printf("\nSucessfully Updated\n");
	}
}

void Count(struct node *start)
{
	int count=1;
	struct node *ch;
	if(start==NULL)
	{
		printf("\nError! List is empty to Count for data:\n");
		return;
	}
	else
	{
		ch=start;
		while(ch->next!=NULL)
		{
			ch=ch->next;
			count++;
		}
		printf("Total node number: %d\n",count);
	}
}


void Reverse(struct node *start)
{
struct node *currNode,*preNode,*nextNode;
	if(start==NULL)
	{
		printf("Error! List is empty to Reverse for data:");
		return;
	}
	else
	{
		if(start->next!=NULL)
		{
			currNode=start;
			nextNode=currNode->next;
			start->next=NULL;
    			while(nextNode->next!=NULL)
    			{
        			preNode=nextNode->next;
        			nextNode->next=currNode;
        			currNode=nextNode;
        			nextNode=preNode;
    			}
			nextNode->next=currNode;
			value=nextNode;
		}	
		printf("Sucessfully Reversed:\n");
	}
}

void Selection(struct node *start)
{
	struct node *p,*q,*temp;
	p=start;
	for(p=start;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		if(p->next > q->next)
		{
			temp=p->next;
			p->next=q->next;
			q->next=temp;
		}
		value=start;
		printf("\nHello\n");	
	}
}






