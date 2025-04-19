#include<stdio.h>

int linearSearch(int arr[], int size, int target, int index)
{
    if (index >= size)
        return 0;

    if (arr[index] == target)
        return 1;

    return linearSearch(arr, size, target, index + 1);
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target, index;
    printf("Enter the target element: ");
    scanf("%d", &target);
    printf("Enter the starting index: ");
    scanf("%d", &index);

    if (index >= size || index < 0) {
        printf("Invalid starting index.\n");
        return 0;
    }

    int result = linearSearch(arr, size, target, index);
    if (result == 1)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
