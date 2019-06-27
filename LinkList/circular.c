#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*value;
void Append(struct node *start);
void InsertFirst(struct node *start);
void InsertAnyWhere(struct node *start);
void InsertLast(struct node *start);
void Display(struct node *start);
void DeleteFirst(struct node *start);
void DeleteAnyWhere(struct node *start);
void DeleteLast(struct node *start);
void UpdateFirst(struct node *start);
void UpdateAnyWhere(struct node *start);
void UpdateLast(struct node *start);
void SearchPosition(struct node *start);
void SearchData(struct node *start);
void Reverse(struct node *start);
void Count(struct node *start);
int main()
{
	int choice;
	while(1)
	{
		printf("\n\n****************MENU****************\n");
		printf("1.Append List:\n");
		printf("2.Insert First:\n");
		printf("3.Insert Any Position:\n");
		printf("4.Insert Last:\n");
		printf("5.Search Position:\n");
		printf("6.Delete First:\n");
		printf("7.Delete Any Position\n");
		printf("8.Delete Last:\n");
		printf("9.Search Data:\n");
		printf("10.Update First:\n");
		printf("11.Update Any Position:\n");
		printf("12.Update Last:\n");
		printf("13.Count Node:\n");
		printf("14.Reverse List:\n");
		printf("15.Sorting List:\n");
		printf("99.Display:\n");
		printf("0.Quit:\n");
		printf("*********ENTER YOUR CHOICE*********\n");
		scanf("%d",&choice);
		switch(choice)
			{
				case 1:
				Append(value);
				break;
				case 2:
				InsertFirst(value);
				break;
				case 3:
				InsertAnyWhere(value);
				break;
				case 4:
				InsertLast(value);
				break;
				case 5:
				SearchPosition(value);
				break;
				case 6:
				DeleteFirst(value);
				break;
				case 7:
				DeleteAnyWhere(value);
				break;
				break;
				case 8:
				DeleteLast(value);
				break;
				case 9:
				SearchData(value);
				break;
				case 10:
				UpdateFirst(value);
				break;		
				case 11:
				UpdateAnyWhere(value);
				break;		
				case 12:
				UpdateLast(value);
				break;
				case 13:
				Count(value);
				break;
				case 14:
				Reverse(value);
				break;
				case 15:
				printf("\nUnder constraction:\n");
				break;
				case 99:
				Display(value);
				break;
				case 0:
				exit(1);
				break;
				default:
				printf("\nWorng choice:\n");
			}
		
	}
return 0;
}

void Display(struct node *start)
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nError! List is empty to display for data:\n");
		return;
	}
	temp=start->link;
	printf("\nList is:\n\n");
	do
	{
		printf("%d->",start->data);
		start=start->link;
	}
	while(temp!=start->link);
	printf("\n");
	Count(start);
}
void Append(struct node *start)
{
	struct node *temp,*create,*head=0;
	create=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data:\n");
	scanf("%d",&create->data);
	create->link=NULL;
	if(start==NULL)
	{
		
		
		head=create;
		create->link=head;
		value=head;
	}
	else
	{	temp=start;
		while(temp->link!=start)
		{
			temp=temp->link;
		}
		temp->link=create;
		create->link=start;
	}
	printf("\nSucessfully Append:\n");
}
void InsertFirst(struct node *start)
{
	struct node *current;
	if(start==NULL)
	{
		printf("\nList is empty! Please Append first:\n");
		return;
	}
	else
	{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	current=start;
	while(current->link!=start)
	{
		current=current->link;
	}
	current->link=NULL;
	current->link=temp;
	temp->link=start;
	start=temp;
	value=start;
	}
	printf("\nFirst insert are sucessfully:\n");
}
void InsertAnyWhere(struct node *start)
{
	int position,i,count=1;
	struct node *create,*temp,*next;
	if(start==NULL)
	{
		printf("\nList is empty! Append first:\n");
		return;
	}
	temp=start;
	while(temp->link!=start)
	{
		count++;
		temp=temp->link;
	}
	printf("\nEnter your position for insert:\n");
	scanf("%d",&position);

	if(position<=0||position>count)
	{
		printf("\nInvalid position! Please choose correct:\n");
		return;
	}

	else if(position==1)
	{
		InsertFirst(start);
	}

	else if(position==count)
	{
		InsertLast(start);
	}
	else
	{
		create=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data:\n");
		scanf("%d",&create->data);
		create->link=NULL;
		for(i=1;i<position;i++)
		{
			temp=temp->link;
		}
		next=temp->link;
		temp->link=create;
		create->link=next;
	}
	printf("\n%d -no position insert are sucessfull: \n",i);
}
void InsertLast(struct node *start)
{
	struct node *create,*temp;
	if(start==NULL)
	{
		printf("\nList is empty! Please Append first:\n");
		return;
	}
	create=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data:\n");
	scanf("%d",&create->data);
	create->link=NULL;
	temp=start;
	while(temp->link!=start)
	{
		temp=temp->link;
	}
	temp->link=create;
	create->link=start;
	value=start;
	printf("\nLast Insert are sucessfull:\n");
	
}
void DeleteFirst(struct node *start)
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nError! List is empty to delete fo data:\n");
		return;
	}
	temp=start;
	while(temp->link!=start)
	{
		temp=temp->link;	
	}
	temp->link=NULL;
	temp->link=start->link;
	free(start);
	start=temp->link;
	value=start;
	printf("\nFirst node Deleted:\n");
}

void DeleteAnyWhere(struct node *start)
{
	int position,i,count=1;
	struct node *temp,*next;
	if(start==NULL)
	{
		printf("\nInvalid Position:\n");
		return;
	}
	printf("\nEnter yor position:\n");
	scanf("%d",&position);
	temp=start;
	while(temp->link!=start)
	{
		count++;
		temp=temp->link;
	}
	
	if(position<=0||position>count)
	{
		printf("\nInvalid Position! Please choose correct:\n");
		return;
	}
	else if(position==1)
	{
		DeleteFirst(start);
	}
	else if(position==count)
	{
		DeleteLast(start);
	}
	else
	{
		for(i=1;i<position;i++)
		{
			temp=temp->link;
		}
		next=temp->link;
		temp->link=next->link;
		free(next);
	}
	
}

void DeleteLast(struct node *start)
{
	struct node *current,*previous;
	current=previous=start;
	if(current==NULL)
	{
		printf("\nError! List is empty to delete last for data:\n");
		return;	
	}	
	else if(current->link==start)
	{	
		start=NULL;
		free(current);
		value=start;
	}
	else
	{
	while(current->link!=start)
	{
		previous=current;
		current=current->link;
	}
	previous->link=NULL;
	previous->link=start;
	free(current);
	value=start;
	}
	printf("\nLast node deleted:\n");
}

void Count(struct node *start)
{
	int count=1;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList is empty! Please Append first:\n");
		return;
	}
	temp=start;
	while(temp->link!=start)
	{
		count++;
		temp=temp->link;
	}
	printf("\nNode no: %d\n",count);
}

void UpdateFirst(struct node *start)
{
	int num;
	if(start==NULL)
	{
		printf("\nList is empty! Update impossiable:\n");
		return;
	}
	else
	{
		printf("\nEnter data for Update:\n");
		scanf("%d",&num);
		start->data=num;
	}
	printf("\nSucessfully Updated\n");
}
void UpdateLast(struct node *start)
{
	int num;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList is empty! Update impossiable:\n");
		return;
	}
	else
	{
		printf("\nEnter data for Update:\n");
		scanf("%d",&num);
		temp=start;
		while(temp->link!=start)
		{
			temp=temp->link;
		}		
		temp->data=num;
	}
	printf("\nSucessfully Updated\n");
}
void UpdateAnyWhere(struct node *start)
{
	int count=1,position,i,num;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList is empty! Update impossiable:\n");
		return;
	}
	printf("\nEnter the position for update data:\n");
	scanf("%d",&position);
	temp=start;
	while(temp->link!=start)
	{
		count++;
		temp=temp->link;
	}
	if(position<=0||position>count)
	{
		printf("\nInvalid position! Please choose correct:\n");
		return;
	}
	else if(position==1)
	{
		UpdateFirst(start);
	}
	else if(position==count)
	{
		UpdateLast(start);
	}
	else
	{
		printf("\nEnter data for update:\n");
		scanf("%d",&num);
		for(i=1;i<=position;i++)
		{
			temp=temp->link;
		}
		temp->data=num;
		printf("\n%d -no node is Updated:\n");
	}
	
}

void SearchPosition(struct node *start)
{
	int count=1,num,flag=0;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList is empty! Please Append first:\n");
		return;
	}
	printf("\nEnter data for find position:\n");
	scanf("%d",&num);
	temp=start;
	while(temp->link!=start)
	{	
	
		if(num==temp->data)
		{
			printf("\nposition-%d\n",count);
			flag=1;
		}
		count++;
		temp=temp->link;
	}
	if(num==temp->data)
	{
		printf("position-%d\n",count);
	}
	if(flag==0)
	{
		printf("\nElement not found:\n");
	}
}

void SearchData(struct node *start)
{
	int count=1,i,position;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList is empty! Search Impossible:\n");
		return;
	}
	temp=start;
	while(temp->link!=start)
	{	count++;
		temp=temp->link;	
	}
	printf("\nEnter position:\n");
	scanf("%d",&position);
	if(position>count)
	{
		printf("\nInvalid position:\n");
		return;
	}
	else
	{
	
		for(i=1;i<position+1;i++)
		{
			temp=temp->link;
		}
		printf("\nData: %d\n",temp->data);
	}	
}

void Reverse(struct node *start)
{
	struct node *current,*prev=NULL,*next;
	current=start;
	do
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
		
	}
	while(current!=start);
	start->link=prev;
	start=prev;
	value=start;
	printf("\nSucessfully Reverse:\n");
}













