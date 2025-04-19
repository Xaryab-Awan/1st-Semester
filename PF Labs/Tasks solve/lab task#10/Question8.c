#include <stdio.h>
int Search(int arr[],int n,int target)
{
    if(n<0)
    {
        return -1;
    }
    if(target==arr[n])
    {
        return n;
    }
    else
    Search(arr,n-1,target);
}
int main() {
    int size;
    printf("Enter the Number of elements:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("[");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("]\n");
    int target;
    printf("Enter the Target Element:");
    scanf("%d",&target);
    int index=-1;
    index=Search(arr,size,target);
    if(index!=-1)
    {
        printf("The Target %d found at %d index",target,index);

    }
    
    else
    {
        printf("Target Not found");
    }
    
    return 0;
}