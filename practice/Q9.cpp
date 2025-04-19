#include<stdio.h>
#include<string.h>
void counting(char color[5][5][20])
{
int counted[5][5]={0};

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(counted[i][j]==1)
                continue;
            int count=1;
        for (int k=0;k<5;k++)
            {
               for(int l=0;l<5;l++) 
                {
                 if (i == k && j == l) continue;
                    if (strcmp(color[i][j], color[k][l]) == 0) 
                    {   
                     count++;
                     counted[k][l] = 1;
                    }
                }
            }
            printf("color %s occurs %d times\n",color[i][j],count);
        }
    }
}

main()
{
    char color[5][5][20];
    printf("enter the color responses:\n");
    for(int i=0;i<5;i++)
    {   printf("city %d:",i+1);
        for(int j=0;j<5;j++)
        {
            gets(color[i][j]);
        }
        printf("\n");
    }
    counting(color);
}