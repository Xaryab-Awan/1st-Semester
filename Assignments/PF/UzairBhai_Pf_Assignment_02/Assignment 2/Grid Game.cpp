#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int score;
void display(char grid[5][5])
{
	for(int i=0;i<5;i++)
	{
		printf("[");
		for(int j=0;j<5;j++)
		{
			printf(" %c, ",grid[i][j]);
		}
		printf("]\n");
	}
}
void play(char grid[5][5], char op)
{
	int current_position[2];
	switch(op)
	{
		case 'W':
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(grid[i][j]=='P')
					{
					current_position[0]=i;
					current_position[1]=j;
				}
				}
			}
			if(grid[current_position[0]-1][current_position[1]]=='X')
				{
						printf("\nAn obstacle is present\n");
				}
			else if(grid[current_position[0]-1][current_position[1]]=='I')
				{
						score++;
						grid[current_position[0]-1][current_position[1]]='P';
						grid[current_position[0]][current_position[1]]=' ';
						printf("\nYou score is %d\n",score);
				}
				else if(grid[current_position[0]-1][current_position[1]]==' ')
				{
						grid[current_position[0]-1][current_position[1]]='P';
						grid[current_position[0]][current_position[1]]=' ';
				}
				else
				{
					printf("\nYou are out of Grid\n");
				}
				display(grid);
			
			break;
			
		case 'A':
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(grid[i][j]=='P')
					{
					current_position[0]=i;
					current_position[1]=j;
					}	
				}
			}
			if(grid[current_position[0]][current_position[1]-1]=='X')
				{
						printf("\nAn obstacle is present\n");
				}
			else if(grid[current_position[0]][current_position[1]-1]=='I')
				{
						score++;
						grid[current_position[0]][current_position[1]-1]='P';
						grid[current_position[0]][current_position[1]]=' ';
						printf("\nYou score is %d\n",score);
				}
				else if(grid[current_position[0]][current_position[1]-1]==' ')
				{
						grid[current_position[0]][current_position[1]-1]='P';
						grid[current_position[0]][current_position[1]]=' ';
				}
				else
				{
					printf("\nYou are out of Grid\n");
				}
				display(grid);
			break;
			
		case 'S':
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(grid[i][j]=='P')
					{
					current_position[0]=i;
					current_position[1]=j;
				}
				}
			}
			if(grid[current_position[0]+1][current_position[1]]=='X')
				{
						printf("\nAn obstacle is present\n");
				}
			else if(grid[current_position[0]+1][current_position[1]]=='I')
				{
						score++;
						grid[current_position[0]+1][current_position[1]]='P';
						grid[current_position[0]][current_position[1]]=' ';
						printf("\nYou score is %d\n",score);
				}
				else if(grid[current_position[0]+1][current_position[1]]==' ')
				{
						grid[current_position[0]+1][current_position[1]]='P';
						grid[current_position[0]][current_position[1]]=' ';
				}
				else
				{
					printf("\nYou are out of Grid\n");
				}
				display(grid);
			break;
			
		case 'D':
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(grid[i][j]=='P')
					{
					current_position[0]=i;
					current_position[1]=j;
					}	
				}
			}
			if(grid[current_position[0]][current_position[1]+1]=='X')
				{
						printf("\nAn obstacle is present\n");
				}
			else if(grid[current_position[0]][current_position[1]+1]=='I')
				{
						score++;
						grid[current_position[0]][current_position[1]+1]='P';
						grid[current_position[0]][current_position[1]]=' ';
						printf("\nYou score is %d\n",score);
				}
				else if(grid[current_position[0]][current_position[1]+1]==' ')
				{
						grid[current_position[0]][current_position[1]+1]='P';
						grid[current_position[0]][current_position[1]]=' ';
				}
				else
				{
					printf("\nYou are out of Grid\n");
				}
				display(grid);
			break;
			default:
			printf("\nInvalid Input");			
	}
}
int main()
{
	char grid[5][5] = { {' ', ' ', 'I', 'X', ' '},
						{' ', 'X', ' ', ' ', ' '},
						{'I', ' ', 'X', 'X', ' '},
						{' ', ' ', ' ', 'I', 'X'},
						{' ', 'X', ' ', ' ', 'P'}  };
	display(grid);
	int flag;
	do{
	char operation;
	printf("\nW: up , S: down, A: left, D: right");
	printf("\nEnter your Operation: ");
	scanf(" %c",&operation);
	operation = toupper(operation);
	play(grid,operation);
	printf("\nYou want to keep playing (1. Yes 0. No): ");
	scanf("%d",&flag);
	system("cls");
	display(grid);
	}while(flag!=0);
	printf("You final score is %d",score);
}
