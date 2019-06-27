#include <stdio.h>  
void display(int arr[],int num);
void counting(int A[], int k, int n);
int main()
{
	int num, k = 0, arr[15], i;
	printf("Enter the number of input : ");
	scanf("%d",&num);
	printf("\nEnter the elements to be sorted :\n");
	for (i=1;i<=num;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i]>k) 
		{
 			k=arr[i];
		}
	}
	printf("\nBefore Sorting Array:\n");
	display(arr,num);
	printf("\nAfter Sorting Array:\n");
	counting(arr,k,num);
	display(arr,num);
	printf("\n");
	return 0;
}
void counting(int A[], int k, int n)
{
	int i, j;
	int B[15], C[100];

	for (i = 0; i <= k; i++)
	        C[i] = 0;

	for (j = 1; j <= n; j++)
	        C[A[j]] = C[A[j]] + 1;

	for (i = 1; i <= k; i++)
		C[i] = C[i] + C[i-1];

	for (j = n; j >= 1; j--)
	{
 		B[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]] - 1;
	}
    /*printf("The Sorted array is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);*/
}
void display(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d",arr[i]);
	}
}








