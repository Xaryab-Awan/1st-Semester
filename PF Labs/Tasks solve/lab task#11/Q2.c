#include <stdio.h>

int main()
{
    FILE *ptr1;
    ptr1 = fopen("file4.txt", "w");
    fputs("this is lab eleven", ptr1);
    fclose(ptr1);
    ptr1 = fopen("file4.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("file5.txt", "w");
    int count[26] = {0};
    char temp;
    while((temp=fgetc(ptr1))!=EOF)
    {
        if(temp>='a'&& temp<='z')
        {
            count[temp-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            fprintf(ptr2,"The %c element is present %d times\n",i+'a',count[i]);
        }
            
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}

