#include<stdio.h>
#include<string.h>
#define N 7
#define M 7

void find(char arr[N][M][50],int x)
{
    for(int i=x;i<x+1;i++){
        printf("on day %d .These movies are sheduled:",i);
        for(int j=0;j<M;j++){
        printf("\n %s ",arr[i][j]);      
        }
}
}
void finding(char arr[N][M][50],char mov_nam[50],int x1)
{int flag=0;
    for(int i=x1;i<x1+1;i++){
        for(int j=0;j<M;j++){
            if(strcmp(arr[i][j],mov_nam)==0){
                flag=1;
            }
        }
    }
    if(flag==1)
    printf("the movie is avaialble");
    else
    printf("the movie is not available");   
}
main()
{   char cho;

    char movies[N][M][50]=
    {
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"},
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"},        
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"},
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"},
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"},
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"},
        {"movie1","movie2","movie3","movie4","movie5","movie6","movie7"}         
    };
    int x;
    do{
        printf("menu:\n1)list.\n2)find.\n3)exit.\n");
    printf("enter your choice:");
    scanf("%d",&cho);
    switch(cho)
    {    
    case 1:
    printf("which day:");
    scanf("%d",&x);
    find(movies,x);
    printf("\n");
    break;
    case 2:
    int x1;
    printf("on which day do you want movie:");
    scanf("%d",&x1);
    char mov_nam[50];
    printf("movie name :");
    scanf(" %s", mov_nam);
    finding(movies,mov_nam,x1);
    break;
    default:
    break;
    }    
    }while(cho==3);
}