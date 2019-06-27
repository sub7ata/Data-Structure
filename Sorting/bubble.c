/*-----Bubble Sort-----*/

#include<stdio.h>
void bubble(int arr[],int num);
void display(int arr[],int num);
int main()
{
	int num,i,arr[50];
	printf("Enter the no of array elements:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("\nError! Invalid Number.\n");
		return 0;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			printf("Array[%d] ",i+1);
			scanf("%d",&arr[i]);
		}
		printf("\nBefore sorting Array:\n");
		display(arr,num);	
		
		printf("\nAfter sorting Array:\n");
		bubble(arr,num);
		display(arr,num);
	}
}
void bubble(int arr[],int num)
{
	int i,j,temp;
	for(i=0;i<num;i++)
	for(j=0;j<num-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
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
