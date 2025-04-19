#include <stdio.h>

#define M_TO_KM 0.001

void convertLen(double m, int *count) {
    (*count)++;
    double km = m * M_TO_KM;
    printf("%f meters is equal to %f kilometers.\n", m, km);
}

int main() {
    int count = 0;
    char ch;   
    do {
        double length;
        printf("Enter the length in meters: ");
        scanf("%lf", &length);
        convertLen(length, &count);
        printf("Do you want to continue (y/n): ");  
        scanf(" %c", &ch);
    } while(ch == 'y' || ch == 'Y');

    printf("This function has been called %d times.\n", count);
    return 0;
}
