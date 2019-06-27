#include<stdio.h>
#define MAX 50
int BinarySearch(int arr[],int size,int item);
int main(void)
{
	int size,arr[MAX],item,i,index;
	printf("Enter the number of elements:\n");
	scanf("%d",&size);	
	printf("Enter the elements(in sorted order):\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched:\n");
	scanf("%d",&item);
	index=BinarySearch(arr,size,item);
	if(index==-1)
	{
		printf("%d is not found in the array:\n",item);
	}
	else
	{
		printf("%d position is %d\n",item,index);
	}
}

int BinarySearch(int arr[],int size,int item)
{
	int low=0,upp=size-1,mid;
	while(low<=upp)
	{
		mid=(low+upp)/2;
		if(item>arr[mid])
		{
			low=mid+1;
		}
		else if(item<arr[mid])
		{
			upp=mid-1;
		}
		else
			return mid;
	}
	return -1;
}
