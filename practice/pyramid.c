// #include<stdio.h>
// int main()
// {
//     char *string;
//     char temp[100];
//     printf("Enter the string:");
//     scanf("%s",temp);
//     int templen=strlen(temp);
//     string=malloc((templen+1)*sizeof(char));
//     strcpy(string,temp);
//     int len=strlen(string);
//     for(int i=1;i<len;i++)
//     {
//         int count=0;
//         for(int j=len;j>i;j--)
//         {
//             printf(" ");
            
//         }
//         for(int k=1;k<=(i*2)-1;k++){
//             if (count < len) {
//                 printf("%c", string[count]);
//                 count++;
//             }
//         }
//         printf("\n");
        
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     char *string;
//     char temp[100];

//     // Input the string
//     printf("Enter the string: ");
//     scanf("%s", temp);

//     int templen = strlen(temp);
//     string = malloc((templen + 1) * sizeof(char)); // Allocate memory with space for null terminator

//     if (string == NULL) { // Check if memory allocation failed
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     strcpy(string, temp); // Copy the input string to allocated memory
//     int len = strlen(string);

//     for (int i = 1; i <= len; i++) {
//         int count = 0;

//         // Print spaces
//         for (int j = len; j > i; j--) {
//             printf(" ");
//         }

//         // Print characters
//         for (int k = 1; k <= (i * 2) - 1; k++) {
//             if (count < len) {
//                 printf("%c", string[count]);
//                 count++;
//             }
//         }

//         printf("\n");
//     }

//     free(string); // Free the allocated memory
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     char *string;
//     char temp[100];

//     printf("Enter the string: ");
//     fgets(temp, sizeof(temp), stdin);
//     temp[strcspn(temp, "\n")] = 0;

//     int templen = strlen(temp);
//     string = malloc((templen + 1) * sizeof(char)); 

//     if (string == NULL) { 
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     strcpy(string, temp); 
//     int len = strlen(string);

//    for(int i=1;i<=len;i++)
//     {
//         int count=0;
//         for(int j=1;j<=len-i;j++)
//         {
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++)
//         {
//             printf("%c ",string[count]);
//             count++;
//         }
//         printf("\n");
//     }

//     free(string);
//     return 0;
// }


#include<stdio.h>
int main()
{
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
            
        }
        for(int k=5;k>=(i*2)-1;k--){
            printf("*");
        }
        printf("\n");
        
    }
}
