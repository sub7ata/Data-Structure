/*Greatest Common Divisor*/
#include<stdio.h>
int GCD(int x,int y);
int main(void)
{
	int a,b;
	printf("Enter two number for GCD:\n");
	scanf("%d%d",&a,&b);
	printf("GCD is- %d\n",GCD(a,b));
	return 0;
}
int GCD(int x,int y)
{
	if(y==0)
	{
		return x;
	}
	else
	{
		return GCD(y,x%y);
	}
}
