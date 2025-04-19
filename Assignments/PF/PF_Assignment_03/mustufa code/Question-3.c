#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int validateEmail(char* email){
    if(email == NULL || strlen(email) == 0){
        return 0;
    }

    char* pos = strchr(email,'@');
    if(pos == NULL){
        return 0;
    }

    if(strchr(pos+1,'@') != NULL || strchr(pos,'.') == NULL){
        return 0;
    }

    return 1;
}

int main(){
    char* email;

    email=(char*)malloc(100*sizeof(char));

    printf("Enter your email address:");
    fgets(email,100,stdin);
   
    if(validateEmail(email)){
        printf("Valid Email");
    }
    else{
        printf("Invalid Email");
    }

     free(email);
    return 0;
}