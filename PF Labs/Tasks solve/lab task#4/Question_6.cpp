#include<stdio.h>
int main()
{
	int marks;
	printf("Enter score:");
	scanf("%d",&marks);
	switch(marks/10)
	{
		case 10:{
			printf("100 marks kese le aya bhai");
			break;
		}
		case 9:{
			printf("A+");
			break;
	}
		case 8:{
			printf("A");
			break;
		}
		case 7:{
			printf("B");
			break;
		}
		case 6:{
			printf("C");
			break;
		} 
		case 5:{
			printf("D");
			break;
		}
		default:{
			printf("F");
			break;
		}
	}
	return 0;
	
}
