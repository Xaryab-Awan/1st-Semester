#include <stdio.h>
int main()
{
    int size, min, max;
    printf("Enter the number of values You want to enter:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min >arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The minimun and maximum values inputted are %d and %d", min, max);
    return 0;
}