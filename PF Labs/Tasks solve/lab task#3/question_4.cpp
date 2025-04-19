#include<stdio.h>
int main()
{
	float x1,y1,x2,y2;
	printf("Enter the value of x1:");
	scanf("%f",&x1);
	printf("Enter the value of y1:");
	scanf("%f",&y1);
	printf("Enter the value of x2:");
	scanf("%f",&x2);
	printf("Enter the value of y2:");
	scanf("%f",&y2);
	float slope=((y2-y1)/(x2-x1));
	printf("The value of slope is:%.3f",slope);
	return 0;

}
