#include <stdio.h>
#include <string.h>

int search(char arr[10][20], char email[20], int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(arr[i], email) == 0) {
            printf("EMAIL IS IN THE LIST\n");
            return 1; 
        }
    }
    printf("EMAIL IS NOT IN THE LIST\n");
    return 0;
}

int check(char email[20]) {
    if (strchr(email, '@') == NULL || strchr(email, '.') == NULL) {
        printf("EMAIL IS INVALID\n");
        return 0; 
    }
    return 1; 
}

int main() {
    int choi;
    char arr[10][20];
    int i = 0;

    do {
        int cho;
        printf("menu\n1) add email\n2) search email\n3) exit\n");
        printf("enter your choice: ");
        scanf("%d", &cho);
        
        switch (cho) {
            case 1:
                if (i < 10) { 
                    printf("Enter email: ");
                    scanf("%s", arr[i]);
                    if (check(arr[i])) {
                        i++; 
                    }
                } else {
                    printf("Email list is full.\n");
                }
                break;
                
            case 2:
                if (i > 0) { 
                    char email[20];
                    printf("Enter email to search: ");
                    scanf("%s", email);
                    search(arr, email, i);
                } else {
                    printf("No emails to search.\n");
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choi);
    } while (choi == 'y');

    return 0;
}
