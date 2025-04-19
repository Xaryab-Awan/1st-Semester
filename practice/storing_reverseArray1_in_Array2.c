#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d value:", i + 1);
        scanf("%d", &arr[i]);
    }
    int arr2[size];
    int j;
    for (int i = size - 1, j = 0; i >= 0 , j < size; i--, j++)
    {

        arr2[j] = arr[i];
    }
    printf("The reversed array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr2[i]);
        }
    
}