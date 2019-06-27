/*Insertion Sort*/
#include<stdio.h>
void insertion(int arr[],int num);
void display(int arr[],int num);
int main()
{
	int num,i,arr[50];
	printf("Enter the no of array elements:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("\nError! Invalid Number!\n");
		return 0;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			printf("Array[%d]: ",i+1);
			scanf("%d",&arr[i]);
		}
		printf("\nBefore Sorting:\n");
		display(arr,num);
	
		printf("\nAfter Sorting:\n");
		insertion(arr,num);
		display(arr,num);
		return 0;
	}
}
void insertion(int arr[],int num)
{
	int i,j,key;
	for(i=1;i<num;i++)
	{
		key=arr[i];
		for(j=i-1;j>=0 && key<arr[j];j--)
			arr[j+1]=arr[j];
			arr[j+1]=key;
	}	
}


void display(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}








