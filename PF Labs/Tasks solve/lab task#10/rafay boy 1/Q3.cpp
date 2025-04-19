#include<stdio.h>

#define maxtemp 45

void tempcomp(float temp, int *count)
{
    if(temp > maxtemp)
        (*count)++;
}

int main()
{
    static int count = 0;
    char ask;

    do {
        float temp;
        printf("Enter the temperature: ");
        scanf("%f", &temp);

        tempcomp(temp, &count);
        printf("Do you want to continue (y/n)? ");
        scanf(" %c",&ask);

    } while(ask == 'y' || ask == 'Y');

    printf("Number of temperatures above %d is %d\n", maxtemp, count);
    return 0;
}
