#include<stdio.h>
#include<string.h>
void count(char arr[10][20])
{
    int counted[10]={0};
    for (int i = 0; i < 10; i++)
    {
    int count=0;
    if(counted[i]==1)
        continue;
        for(int j=i+1;j<10;j++)
        {   
            if(strcmp(arr[i],arr[j])==0)
            {
                count++;
                counted[j]++;
            }
        }
        printf("the hashtag %s is repeated %d times\n",arr[i],count+1);
        count=0;
    }
}
void top3(char arr[10][20])
{       char temp[3][20];
        int counted[10]={0};
       int  max1=0,max2=0,max3=0;
    for (int i = 0; i < 10; i++)
    {
    int count=0;
    if(counted[i]==1)
        continue;
        for(int j=i+1;j<10;j++)
        {   
            if(strcmp(arr[i],arr[j])==0)
            {
                count++;
                counted[j]++;
            }
        }
        int x=count+1;
        if(x>max1)
        {
            max3=max2;
            max2=max1;
            max1=x;
            strcpy(temp[0],arr[i]);
        }
        else if(x>max2)
        {
            max3=max2;
            max2=x;
            strcpy(temp[1],arr[i]);
        }
        else if(x>max3)
        {
            max3=x;
            strcpy(temp[2],arr[i]);
        }   
        count=0;
    }
    printf("the top 3 hashtags are:\n");
    printf("top 1 : %s\n",temp[0]);
    printf("top 2 : %s\n",temp[1]); 
    printf("top 3 : %s\n",temp[2]);

}
void search(char arr[10][20],char word[20])
{
    for(int i=0;i<10;i++)
    {
        if(strstr(arr[i],word)!=NULL)
        printf(" %s\n",arr[i]);
    }
}

main()
{
    char arr[10][20];
    printf("ENTER HASHTAGS:\n");
    for(int i=0;i<10;i++)
    {
        gets(arr[i]);
        if(arr[i][strlen(arr[i])-1]=='\n')
        arr[i][strlen(arr[i])-1]='\0';
    }
    count(arr);
    top3(arr);
    printf("\n");
    char word[20];
    printf("enter the word to search the hashtags having it: ");
    gets(word);
    search(arr,word);
}