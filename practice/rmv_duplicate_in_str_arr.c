#include <stdio.h>
int main()
{
    int size, temp;
    printf("How many elemnts:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d elemnt:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    int arr2[size - count];
    int  j=0;
    for (int i = 0 ; i < size - 1; i++)
    {
        if(arr[i]!=arr[i+1]){
            arr2[j]=arr[i];
            j++;
        }
    }
    arr2[j]=arr[size-1];
    for(int i=0;i<size-count;i++){
        printf("%d ",arr2[i]);

    }
}