#include<stdio.h>
void update(int arr[5][5],int index,int update)
{   
    int y=(index%5)-1;
    int x=index/5;
    arr[x][y]= update;
}
void printing(int arr[5][5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("|%d| ",arr[i][j]);
        }
        printf("\n");
    }
}
float avg_temp(int arr[5][5])
{int sum=0;
int i,j;
    for( i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    float avg=sum/(i*j);
    return avg;
}
void high_temp(int arr[5][5])
{int max=arr[0][0];
int indexi=0,indexj=0;
    for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(arr[i][j]>max)
        {
        max=arr[i][j];
        indexi=i;
        indexj=j+1;
        }
    }
}
    int point=indexi*5+indexj;
    printf("the highest temperature is %d at point %d",max,point);
}
int main()
{int grid;
char choice;  
int new_temp;
    int arr[5][5]={
        {28,32,35,29,16},
        {17,22,45,29,27},
        {25,26,32,31,29},
        {22,21,23,25,27},
        {28,32,35,29,16}
    };
    do{
        printing(arr);
    float avg=avg_temp(arr);
    printf("the average temperature is %f\n",avg);
    high_temp(arr);
    printf("\nENTER THE POINT WHERE YOU WANT TO UPDATE:");
    scanf("%d",&grid);
    printf("\nENTER THE new temperature:");
    scanf("%d",&new_temp);
    update(arr,grid,new_temp);
    printing(arr);
    
    printf("\nDO YOU WANT TO CONTINUE:(y/n)");
    scanf(" %c",&choice);
    }while( choice=='y');
}



