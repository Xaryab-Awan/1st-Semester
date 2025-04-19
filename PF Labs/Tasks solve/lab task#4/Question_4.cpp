#include<stdio.h>
int main()
{
	int income,tax_amount,net_amount;
	printf("Enter your income:");
	scanf("%d",&income);
	if(income<=250000){
		printf("Your income is %d Tax is 0 whereas net amount is %d",income,income);
	}
	
	else if(income>250000 && income<500000)
	{
		tax_amount=income*0.05;
		net_amount=income-tax_amount;
		printf("Your income is %d Tax is %d whereas net amount is %d",income,tax_amount,net_amount);
	}
	else if(income>500000 &&income<1000000){
		tax_amount=income*0.20;
		net_amount=income-tax_amount;
		printf("Your income is %d Tax is %d whereas net amount is %d",income,tax_amount,net_amount);
	}
	else if (income>1000000)
	{
		tax_amount=income*0.30;
		net_amount=income-tax_amount;
		printf("Your income is %d Tax is %d whereas net amount is %d",income,tax_amount,net_amount);
	}
	return 0;
}
