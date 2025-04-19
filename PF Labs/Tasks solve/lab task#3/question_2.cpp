#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three Numbers:");
	scanf("%d %d %d",&a,&b,&c);
	printf("Before swapping \n First_number:%d \n Second_number:%d \n Third_number:%d",a,b,c);
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	printf("\n After swapping \n First_number:%d \n Second_number:%d \n Third_number:%d",a,b,c);
	return 0;
}
