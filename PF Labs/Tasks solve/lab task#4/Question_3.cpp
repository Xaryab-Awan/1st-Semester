#include<stdio.h>
int main()
{
	int num1,num2,sum,product,divide,subtract;
	char c;
	printf("Operatios \n (+)Add \n (-)Subtract (*)Multiply (/)divide\n");
	scanf("%c",&c);
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	
	switch(c)
	{
	case '+':
	{
		sum=num1+num2;
		printf("The sum is %d",sum);
		break;
	}
	case '-':
		{
		
		subtract=num1-num2;
		printf("the diffrence is %d",subtract);
		break;
	
	}
	case '*':
	{
		product=num1*num2;
		printf("The product is %d",product);
		break;
	}
	case '/':
	{
		divide=num1/num2;
		printf("The division is %d",divide);
		break;
	}
	default:
	printf("choose valid operator");
	
	}
	return 0;
}
