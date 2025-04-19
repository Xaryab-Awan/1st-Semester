#include <stdio.h>
int main()
{
    int size;
    printf("Enter the number of values You want to enter:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements entered in reversed order are:");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
