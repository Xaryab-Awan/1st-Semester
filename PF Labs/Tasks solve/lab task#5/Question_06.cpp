#include<stdio.h>
int main(){
	float weight,height,BMI;
	printf("Enter Your weight in KG:");
	scanf("%f",&weight);
	printf("Enter your height in Meters:");
	scanf("%f",&height);
	BMI=(weight/(height*height));
	printf("Your BMI is %.2f \n",BMI);
	if(BMI<18.5){
		printf("You are Under weight");
	}
	else if(BMI>=18.5 && BMI<24.9){
		printf("You are Normal weight");
	}
	else if(BMI>=24.9 && BMI<29.9){
		printf("You are Overweight");
	}
	else if(BMI>=30){
		printf("Obesity");
	}
	else 
	printf("Invalid Input");
	
}
