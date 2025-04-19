#include<stdio.h>
int main()
{
	int n,prime;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			prime++;
		}
	}
		if(prime==0)
		{
			printf("its a prime number\n");
			int a=0,b=1,result=0;
			while(a<=n){
			printf("%d \t",a);
			result=a+b;
			a=b;
			b=result;
		}
	}
		else
			printf("its a composite number");
	
}
