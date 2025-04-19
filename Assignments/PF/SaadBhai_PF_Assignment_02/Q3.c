#include <stdio.h>
#include <string.h>

int compress(char str[])
{
    char unique[20];
    int unique_idx = 0, dup_cnt = 0;
    char ch;

    for (int i = 0; i < strlen(str); i++)
    {
        int is_dup = 0;
        ch = str[i];

        for (int j = 0; j < unique_idx; j++)
        {
            if (unique[j] == ch)
            {
                dup_cnt++;
                is_dup = 1;
                break;
            }
        }

        if (is_dup == 0)
        {
            unique[unique_idx++] = ch;
        }
    }

    strcpy(str, unique);
    return dup_cnt++;
}

int main()
{
    char word[20];
    int dup_cnt;

    printf("Enter the word: ");
    scanf("%19s", word);
    printf("The original word is %s", word);

    dup_cnt = compress(word);

    printf("\nThe compressed word is %s", word);
    printf("\nThe duplicate was removed %d times", dup_cnt);

    return 0;
}
