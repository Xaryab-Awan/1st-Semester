#include<stdio.h>
int main()
{
	int score=0,ans,count;
	for(int i=1;i<=20;i++){
		printf("Whats 2+2*2? \n 1) 6 \n 2) 8 \n 3) 10 \n 4) 9 \n");
		scanf("%d",&ans);
		switch(ans){
			case 1:
				score=score+4;
				break;
			case 2:
			case 3:
			case 4:
				score=score-1;
				break;
			default:
				printf("Invalid Input");
				break;
		}
		if(i==4 && score==-4)
				{
					printf("Sorry, you did not qualify for the admission.");
					break;
				}
		
	}
	if(score>=20){
			printf("Congratulations, you have qualified for the admission");
		}
		else 
			printf("Better Luck Next time");
}
