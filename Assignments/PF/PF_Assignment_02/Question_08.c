#include <stdio.h>
#include <math.h>
#include <string.h>
int BinaryToDecimal(int number)
{
    int flag, ans = 0;
    for (int i = 0; number != 0; i++)
    {
        flag = number % 10;
        ans += flag * pow(2, i);
        number = number / 10;
    }
    return ans;
}
int DecimalToBinary(int n)
{
    int bin_number = 0, m = 0;
    for (int i = 0; n != 0; i++)
    {
        m = n % 2;
        bin_number = bin_number + (m * pow(10, i));
        n = n / 2;
    }
    return bin_number;
}

void DecimalToHexadecimal(int number)
{
    char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char temp[1000], remainder;
    int flag = 0;
    for (int i = 0; number > 0; i++)
    {
        remainder = number % 16;
        temp[i] = arr[remainder];
        number = number / 16;
        flag++;
    }
    for (int i = flag - 1; i >= 0; i--)
    {
        printf("%c", temp[i]);
    }
}
void HexadecimalToDecimal(char arr[], int n)
{
    int ans = 0, k = 0;
    char arr1[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = n - 1; i >= 0; i--)
    {
        int index = -1;
        for (int j = 0; j < 16; j++)
        {
            if (arr[i] == arr1[j])
            {
                index = j;
                break;
            }
        }
        if (index != -1)
        {
            ans = ans + (index * pow(16, k));
        }
        k++;
    }
    printf("%d", ans);
}

void BinaryToHexadecimal(int number)
{
    int new_number = BinaryToDecimal(number);
    DecimalToHexadecimal(new_number);
}
void HexadecimalToBinary(char arr[], int number)
{
    int ans = 0, k = 0;
    char arr1[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = number - 1; i >= 0; i--)
    {
        int index = -1;
        for (int j = 0; j < 16; j++)
        {
            if (arr[i] == arr1[j])
            {
                index = j;
                break;
            }
        }
        if (index != -1)
        {
            ans = ans + (index * pow(16, k));
        }
        k++;
    }
    printf(" %d is decimal of %s\n",  DecimalToBinary(ans),arr);
}
int main()
{
    int choice;
    printf("=========================\n");
    printf("1: Binary To Decimal:\n");
    printf("2: Decimal To Binary :\n");
    printf("3: Decimal To Hexadecimal:\n");
    printf("4: Hexadecimal to Decimal:\n");
    printf("5: Binary To Hexadecimal:\n");
    printf("6: Hexadecimal to Binary:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int num, answer, temp;
        do
        {
            printf("Enter the Number You Want to Convert:");
            scanf("%d", &num);
            answer = BinaryToDecimal(num);
            printf("The num %d converted to decimal is %d\n", num, answer);
            printf("Do you want to continue?\n Press 0 to Stop and 1 to continue:");
            scanf("%d", &temp);
        } while (temp != 0);
        break;
    }
    case 2:
    {
        {
            int num, temp;
            do
            {
                printf("Enter the Number You Want to Convert:");
                scanf("%d", &num);
                int binary = DecimalToBinary(num);
                printf("%d is the binary of %d\n", binary, num);
                printf("Do you want to continue?\nPress 0 to Stop and 1 to continue:");
                scanf("%d", &temp);
            } while (temp != 0);
            break;
        }
    }
    case 3:
    {
        {
            int num, temp;
            do
            {
                printf("Enter the Number You Want to Convert:");
                scanf("%d", &num);
                DecimalToHexadecimal(num);
                printf("\n");
                printf("Do you want to continue?\nPress 0 to Stop and 1 to continue:");
                scanf("%d", &temp);
            } while (temp != 0);
            break;
        }
    }
    case 4:
    {

        int temp;
        do
        {
            int size;
            printf("How many characters do you want to enter:");
            scanf("%d", &size);
            char num[size];
            printf("Enter the number you want to convert:");
            scanf("%s", num);
            HexadecimalToDecimal(num, size);
            printf("\n");
            printf("Do you want to continue?\nPress 0 to Stop and 1 to continue:");
            scanf("%d", &temp);
        } while (temp != 0);
        break;
    }
    case 5:
    {
        int temp, num;
        do
        {

            printf("Enter the number for Hexadecimal Conversion: ");
            scanf("%d", &num);
            BinaryToHexadecimal(num);
            printf("\n");
            printf("Do you want to continue?\nPress 0 to Stop and 1 to continue:");
            scanf("%d", &temp);
        } while (temp != 0);
        break;
    }
    case 6:
    {
        int temp;
        do
        {
            int size;
            printf("How many characters do you want to enter:");
            scanf("%d", &size);
            char num[size];
            printf("Enter the number you want to convert:");
            scanf("%s", num);
            HexadecimalToBinary(num,size);
            printf("Do you want to continue?\nPress 0 to Stop and 1 to continue:");
            scanf("%d", &temp);
        }while(temp!=0);
    }
    }
}
