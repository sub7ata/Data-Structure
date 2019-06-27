/*-----Heap Sort-----*/
#include <stdio.h>
void heapify(int arr[], int num, int i);
void heap(int arr[], int num);
void display(int arr[], int num);
void swap(int *a,int *b);
int main(void)
{
	int num,arr[50],i;
	printf("Enter the no element:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("Error! Invalid Number:");
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
		heap(arr,num);
		display(arr,num);
	}
}
void heapify(int arr[],int num,int i)
{
	int largest=i;  
	int l=2*i+1;  
	int r=2*i+2;  
 
	if(l<num&&arr[l]>arr[largest])
        largest=l;
 
  	if(r<num&&arr[r]>arr[largest])
        largest=r;
 
	if(largest!=i)
    	{
        	swap(&arr[i],&arr[largest]);
        	heapify(arr,num,largest);
	}
}
 

void heap(int arr[],int num)
{
	for(int i=num/2-1;i>=0;i--)
	heapify(arr,num,i);
   
	for(int i=num-1;i>=0;i--)
	{
		swap(&arr[0],&arr[i]);
 		heapify(arr,i,0);
	}
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






