#include <stdio.h>
#include <string.h>
int main()
{
    int size, count = 0;
    printf("How many words are in your slogan(including spaces):");
    scanf("%d", &size);
    char words[size + 1], current_letter;
    printf("Enter %d word:", size);
    for (int i = 0; i < size; i++)
    {
        scanf(" %c",&words[i]);
    }
    words[size] = '\0';
    printf("For: ");
	for(int i=0;i<size;i++)
	{
		printf("%c",words[i]);
	}
    int counter[size];
    for (int i = 0; i < size; i++)
    {
        counter[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (counter[i] == 0)
        {
            current_letter = words[i];
            count = 1;
            for (int j = i + 1; j < size; j++)
            {
                if (current_letter == words[j])
                {
                    count++;
                    counter[j] = 1;
                }
            }
            printf("\'%c\': %d,", words[i], count);
        }
    }
}