#include <stdio.h>
#define MaxTemp 100
static int flag=0;
void count(int x)
{
    if (x > MaxTemp)
    {
        flag++;
    }
}
int main()
{

    printf("The MAX allowable Temperature is 100\n");
    while (1)
    {
        int temp;
        printf("Enter the Temperature in Celsius:");
        scanf("%d", &temp);
        if(temp == -1)
        {
            break;
        }
        count(temp);
        printf("Enter -1 to exit\n");
    }
    printf("The Temperature exceeded %d times", flag);
    return 0;
}