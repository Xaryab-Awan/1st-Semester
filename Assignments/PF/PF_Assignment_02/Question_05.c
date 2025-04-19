#include <stdio.h>
void func(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d value: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int n;
    printf("How many numbers do u want to Enter:");
    scanf("%d", &n);
    int arr[n];
    func(n, arr);
    printf("Horizontal Histogram: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Value 1:");
        for (int j = 1; j <= arr[i]; j++)
        {
            printf("*");
        }
        printf("\t");
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("\nVertical Histogram:\n");
    for(int i=max;i>0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
