#include<stdio.h>
void gnome(int arr[],int num);
void display(int arr[],int num);
void swap(int *a,int *b);
int main(void)
{
	int num,arr[50],i;
	printf("Enter the no element:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("Error! Invalid number:");
		return 0;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			printf("Array[%d]: ",i+1);
			scanf("%d",&arr[i]);
		}
		printf("\nBefore Sorting Array:\n");
		display(arr,num);
		printf("\nAfter Sorting Array:\n");
		gnome(arr,num);
		display(arr,num);
	}
	return 0;
}
void gnome(int arr[],int num)
{
	int index=0; 
	while (index<num)
	{
		if (index==0)
		{
			index++;
		}
		if (arr[index]>=arr[index-1])
		{
				index++;
		}
		else
		{
			swap(&arr[index],&arr[index-1]);
			index--;
		}
	}
	return;
}
 

void display(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	printf("%d ",arr[i]);
	printf("\n");
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 









