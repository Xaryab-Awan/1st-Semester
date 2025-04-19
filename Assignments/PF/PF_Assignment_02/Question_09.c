#include <stdio.h>
int score = 0;
void print(char arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            printf(" %c", arr[i][j]);
        }
        printf("]\n");
    }
}
void move(char arr[5][5], char choice)
{
    int position[2];
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 'P')
            {
                position[0] = i;
                position[1] = j;
            }
        }
    }

    if (choice == 'W' || choice == 'w')
    {
        if (arr[position[0] - 1][position[1]] == 'X')
        {
            printf("Input Out of Bound\n");
        }
        else if (arr[position[0] - 1][position[1]] == ' ')
        {
            arr[position[0]][position[1]] = ' ';
            arr[position[0] - 1][position[1]] = 'P';
        }
        else if (arr[position[0] - 1][position[1]] == 'I')
        {
            arr[position[0]][position[1]] = ' ';
            score++;
            arr[position[0] - 1][position[1]] = 'P';
        }
        else
        {
            printf("Input out of Bound\n");
        }
    }
    if (choice == 'A' || choice == 'a')
    {
        if (arr[position[0]][position[1] - 1] == 'X')
        {
            printf("Input Out of Bound\n");
        }
        else if (arr[position[0]][position[1] - 1] == ' ')
        {
            arr[position[0]][position[1]] = ' ';
            arr[position[0]][position[1] - 1] = 'P';
        }
        else if (arr[position[0]][position[1] - 1] == 'I')
        {
            score++;
            arr[position[0]][position[1]] = ' ';
            arr[position[0]][position[1] - 1] = 'P';
        }
        else
        {
            printf("Input out of Bound\n");
        }
    }
    if (choice == 'S' || choice == 's')
    {
        if (arr[position[0] + 1][position[1]] == 'X')
        {
            printf("Input Out of Bound\n");
        }
        else if (arr[position[0] + 1][position[1]] == ' ')
        {
            arr[position[0]][position[1]] = ' ';
            arr[position[0] + 1][position[1]] = 'P';
        }
        else if (arr[position[0] + 1][position[1]] == 'I')
        {
            score++;
            arr[position[0]][position[1]] = ' ';
            arr[position[0] + 1][position[1]] = 'P';
        }
        else
        {
            printf("Input out of Bound\n");
        }
    }
    if (choice == 'D' || choice == 'd')
    {
        if (arr[position[0]][position[1] + 1] == 'X')
        {
            printf("Input Out of Bound\n");
        }
        else if (arr[position[0]][position[1] + 1] == ' ')
        {
            arr[position[0]][position[1]] = ' ';
            arr[position[0]][position[1] + 1] = 'P';
        }
        else if (arr[position[0]][position[1] + 1] == 'I')
        {
            score++;
            arr[position[0]][position[1]] = ' ';
            arr[position[0]][position[1] + 1] = 'P';
        }
        else
        {
            printf("Input out of Bound\n");
        }
    }
}

int main()
{
    char choice;
    char grid[5][5] =
        {
            {' ', ' ', 'I', 'X', ' '},
            {' ', 'X', ' ', ' ', ' '},
            {'I', ' ', 'X', 'X', ' '},
            {' ', ' ', ' ', 'I', 'X'},
            {' ', 'X', ' ', ' ', 'P'}};
    do
    {
        print(grid);
        printf("Press 'W' to Go Up\n");
        printf("Press 'S' to Go Down\n");
        printf("Press 'A' to go left\n");
        printf("Press 'D'to go Right\n");
        printf("Press 'Q' to Quit\n");
        scanf(" %c", &choice);
        if (choice == 'q')
        {
            break;
        }
        move(grid, choice);
    } while (choice != 'Q');
    if (choice == 'Q' || choice == 'q')
    {
        printf("Your Score is %d", score);
    }
    return 0;
}
