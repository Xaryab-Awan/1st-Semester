#include <stdio.h>
int main()
{
    int a, b;
    int arr[] = {2, 45, 67, 88, 2345, 5, 213, 45, 90};
    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                a=arr[j];
                b=arr[j+1];
                arr[j+1]=a;
                arr[j]=b;
            }
        }
    }
    for(int i=0;i<9;i++){
        
            printf("%d ",arr[i]);
        
    }
}