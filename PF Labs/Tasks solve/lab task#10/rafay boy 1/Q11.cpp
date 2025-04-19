#include <stdio.h>
#include <string.h>

struct flight
{
    char flight_number[10];
    char departure_city[20];
    char destination_city[20];
    char date[15];
    int available_seats;
};

void display(struct flight arr[], int n)
{
    if (n == 0)
    {
        printf("No flights available to display.\n");
        return;
    }
    printf("%-10s %-20s %-20s %-15s %-15s\n", "FLIGHT NO", "DEPARTURE CITY", "DESTINATION CITY", "DATE", "AVAILABLE SEATS");
    printf("%-10s %-20s %-20s %-15s %-15s\n", "---------", "---------------", "---------------", "------------", "---------------");

    for (int i = 0; i < n; i++)
    {
        printf("%-10s %-20s %-20s %-15s %-15d\n",
               arr[i].flight_number, arr[i].departure_city, arr[i].destination_city, arr[i].date, arr[i].available_seats);
    }
}

int main()
{
    int i = 0;
    struct flight arr[10];
    int mode;

    printf("****WELCOME TO FLIGHT MANAGEMENT SYSTEM****\n\n");

    do
    {
        printf("CHOOSE YOUR MODE\n1) USER 2) ADMIN 3) EXIT\nENTER YOUR CHOICE: ");
        scanf("%d", &mode);

        if (mode == 1)
        {
            int userChoice;
            do
            {
                printf("\n1) Book a seat 2) Display all flights 3) Exit User Mode\nEnter your choice: ");
                scanf("%d", &userChoice);

                switch (userChoice)
                {
                case 1:
                {
                    if (i == 0)
                    {
                        printf("No flights available to book.\n");
                        break;
                    }
                    display(arr, i);
                    char temp[10];
                    printf("Enter the flight number you want to book: ");
                    scanf("%s", temp);
                    int found = 0;
                    for (int j = 0; j < i; j++)
                    {
                        if (strcmp(temp, arr[j].flight_number) == 0)
                        {
                            found = 1;
                            printf("FLIGHT NO: %s\nDEPARTURE CITY: %s\nDESTINATION CITY: %s\nDATE: %s\nAVAILABLE SEATS: %d\n",
                                   arr[j].flight_number, arr[j].departure_city, arr[j].destination_city, arr[j].date, arr[j].available_seats);
                            printf("Enter the number of seats you want to book: ");
                            int seats;
                            scanf("%d", &seats);
                            if (seats <= arr[j].available_seats && seats > 0)
                            {
                                printf("You have successfully booked the flight.\n");
                                arr[j].available_seats -= seats;
                            }
                            else
                            {
                                printf("We have only %d seats left.\n", arr[j].available_seats);
                            }
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("Flight not found.\n");
                    }
                    break;
                }
                case 2:
                {
                    if (i == 0)
                    {
                        printf("No flights available to display.\n");
                        break;
                    }
                    else
                        display(arr, i);
                    break;
                }
                case 3:
                {
                    printf("Exiting User Mode.\n");
                    break;
                }
                default:
                {
                    printf("Invalid choice. Please try again.\n");
                    break;
                }
                }
            } while (userChoice != 3);
        }
        else if (mode == 2)
        {
            int adminChoice;
            do
            {
                printf("\n1) Add a flight 2) Display all flights 3) Exit Admin Mode\nEnter your choice: ");
                scanf("%d", &adminChoice);

                switch (adminChoice)
                {
                case 1:
                    if (i >= 10)
                    {
                        printf("Cannot add more flights. Storage full.\n");
                        break;
                    }
                    printf("Enter the flight number: ");
                    scanf("%s", arr[i].flight_number);
                    printf("Enter the departure city: ");
                    scanf("%s", arr[i].departure_city);
                    printf("Enter the destination city: ");
                    scanf("%s", arr[i].destination_city);
                    printf("Enter the date (DD/MM/YYYY): ");
                    scanf("%s", arr[i].date);
                    printf("Enter the number of available seats: ");
                    scanf("%d", &arr[i].available_seats);
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
        }
        else if (mode != 3)
        {
            printf("Invalid choice.\n");
        }
    } while (mode != 3);

    printf("Thank you for using the flight management system. Goodbye!\n");
    return 0;
}
