#include <stdio.h>
void SortFunction(int *arr, int size, int order)
{
    
    if (order == 1)
    {
        int temp = 0;
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
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    if (order == 2)
    {
        int temp=0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    
    int n;
    printf("Enter the size of Array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int choice;

    do
    {
        printf("\n");
        printf("1) Ascending order\n2) Descending Order\n3)exit\n");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
        {
            SortFunction(ptr, n, 1);
            break;
        }
        case 2:
        {
            SortFunction(ptr, n, 2);
            break;
        }
        default:
        {
            printf("invalid choice\n");
        }
        }
    } while (choice != 3);

    return 0;
}
