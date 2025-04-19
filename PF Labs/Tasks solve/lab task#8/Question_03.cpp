#include<stdio.h>
int main()
{
	int arr[2][3][3]=
	{
		{
		{1,2,3},
		{2,4,6},
		{3,6,9}
		},
		{
		{4,8,12},
		{5,10,15},
		{6,12,18}
		}
	};
	
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++){
			printf("%d\t",arr[i][j][k]);	
			}
		printf("\n");	
		}
		printf("\n");
	}
	int sum=0;
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++){
				sum+=arr[i][j][k];
			}
			
		}
		printf("the sum of %d matrix is %d \n",i+1,sum);
		sum=0;
	}
	
}
