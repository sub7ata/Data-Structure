#include<stdio.h>
int factorial(int num);
int main(void)
{
	int num,index;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("No factorial for negetive number:\n");
	}
	else
	{
		printf("Factorial of %d is %d\n",num,factorial(num));
	}
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n * factorial(n-1));
	}
}
