#include<stdio.h>
int main()
{
	int num;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	if(num%2==0){
		printf("EVEN NUMBER");
	}
	else
		printf("ODD NUMBER");
		return 0;
}