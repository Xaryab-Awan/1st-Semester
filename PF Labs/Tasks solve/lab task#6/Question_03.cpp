#include<stdio.h>
int main(){
	int num,even=0,odd=0;
	printf("enter number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(i%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("even=%d and odd=%d",even,odd);
	return 0;
}
