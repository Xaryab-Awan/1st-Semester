#include<stdio.h>
void rev(int arr[],int size)
{
    if(size<=0)
    return;
    rev(arr,size-1);
    printf("%d",arr[size-1]);
}
int main()
{   int size;
    printf("enter the size for array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    rev(arr, size);
    return 0;
} 