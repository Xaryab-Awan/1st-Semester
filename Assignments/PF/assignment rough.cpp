#include<stdio.h>
int main()
{
	int age,gender,province;
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter province: ");
	scanf("%d",&province);
	printf("Enter gender ");
	scanf("%d",&gender);
	if(province=="sindh"){
		if(gender=="male"| gender=="female")&&(age>=18)
		printf("Eligible");
		else
		printf("Not eligible")
	}
}
