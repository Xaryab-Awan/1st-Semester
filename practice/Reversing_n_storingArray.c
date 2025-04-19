//Int array
#include <stdio.h>
int main()
{
    int size,x,y;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the %d value:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size/2;i++){
        x=arr[i];
        y=arr[size-i-1];
        arr[i]=y;
        arr[size-i-1]=x;
    }   
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}