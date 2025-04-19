/*
 * The do-while loop system is better for user input because it allows the user to enter a value
 * and then have the program execute the code inside the loop at least once, regardless of whether
 * the condition is true or false. This ensures that the program will always execute the code at
 * least once before checking the condition, which can be useful when the user may not enter a
 * value that meets the condition the first time.
 */

#include <stdio.h>
int main() {
    int num,sum=0;
    do {
        printf("Enter a number: ");
        scanf("%d",&num);
        sum +=num;
        printf("The sum is %d\n",sum);
    } while (num!=0);
    return 0;
}

