#include<stdio.h>
#define MAX 50
int TernerySearch(int arr[],int left,int right,int item);
int main(void)
{
	int size,i,arr[MAX],item,left,right,index;
	printf("Enter the no of elements:\n");
	scanf("%d",&size);
	left=0;
	right=size-1;
	printf("Enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the item to be search:\n");
	scanf("%d",&item);
	index=TernerySearch(arr,left,right,item);
	if(index==-1)
	{
		printf("%d is not found:\n",item);
	}
	else
	{
		printf("%d position is %d\n",item,index);
	}
}

int TernerySearch(int arr[],int left,int right,int item)
{
	int midFirst,midSecond;
	if(right>=left)
	{
		midFirst=left+(right-left)/3;
		midSecond=midFirst+(right-left)/3;
		if(arr[midFirst]==item)
		{
			return midFirst;
		}
		if(arr[midSecond]==item)
		{
			return midSecond;
		}
		if(arr[midFirst]>item)
		{
			return TernerySearch(arr,left,midFirst-1,item);
		}
		if(arr[midSecond]<item)
		{
			return TernerySearch(arr,midSecond+1,right,item);
		}
		return TernerySearch(arr,midFirst+1,midSecond-1,item);
	}
	else
	{
		return -1;
	}
}





