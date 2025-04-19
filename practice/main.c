//// #include<stdio.h>
//// int add(int a,int b){
////     int add=0;
////     add=a+b;
////     printf("%d",add);
//
//// }
//// main(){
////     int num1,num2;
//// 	printf("Enter 2 numbers");
////     scanf("%d %d",&num1,&num2);
////     add(num1,num2);
//
//// }
//// #include<stdio.h>
//// #include<string.h>
//// void salam(){
////     printf("Salam");
//// }
//// void bonjour(){
////     printf("Bonjour");
//// }
//// int main(){
////     char choice;
////     printf("Enter your Nationality:");
////     scanf("%c",&choice);
////     if(choice == 'p'){
////         salam();
////     }
////     else if(choice=='f'){
////         bonjour();
////     }
////     else
////     printf("Invalid Input");
////     return 0;
//// }
// #include<stdio.h>
// int first_week_day(int year)
//     {
//         int d;
//         d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
//         return d;
//     }
// int main()
//{
//     int year,day,month_number,days_in_month,week_day=0,starting_day;
//     printf("Enter Your desried Year:");
//     scanf("%d",&year);
//
//     char *months[] = {"January","Feburary","March","April","June","july","August","September","October","November","December"};
//     int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
//
//     if( (year%4==0 && year%100!=0) | (year%400==0) ){
//         month_days[1]=29;
//     }
//
//     starting_day=first_week_day(year);
//
//     for(month_number=0;month_number<=12;month_number++)
//     {
//
//         days_in_month=month_days[month_number];
//         printf("\n\n---------------%s-------------------\n",months[month_number]);
//         printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
//
//         for(week_day=0;week_day<starting_day;week_day++)
//         {
//             printf("     ");
//         }
//
//         for(day=1;day<=days_in_month;day++)
//         {
//             printf("%5d",day);
//
//             if(++week_day>6)
//             {
//                 printf("\n");
//                 week_day=0;
//             }
//
//             starting_day=week_day;
//         }
//     }
// }
// #include <stdio.h>
//
// int main()
//{
//     int prod[4] = {2000, 500, 200, 3400};
//     int sum = 0;
//     char choice;
//     int price = 0;
//     int quantity;
//     for (int i = 1; i <= 7; i++)
//     {
//         printf("Enter 1 for product 1\n, 2 for product 2\n, 3 for product 3\n, 4 for product 4\n and press n to stop:");
//         printf("\nDay %d", i);
//         do
//         {
//             printf("\nEnter your choice:");
//             scanf(" %c", &choice);
//             switch (choice)
//             {
//             case '1':
//                 printf("Enter quantity:");
//                 scanf("%d", &quantity);
//                 price += quantity * prod[0];
//                 break;
//             case '2':
//                 printf("Enter quantity:");
//                 scanf("%d", &quantity);
//                 price += quantity * prod[1];
//                 break;
//             case '3':
//                 printf("Enter quantity:");
//                 scanf("%d", &quantity);
//                 price += quantity * prod[2];
//                 break;
//             case '4':
//                 printf("Enter quantity:");
//                 scanf("%d", &quantity);
//                 price += quantity * prod[3];
//                 break;
//             case 'n':
//                 break;
//             default:
//                 printf("Invalid choice\n");
//                 break;
//             }
//         } while (choice != 'n');
//         printf("Total Sales for %d day is %d\n", i, price);
//         sum += price;
//     }
//     printf("Total Sales for the week is  %d", sum);
//
//     return 0;
// }
// #include <stdio.h>
// int main()
//{
//     int arr_1[3][3];
//     printf("Enter 1st Matrix\n");
//     for (int i = 0 ; i <  3 ; i++)
//     {
//
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter (%d,%d) element:", i + 1, j + 1);
//             scanf("%d", &arr_1[i][j]);
//         }
//     }
//     printf("Enter 2nd Matrix\n");
//     int arr_2[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter (%d,%d) element:", i + 1, j + 1);
//             scanf("%d", &arr_2[i][j]);
//         }
//     }
//     printf("1st Matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d \t", arr_1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("2nd Matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d \t", arr_2[i][j]);
//         }
//         printf("\n");
//     }
//     int arr_mul[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 arr_mul[i][j] += arr_1[i][k] * arr_2[j][k];
//             }
//         }
//     }
//     printf("Multiplcation\n");
//     for (int i = 0; i < 3; i++)
//     {
//
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d \t", arr_mul[i][j]);
//         }
//         printf("\n");
//     }
// }
//  #include <stdio.h>

// void add(int arr[3][3], int book_id)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == 0)
//             {
//                 arr[i][j] = book_id;
//                 return;
//             }
//         }
//     }
//     printf("No space to add the book.\n");
// }

// void rem(int arr[3][3], int book_id)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == book_id)
//             {
//                 arr[i][j] = 0;
//                 return;
//             }
//         }
//     }
//     printf("Book ID %d not found.\n", book_id);
// }

// int search(int arr[3][3], int book_id)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == book_id)
//             {
//                 printf("The Entered Book is Available\n");
//                 return 1;
//             }
//         }
//     }
//     printf("The Entered Book is Not Available\n");
//     return 0;
// }

// void print(int arr[3][3])
// {
//     printf("Book_Shelf:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("[ ");
//         for (int j = 0; j < 3; j++)
//         {

//             printf("%d ", arr[i][j]);
//             if (j < 2)
//             {
//                 printf(" ");
//             }
//         }
//         printf("]\n");
//     }
// }

// int main()
// {
//     int shelf[3][3] =
//         {
//             {2, 1, 0},
//             {2, 0, 4},
//             {4, 5, 0}};

//     int choice;
//     char ques;
//     do
//     {
//         print(shelf);
//         printf("To add book press '1':\n");
//         printf("To remove book press '2':\n");
//         printf("To search book press '3':\n");
//         scanf("%d", &choice);
//         int id;
//         switch (choice)
//         {
//         case 1:
//         {

//             printf("Enter Book id:");
//             scanf("%d", &id);
//             add(shelf,id);
//             break;
//         }
//         case 2:
//         {

//             printf("Enter Book id:");
//             scanf("%d", &id);
//             rem(shelf, id);
//             break;
//         }
//         case 3:
//         {

//             printf("Enter Book id:");
//             scanf("%d", &id);
//             search(shelf, id);
//             break;
//         }
//         default:
//             printf("Invalid choice.\n");
//         }
//         printf("Do you want to continue? (y/n): ");
//         scanf(" %c", &ques);
//     } while (ques != 'n');

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
//
// int main() {
//    char paragraph[] = "Think 100 times before you take a decision. But once that decision is taken, stand by it as one man. With faith, discipline and selfless devotion to duty, there is nothing worthwhile that you cannot achieve.";
//
//    int sentence_count = 0;
//    int word_count = 0;
//    char *sentence;
//    char paragraph_copy1[sizeof(paragraph)];
//    strcpy(paragraph_copy1, paragraph);
//    sentence = strtok(paragraph_copy1, ".!?");
//    while (sentence != NULL) {
//        sentence_count++;
//        sentence = strtok(NULL, ".!?");
//    }
//    char paragraph_copy2[sizeof(paragraph)];
//    strcpy(paragraph_copy2, paragraph);
//    char *word = strtok(paragraph_copy2, " ");
//    while (word != NULL) {
//        word_count++;
//        word = strtok(NULL, " ");
//    }
//
//    printf("Total number of sentences: %d\n", sentence_count);
//    printf("Total number of words: %d\n", word_count);
//
//    return 0;
//}
// #include <stdio.h>
// struct movie
//{
//    char title[50];
//    char genre[20];
//    char director[50];
//    int year;
//    float rating;
//};
// int main()
//{
//    struct movie m[10];
//    int count = 0;
//    int choice;
//    do
//    {
//        printf("1) Add movie 2) Display movies  3) Search movies by genre \n0) Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//        switch (choice)
//        {
//        case 1:
//        {
//            if (count < 10)
//            {
//                printf("Enter movie title: ");
//                scanf("%s", m[count].title);
//                printf("Enter movie genre: ");
//                scanf("%s", m[count].genre);
//                printf("Enter movie director: ");
//                scanf("%s", m[count].director);
//                printf("Enter movie year: ");
//                scanf("%d", &m[count].year);
//                printf("Enter movie rating: ");
//                scanf("%f", &m[count].rating);
//                count++;
//                printf("Movie Added Succesfully\n");
//            }
//            else
//            {
//                printf("The storage is full.\n");
//            }
//            break;
//        }
//
//        case 2:
//        {
//            if (count <= 0)
//            {
//                printf("There are no movies.\n");
//            }
//            for (int i = 0; i < count; i++)
//            {
//                printf("Movie %d:\n", i + 1);
//                printf("Title: %s\n", m[i].title);
//                printf("Genre: %s\n", m[i].genre);
//                printf("Director: %s\n", m[i].director);
//                printf("Year: %d\n", m[i].year);
//                printf("Rating: %.1f\n", m[i].rating);
//                printf("\n");
//            }
//            break;
//        }
//
//        case 3:
//        {
//            char genre[20];
//            printf("Enter genre to search: ");
//            scanf("%s", genre);
//            for (int i = 0; i < count; i++)
//            {
//                if (strcmp(m[i].genre, genre) == 0)
//                {
//                    printf("Movie %d:\n", i + 1);
//                    printf("Title: %s\n", m[i].title);
//                    printf("Genre: %s\n", m[i].genre);
//                    printf("Director: %s\n", m[i].director);
//                    printf("Year: %d\n", m[i].year);
//                    printf("Rating: %.1f\n", m[i].rating);
//                    printf("\n");
//                }
//            }
//            break;
//        }
//        default:
//        {
//            printf("Invalid choice.\n");
//            break;
//        }
//        }
//
//    } while (choice != 0);
//}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// int main()
//{
//     FILE *ptr, *temp;
//     char name[20];
//     int quantity, record, count = 8;
//     float cost;
//     int choice;
//     ptr = fopen("hardware.txt", "w");
//     if (ptr == NULL)
//     {
//         printf("Error opening file!\n");
//         return 1;
//     }
//     fprintf(ptr, "3\tElectric sander\t7\t57.98\n");
//     fprintf(ptr, "17\tHammer\t76\t11.99\n");
//     fprintf(ptr, "24\tJig saw\t21\t11.00\n");
//     fprintf(ptr, "39\tLawn mower\t3\t79.50\n");
//     fprintf(ptr, "56\tPower saw\t18\t99.99\n");
//     fprintf(ptr, "68\tScrewdriver\t106\t6.99\n");
//     fprintf(ptr, "77\tSledge hammer\t11\t21.50\n");
//     fprintf(ptr, "83\tWrench\t34\t7.50\n");
//     fclose(ptr);
//
//     while (1)
//     {
//         printf("\n1) Add item 2) Delete item 3) Display 4) Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//
//         switch (choice)
//         {
//         case 1:
//             if (count >= 10)
//             {
//                 printf("More data cannot be added (limit reached).\n");
//             }
//             else
//             {
//                 ptr = fopen("hardware.txt", "a");
//                 if (ptr == NULL)
//                 {
//                     printf("Error opening file!\n");
//                     break;
//                 }
//
//                 printf("Enter the record number: ");
//                 scanf("%d", &record);
//                 printf("Enter the name of the tool: ");
//                 scanf("%s", name);
//                 printf("Enter the quantity: ");
//                 scanf("%d", &quantity);
//                 printf("Enter the cost: ");
//                 scanf("%f", &cost);
//
//                 fprintf(ptr, "%d\t%s\t%d\t%.2f\n", record, name, quantity, cost);
//                 fclose(ptr);
//
//                 count++;
//                 printf("Record added successfully.\n");
//             }
//             break;
//
//         case 2:
//             ptr = fopen("hardware.txt", "r");
//             if (ptr == NULL)
//             {
//                 printf("Error opening file!\n");
//                 break;
//             }
//
//             printf("Enter the record number to be deleted: ");
//             int deleteRecord;
//             scanf("%d", &deleteRecord);
//
//             temp = fopen("temp.txt", "w");
//             if (temp == NULL)
//             {
//                 printf("Error creating temporary file!\n");
//                 fclose(ptr);
//                 break;
//             }
//
//             int found = 0;
//             while (fscanf(ptr, "%d %s %d %f", &record, name, &quantity, &cost) != EOF)
//             {
//                 if (record == deleteRecord)
//                 {
//                     found = 1;
//                     continue;
//                 }
//                 fprintf(temp, "%d\t%s\t%d\t%.2f\n", record, name, quantity, cost);
//             }
//             fclose(ptr);
//             fclose(temp);
//
//             if (found)
//             {
//                 remove("hardware.txt");
//                 rename("temp.txt", "hardware.txt");
//                 count--;
//                 printf("Record deleted successfully.\n");
//             }
//             else
//             {
//                 printf("Record not found.\n");
//                 remove("temp.txt");
//             }
//             break;
//
//         case 3:
//             ptr = fopen("hardware.txt", "r");
//             if (ptr == NULL)
//             {
//                 printf("Error opening file!\n");
//                 break;
//             }
//
//             printf("Record #\tTool Name\tQuantity\tCost\n");
//             while (fscanf(ptr, "%d %s %d %f", &record, name, &quantity, &cost) != EOF)
//             {
//                 printf("%d\t%s\t%d\t%.2f\n", record, name, quantity, cost);
//             }
//             fclose(ptr);
//             break;
//
//         case 4:
//             printf("Exiting program.\n");
//             return 0;
//
//         default:
//             printf("Invalid choice! Please try again.\n");
//         }
//     }
//     return 0;
// }
//

// void fun(int *ptr)
// {
//     *ptr = 30;
// }
// int main()
// {
//     int y = 40;
//     fun(&y);
//     printf("%d", y);

//     return 0;
// }

// main()
// {
// int ary[2][2][3] = {
// {
// {1,2,3},
// {4,5,6}},
// {{7,8,9},
// {10,11,12}
// }
// };
// int *p; p = &ary;
// printf("%d %d",*p, *p+11);
// }

// main()
// {
// char *arr[] = { "ant", "bat", "cat",
// "dog", "egg", "fly" };
// function(arr);
// }
// void function(char **ptr)
// {
// char *ptr1;
// ptr1 = (ptr += sizeof(int))[1];
// printf("%s\n", ptr1);
// }

// int main()
// {
//  char *s1 = (char *)malloc(50);
//  char *s2 = (char *)malloc(50);
//  strcpy(s1, "Hello");
//  strcpy(s2, "World");
//  strcat(s1, s2);
//  printf("%s", s1);
//  return 0;
// }
// void main()
// {
//  int k=5;
//  int *p=&k;
//  int **m=&p;
//  printf("%d %d %d",k,*p,**m);}
// int main()
// {
//  int arri[] = {1, 2 ,3};
//  int *ptri = arri;
//  char arrc[] = {1, 2 ,3};
//  char *ptrc = arrc;
//  printf("sizeof arri[] = %d ",
// sizeof(arri));
//  printf("sizeof ptri = %d ",
// sizeof(ptri));
//  printf("sizeof arrc[] = %d ",
// sizeof(arrc));
//  printf("sizeof ptrc = %d ",
// sizeof(ptrc));
//  return 0;
// }
// int main()
// {
//     int i = 0;
//     for (i = 0; i < 20; i++)
//     {
//         switch (i)
//         {
//         case 0:
//             i += 5;
//         case 1:
//             i += 2;
//         case 5:
//             i += 5;
//         default:
//             i += 4;
//             break;
//         }
//         printf("%d ", i);
//     }
//     return 0;
// }
// int main()
// {
//  int a = 12;
//  void *ptr = &a;
//  printf("%d", *(int *)ptr);
//  getchar();
//  return 0;
// }
// int main()
// {
//     int count=0;
//     char string[100];
//     printf("Enter a string: ");
//     scanf("%s",string);
//     int len =strlen(string);
//     for( int i=0;i<len;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("%c",string[count]);
//             count++;
//             if(count==len)
//             {
//                 count=0;
//             }

//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// struct gospel
// {
//     int num;
//     char mess1[50];
//     char mess2[50];
// } m1 = {2, "if you are driven by success ", " make sure that it is a quality drive "};
// void main()
// {
//     struct gospel m2, m3;
//     m2 = m1;
//     m3 = m2;
//     printf("\n%d %s %s", m1.num, m2.mess1,
//            m3.mess2);
// }
// int main()
// {
//     int y[4] = {6, 7, 8, 9};
// int *ptr = y + 2;
// printf("%d ", ptr[ 1 ] );
// }
// #include <stdio.h>
// void reverse(int i);
// int main()
// { reverse(1); }
// void reverse(int i)
// { if (i > 5)
// {return ;}
// reverse((i++, i));
// printf("%d ", i); }
// #include <stdio.h>
// int main()
// {
// int x = 10, *y, **z;
// y = &x;
// z = &y;
// printf("%d %d %d", *y, **z, *(*z));
// }

// main()
// {
// int array[10] = {3, 0, 8, 1, 12, 8, 9, 2, 13, 10};
// int x, y, z;
// x = ++array[2];
// y = array[2]++;
// z = array[x++];
// printf("%d %d %d", x, y, z);
// }
// main()
// {
// int val = 1;
// do {
// val++;
// ++val;
// } while (val++ > 25);
// printf("%d\n", val);}
// main()
// {
// char str1[] = "Hello. How are you?";char str2[21];
// int pos;
// for(pos=0; pos<21; pos++);
// {
// str2[pos] = str1[pos];
// }
// printf("str1: %s, str2: %s", str1, str2); }
// main()
// {
// int x = 5, y = 10;
// int const *p = &x;
// *p = 15;
// printf("%d", x); }

// int main() {
//     int row,col;
//     printf("Enter rows:");
//     scanf("%d",&row);
//     printf("Enter col:");
//     scanf("%d",&col);
//     // int arr[row][col];
//     int** dma=(int**)malloc(row*sizeof(int*));
//     for(int i=0;i<row;i++)
//     {
//         dma[i]=(int*)malloc(col*sizeof(int));
//     }
//     // int *ptr=arr[0];
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             scanf("%d",(dma+i*col+j));
//         }
//     }
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             printf("%d ",*(dma+i*col+j));
//         }
//         printf("\n");
//     }
//     for(int i=0;i<row;i++)
//     {
//         free(dma[i]);
//     }
//     free(dma);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     struct Nigga {
//         int a;
//         char b;
//         float c;
//         struct D {
//             int e;
//             int f;
//         } *d;
//     };

//     struct Nigga *n;
//     n = (struct Nigga *)malloc(sizeof(struct Nigga));
//     if (n != NULL) {
//         n->d = (struct D *)malloc(sizeof(struct D));
//         if (n->d != NULL) {
//             // Use n and n->d as needed
//         }
//         // Don't forget to free memory
//         free(n->d);
//     }
//     free(n);

//     return 0;
// }

// int main()
// {
//     char country[] = "Pakistan";
//     char *ptr = country;
//     while (*ptr != '\0')
//     {
//         printf(" %c", *ptr);
//         ptr++;
//     }
//     return 0;
// }
// int main()
// {
//     char ch, *str;
//     int cnt = 0;
//     puts("enter any string: ");
//     while ((ch = getchar()) != '\n')
//     {
//         if (cnt == 0)
//         {
//             str = (char *)malloc(sizeof(char));
//             str[cnt] = ch;
//         }
//         else
//         {
//             str = realloc(str, (cnt + 1) * sizeof(char));
//             str[cnt] = ch;
//         }
//         cnt++;
//     }
//     str[cnt] = '\0';
//     printf("\n%s", str);
//     free(str);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// void main() {
// int arrAll[]={80, 82, 79, 71, 82, 65, 77};
// int len=sizeof(arrAll)/sizeof(arrAll[0]);
// for(int i=0;i<len;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//         printf("%c",arrAll[j]);
//     }
//     printf("\n");
// }
// }
// void main(void){
// char *p[3] = {"Rashid", "Sajid", "Ali",};
// char * tmp; int i, j;
//  for( i = 0; i<3; i++)
//  {
    
//     for(int j=0;j<3-i-1;j++)
//     {
        
//     }
//  }
 
// }
#include <stdio.h>
#include <string.h>

int main(void) {
    // Initialize the array of strings
    char *p[3] = {"Rashid", "Sajid", "Ali"};
    char *tmp; // Temporary pointer for swapping
    int i, j;

    // Sort the array of strings in alphabetical order
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (strcmp(p[i], p[j]) > 0) { // Compare strings
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp; // Swap the strings
            }
        }
    }

    // Display the sorted strings
    for (i = 0; i < 3; i++) {
        printf("%s\n", p[i]);
    }

    return 0;
}

