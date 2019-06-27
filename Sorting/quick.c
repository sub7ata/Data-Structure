/*-----Quick Sort-----*/
#include<stdio.h>
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void swap(int* a, int* b);
void display(int arr[],int num);
int main()
{
	int num,i,arr[50];
	printf("Enter the no of elements:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("\nError! Invalid Number!\n");
		return 0;
	}
	else
	{	for(i=0;i<num;i++)
		{		
			printf("Array[%d]: ",i+1);
			scanf("%d",&arr[i]);
		}
	printf("\nBefore sorting Array:\n");
	display(arr,num);
	printf("\nAfter sorting Arrat:\n");
	quickSort(arr,0,num-1);
	display(arr,num);
	}
	return 0;
}

int partition (int arr[],int low,int high)
{
	int pivot=arr[high];   
	int i=(low-1);   
	for (int j=low;j<=high-1;j++)
	{    
		if(arr[j]<=pivot)
		{
			i++;    
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
}
 
void quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
	        int pi=partition(arr,low,high);
	        quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
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






