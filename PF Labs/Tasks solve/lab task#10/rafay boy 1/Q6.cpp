#include <stdio.h>
#include <string.h>

struct travelpackage {
    char name[20];
    char destination[20];
    int duration;
    int cost;
    int no_of_seats;
};

void display(struct travelpackage arr[], int n) {
    if (n == 0) {
        printf("No packages available to display.\n");
        return;
    }
    printf("%-20s %-20s %-10s %-10s %-15s\n", "NAME", "DESTINATION", "DURATION", "COST", "NO OF SEATS");
    printf("%-20s %-20s %-10s %-10s %-15s\n", "-------------------", "-------------------", "--------", "--------", "-------------");

    for (int i = 0; i < n; i++) {
        printf("%-20s %-20s %-10d %-10d %-15d\n",
               arr[i].name, arr[i].destination, arr[i].duration, arr[i].cost, arr[i].no_of_seats);
    }
}

int main() {
    int i = 0;
    struct travelpackage arr[10];
    int mode;

    printf("****WELCOME TO TRAVEL PACKAGES****\n\n");

    do {
        printf("CHOOSE YOUR MODE\n1) USER 2) ADMIN 3) EXIT\nENTER YOUR CHOICE: ");
        scanf("%d", &mode);

        if (mode == 1) {
            int userChoice;
            do {
                printf("\n1) Book a package  2) Display all packages 3) Exit User Mode\nEnter your choice: ");
                scanf("%d", &userChoice);

                switch (userChoice) {
                    case 1:
                        {if (i == 0) {
                            printf("No packages available to book.\n");
                            break;
                        }
                        display(arr, i);
                        char temp[20];
                        printf("Enter the name of the package you want to book: ");
                        scanf("%s", temp);
                        int found = 0;
                        for (int j = 0; j < i; j++) {
                            if (strcmp(temp, arr[j].name) == 0) {
                                found = 1;
                                printf("NAME: %s\nDESTINATION: %s\nDURATION: %d\nCOST: %d\nNO OF SEATS: %d\n",
                                       arr[j].name, arr[j].destination, arr[j].duration, arr[j].cost, arr[j].no_of_seats);
                                printf("Enter the number of seats you want to book: ");
                                int seats;
                                scanf("%d", &seats);
                                if (seats <= arr[j].no_of_seats&&seats>0) {
                                    printf("You have successfully booked the package.\n");
                                    arr[j].no_of_seats -= seats;
                                } else {
                                    printf("We have only %d seats left.\n", arr[j].no_of_seats);
                                }
                                break;
                            }
                        }
                        if (!found) {
                            printf("Package not found.\n");
                        }
                        break;
                        }
                    case 2:
                        {if (i == 0) {
                            printf("No packages available.\n");
                            break;
                        }
                        display(arr, i);
                        break;
                        }
                    case 3:
                        {printf("Exiting User Mode.\n");
                        break;
                        }
                    default:
                        {
                       printf("Invalid choice.\n");
                        break;
                        }
                }
            } while (userChoice != 3);
        } else if (mode == 2) {
            int adminChoice;
            do {
                printf("\n1) Add a package 2) Display all packages 3) Exit Admin Mode\nEnter your choice: ");
                scanf("%d", &adminChoice);

                switch (adminChoice) {
                    case 1:
                        if (i >= 10) {
                            printf("Cannot add more packages. Storage full.\n");
                            break;
                        }
                        printf("Enter the name of the package: ");
                        scanf("%s", arr[i].name);
                        printf("Enter the destination of the package: ");
                        scanf("%s", arr[i].destination);
                        printf("Enter the duration of the package: ");
                        scanf("%d", &arr[i].duration);
                        printf("Enter the cost of the package: ");
                        scanf("%d", &arr[i].cost);
                        printf("Enter the number of seats of the package: ");
                        scanf("%d", &arr[i].no_of_seats);
                        i++;
                        break;
                    case 2:
                        display(arr, i);
                        break;
                    case 3:
                        printf("Exiting Admin Mode...\n");
                        break;
                    default:
                        printf("Invalid choice.\n");
                        break;
                }
            } while (adminChoice != 3);
        } else if (mode != 3) {
            printf("Invalid choice.\n");
        }
    } while (mode != 3);

    printf("Thank you for using the travel package system. Goodbye!\n");
    return 0;
}
