#include<stdio.h>
int main(){
	int num,even=0;
	printf("enter number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(i%2==0){
			even=even+i;
			
		}
		
	}
	printf("The sum of all even numbers till %d  is %d ",num,even);
	return 0;
}
