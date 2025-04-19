#include<stdio.h>
int main(){
	int num,a;
	printf("enter number:");
	scanf("%d",&num);
	for(int i=1;num>0;i++)
	{
		a=num%10;
		num=num/10;	
		printf("%d",a);	
	}
	return 0;
	
}
