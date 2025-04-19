#include<stdio.h>
int main()
{
	int prime=0,range1,range2;
	printf("Enter range 1:");
	scanf("%d",&range1);
	printf("Enter range 2:");
	scanf("%d",&range2);
	for(int i=range1;i<range2;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0){
			prime++;
			}
			}
			if(prime==0){
				printf("%d\t",i);
			}
			prime=0;	
			
	}
}
