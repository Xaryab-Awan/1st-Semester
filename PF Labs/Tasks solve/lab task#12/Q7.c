#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char firstName[20];
    char lastName[20];
    printf("Enter First Name:");
    scanf("%s",firstName);
    printf("Enter last Name:");
    scanf("%s",lastName);
    strcat(firstName,lastName);
    char FullName[40];
    strcpy(FullName,firstName);
    // printf("%s",FullName);
    int len=strlen(FullName);
    // printf("%d",len);
    char *ptr=(char*) malloc(len*sizeof(char));
    if(ptr == NULL)
    {
        printf("Error Alocating memory");
    }
    // strcpy(ptr,FullName);
    ptr=FullName;
    printf("%s",ptr);
    free(ptr);

    return 0;
}