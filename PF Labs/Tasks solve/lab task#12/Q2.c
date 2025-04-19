#include <stdio.h>
void sum(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum: %d",sum);
}

int main() {
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    sum(&arr,size);

    return 0;
}