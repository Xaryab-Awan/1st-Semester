#include<stdio.h>
int main()
{
	float assignment_score,exam_score;
	int attendence;
	printf("Enter Your Attendence:");
	scanf("%d",&attendence);
	printf("Enter Assignment score:");
	scanf("%f",&assignment_score);
	printf("Enter Exam Score:");
	scanf("%f",&exam_score);
	if(attendence<80){
		
		printf("Your Attendence is short therfore your grade cannot be calculated");
	}
	else if(attendence>=80){
		if(assignment_score>=15 && exam_score>=80){
			printf("A+");
		}
		else if((assignment_score>=10 && assignment_score<15) && (exam_score>=75 && exam_score<80)){
			printf("A");
		}
		else if((assignment_score>=0 && assignment_score<10) && (exam_score>=65 && exam_score<75)){
			printf("B");
	}
	else if((assignment_score>=0 && assignment_score<10) && (exam_score>=50 && exam_score<65)){
			printf("C");
			}
	else
	{
		printf("F");
	}
	}
	else
	printf("invalid Input");	
}
