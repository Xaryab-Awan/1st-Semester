#include<stdio.h>
#define N 5
void reducing(int arr[N][N],int percent)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            int new_value=arr[i][j]*(100-percent)/100;
            if(new_value<0)
            new_value=0;
            arr[i][j]=new_value;
        }
    }
}
int avg(int arr[N][N])
{   int i,j;
    int sum=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum/(i*j);
}
int darkest(int arr[N][N])
{
    int i,j;
    int indexi=0,indexj=0;
    int min=arr[0][0];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
                indexi=i;
                indexj=j+1;
            }
        }
    }
    int point=(indexi*5)+indexj;
    printf("darkest pixel is %d at point %d",min,point);
}
int brightest(int arr[N][N])
{
    int i,j;
    int indexi=0,indexj=0;
    int max=arr[0][0];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                indexi=i;
                indexj=j+1;
            }
        }
    }
    int point=(indexi*5)+indexj;
    printf("brightest pixel is %d at point %d",max,point);
}
void printing(int arr[N][N]){
	for (int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("| %3d |",arr[i][j]);
        }
		printf("\n");
        }	
	}
main()
{
    int arr[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("enter pixel of greyscale(0-255):");
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>255||arr[i][j]<0)
            {   
                printf("jahil grayscale ki limit O-255 hoti h q aukaat se bahir bhagrhe??\n");
                arr[i][j]=0;
                break;
            }
        }
    }
    printf("ENTER THE PERCENTAGE OF DARKNESS OF THE IMAGE:");
    int percent;
    scanf("%d",&percent);
    reducing(arr,percent);
    printing(arr);
    darkest(arr);
    printf("\n");
    brightest(arr);
    printf("\nAverage of greyscale is %d",avg(arr));
}