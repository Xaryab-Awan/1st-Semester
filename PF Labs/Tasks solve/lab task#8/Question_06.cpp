#include<stdio.h>
int main()
{
	int arr[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter the (%d,%d) Element: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int count=0;
			for(int k=0;k<3;k++)
			{
				if(arr[i][j]>arr[i][k])
				{
					count=1;
				}
			}
			if(count==1)
			{
				continue;
			}
			count=0;
			for(int k=0;k<3;k++)
			{ 
				if(arr[i][j]<arr[k][j])
				{
					count=1;
				}
			}
			if(count!=1)
			{
				printf("%d is Saddle Point ",arr[i][j]);
			}
		}
	}
	
}
	

