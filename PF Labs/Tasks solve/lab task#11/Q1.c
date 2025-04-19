#include <stdio.h>

int main() {
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("file1.txt","w");
    ptr2 =fopen("file2.txt","w");
    fprintf(ptr1,"Hello");
    fprintf(ptr2,"World");
    fclose(ptr1);
    fclose(ptr2);
    FILE *ptr3;
    ptr3=fopen("file3.txt","w");
    ptr1 = fopen("file1.txt","r");
    ptr2 =fopen("file2.txt","r");
    char temp;
    while ((temp = fgetc(ptr1)) != EOF) {
        fputc(temp, ptr3);
    }
    while ((temp = fgetc(ptr2)) != EOF) {
        fputc(temp, ptr3);
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    return 0;
}

