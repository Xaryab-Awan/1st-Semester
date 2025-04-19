#include <stdio.h>
#include <string.h>
#include <ctype.h>
void SentenceCase(char *Text, int size)
{
    Text[0]=toupper(Text[0]);
    for(int i=0;i<size;i++)
    {
        if(Text[i]=='.')
        {
            Text[i+1]=toupper(Text[i+1]);
        }   
    }
    printf("%s\n",Text);
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence,sizeof(sentence),stdin);
    int len=strlen(sentence);
    char *ptr=sentence;
    SentenceCase(ptr,len);
    return 0;
}
