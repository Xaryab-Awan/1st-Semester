#include<stdio.h>
#include<string.h>
int main()
{
    int length=0,flag;
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    length=strlen(word);
    // for(int i = 0; word[i] != '\0'; i++){
    //     length++; 
    // }

    for(int i = 0; i < length/2; i++){
        if(word[i] !=word[length - 1 - i]){
            flag=0;
    }
    }
    if(flag==0){
            printf("%s is not a palindrome",word);
        }
        else{
            printf("%s is a palindrome",word);
        }
}
