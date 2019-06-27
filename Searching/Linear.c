#include<stdio.h>
int LinearSearch(int arr[],int num,int item);
int main(void)
{
	int num,i,arr[50],item;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the item to be searched:\n");
	scanf("%d",&item);
	LinearSearch(arr,num,item);
}

int LinearSearch(int arr[],int num,int item)
{
	int i,flag=1;
	for(i=0;i<item;i++)
	{
		if(arr[i]==item)
		flag=0;
	}
	if(flag==0)
	{
		printf("Searched Sucessfully:\n");
	}
	else
	{
		printf("Item not found:\n");
	}
}
