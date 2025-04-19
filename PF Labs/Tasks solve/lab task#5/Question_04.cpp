#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first side:");
	scanf("%d",&a);
	printf("Enter Second side:");
	scanf("%d",&b);
	printf("Enter Third side:");
	scanf("%d",&c);
	if(a+b>c){
		printf("Valid Triangle");
	}
	else if(b+c>a){
		printf("Valid Triangle");
	}
	else if(a+c>b){
		printf("Valid Triangle");
	}
	else
	printf("Invalid Triangle");
}
