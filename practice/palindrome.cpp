#include <stdio.h>
#include <string.h>

int main() {
    int i;
    printf("Enter the number of words you want to check for palindromes: ");
    scanf("%d", &i);
    getchar();
    char arr[i][50];
    for (int j = 0; j < i; j++) {
        printf("Enter word %d: ", j + 1);
        fgets(arr[j], sizeof(arr[j]), stdin);
        if(arr[j][strlen(arr[j]) - 1] == '\n')
        {
            arr[j][strlen(arr[j]) - 1] = '\0';
        }
    }
    for (int j = 0; j < i; j++) {
        char temp[50];
        strcpy(temp, arr[j]);
        strrev(temp);

        if (strcmp(arr[j], temp) == 0) {
            printf("%s is a palindrome\n", arr[j]);
        } else {
            printf("%s is not a palindrome\n", arr[j]);
        }
    }

    return 0;
}
