#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter 5 elements: ");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],index;
    
    for(int i=0;i<=4;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(i==index)
        {
            arr[i]=arr[i]-arr[index];
        }
    }
    if(index==0)
    {
        min=arr[1];
    }
    else
    {
        min=arr[0];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The second smallest number in the array is %d",min);
}
