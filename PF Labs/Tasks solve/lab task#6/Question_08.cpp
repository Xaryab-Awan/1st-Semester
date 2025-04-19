#include<stdio.h>
int main(){
	int marks,outstanding,excellent,good,average,below_avg,adequate,pass,fail,only_pass;
	for(int i=1;i<=20;i++)
	{
		printf("Enter Marks:");
		scanf("%d",&marks);
		if(marks>100)
		{
			printf("marks cannot be greater than 100");
			break;
		}
		if(marks<50){
			fail++;
			pass++;
		}
		if(marks>=50 && marks<=61)
		{
			only_pass++;
			pass++;
		}
		if(marks>61 && marks<=65)
		{
			adequate++;
			pass++;
		}
		if(marks>65 && marks<=69)
		{
			below_avg++;
			pass++;
		}
		if(marks>69 && marks<= 74)
		{
			average++;
			pass++;
		}
		if(marks>74 && marks<=85)
		{
			good++;
			pass++;
		}
		if(marks>85 && marks<=89)
		{
			excellent++;
			pass++;
		}
		if(marks>89 && marks<=100)
		{
			outstanding++;
			pass++;
		}
		
	}
	printf("The number of pass students are %d \n",pass);
	printf("The number of fail students are %d \n",fail);
	printf("The number of outstanding students(A+) are %d \n",outstanding);
	printf("The number of excellent students(A) are %d \n",excellent);
	printf("The number of good students(B+) are %d \n",good);
	printf("The number of average students(B-) are %d \n",average);
	printf("The number of below average students(C+) are %d \n",below_avg);
	printf("The number of adequate students(C) are %d \n",adequate);
	printf("The number of only pass students(C-),(B+),(D-),(D+) are %d \n",only_pass);
	return 0;
}
