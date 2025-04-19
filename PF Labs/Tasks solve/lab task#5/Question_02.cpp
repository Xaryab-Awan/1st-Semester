#include<stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num<0){
	printf("Negative number");
	}
	else if (num>0){
		if(num%2==0){
			printf("Positive Even Number");
		}
		else
		printf("Positive Odd number");
	}
	else if(num==0)
		printf("Number is 0"); 
	else
	printf("Invalid Output");
	

}
	

