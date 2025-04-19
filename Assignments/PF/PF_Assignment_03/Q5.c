#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InitInv(char ***inv, int *specCnt) {
    printf("Enter number of species: ");
    scanf("%d", specCnt);
    getchar();
    *inv = (char **)malloc(*specCnt * sizeof(char *));
    for (int i = 0; i < *specCnt; i++) {
        (*inv)[i] = NULL;
    }
    printf("Inventory initialized for %d species.\n", *specCnt);
}

void AddItems(char ***inv, int specIdx) {
    int itemCnt;
    printf("Enter number of supplies for species %d: ", specIdx + 1);
    scanf("%d", &itemCnt);
    getchar();
    inv[specIdx] = (char **)malloc(itemCnt * sizeof(char *));
    printf("Enter the names of %d supplies:\n", itemCnt);
    for (int i = 0; i < itemCnt; i++) {
        inv[specIdx][i] = (char *)malloc(20 * sizeof(char));
        printf("Supply %d: ", i + 1);
        fgets(inv[specIdx][i], 20, stdin);
        inv[specIdx][i][strcspn(inv[specIdx][i], "\n")] = '\0';
    }
    printf("Supplies added for species %d.\n", specIdx + 1);
}

void UpdateItem(char ***inv, int specIdx, int itemIdx) {
    printf("Enter new name for supply %d of species %d: ", itemIdx + 1, specIdx + 1);
    fgets(inv[specIdx][itemIdx], 20, stdin);
    inv[specIdx][itemIdx][strcspn(inv[specIdx][itemIdx], "\n")] = '\0';
    printf("Supply updated successfully.\n");
}

void RemoveSpec(char ***inv, int *specCnt, int specIdx) {
    for (int i = 0; inv[specIdx][i] != NULL; i++) {
        free(inv[specIdx][i]);
    }
    free(inv[specIdx]);
    for (int i = specIdx; i < *specCnt - 1; i++) {
        inv[i] = inv[i + 1];
    }
    (*specCnt)--;
    inv = (char ***)realloc(inv, *specCnt * sizeof(char **));
    printf("Species %d removed successfully.\n", specIdx + 1);
}

void ShowInv(char ***inv, int specCnt) {
    printf("\n--- Inventory Details ---\n");
    for (int i = 0; i < specCnt; i++) {
        printf("Species %d:\n", i + 1);
        if (inv[i] != NULL) {
            for (int j = 0; inv[i][j] != NULL; j++) {
                printf("  Supply %d: %s\n", j + 1, inv[i][j]);
            }
        } else {
            printf("  No supplies available.\n");
        }
    }
}

int main() {
    char ***inv = NULL;
    int specCnt = 0, choice, specIdx, itemIdx;

    do {
        printf("\nPets Inventory Menu\n\n");
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
            InitInv(&inv, &specCnt);
            break;
        case 2:
            if (specCnt == 0) {
                printf("Please initialize inventory first.\n");
            } else {
                printf("Enter species index (1 to %d): ", specCnt);
                scanf("%d", &specIdx);
                getchar();
                if (specIdx > 0 && specIdx <= specCnt) {
                    AddItems(&inv, specIdx - 1);
                } else {
                    printf("Invalid species index.\n");
                }
            }
            break;
        case 3:
            if (specCnt == 0) {
                printf("Please initialize inventory first.\n");
            } else {
                printf("Enter species index (1 to %d): ", specCnt);
                scanf("%d", &specIdx);
                getchar();
                if (specIdx > 0 && specIdx <= specCnt) {
                    printf("Enter supply index to update: ");
                    scanf("%d", &itemIdx);
                    getchar();
                    UpdateItem(inv, specIdx - 1, itemIdx - 1);
                } else {
                    printf("Invalid species index.\n");
                }
            }
            break;
        case 4:
            if (specCnt == 0) {
                printf("Please initialize inventory first.\n");
            } else {
                printf("Enter species index (1 to %d): ", specCnt);
                scanf("%d", &specIdx);
                getchar();
                if (specIdx > 0 && specIdx <= specCnt) {
                    RemoveSpec(&inv, &specCnt, specIdx - 1);
                } else {
                    printf("Invalid species index.\n");
                }
            }
            break;
        case 5:
            ShowInv(inv, specCnt);
            break;
        case 6:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }
    } while (choice != 6);

    for (int i = 0; i < specCnt; i++) {
        if (inv[i] != NULL) {
            for (int j = 0; inv[i][j] != NULL; j++) {
                free(inv[i][j]);
            }
            free(inv[i]);
        }
    }
    free(inv);

    return 0;
}
