/*Prime Factorization*/
#include<stdio.h>
void PrimeFactorization(int num);
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	PrimeFactorization(num);
	printf("\n");
	return 0;
}
void PrimeFactorization(int num)
{
	int i=2;
	if(num==1)
	{
		return ;
	}
	while(num%i!=0)
	{
		i++;
		
	}
	printf("%d ",i);
	PrimeFactorization(num/i);
}

