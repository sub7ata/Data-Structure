#include<stdio.h>
int DivisibleBy11(long int num);
int main(void)
{
	long int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(DivisibleBy11(n)==0)
	{
		printf("Not disible by 11\n");
	}
	else
	{
		printf("disible by 11\n");
	}
	return 0;
}

int DivisibleBy11(long int num)
{
	int s1=0,s2=0,diff;
	if(num==0)
	{
		return 1;
	}
	if(num<10)
	{
		return 0;
	}
	while(num>0)
	{
		s1+=num%10;
		num/=10;
		s2+=num%10;
		num/=10;
	}
	diff=s1>s2 ? (s1-s2) : (s2-s1);
	DivisibleBy11(diff);
}



