#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_random_character(char arr[6][5]) 
{
    srand(time(NULL)); 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % 26 + 'A'; 
        }
    }
    arr[5][0]=51;
    arr[5][1]=48;
    arr[5][2]=50;
    arr[5][3]=52;
    arr[5][4]=rand() % 26 + 'A';
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char arr[6][5];
    int n, score = 0;
    generate_random_character(arr); 

    do
    {
        printf("Enter number of letters in your word : ");
        scanf("%d", &n);
        if (n == 0)
		 break;

        char search[n + 1];
        printf("Enter the word: ");
        scanf("%s", search);
        if(strcmp(search,"END")==0)
        break;

        int found = 0;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (search[found] == arr[i][j])
                {
                    found++;
                    if (found == n) 
                    {
                        break;
                    }
                }
            }
            if (found == n)
			 break; 
        }
        if(found!=n)
        {
        	found = 0;
        	for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (search[found] == arr[j][i])
                {
                    found++;
                    if (found == n) 
                    {
                        break;
                    }
                }
            }
            if (found == n)
			 break; 
        }
        	
		}

        if (found == n)
        {
            score++;
            printf("%s is present\n", search);
            printf("Your score is %d\n", score);
        }
        else
        {
            printf("%s is not present\n", search);
            score--;
            printf("Your score is %d\n", score);
        }

    } while (true);

}
