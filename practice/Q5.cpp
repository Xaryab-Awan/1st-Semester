#include<stdio.h>
int main ()
{
	int sale[12][12]={
	{10,11,12,13,14,65,16,17,18,12,13,14},
	{19,20,21,22,23,24,25,26,27,28,29,30},
	{31,32,33,34,35,36,37,38,39,40,41,42},
	{43,44,45,46,47,48,49,50,51,52,53,54},
	{23,24,25,26,27,28,29,30,31,32,33,34},
	{68,69,70,71,72,73,74,75,76,77,78,79},
	{80,81,82,83,84,85,86,87,88,89,90,91},
	{92,93,94,95,96,97,98,99,100,101,102,103},
	{14,10,16,17,18,19,10,12,12,13,14,15},
	{16,11,18,119,120,121,122,123,124,125,126,17},
	{12,19,13,31,32,33,14,15,16,17,18,19},
	{26,11,12,13,14,15,54,14,148,1,10,17}};
	int sum=0;
	int index=0;
	int most_selled=0;
	for(int j=0;j<12;j++)
	{
		for(int i=0;i<12;i++)
		{
			sum+=sale[i][j];
		}
		if(sum>most_selled)
		{
			most_selled=sum;
			index=j+1;
		}	
		printf("annual sales of product %d is: %d\n",j+1,sum);
		sum=0;
	}
	int monthly_sales=0;
	int max_monthly_sales=0;
	int month;
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			monthly_sales+=sale[i][j];
			if(monthly_sales>max_monthly_sales)
			{
				max_monthly_sales=monthly_sales;
				month=i+1;
			}		
		}
		monthly_sales=0;
	}
printf("in the month no. %d sales are %d which are maximum\n",month,max_monthly_sales);
printf("most sold product is %d with annual sales %d\n",index,most_selled);
}