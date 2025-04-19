#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("text.txt", "r");
    if (ptr == NULL)
    {
        perror("Error opening input file");
        return 1;
    }
    ptr1 = fopen("encrypted.txt", "w");
    if (ptr1 == NULL)
    {
        perror("Error opening output file");
        fclose(ptr);
        return 1;
    }
    char ch;
    int count = 0;
    while ((ch = fgetc(ptr)) != EOF)
    {
        count++;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            if (count % 2 == 0)
            {
                fprintf(ptr1, "VOW");
            }
            else
            {
                fprintf(ptr1, "vow");
            }
        }
        else
        {
            fputc(ch, ptr1);
        }
    }

    fclose(ptr);
    fclose(ptr1);

    ptr = fopen("encrypted.txt", "r");
    if (ptr == NULL)
    {
        perror("Error opening encrypted.txt");
        return 1;
    }
    ptr1 = fopen("temp.txt", "w");
    if (ptr1 == NULL)
    {
        perror("Error opening temp.txt");
        fclose(ptr);
        return 1;
    }
    char word[100];
    while (fscanf(ptr, "%s", word) != EOF)
    {
        if (strlen(word) == 3 && (strchr(word, 's') != NULL || strchr(word, 'S') != NULL))
        {
            fprintf(ptr1, "PFLAB ");
        }
        else
        {
            fprintf(ptr1, "%s ", word);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    remove("encrypted.txt");
    rename("temp.txt", "encrypted.txt");
    ptr = fopen("encrypted.txt", "r");
    if (ptr == NULL)
    {
        perror("Error opening encrypted.txt after rename");
        return 1;
    }

    ptr1 = fopen("final_encrypted.txt", "w");
    if (ptr1 == NULL)
    {
        perror("Error opening final_encrypted.txt");
        fclose(ptr);
        return 1;
    }

    while ((ch = fgetc(ptr)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            char base = (ch >= 'a' && ch <= 'z') ? 'a' : 'A';
            ch = (ch - base + 3) % 26 + base;
        }
        fputc(ch, ptr1);
    }
    fclose(ptr);
    fclose(ptr1);

    printf("Encryption complete. Output written to 'final_encrypted.txt'.\n");

    return 0;
}
