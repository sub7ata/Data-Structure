/*Selection sort*/
#include<stdio.h>
void selection(int arr[],int num);
void display(int arr[],int num);
int main(void)

{
	int num,i,arr[50];
	printf("Enter the number of array elements:\n");
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

		printf("\nBefore sorting:\n");
		display(arr, num);
		selection(arr, num);

		printf("\nAfter sorting:\n");
		display(arr, num);
	}
	return 0;
}

void selection(int arr[],int num)
{
	int i,j,temp;
	for(i=0;i<num;i++)
	for(j=i+1;j<num;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
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
