#include <stdio.h>
#include <string.h>
int WordCount(char *Text,int size)
{
    int count=0;
    char *word;
    word=strtok(Text," ");
    while(word!=NULL)
    {
        count++;
        word=strtok(NULL," ");
    }
    return count;
}
int main() {
    char paragrah[]="my name is xaryab";
    int len=strlen(paragrah);
    char *p=paragrah;
    int result=WordCount(p,len);
    printf("THe number of words are : %d",result);
    return 0;
}

