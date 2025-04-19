#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The Factorial of %d is %d",n,fact);
	return 0;
}
