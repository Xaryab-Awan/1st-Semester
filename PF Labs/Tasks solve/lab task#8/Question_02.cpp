#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter size of matrix in row n column:");
	scanf("%d %d",&row,&column);
	int arr[row][column];
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("enter element:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The entered Matrix is:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d\t",arr[i][j]);

		}
		printf("\n");
	}
	printf("The Transpose Of Matrix is:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d\t",arr[j][i]);

		}
		printf("\n");
	}
}
