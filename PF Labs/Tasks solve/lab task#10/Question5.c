#include <stdio.h>
void BubbleSort(int arr[],int n)
{
    int a;
    if(n==-1)
    {
        return;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {   
            if(arr[i]>arr[i+1])
            {
                a=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=a;
            }
        }
        BubbleSort(arr,n-1);
    }
}
int main() {
    int size;
    printf("Enter the Number of elements:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}