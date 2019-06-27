#include<stdio.h>
int fibonacci(int num);
int main(void)
{
	int num,i;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Fibonacci number are not possiable:\n");
	}
	else
	{
		printf("Fibonacci number are...\n");
		for(i=0;i<num;i++)
		{
			printf("%d ",fibonacci(i));
		}
		printf("\n");
	}
}

int fibonacci(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
