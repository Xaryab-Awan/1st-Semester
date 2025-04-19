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
    // int a=0,b=1,c,n;
	// printf("Enter the number :");
	// scanf("%d",&n);
	// if(n>=1)
	// 	printf("%d\t",a);
	// if(n>=2)
	// 	printf("%d\t",b);
	// for(int i=2;i<n;i++){
	// 	c=a+b;
	// 	printf("%d\t",c);
	// 	a=b;
	// 	b=c;
	// }
}