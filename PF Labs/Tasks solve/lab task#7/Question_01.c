#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("Enter the number of values You want to enter:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value %d:", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the inputted values is %d", sum);
    return 0;
}