#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=0,b=1,result=0;
			while(a<=n){
			printf("%d \t",a);
			result=a+b;
			a=b;
			b=result;
    }
}