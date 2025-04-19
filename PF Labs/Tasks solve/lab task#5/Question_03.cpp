#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter first Number:");
	scanf("%d",&num1);
	printf("Enter Second Number:");
	scanf("%d",&num2);
	printf("Enter Third Number:");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("%d is greatest",num1);
	}
	else if(num2>num1 && num2>num3){
		printf("%d is greatest",num2);
	}
	else if(num3>num1 && num3>num2){
		printf("%d is greatest",num3);
	}
	else if(num1==num2==num3){
		printf("All numbers are equal");
	}
	else
		printf("invalid Input");
}
