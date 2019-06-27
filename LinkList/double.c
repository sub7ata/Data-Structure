#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* ls;
	struct node* rs;
}*value;

void DisplayForward(struct node* start);
void DisplayBackward(struct node* start);
void Append(struct node* head);
void InsertFirst(struct node* root);
void InsertAnyWhere(struct node* root);
void InsertLast(struct node* root);
void DeleteFirst(struct node* start);
void DeleteAnyWhere(struct node* root);
void DeleteLast(struct node* root);
void Length(struct node* start);
void SearchByPosition(struct node* start);
void SearchByData(struct node* start);
void UpdateFirst(struct node* start);
void UpdateAnyWhere(struct node* start);
void UpdateLast(struct node* start);
void Reverse(struct node* start);
int main(void)
{
	int choice;
	while(1)
	{
	printf("\n\n**************MENU**************\n\n");
	printf("1.Append List:\n");
	printf("2.Insert First:\n");
	printf("3.Insert Any Position:\n");
	printf("4.Insert Last:\n");
	printf("5.Delete First Node:\n");
	printf("6.Delete Any Position:\n");
	printf("7.Delete Last Node:\n");
	printf("8.Length Node:\n");
	printf("9.Search By Position:\n");
	printf("10.Search By Data:\n");
	printf("11.Update First:\n");
	printf("12.Update Any Position:\n");
	printf("13.Update Last:\n");
	printf("14.Reverse List:\n");
	printf("88.Display List Forward:\n");
	printf("99.Display List BackWard:\n");
	printf("0.Exit:\n");
	printf("\n********Enter your choice********\n");
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
		DeleteFirst(value);
		break;
		case 6:
		DeleteAnyWhere(value);
		break;
		case 7:
		DeleteLast(value);
		break;
		case 8:
		Length(value);
		break;
		case 9:
		SearchByPosition(value);
		break;
		case 10:
		SearchByData(value);
		break;
		case 11:
		UpdateFirst(value);
		break;
		case 12:
		UpdateAnyWhere(value);
		break;
		case 13:
		UpdateLast(value);
		break;
		case 14:
		Reverse(value);
		break;
		case 88:
		DisplayForward(value);
		break;
		case 99:
		DisplayBackward(value);
		break;
		case 0:
		exit(1);
		break;
		default:
		printf("Wronge Choice:\n");
		
	return 0;
	}
	}
}

void DisplayForward(struct node* start)
{
	int count=0;
	struct node* temp;
	if(start==NULL)
	{
		printf("\nError! List is empty:\n\n");
	}
	else
	{
	temp=start;
	printf("\nList is:\n\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->rs;
		count++;
	}
	printf("\n\nNo of node: %d\n",count);
	}
}
void DisplayBackward(struct node* start)
{
	int count=0;
	struct node* temp;
	if(start==NULL)
	{
		printf("Error! List is empty:\n\n");
		return;
	}
	while(start->rs!=NULL)
	{
		start=start->rs;
	}
	temp=start;
	printf("\nList is:\n\n");
	while(temp!=NULL)
	{
		count++;
		printf("%d->",temp->data);
		temp=temp->ls;
	}	
	printf("\n\nNo of node: %d\n",count);
}

void Append(struct node* root)
{
	struct node* create;
	create=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for insert:\n");
	scanf("%d",&create->data);
	create->ls=NULL;
	create->rs=NULL;
	if(root==NULL)
	{
		root=create;
		value=root;
	}
	else
	{
		struct node* temp;
		temp=root;
		while(temp->rs!=NULL)
		{
			temp=temp->rs;
		}
		temp->rs=create;
		create->ls=temp;
	}
}

void InsertFirst(struct node* root)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for first insert:\n");
	scanf("%d",&temp->data);
	temp->rs=NULL;
	temp->ls=NULL;
	if(root==NULL)
	{
		root=temp;
		value=root;
	}
	else
	{
		temp->rs=root;
		root->ls=temp;
		root=temp;
		value=root;
	}
	printf("\nSucessfully Insert:\n");
}

void InsertAnyWhere(struct node* root)
{
	int i,position,count=1;
	struct node* ch,* temp;
	ch=root;
	while(ch!=NULL)
	{
		count++;
		ch=ch->rs;
	}
	printf("Enter your position where you want to insert:\n");
	scanf("%d",&position);
	if(position<=0||position>count+2)
	{
		printf("\nInvalid position! Please enter right position.\n");
	}
	else if(position==1)
	{
		InsertFirst(value);
	}
	else if(position==count)
	{
		InsertLast(value);
	}
	else
	{	
		for(i=1;i<position-1;i++)
		{
			root=root->rs;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter Data:\n");
		scanf("%d",&temp->data);
		temp->rs=NULL;
		temp->rs=root->rs;
		root->ls=temp;
		root->rs=temp;
		temp->ls=root;
		printf("\nSucessfully Insert.\n");
	}
}


void InsertLast(struct node* root)
{
	struct node* temp;
	if(root==NULL)
	{
		printf("Error! List is empty to insert last for data:\n");
		return;
	}
	else
	{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for last insert:\n");
	scanf("%d",&temp->data);
	temp->rs=NULL;
	temp->ls=NULL;
		struct node* p;
		p=root;
		while(p->rs!=NULL)
		{
			p=p->rs;
		}
		p->rs=temp;
		temp->ls=p;
		value=p;
	}
	printf("\nSucessfully Insert:\n");

}




void DeleteFirst(struct node* start)
{
	if(start==NULL)
	{
		printf("\nError! Empty list no elements to delete:\n");
	}
	else
	{
		value=start->rs;
		free(start);
		printf("\nFirst node Deleted:\n");
		return;
	}
}

void DeleteAnyWhere(struct node* start)
{
	int position,count=0,i;
	struct node *temp,*root;
	root=start;
	if(root==NULL)
	{
		printf("\nError! Empty list no elements to delete:\n");
		return;
	}
	else
	{
	printf("\nEnter position.\n");
	scanf("%d",&position);
	while(root!=NULL)
	{
		count++;
		root=root->rs;
	}
	if(position<=0||position>count)
	{
		printf("\nError! Position out of range to delete:\n");
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
			start=start->rs;
		}
		temp=start->rs;
		start->rs=temp->rs;
		temp->rs->ls=start;
		free(temp);
		printf("\nSucessfully Deleted:\n");
	}
	}
	
}

void DeleteLast(struct node* root)
{
	struct node *temp,*p;
	temp=root;
	if(root==NULL)
	{
		printf("\nError! Empty list no elements to delete:\n");
		return;
	}
	else if(temp->rs==NULL)
	{
		DeleteFirst(value);
	}
	else
	{
		while(temp->rs->rs!=NULL)
		{
			temp=temp->rs;
		}
		p=temp->rs;
		temp->rs=NULL;
		free(p);	
		printf("\nLast node deleted:\n");
	}
}

void Length(struct node* start)
{
	int count=0;
	struct node* temp;
	if(start==NULL)
	{
		printf("\nError! List is empty insert first:\n");
		return;
	}
	temp=start;
	while(temp!=NULL)
	{
		count++;
		temp=temp->rs;
	}
	printf("Length is: %d\n",count);
}

void SearchByPosition(struct node* start)
{
	int position,count=0,i;
	struct node* temp;
	if(start==NULL)
	{
		printf("\nError! List is empty insert first:\n");
		return;
	}
	printf("\nEnter search position:\n");
	scanf("%d",&position);
	temp=start;
	while(temp!=NULL)
	{
		count++;
		temp=temp->rs;
	}
	if(position<=0||position>count)
	{
		printf("\nInvalid position:\n");
	}
	else
	{
		for(i=1;i<position;i++)
		{
			start=start->rs;
		}
		printf("\nData is: %d\n",start->data);
	}
}
void SearchByData(struct node* start)
{	
	int num,count=1;
	if(start==NULL)
	{
		printf("\nError! List empty to search for data:");
		return;
	}
	printf("\nEnter the data for find position:\n");
	scanf("%d",&num);
	while(start!=NULL)
	{
		if(start->data==num)
		{
			printf("Position is: %d\n",count);
			return;
			
		}	
		start=start->rs;
		count++;
	}
	printf("\nError! %d not found in list:", num);
}

void UpdateFirst(struct node* start)
{
	int num;
	if(start==NULL)
	{
		printf("\nError! List is empty to update for data:\n");
		return;
	}
	printf("\nEnter data for first update:\n");
	scanf("%d",&num);
	start->data=num;
	printf("\nSucessfully Update:\n");
}

void UpdateAnyWhere(struct node* root)
{
	int count=0,position,i;
	struct node* start;
	start=root;
	if(start==NULL)
	{
		printf("\nError! List is empty to update for data:\n");
		return;
	}
	printf("\nEnter position for insert:\n");
	scanf("%d",&position);
	while(start!=NULL)
	{
		count++;
		start=start->rs;
	}
	if(position<=0||position>count)
	{
		printf("\nError! Position out of range to update:\n");
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
			root=root->rs;
		}
		printf("\nEnter data for insert %dth position:\n",i);
		scanf("%d",&root->data);
		printf("\nSucessfully Insert:\n");
	}
}
void UpdateLast(struct node* start)
{
	int num;
	if(start==NULL)
	{
		printf("\nError! List is empty to update for data:\n");
		return;
	}
	while(start->rs!=NULL)
	{
		start=start->rs;
	}
	printf("\nEnter data for last update:\n");
	scanf("%d",&num);
	start->data=num;
	printf("\nSucessfully Update:\n");
}

void Reverse(struct node* start)
{
	struct node *current,*temp;
	
	current=start;
	if(current==NULL)
	{
		printf("\nError! List is empty to reverse for data:\n");
		return;
	}
	else
	{
		temp=current->rs;
		current->rs=NULL;
		current->ls=temp;
		while(temp!=NULL)
		{
			temp->ls=temp->rs;
			temp->rs=current;
			current=temp;
			temp=temp->ls;
		}
		start=current;
		value=start;
		printf("\nSucessfully Reverse:\n");
	}

}



