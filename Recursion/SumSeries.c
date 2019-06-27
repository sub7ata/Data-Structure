#include<stdio.h>
int sumSeries(int num);
int main(void)
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("%d=%d\n",num,sumSeries(num));
	return 0;
}
int sumSeries(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n + sumSeries(n-1);
	}
}
