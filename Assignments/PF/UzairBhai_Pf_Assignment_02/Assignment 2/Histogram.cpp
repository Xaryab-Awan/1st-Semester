#include <stdio.h>
void histogram(int n)
{
    int arr[n];
    printf("Enter the values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nHorizontal Histogram: \n");
    for(int i=0;i<n;i++)
    {
        printf("Value %d:",arr[i]);
        for(int j=1;j<=arr[i];j++)
        {
            printf("*");
        }
        printf("\n");
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("\nVertical Histogram:\n");
    for(int i=max;i>0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of elements (Count): ");
    scanf("%d",&n);
    histogram(n);
}
