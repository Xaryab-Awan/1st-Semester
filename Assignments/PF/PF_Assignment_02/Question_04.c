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
    int txn_count, code_len;
    printf("Enter the number of transactions: ");
    scanf("%d", &txn_count);
    printf("Enter the length of each transaction code: ");
    scanf("%d", &code_len);
    
    char txns[txn_count][code_len + 1];
    char sorted_txns[txn_count][code_len + 1]; 

    printf("Enter the transaction codes:\n");
    for (int i = 0; i < txn_count; i++) {
        scanf("%s", txns[i]); 
    }

    for (int i = 0; i < txn_count; i++) {
        strcpy(sorted_txns[i], txns[i]); 
        sort(sorted_txns[i], strlen(sorted_txns[i])); 
    }
    
    int printed[txn_count];
    for (int i = 0; i < txn_count; i++) {
        printed[i] = 0;
    }
    
    printf("Grouped:\n");
    for (int i = 0; i < txn_count; i++) {
        if (printed[i] == 1) {
            continue;
        }
        printf("{\"%s\"", txns[i]);
        for (int j = i + 1; j < txn_count; j++) {
            if (strcmp(sorted_txns[i], sorted_txns[j]) == 0) {
                printf(" ,\"%s\"", txns[j]);
                printed[j] = 1;
            }
        }
        printf("}\n");
    }
}
