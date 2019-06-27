/*-----Radix Sort-----*/
#include<stdio.h>
int getMax(int arr[],int num);
void countSort(int arr[],int num,int exp);
void radix(int arr[],int num);
void display(int arr[],int num);
int main(void)
{
	int num,i,arr[50];
	printf("Enter the no of element:\n");
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
		printf("\nBefore Sorting Array:\n");
		display(arr,num);
		
		printf("\nAfter Sorting Array:\n");
		radix(arr,num);
		display(arr,num);
	}
}


int getMax(int arr[],int num)
{
	int max,i;
	max=arr[0];
	for(i=1;i<num;i++)
        if (arr[i]>max)
		{
			max=arr[i];
		}
	return max;
}
void countSort(int arr[],int num,int exp)
{
	int output[num]; 
	int i,count[10]={0};

 	for (i=0;i<num;i++)
        	count[ (arr[i]/exp)%10 ]++;
	
	for(i=1;i<10;i++)
		count[i]+=count[i-1];
	
	for(i=num-1;i>=0;i--)
	{
		output[count[(arr[i]/exp)%10]-1]=arr[i];
		count[(arr[i]/exp)%10]--;
	}   
    	for(i=0;i<num;i++)
        arr[i] = output[i];
}
 

void radix(int arr[],int num)
{
	int m,exp;
	m=getMax(arr,num);
    	for(exp=1;m/exp>0;exp*= 10)
	{
        	countSort(arr,num,exp);
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








