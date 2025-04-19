#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initializeInventory(char ***supplies, int *speciesCount) {
    int i;
    printf("Enter the number of species: ");
    scanf("%d",speciesCount);
    getchar();

    *supplies = (char**)malloc(*speciesCount * sizeof(char *));
    for (i = 0; i < *speciesCount; i++) {
        (*supplies)[i] = NULL; 
    }
    printf("Inventory initialized for %d species.\n", *speciesCount);
}

void addSupplies(char ***supplies, int speciesIndex) {
    int supplyCount, i;
    printf("Enter the number of supplies for species %d: ", speciesIndex + 1);
    scanf("%d", &supplyCount);
    getchar(); 
    supplies[speciesIndex] = (char **)malloc(supplyCount * sizeof(char *));
    printf("Enter the names of %d supplies:\n", supplyCount);

    for (i = 0; i < supplyCount; i++) {
        supplies[speciesIndex][i] = (char *)malloc(20* sizeof(char)); 
        printf("Supply %d: ", i + 1);
        fgets(supplies[speciesIndex][i], 20, stdin);
        supplies[speciesIndex][i][strcspn(supplies[speciesIndex][i], "\n")] = '\0'; 
    }
    printf("Supplies added for species %d.\n", speciesIndex + 1);
}


void updateSupply(char ***supplies, int speciesIndex, int supplyIndex) {
    printf("Enter the new name for supply %d of species %d: ", supplyIndex + 1, speciesIndex + 1);
    fgets(supplies[speciesIndex][supplyIndex], 20, stdin);
    supplies[speciesIndex][supplyIndex][strcspn(supplies[speciesIndex][supplyIndex], "\n")] = '\0';
    printf("Supply updated successfully.\n");
}

void removeSpecies(char ***supplies, int *speciesCount, int speciesIndex) {
    int i;
    for (i = 0; supplies[speciesIndex][i] != NULL; i++) {
        free(supplies[speciesIndex][i]);
    }
    free(supplies[speciesIndex]);
    for (i = speciesIndex; i < *speciesCount - 1; i++) {
        supplies[i] = supplies[i + 1];
    }

    (*speciesCount)--;
    supplies = (char ***)realloc(supplies, *speciesCount * sizeof(char **));
    printf("Species %d removed successfully.\n", speciesIndex + 1);
}

void displayInventory(char ***supplies, int speciesCount) {
    int i, j;
    printf("\n--- Inventory Details ---\n");

    for (i = 0; i < speciesCount; i++) {
        printf("Species %d:\n", i + 1);
        if (supplies[i] != NULL) {
            for (j = 0; supplies[i][j] != NULL; j++) {
                printf("  Supply %d: %s\n", j + 1, supplies[i][j]);
            }
        } else {
            printf("  No supplies available.\n");
        }
    }
}

int main() {
    char ***supplies = NULL;
    int speciesCount = 0; 
    int choice, speciesIndex, supplyIndex;

    do {
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

        switch (choice) {
            case 1:
                initializeInventory(&supplies, &speciesCount);
                break;

            case 2:
                if (speciesCount == 0) {
                    printf("Please initialize the inventory first.\n");
                } else {
                    printf("Enter species index (1 to %d): ", speciesCount);
                    scanf("%d", &speciesIndex);
                    getchar();
                    if (speciesIndex > 0 && speciesIndex <= speciesCount) {
                        addSupplies(&supplies, speciesIndex - 1);
                    } else {
                        printf("Invalid species index.\n");
                    }
                }
                break;

            case 3:
                if (speciesCount == 0) {
                    printf("Please initialize the inventory first.\n");
                } else {
                    printf("Enter species index (1 to %d): ", speciesCount);
                    scanf("%d", &speciesIndex);
                    getchar();
                    if (speciesIndex > 0 && speciesIndex <= speciesCount) {
                        printf("Enter supply index to update: ");
                        scanf("%d", &supplyIndex);
                        getchar();
                        updateSupply(supplies, speciesIndex - 1, supplyIndex - 1);
                    } else {
                        printf("Invalid species index.\n");
                    }
                }
                break;

            case 4:
                if (speciesCount == 0) {
                    printf("Please initialize the inventory first.\n");
                } else {
                    printf("Enter species index (1 to %d): ", speciesCount);
                    scanf("%d", &speciesIndex);
                    getchar();
                    if (speciesIndex > 0 && speciesIndex <= speciesCount) {
                        removeSpecies(&supplies, &speciesCount, speciesIndex - 1);
                    } else {
                        printf("Invalid species index.\n");
                    }
                }
                break;

            case 5:
                displayInventory(supplies, speciesCount);
                break;

            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (choice != 6);

    int i, j;
    for (i = 0; i < speciesCount; i++) {
        if (supplies[i] != NULL) {
            for (j = 0; supplies[i][j] != NULL; j++) {
                free(supplies[i][j]);
            }
            free(supplies[i]);
        }
    }
    free(supplies);

    return 0;
}
