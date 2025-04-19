#include<stdio.h>
#include<string.h>
void duplicate(char arr[5][5][20])
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
                    if (strcmp(arr[i][j], arr[k][l]) == 0) 
                    {   
                     count++;
                     counted[k][l] = 1;
                    }
                }
            }
            printf("product of code  %s occurs %d times\n",arr[i][j],count);
        }
    }
}
int search(char arr[5][5][20],char id[20])
{
    printf("product is of catogrie:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(strcmp(arr[i][j],id)==0)
            {
                printf(" %d ",i+1);
            }
        }
    }
}

main()
{
    char product[5][5][20];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf(" %s", product[i][j]);
        }
    }
    duplicate(product);
    char id[20];
    printf("enter the id of product:\n");
    scanf("%s",&id);
    search(product,id);
}