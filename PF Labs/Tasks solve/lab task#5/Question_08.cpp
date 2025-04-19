#include<stdio.h>
int main()
{
	int age,credit_score,income;
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter income:");
	scanf("%d",&income);
	printf("Enter credit score:");
	scanf("%d",&credit_score);
	if(age<18){
		printf("You are under age");
	}
	else if(age>=18){
		if(income>=100000 && credit_score>=100){
			printf("Eligible");
		}
		else if(income>=500000 && credit_score>=50 && credit_score<100){
			printf("Eligible");
		}
		else if(income>=1000000){
			printf("Eligible");
		}
		else
		printf("Not Eligible");
	}
	else
		printf("Invalid Input");
}
