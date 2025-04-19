#include <stdio.h>
struct Player
{
    int ballscore[12];
    char name[20];
    int totalscore; 
};
struct Player P[2];
void Play()
{
    for(int i=0;i<2;i++)
    {
        P[i].totalscore=0;
        printf("Enter Player Name:");
        scanf("%s",&P[i].name);
        for(int j=0;j<12;j++)
        {
            printf("Enter %d ball score:",j+1);
            scanf("%d",&P[i].ballscore[j]);
            int score=P[i].ballscore[j];
            int check=ValidateScore(score);
            if(check == 1)
            {
                P[i].totalscore+=P[i].ballscore[j];
            }
            else
            {
                P[i].ballscore[j]=0;
            }
            
        }
        
    }
    
}
int ValidateScore(int score)
{
    if(score>=0 && score<=6)
    {
        return 1;
    }
    else
    {
        printf("\nScore is invalid\n");
    }
}
void FindWinner(int P1score,int P2score)
{
    if(P1score>P2score)
    {
        printf("\nPlayer 1 Wins");
        printf("\n");
        printf("\n");
    }
    else if(P2score>P1score)
    {
        printf("\n Player 2 Wins");
        printf("\n");
        printf("\n");
    }
    else{
        printf("\nIts a tie");
        printf("\n");
        printf("\n");
    }
}
void DisplayScoreBoard()
{
    for(int i=0;i<2;i++)
    {

        printf("Player %d Name:%s",i+1,P[i].name);
        printf("\n");
        for(int j=0;j<12;j++)
        {
            printf("ball %d score : %d\n",i+1,P[i].ballscore[j]);
        }
        printf("Player %d Total Score:",i+1);
        printf("%d\n",P[i].totalscore);
        printf("\n");
    }
}
int main() {
    Play();
    printf("\n\n");
    int P1score=P[0].totalscore,P2score=P[1].totalscore;
    FindWinner(P1score,P2score);
    DisplayScoreBoard();
    return 0;
}

