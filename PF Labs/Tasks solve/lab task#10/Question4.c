#include <stdio.h>
#include <string.h>
struct dealership
{
    int price;
    int mileage;
    char name[20];
    int model;
};
int main()
{
    struct dealership cars[10];
    int choice;
    int n;
    printf("*****WELCOME TO THE CAR DEALERSHIP *****\n\n");
    do
    {
        printf(" 1) Add new cars:\n 2) Display Cars: \n 3) Search Cars:\n 0) Exit\n");
        scanf("%d", &choice);
        if (choice == 0 || choice == 1 || choice == 2 || choice == 3)
        {
            switch (choice)
            {
            case 1:
            {

                printf("Enter the Number of cars u want to add:");
                scanf("%d", &n);
                for (int i = 0; i < n; i++)
                {
                    printf("Enter the %d car's name:", i + 1);
                    scanf("%s", cars[i].name);
                    printf("Enter the %d car's price:", i + 1);
                    scanf("%d", &cars[i].price);
                    printf("Enter the %d car's mileage:", i + 1);
                    scanf("%d", &cars[i].mileage);
                    printf("Enter the %d car's model:", i + 1);
                    scanf("%d", &cars[i].model);
                    printf("Car Added Succesfully\n");
                }
                break;
            }
            case 2:
            {
                for (int i = 0; i < n; i++)
                {
                    printf("Car %d:", i + 1);
                    printf("Name:%s\n", cars[i].name);
                    printf("Price:%d\n", cars[i].price);
                    printf("Mileage:%d\n", cars[i].mileage);
                    printf("Model:%d\n", cars[i].model);
                }
                break;
            }
            case 3:
            {
                char name[20];
                printf("Enter the name of the car:");
                scanf("%s", name);
                for (int i = 0; i < n; i++)
                {
                    if(strstr(cars[i].name,name)!=NULL)
                    {
                        printf("The car is found at position %d\n",i+1);
                    }
                }
                break;
            }
            }
        }
        else
        {
            printf("Invlaid Input");
        }

    } while (choice != 0);
}