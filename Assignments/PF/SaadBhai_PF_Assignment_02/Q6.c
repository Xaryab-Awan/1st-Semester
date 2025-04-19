#include <stdio.h>

int get_choice(int n)
{
    if (n % 5 == 0)
    {
        return -1;
    }
    else
    {
        return n % 5;
    }
}

int main()
{
    int n;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &n);
    
    int choice = get_choice(n);
    if (choice == -1)
    {
        printf("Your win may be impossible");
    }
    else
    {
        printf("You need to pick %d matchsticks on the first try to guarantee your win", choice);
    }

    return 0;
}
