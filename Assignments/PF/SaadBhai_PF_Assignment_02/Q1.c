#include <stdio.h>

int main()
{
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &nums[i]);
        if (nums[i] > 9999) {
            printf("Invalid Input\nValue exceeds 9999 and will not be considered\n");
            continue;
        }
    }
    
    int min1 = nums[0];
    for (int i = 0; i < 5; i++)
    {
        if (min1 > nums[i]) {
            min1 = nums[i];
        }
    }

    int min2;
    for (int i = 0; i < 5; i++) {
        if ((min2 > nums[i]) && (nums[i] != min1)) {
            min2 = nums[i];
        }
    }
    
    printf("The minimum value is %d and the second minimum value is %d", min1, min2);
    return 0;
}
