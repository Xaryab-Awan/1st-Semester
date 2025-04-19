#include<stdio.h>
int main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	if(age<0){
		printf("Invalid input");
	}
	if(age>0 && age<=10){
		printf("Child");
	}
	else if(age>10 && age<=20){
		printf("Teenager");
	}
	else if(age>20 && age<=60){
		printf("Adult");
	}
	else
	printf("Senior");
}
