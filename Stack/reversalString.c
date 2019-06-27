#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
char str[MAX];
int top=-1;
void PUSH(char);
char POP();
void main()
{
	unsigned int i;
	printf("Enter a string!\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		PUSH(str[i]);
	}
	for(i=0;i<strlen(str);i++)
	{
		str[i]=POP();
	}
	printf("Revers string is:\n");
	puts(str);
}

void PUSH(char item)
{
	
	if(top==MAX-1)
	{
		printf("Overflow!\n");
		return;
	}
	else
	{
		//top+=1;
		str[++top]=item;
	}
}
char POP()
{
	if(top==-1)
	{
		printf("Underflow!");
	}
	else
	{
	str[top-=1];
	}
}







