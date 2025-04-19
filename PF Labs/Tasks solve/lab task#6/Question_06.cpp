#include<stdio.h>
int main()
{
	int num1,num2,lcm,larger,a_mul,b_mul,gcd;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	if(num1==num2){
		printf("LCM is %d",num1);
	}
	if(num1>num2){
		larger=num1;
	}	
	else
	larger=num2;
	for(int i=1;i<larger;i++){
		if(num1%i==0 && num2%i==0){
			gcd=i;
		}
	}
	a_mul=num1/gcd;
	b_mul=num2/gcd;
	lcm=a_mul*b_mul*gcd;
	printf("The LCM is %d",lcm);
	return 0;
	
}
