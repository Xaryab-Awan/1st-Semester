#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    int flag = 0;

    for (int i = num; i > 0; i--)
    {
        if (i == 0)
        {
            continue;
        }
        if (i % 2 != 0)
        {
            flag++;
        }
    }
    for (int i = num; i > 0; i--)
    {
        if (i == 0)
        {
            continue;
        }
        if (i % 2 != 0)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
    }
}
