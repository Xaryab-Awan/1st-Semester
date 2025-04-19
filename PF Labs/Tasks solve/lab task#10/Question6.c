#include <stdio.h>
#include <string.h>
struct Packages
{
    char name[20];
    int cost;
    char destination[20];
    int duration;
    int seats;
};
int main()
{
    struct Packages P1;
    struct Packages P2;
    strcpy(P1.name, "umrah");
    strcpy(P2.name, "hajj");
    P1.cost = 1000000;
    P2.cost = 10000000;
    strcpy(P1.destination, "makkah");
    strcpy(P2.destination, "makkah");
    P1.duration = 10;
    P2.duration = 20;
    P1.seats = 100;
    P2.seats = 50;
    int choice;
    printf("*****Welcome to Tourism Agency*****");
    do
    {
        printf("\n");
        printf(" 1) Book a Package:\n 2) Display Packages:\n 0)Exit\n");
        printf("Enter the choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("1)Umrah\n2)Hajj");
            printf("\n");
            int n;
            printf("Enter the choice :");
            scanf("%d", &n);
            switch (n)
            {
            case 1:
            {
                printf("\n");
                P1.seats--;
                printf("Package Booked Succesfully");
                printf("\n");
                break;
            }
            case 2:
            {
                printf("\n");
                P2.seats--;
                printf("Package Booked Succesfully");
                printf("\n");
                break;
            }
            default:
            {
                printf("Invalid Input");
                printf("\n");
            }
            }
            break;
        }
        case 2:
        {
            printf("\n");
            printf("PACKAGE 1:");
            printf("\n");
            printf("NAME:%s", P1.name);
            printf("\n");
            printf("COST:%d", P1.cost);
            printf("\n");
            printf("DESTINATION:%s", P1.destination);
            printf("\n");
            printf("DURATION:%d", P1.duration);
            printf("\n");
            printf("SEATS:%d", P1.seats);
            printf("\n");
            printf("\n");
            printf("PACKAGE 2:");
            printf("\n");
            printf("NAME:%s", P2.name);
            printf("\n");
            printf("COST:%d", P2.cost);
            printf("\n");
            printf("DESTINATION:%s", P2.destination);
            printf("\n");
            printf("DURATION:%d", P2.duration);
            printf("\n");
            printf("SEATS:%d", P2.seats);
            printf("\n");
            printf("\n");
            break;
        }
        }
    } while (choice != 0);
}

