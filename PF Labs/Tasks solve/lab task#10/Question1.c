#include <stdio.h>
int  print(int arr[],int n)
{
    if(n == 0)
    {
        return 0;
    }
    print(arr,n-1);
    printf("%d",n);
    
    
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
    print(arr,size);
    return 0;
}