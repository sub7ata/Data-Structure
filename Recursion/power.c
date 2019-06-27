/*Program to raise a floating number to a positive integer*/
#include<stdio.h>
float power(float num,int p);
void main()
{
	int p;
	float n,index;
	printf("Enter a number and power:\n");
	scanf("%f",&n);
	scanf("%d",&p);
	index=power(n,p);
	printf("%f raised to power %d id %f\n",n,p,index);
}

float power(float num,int p)
{
	if(p==0)
	{
		return 1;
	}
	else
	{
		return (num * power(num,p-1)); 
	}
}




