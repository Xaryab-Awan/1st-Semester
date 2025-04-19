#include <stdio.h>
#include <string.h>

void sort(char arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {    
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, len;
    printf("Enter the number of transactions: ");
    scanf("%d", &n);
    printf("Enter the length of each transaction code: ");
    scanf("%d", &len);
    
    char tx[n][len + 1];
    char sorted_tx[n][len + 1]; 

    printf("Enter the transaction codes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", tx[i]); 
    }

    for (int i = 0; i < n; i++) {
        strcpy(sorted_tx[i], tx[i]); 
        sort(sorted_tx[i], strlen(sorted_tx[i])); 
    }
    
    int printed[n];
    for (int i = 0; i < n; i++) {
        printed[i] = 0;
    }
    
    printf("Grouped:\n");
    for (int i = 0; i < n; i++) {
        if (printed[i] == 1) {
            continue;
        }
        printf("{\"%s\"", tx[i]);
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sorted_tx[i], sorted_tx[j]) == 0) {
                printf(" ,\"%s\"", tx[j]);
                printed[j] = 1;
            }
        }
        printf("}\n");
    }
}
