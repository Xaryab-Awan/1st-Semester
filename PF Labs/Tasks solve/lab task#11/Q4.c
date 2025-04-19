#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr, *temp;
    char name[20];
    int quantity, record, count = 8;
    float cost;
    int choice;
    ptr = fopen("hardware.txt", "w");
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(ptr, "3\tElectric sander\t7\t57.98\n");
    fprintf(ptr, "17\tHammer\t76\t11.99\n");
    fprintf(ptr, "24\tJig saw\t21\t11.00\n");
    fprintf(ptr, "39\tLawn mower\t3\t79.50\n");
    fprintf(ptr, "56\tPower saw\t18\t99.99\n");
    fprintf(ptr, "68\tScrewdriver\t106\t6.99\n");
    fprintf(ptr, "77\tSledge hammer\t11\t21.50\n");
    fprintf(ptr, "83\tWrench\t34\t7.50\n");
    fclose(ptr);

    while (1)
    {
        printf("\n1) Add item 2) Delete item 3) Display 4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (count >= 10)
            {
                printf("More data cannot be added (limit reached).\n");
            }
            else
            {
                ptr = fopen("hardware.txt", "a");
                if (ptr == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }

                printf("Enter the record number: ");
                scanf("%d", &record);
                printf("Enter the name of the tool: ");
                scanf("%s", name);
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                printf("Enter the cost: ");
                scanf("%f", &cost);

                fprintf(ptr, "%d\t%s\t%d\t%.2f\n", record, name, quantity, cost);
                fclose(ptr);

                count++;
                printf("Record added successfully.\n");
            }
            break;

        case 2:
            ptr = fopen("hardware.txt", "r");
            if (ptr == NULL)
            {
                printf("Error opening file!\n");
                break;
            }

            printf("Enter the record number to be deleted: ");
            int deleteRecord;
            scanf("%d", &deleteRecord);

            temp = fopen("temp.txt", "w");
            if (temp == NULL)
            {
                printf("Error creating temporary file!\n");
                fclose(ptr);
                break;
            }

            int found = 0;
            while (fscanf(ptr, "%d %s %d %f", &record, name, &quantity, &cost) != EOF)
            {
                if (record == deleteRecord)
                {
                    found = 1;
                    continue;
                }
                fprintf(temp, "%d\t%s\t%d\t%.2f\n", record, name, quantity, cost);
            }
            fclose(ptr);
            fclose(temp);

            if (found)
            {
                remove("hardware.txt");
                rename("temp.txt", "hardware.txt");
                count--;
                printf("Record deleted successfully.\n");
            }
            else
            {
                printf("Record not found.\n");
                remove("temp.txt");
            }
            break;

        case 3:
            ptr = fopen("hardware.txt", "r");
            if (ptr == NULL)
            {
                printf("Error opening file!\n");
                break;
            }

            printf("Record #   Tool Name   Quantity   Cost\n");
            while (fscanf(ptr, "%d\t%[^\t]\t%d\t%f", &record, name, &quantity, &cost)!=EOF)
            {
                printf("%d\t%s\t%d\t%.2f\n", record, name, quantity, cost);
            }
            fclose(ptr);
            break;

        case 4:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

