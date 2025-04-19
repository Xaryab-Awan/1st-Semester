#include <stdio.h>
#include<string.h>
void display(char arr[],int n)
{
    if(n==-1)
    {
        return ;
    }
    else
    {
        printf("%c",arr[n]);
        display(arr,n-1);
    }
}
int main() {
    char word[20];
    printf("Enter word:");
    gets(word);
    int size=strlen(word);
    display(word,size);
    return 0;
}