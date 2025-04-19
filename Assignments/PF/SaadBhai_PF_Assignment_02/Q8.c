#include <stdio.h>
#include <math.h>
#include <string.h>

int bin_to_dec(int num)
{
    int flag, result = 0;
    for (int i = 0; num != 0; i++)
    {
        flag = num % 10;
        result += flag * pow(2, i);
        num = num / 10;
    }
    return result;
}

int dec_to_bin(int n)
{
    int bin = 0, m = 0;
    for (int i = 0; n != 0; i++)
    {
        m = n % 2;
        bin += (m * pow(10, i));
        n = n / 2;
    }
    return bin;
}

void dec_to_hex(int num)
{
    char hex_chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char temp[1000];
    int flag = 0;
    for (int i = 0; num > 0; i++)
    {
        temp[i] = hex_chars[num % 16];
        num /= 16;
        flag++;
    }
    for (int i = flag - 1; i >= 0; i--)
    {
        printf("%c", temp[i]);
    }
}

void hex_to_dec(char hex[], int n)
{
    int result = 0, k = 0;
    char hex_chars[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = n - 1; i >= 0; i--)
    {
        int index = -1;
        for (int j = 0; j < 16; j++)
        {
            if (hex[i] == hex_chars[j])
            {
                index = j;
                break;
            }
        }
        if (index != -1)
        {
            result += (index * pow(16, k));
        }
        k++;
    }
    printf("%d", result);
}

void bin_to_hex(int num)
{
    int dec_num = bin_to_dec(num);
    dec_to_hex(dec_num);
}

void hex_to_bin(char hex[], int len)
{
    int result = 0, k = 0;
    char hex_chars[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = len - 1; i >= 0; i--)
    {
        int index = -1;
        for (int j = 0; j < 16; j++)
        {
            if (hex[i] == hex_chars[j])
            {
                index = j;
                break;
            }
        }
        if (index != -1)
        {
            result += (index * pow(16, k));
        }
        k++;
    }
    printf(" %d is decimal of %s\n", dec_to_bin(result), hex);
}

int main()
{
    int choice;
    printf("=========================\n");
    printf("1: Binary To Decimal:\n");
    printf("2: Decimal To Binary:\n");
    printf("3: Decimal To Hexadecimal:\n");
    printf("4: Hexadecimal to Decimal:\n");
    printf("5: Binary To Hexadecimal:\n");
    printf("6: Hexadecimal to Binary:\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
    {
        int num, cont;
        do
        {
            printf("Enter the Number You Want to Convert: ");
            scanf("%d", &num);
            int answer = bin_to_dec(num);
            printf("The num %d converted to decimal is %d\n", num, answer);
            printf("Do you want to continue? (0 to stop, 1 to continue): ");
            scanf("%d", &cont);
        } while (cont != 0);
        break;
    }
    case 2:
    {
        int num, cont;
        do
        {
            printf("Enter the Number You Want to Convert: ");
            scanf("%d", &num);
            int binary = dec_to_bin(num);
            printf("%d is the binary of %d\n", binary, num);
            printf("Do you want to continue? (0 to stop, 1 to continue): ");
            scanf("%d", &cont);
        } while (cont != 0);
        break;
    }
    case 3:
    {
        int num, cont;
        do
        {
            printf("Enter the Number You Want to Convert: ");
            scanf("%d", &num);
            dec_to_hex(num);
            printf("\n");
            printf("Do you want to continue? (0 to stop, 1 to continue): ");
            scanf("%d", &cont);
        } while (cont != 0);
        break;
    }
    case 4:
    {
        int cont;
        do
        {
            int size;
            printf("How many characters do you want to enter: ");
            scanf("%d", &size);
            char hex[size];
            printf("Enter the hexadecimal number you want to convert: ");
            scanf("%s", hex);
            hex_to_dec(hex, size);
            printf("\n");
            printf("Do you want to continue? (0 to stop, 1 to continue): ");
            scanf("%d", &cont);
        } while (cont != 0);
        break;
    }
    case 5:
    {
        int cont, num;
        do
        {
            printf("Enter the number for Hexadecimal Conversion: ");
            scanf("%d", &num);
            bin_to_hex(num);
            printf("\n");
            printf("Do you want to continue? (0 to stop, 1 to continue): ");
            scanf("%d", &cont);
        } while (cont != 0);
        break;
    }
    case 6:
    {
        int cont;
        do
        {
            int size;
            printf("How many characters do you want to enter: ");
            scanf("%d", &size);
            char hex[size];
            printf("Enter the hexadecimal number you want to convert: ");
            scanf("%s", hex);
            hex_to_bin(hex, size);
            printf("Do you want to continue? (0 to stop, 1 to continue): ");
            scanf("%d", &cont);
        } while (cont != 0);
        break;
    }
    }
    return 0;
}
