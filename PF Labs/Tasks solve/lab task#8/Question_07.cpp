#include <stdio.h>
int main()
{
    int arr_1[3][3];
    printf("Enter 1st Matrix\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Enter (%d,%d) element:", i + 1, j + 1);
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("Enter 2nd Matrix\n");
    int arr_2[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Enter (%d,%d) element:", i + 1, j + 1);
            scanf("%d", &arr_2[i][j]);
        }
    }
    printf("1st Matrix\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr_1[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr_2[i][j]);
        }
        printf("\n");
    }
    int arr_mul[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            arr_mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                arr_mul[i][j] += arr_1[i][k] * arr_2[k][j];
            }
            
        }
    }
    printf("Multiplcation\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr_mul[i][j]);
        }
        printf("\n");
    }
}