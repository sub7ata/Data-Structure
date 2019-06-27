#include<stdio.h>
int divisibleBy9(long int num);
int main(void)
{
	long int n;
	printf("Enter a positive integer:\n");
	scanf("%d",&n);
	if(divisibleBy9(n)==1)
	{
		printf("divisible by 9\n");
	}
	else
	{
		printf("Not divisible by 9\n");
	}
	return 0;
}
int divisibleBy9(long int num)
{
	int sumofdigits;
	
	if(num==9)
	{
		return 1;
	}
	if(num<9)
	{
		return 0;
	}
	sumofdigits=0;
	while(num>0)
	{
		sumofdigits+=num%10;
		num/=10;
	}
	divisibleBy9(sumofdigits);
}






