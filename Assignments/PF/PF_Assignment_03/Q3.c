#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validateEmail(char *email, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (email[i] == '@')
        {
            for (int j = i; j < len; j++)
            {
                if (email[j] == '.')
                {
                    count++;
                    break;
                }
            }
        }
    }
    if (count == 1)
    {
        DisplayResults(count);
    }
    else
    {
        DisplayResults(count);
    }
}
void create()
{
    char *email = (char *)malloc(100 * sizeof(char));
    printf("Enter Email:");
    scanf("%s", email);
    int len = strlen(email);
    email = realloc(email, len + 1);
    validateEmail(email,len);
    free(email);
}
void DisplayResults(int n)
{
    if (n == 1)
    {
        printf("Valid Email");
    }
    else
        printf("Invalid Email");
}
int main()
{
    create();
    

    return 0;
}

