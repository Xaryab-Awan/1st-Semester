#include <stdio.h>
#include <string.h>

int compress(char input[])
{
    char unique_chars[20];
    int unique_index = 0, duplicate_count = 0;
    char current_char;

    for (int i = 0; i < strlen(input); i++)
    {
        int is_duplicate = 0;
        current_char = input[i];

        for (int j = 0; j < unique_index; j++)
        {
            if (unique_chars[j] == current_char)
            {
                duplicate_count++;
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate == 0)
        {
            unique_chars[unique_index++] = input[i];
        }
    }

    strcpy(input, unique_chars);
    return duplicate_count++;
}

int main()
{
    char word[20];
    int duplicate_count;

    printf("Enter the word: ");
    scanf("%19s", word);
    printf("The original word is %s", word);

    duplicate_count = compress(word);

    printf("\nThe compressed word is %s", word);
    printf("\nThe duplicate was removed %d times", duplicate_count);

    return 0;
}
