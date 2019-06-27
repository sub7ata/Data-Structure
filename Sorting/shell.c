#include<stdio.h>
void shell(int arr[],int num);
void display(int arr[],int num);
int main(void)
{
	int num,i,arr[50];
	printf("Enter the no of Elements:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("\nError! Invalid number:\n");
		return 0;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			printf("Array[%d]: ",i+1);
			scanf("%d",&arr[i]);
		}
		printf("\nBefore Sorting array:\n");
		display(arr,num);

		printf("\nAfter Sorting array:\n");
		shell(arr,num);
		display(arr,num);
	}

}
void shell(int arr[],int num)
{
	int gap,temp,i,j;
	for(gap=num/2;gap>0;gap/=2)
	{
		for(i=gap;i<num;i+=1)
		{
			temp=arr[i];
			for(j=i;j>=gap && arr[j-gap]>temp; j-=gap)
			arr[j]=arr[j-gap];
			arr[j]=temp;
			
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






