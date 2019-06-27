/*Finds the sum of digits of an Integers*/

#include<stdio.h>
int sumInteger(long int num);
void Display(long int n);
void ReverseDisplay(long int n);
int main(void)
{
	long int num,index;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	printf("Sum of digits %d are %d\n",num,sumInteger(num));
	printf("Entered number are:");
	Display(num);
	printf("\n");
	printf("Entered number Reverse from are:");
	ReverseDisplay(num);
	printf("\n");
	return 0;
}
int sumInteger(long int n)
{
	if(n==0)
	{
		return n;
	}
	else
	{
		return n%10 + sumInteger(n/10);
	}
}
void Display(long int n)
{
	if(n/10==0)
	{
		printf("%d",n);
		return;
	}
	else
	{
		Display(n/10);
		printf("%d",n%10);
	}
}
void ReverseDisplay(long int n)
{
	if(n/10==0)
	{
		printf("%d",n);
		return;
	}
	else
	{
		printf("%d",n%10);
		ReverseDisplay(n/10);		
	}
}






