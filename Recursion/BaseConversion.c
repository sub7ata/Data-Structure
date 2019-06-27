/*Program to convert a positive decimal number to Binary, Octal or Hexadecimal*/
#include<stdio.h>
void convert(int n,int base);
int main(void)
{
	int num;
	printf("Enter a positive number:\n");
	scanf("%d",&num);
	convert(num,2);
	printf("\n");
	convert(num,8);
	printf("\n");
	convert(num,16);
	printf("\n");
	
}
void convert(int n,int base)
{
	int rem=n%base;
	if(n==0)
	{
		return; 
	}
	convert(n/base,base);
	if(rem<10)
	{
		printf("%d",rem);
	}
	else
	{
		printf("%c",rem-10+'A');
	}
}
