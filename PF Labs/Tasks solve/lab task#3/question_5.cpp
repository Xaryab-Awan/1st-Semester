#include<stdio.h>
int main()
{
	float principal,interest_rate,interest,total_amount;
	printf("Enter the Principal:");
	scanf("%f",&principal);
	printf("Enter the interest Rate per year:");
	scanf("%f",&interest_rate);
	interest=principal*(interest_rate/100);
	total_amount=interest+principal;
	printf("The Total amount that should be paid after a year is %.3f",total_amount);
	return 0;
}

