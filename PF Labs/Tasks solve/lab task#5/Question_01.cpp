#include<stdio.h>
int main()
{
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	if(a>=32 && a<=46)
	{
		printf("It is a special character");
	}
	else if(a>=48 && a<=57)
	{
		printf("It is a digit");
	}
	else if(a>=65 && a<=90)
	{
		printf("It is an Upper Case");
	}
	else if(a>=32 && a<=46)
	{
		printf("It is a special character");
	}
	else if(a>=97 && a<=122)
	{
		printf("It is a Lower case");
	}
	else
	{
		printf("Invalid");
	}
}
