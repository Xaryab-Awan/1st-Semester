#include <stdio.h>
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        int sumis = num % 10 + sum(num / 10);
        return sumis;
    }
}
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d", sum(num));
}