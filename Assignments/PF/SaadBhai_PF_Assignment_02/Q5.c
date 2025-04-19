#include <stdio.h>

void get_vals(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n;
    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    get_vals(n, arr);

    printf("Horizontal Histogram:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Value %d: ", i + 1);
        for (int j = 1; j <= arr[i]; j++)
        {
            printf("*");
        }
        printf("\t");
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("\nVertical Histogram:\n");
    for (int i = max; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}
