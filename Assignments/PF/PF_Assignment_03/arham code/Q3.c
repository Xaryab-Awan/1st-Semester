#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkAddress(char *address, int length) {
    int atDotCount = 0;
    for (int i = 0; i < length; i++) {
        if (address[i] == '@') {
            for (int j = i; j < length; j++) {
                if (address[j] == '.') {
                    atDotCount++;
                    break;
                }
            }
        }
    }
    if (atDotCount == 1) {
        showResults(atDotCount);
    } else {
        showResults(atDotCount);
    }
}

void buildAddress() {
    char *address = (char *)malloc(100 * sizeof(char));
    printf("Enter Email:");
    scanf("%s", address);
    int length = strlen(address);
    address = realloc(address, length + 1);
    checkAddress(address, length);
    free(address);
}

void showResults(int count) {
    if (count == 1) {
        printf("\n Valid Email ✅");
    } else {
        printf("\n Invalid Email ❌");
    }
}

int main() {
    buildAddress();
    return 0;
}


