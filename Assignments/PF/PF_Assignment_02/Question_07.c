#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_grid(char grid[6][5]) 
{
    srand(time(NULL)); 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            grid[i][j] = rand() % 26 + 'A'; 
        }
    }
    grid[5][0] = '3';  
    grid[5][1] = '0';  
    grid[5][2] = '5';  
    grid[5][3] = '5';  
    grid[5][4] = rand() % 26 + 'A';

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char grid[6][5];
    int word_len, score = 0;

    generate_grid(grid); 

    do {
        printf("Enter the length of your word: ");
        scanf("%d", &word_len);
        if (word_len == 0)
            break;

        char word[word_len + 1];
        printf("Enter the word: ");
        scanf("%s", word);

        if (strcmp(word, "END") == 0)
            break;

        int matched = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 5; j++) {
                if (word[matched] == grid[i][j]) {
                    matched++;
                    if (matched == word_len) 
                        break;
                }
            }
            if (matched == word_len)
                break; 
        }

        if (matched != word_len) {
            matched = 0;
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 5; j++) {
                    if (word[matched] == grid[j][i]) {
                        matched++;
                        if (matched == word_len) 
                            break;
                    }
                }
                if (matched == word_len)
                    break; 
            }
        }

        if (matched == word_len) {
            score++;
            printf("%s is present\n", word);
            printf("Your score is %d\n", score);
        } else {
            printf("%s is not present\n", word);
            score--;
            printf("Your score is %d\n", score);
        }

    } while (1);

    return 0;
}
