#include<stdio.h>
#include<string.h>

void rev(char str[], int len, char temp[], int index) {
    if (len == 0) {
       temp[index] = '\0';
        return;
    } else {
        temp[index] = str[len - 1];
        rev(str, len - 1, temp, index + 1);
    }
}

int main() {
    char str[100], reversed[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    rev(str, len, reversed, 0);
    printf("Reversed string: %s\n", reversed);
    return 0;
}
