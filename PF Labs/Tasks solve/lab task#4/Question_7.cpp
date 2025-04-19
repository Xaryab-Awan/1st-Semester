#include<stdio.h>
int main()
{
	int customer_id;
	float unit_consumed,net_amount,price_per_unit;
	char name[15]; //array is not taught yet
	printf("Enter Name:");
	scanf("%s",name);
	printf("Enter customer_id:");
	scanf("%d",&customer_id);
	printf("Enter unit consumed:");
	scanf("%f",&unit_consumed);
	if(unit_consumed<=199)
	{
		price_per_unit=16.20;
		net_amount=unit_consumed*16.20;
		
	}
	else if(unit_consumed>200 && unit_consumed>=300)
	{
		price_per_unit=20.10;
		net_amount=unit_consumed*20.10;
		
	}
	else if(unit_consumed>300 && unit_consumed<=500)
	{
		price_per_unit=27.10;
		net_amount=unit_consumed*27.10;
		
	}
	else if(unit_consumed>500)
	{
		price_per_unit=35.90;
		net_amount=unit_consumed*35.90;
	}
	else
	{
		printf("Enter Valid unit consumed");
	}
	printf("Name:%s",name);
	printf("\nCustomer_id:%d\n",customer_id);
	printf("Unit Consumed:%.2f\n",unit_consumed);
	printf("Amount Charges %.2f per unit",price_per_unit);
	if(net_amount>18000)
	{
		net_amount=net_amount*0.15;
	}
	printf("\nThe net_amount is %f",net_amount);
	return 0;
	
}
