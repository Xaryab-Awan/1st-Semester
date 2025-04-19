#include <stdio.h>
#include <string.h>
struct flightinfo
{
    int flight_number;
    char departure_city[20];
    char destination_city[20];
    char date[15];
    int available_seats;
};
int main()
{
    struct flightinfo arr[3];
    arr[0].flight_number = 1234;
    strcpy(arr[0].departure_city, "Karachi");
    strcpy(arr[0].destination_city, "Islamabad");
    strcpy(arr[0].date, "01-01-2023");
    arr[0].available_seats = 100;

    arr[1].flight_number = 5678;
    strcpy(arr[1].departure_city, "Lahore");
    strcpy(arr[1].destination_city, "Faisalabad");
    strcpy(arr[1].date, "02-01-2023");
    arr[1].available_seats = 50;

    arr[2].flight_number = 9012;
    strcpy(arr[2].departure_city, "Peshawar");
    strcpy(arr[2].destination_city, "Multan");
    strcpy(arr[2].date, "03-01-2023");
    arr[2].available_seats = 75;
    int choice;
    do
    {
        printf("1)Book Flight\n2)Display Flights\n0)Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int flight_number;
            printf("Enter Flight Number:");
            scanf("%d", &flight_number);
            for (int i = 0; i < 3; i++)
            {
                if (arr[i].flight_number == flight_number)
                {
                    if (arr[i].available_seats > 0)
                    {
                        arr[i].available_seats--;
                        printf("\nFlight Booked Successfully\n");
                        break;
                    }
                    else
                    {
                        printf("No Seats Available\n");
                        break;
                    }
                }
            }
            break;
        }
        case 2:
        {
            printf("\n");
            for (int i = 0; i < 3; i++)
            {
                printf("Flight Number:%d\n", arr[i].flight_number);
                printf("Departure City:%s\n", arr[i].departure_city);
                printf("Destination City:%s\n", arr[i].destination_city);
                printf("Date:%s\n", arr[i].date);
                printf("Available Seats:%d\n", arr[i].available_seats);
                printf("\n\n");
            }
            break;
        }
         default:
            printf("Invalid Choice\n");
            break;
        }
    } while (choice != 0);

    return 0;
}