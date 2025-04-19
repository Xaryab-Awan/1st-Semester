#include<stdio.h>
int main()
{
	int journey_1=850,journey_2=420,price_1=115,price_2=120;
	float fe;
	printf("Enter Fuel Efficiency:");
	scanf("%f",&fe);
	float fuel_1,fuel_2,total_fuel,total_cost;
	fuel_1=journey_1/fe;
	fuel_2=journey_2/fe;
	total_fuel=fuel_1+fuel_2;
	total_cost=(fuel_1*price_1)+(fuel_2*price_2);
	printf("The total fuel used in ltr is %.3f",total_fuel);
	printf("\nThe total fuel used in Rs is %.3f",total_cost);
	return 0;
}
