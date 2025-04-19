#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_grid(char g[6][5]) 
{
    srand(time(NULL)); 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            g[i][j] = rand() % 26 + 'A'; 
        }
    }
    g[5][0] = '3';  
    g[5][1] = '0';  
    g[5][2] = '7';  
    g[5][3] = '4';  
    g[5][4] = rand() % 26 + 'A';

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", g[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char grid[6][5];
    int len, score = 0;

    generate_grid(grid); 

    do {
        printf("Enter the length of your word: ");
        scanf("%d", &len);
        if (len == 0)
            break;

        char word[len + 1];
        printf("Enter the word: ");
        scanf("%s", word);

        if (strcmp(word, "END") == 0)
            break;

        int matched = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 5; j++) {
                if (word[matched] == grid[i][j]) {
                    matched++;
                    if (matched == len) 
                        break;
                }
            }
            if (matched == len)
                break; 
        }

        if (matched != len) {
            matched = 0;
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 5; j++) {
                    if (word[matched] == grid[j][i]) {
                        matched++;
                        if (matched == len) 
                            break;
                    }
                }
                if (matched == len)
                    break; 
            }
        }

        if (matched == len) {
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
