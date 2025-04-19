#include<stdio.h>
void bubbleSort(int arr[], int n)
{   if(n==1)
    return;

    int  j;
        for (j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        bubbleSort(arr, n-1);
}
main()
{   int size;
    printf("enter the size of array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, size);
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}