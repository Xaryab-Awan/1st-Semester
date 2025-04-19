#include <stdio.h>

int main()
{
    int num1, num2, num3;
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    int i = 0;
    int choice;
    do
    {
        printf("Enter the 1st number of column %d:", i + 1);
        scanf("%d", &num1);
        printf("Enter the 2nd number of column %d:", i + 1);
        scanf("%d", &num2);
        printf("Enter the 3rd number of column %d:", i + 1);
        scanf("%d", &num3);
        fprintf(ptr, "%d\t%d\t%d\n", num1, num2, num3);
        printf("Do u want to continue: 1 for yes 0 for no\n");
        scanf("%d", &choice);
        i++;
    } while (choice != 0);
    fclose(ptr);
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int temp1, temp2, temp3;
    ptr = fopen("abc.txt", "r");
    while (fscanf(ptr, "%d\t%d\t%d", &temp1, &temp2, &temp3) != EOF)
    {
        sum1 += temp1;
        sum2 += temp2;
        sum3 += temp3;
    }
    fclose(ptr);
    printf("The sum of three columns are %d %d %d", sum1, sum2, sum3);
    return 0;
}
