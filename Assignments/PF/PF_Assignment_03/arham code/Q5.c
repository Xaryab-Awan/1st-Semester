#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InitializeInventory(char ***supplies, int *count)
{
    int i;
    printf("Enter the number of species: ");
    scanf("%d", count);
    getchar();
    *supplies = (char **)malloc(*count * sizeof(char *));
    for (i = 0; i < *count; i++)
    {
        (*supplies)[i] = NULL;
    }
    printf("Inventory initialized for %d species.\n", *count);
}

void AddSupplies(char ***supplies, int index)
{
    int count, i;
    printf("Enter the number of supplies for species %d: ", index + 1);
    scanf("%d", &count);
    getchar();
    supplies[index] = (char **)malloc(count * sizeof(char *));
    printf("Enter the names of %d supplies:\n", count);
    for (i = 0; i < count; i++)
    {
        supplies[index][i] = (char *)malloc(20 * sizeof(char));
        printf("Supply %d: ", i + 1);
        fgets(supplies[index][i], 20, stdin);
        supplies[index][i][strcspn(supplies[index][i], "\n")] = '\0';
    }
    printf("Supplies added for species %d.\n", index + 1);
}

void UpdateSupply(char ***supplies, int speciesIndex, int supplyIndex)
{
    printf("Enter the new name for supply %d of species %d: ", supplyIndex + 1, speciesIndex + 1);
    fgets(supplies[speciesIndex][supplyIndex], 20, stdin);
    supplies[speciesIndex][supplyIndex][strcspn(supplies[speciesIndex][supplyIndex], "\n")] = '\0';
    printf("Supply updated successfully.\n");
}

void RemoveSpecies(char ***supplies, int *count, int index)
{
    int i;
    for (i = 0; supplies[index][i] != NULL; i++)
    {
        free(supplies[index][i]);
    }
    free(supplies[index]);
    for (i = index; i < *count - 1; i++)
    {
        supplies[i] = supplies[i + 1];
    }
    (*count)--;
    supplies = (char ***)realloc(supplies, *count * sizeof(char **));
    printf("Species %d removed successfully.\n", index + 1);
}

void DisplayInventory(char ***supplies, int count)
{
    int i, j;
    printf("\n--- Inventory Details ---\n");
    for (i = 0; i < count; i++)
    {
        printf("Species %d:\n", i + 1);
        if (supplies[i] != NULL)
        {
            for (j = 0; supplies[i][j] != NULL; j++)
            {
                printf("  Supply %d: %s\n", j + 1, supplies[i][j]);
            }
        }
        else
        {
            printf("  No supplies available.\n");
        }
    }
}

int main()
{
    char ***supplies = NULL;
    int count = 0;
    int choice, index, supplyIndex;
    do
    {
        printf("\nPets in Heart Inventory Menu\n\n");
        printf("1. Initialize Inventory\n");
        printf("2. Add Supplies to Species\n");
        printf("3. Update a Supply\n");
        printf("4. Remove a Species\n");
        printf("5. Display Inventory\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            InitializeInventory(&supplies, &count);
            break;
        case 2:
            if (count == 0)
            {
                printf("Please initialize the inventory first.\n");
            }
            else
            {
                printf("Enter species index (1 to %d): ", count);
                scanf("%d", &index);
                getchar();
                if (index > 0 && index <= count)
                {
                    AddSupplies(&supplies, index - 1);
                }
                else
                {
                    printf("Invalid species index.\n");
                }
            }
            break;
        case 3:
            if (count == 0)
            {
                printf("Please initialize the inventory first.\n");
            }
            else
            {
                printf("Enter species index (1 to %d): ", count);
                scanf("%d", &index);
                getchar();
                if (index > 0 && index <= count)
                {
                    printf("Enter supply index to update: ");
                    scanf("%d", &supplyIndex);
                    getchar();
                    UpdateSupply(supplies, index - 1, supplyIndex - 1);
                }
                else
                {
                    printf("Invalid species index.\n");
                }
            }
            break;
        case 4:
            if (count == 0)
            {
                printf("Please initialize the inventory first.\n");
            }
            else
            {
                printf("Enter species index (1 to %d): ", count);
                scanf("%d", &index);
                getchar();
                if (index > 0 && index <= count)
                {
                    RemoveSpecies(&supplies, &count, index - 1);
                }
                else
                {
                    printf("Invalid species index.\n");
                }
            }
            break;
        case 5:
            DisplayInventory(supplies, count);
            break;
        case 6:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }
    } while (choice != 6);
    int i, j;
    for (i = 0; i < count; i++)
    {
        if (supplies[i] != NULL)
        {
            for (j = 0; supplies[i][j] != NULL; j++)
            {
                free(supplies[i][j]);
            }
            free(supplies[i]);
        }
    }
    free(supplies);
    return 0;
}
