#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	printf("Its a leap year");
	else
	printf("ITs not a leap year");
	return 0;
	
	
}