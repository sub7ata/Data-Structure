/*-----Merge Sort-----*/
#include<stdio.h>
void display(int arr[],int num);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
int main()
{
	int num,i,arr[50],pre,cur,nex;
	printf("Enter the number of element:\n");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("\nError! Invalid number:\n");
		return 0;
	}
	else
	{
		pre=0;
		cur=num/2;
		nex=num-1;
		for(i=0;i<num;i++)
		{
			printf("Array[%d]: ",i+1);
			scanf("%d",&arr[i]);
		}	
		printf("\nBefore SOrting Array:\n");
		display(arr,num);

		printf("\nAfter Sorting Array:\n");
		mergeSort(arr,pre,nex);
		merge(arr,pre,cur,nex);
		display(arr,num);
	} 
	return 0;	
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

void merge(int arr[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
 
	for (i=0;i<n1;i++)
	        L[i]=arr[l+i];
	for (j=0;j<n2;j++)
	        R[j]=arr[m+1+j];
		i=0;
		j=0;
		k=l;
	while (i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
	        else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	} 
	while (i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	} 
	while (j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int start,int end)
{
	int mid;
	if (start<end)
	{
		mid=start+(end-start)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}




