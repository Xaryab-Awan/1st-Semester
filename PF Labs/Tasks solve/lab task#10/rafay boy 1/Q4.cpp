#include<stdio.h>
#include<string.h>
struct cardetail
{
    char make[20];
    char model[20];
    int year;
    int price;
    int milage;
};
main()
{
    struct cardetail arr[10];
    int i=0;
    char ask;
    int choice;
    printf("*****WELCOME TO THE ONE TIME CAR MANAGEMENT SYSTEM*****\n\n");
    do
    {
        printf(" 1)add car\n 2)display all cars\n 3)search by make\n 4)search by model\n 5)exit\n ENTER YOUR CHOICE :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        if(i<10)
        {
            printf("enter the car details:\n");
            printf("car make:");
            scanf(" %s",&arr[i].make);
            printf("car model:");
            scanf(" %s",&arr[i].model);
            printf("car year:");
            scanf(" %d",&arr[i].year);
            printf("car price:");
            scanf(" %d",&arr[i].price);
            printf("car milage:");
            scanf(" %d",&arr[i].milage);
            i++;
        }
        else 
        printf("the storage is full");
        break;
        case 2:
        if(i<=0)
        printf("there are no car");
        else{
              printf("%-15s %-15s %-5s %-10s %-10s\n", "Make", "Model", "Year", "Price", "Mileage");
    printf("------------------------------------------------------------\n");
            for(int j=0;j<i;j++)
            {
                printf("%-15s %-15s %-5d $%-10.2d %-10d miles\n",
           arr[j].make, arr[j].model, arr[j].year, arr[j].price, arr[j].milage);
            }
        }
        break;
        case 3:
        printf("search the cars by make:\n");
        if(i<=0)
        printf("there are no car");
        else{
            char make[15];
            printf("enter the make of cars:");
            scanf(" %s",make);
        printf("%-15s %-15s %-5s %-10s %-10s\n", "Make", "Model", "Year", "Price", "Mileage");
        printf("------------------------------------------------------------\n");
            for(int j=0;j<i;j++)
            {
                if(strcmp(arr[j].make,make)==0)
                {
                printf("%-15s %-15s %-5d $%-10.2d %-10d miles\n",
           arr[j].make, arr[j].model, arr[j].year, arr[j].price, arr[j].milage);
            }
            }
        }
        break;
        case 4:
        printf("search the cars by model:\n");
        if(i<=0)
        printf("there are no car\n");
        else{
            char model[15];
            printf("enter the model of cars:");
            scanf(" %s",model);
        printf("%-15s %-15s %-5s %-10s %-10s\n", "Make", "Model", "Year", "Price", "Mileage\n");
        printf("------------------------------------------------------------\n");
            for(int j=0;j<i;j++)
            {
                if(strstr(arr[j].model,model)!=NULL)
                {
                printf("%-15s %-15s %-5d $%-10.2d %-10d miles\n",
           arr[j].make, arr[j].model, arr[j].year, arr[j].price, arr[j].milage);
            }
            }
        }
        break;
        case 5:
        printf("exiting!!!");
        break;
        default:
        printf("enter the valid choice");
        break;
        }    
    } while (choice!=5);
}