#include <stdio.h>
#include <string.h>

int main()
{
    int len, cnt = 0;
    printf("How many characters are in your slogan (including spaces): ");
    scanf("%d", &len);

    char slogan[len + 1], ch;
    printf("Enter %d characters: ", len);

    for (int i = 0; i < len; i++)
    {
        scanf(" %c", &slogan[i]);
    }
    slogan[len] = '\0';

    printf("For: ");
    for (int i = 0; i < len; i++)
    {
        printf("%c", slogan[i]);
    }

    int freq[len];
    for (int i = 0; i < len; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (freq[i] == 0)
        {
            ch = slogan[i];
            cnt = 1;
            for (int j = i + 1; j < len; j++)
            {
                if (ch == slogan[j])
                {
                    cnt++;
                    freq[j] = 1;
                }
            }
            printf("\'%c\': %d, ", slogan[i], cnt);
        }
    }

    return 0;
}
