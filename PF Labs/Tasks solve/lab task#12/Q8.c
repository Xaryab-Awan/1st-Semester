#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char firstName[20];
    char lastName[20];
    char std_id[20];
    

    printf("Enter First Name:");
    scanf("%s", firstName);
    printf("Enter last Name:");
    scanf("%s", lastName);
    char FullName[40];
    
    strcpy(FullName, firstName);
    strcat(FullName, lastName);
    int len=strlen(FullName);
    char *ptr=(char*) malloc(len*sizeof(char));
    ptr=FullName;
    printf("%s\n",ptr);
    char info[60];
    printf("Enter student id:");
    scanf("%s", std_id);
    int len2=strlen(std_id);
    strcat(info, std_id);
    strcat(info, FullName);
    ptr=realloc(ptr,len+len2);
    ptr=info;
    printf("%s",ptr);

    
    free(ptr);

    return 0;
}

