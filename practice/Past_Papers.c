// #include <stdio.h>

// int main()
// {
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

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int size1,size2;
//     printf("Enter the size of array 1: ");
//     scanf("%d",&size1);
//     printf("Enter the size of array 2: ");
//     scanf("%d",&size2);
//     int arr1[size1];
//     int arr2[size2];
//     for(int i=0;i<size1;i++){
//         printf("Enter the %d element of array 1: ",i+1);
//         scanf("%d",&arr1[i]);
//     }
//     for(int i=0;i<size2;i++){
//         printf("Enter the %d element of array 2: ",i+1);
//         scanf("%d",&arr2[i]);
//     }
//     int size3=size1+size2;
//     int arr3[size3];
//     for(int i=0;i<size1;i++){
//         arr3[i]=arr1[i];
//     }
//     for(int i=0;i<size2;i++){
//         arr3[size1+i]=arr2[i];
//     }
//     for(int i=0;i<size3;i++){
//         printf("%d ",arr3[i]);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int arr[]={0,1,2,3,4,5,6,7,8,9};
//     char arr1[10][5]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int num;
//     int flag;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     while(num!=0){
//         flag=num%10;
//         for(int i=0;i<10;i++){
//           if(flag==arr[i]){
//             printf("%s ",arr1[i]);
//         }
//         }
//         num=num/10;
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n,flag;
//     int arr[10];
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int i=0;
//     while(n!=0){
//         flag=n%2;
//         n=n/2;
//         arr[i]=flag;
//         printf("%d",arr[i]);
//          i++;
//     }

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     for(n=7;n!=0;n--)
//     printf("n=%d",n--);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {3, 4, 5, 6, 1};
//     int temp=arr[0];
//     for (int i = 0; i < 4; i++)
//     {
//                 arr[i]=arr[i+1];
//     }
//     arr[4]=temp;

//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "salam, my name is xaryab";
//     int len = strlen(arr);
//     // printf("%c",arr[0]);
//     int count = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (i == 0)
//         {
//             if (arr[i] >= 'a' && arr[i] <= 'z')
//             {
//                 arr[i] = arr[i] - 32;
//             }
//         }
//         if (arr[i] == ' ')
//         {
//             if (arr[i + 1] >= 'a' && arr[i + 1] <= 'z')
//             {
//                 arr[i + 1] = arr[i + 1] - 32;
//             }
//         }
//         if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//         {
//             count++;
//         }
//     }
//     for (int i = 0; i < len; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
//     char alt[count];
//     int j=0;
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//         {
//             alt[j]=arr[i];
//             j++;
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         printf("%c", alt[i]);
//     }
// }
// #include <stdio.h>

// void add(int arr[3][3], int book_id)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == 0)
//             {
//                 arr[i][j] = book_id;
//                 printf("Book Succesfully added\n");
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
//                 printf("Book succesfully Removed\n");
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
//             print(shelf);
//             break;
//         }
//         case 2:
//         {

//             printf("Enter Book id:");
//             scanf("%d", &id);
//             rem(shelf, id);
//             print(shelf);
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
// void count(char arr[10][20])
// {
//     int counted[10] = {0};
//     for (int i = 0; i < 10; i++)
//     {
//         int count = 0;
//         if (counted[i] == 1)
//         {
//             continue;
//         }
//         for (int j = i; j < 10; j++)
//         {

//             if (strcmp(arr[i], arr[j]) == 0)
//             {
//                 count++;
//                 counted[j]++;
//             }
//         }
//         printf("The hashtag %s repeats %d times\n", arr[i], count);
//         count = 0;
//     }
// }
// void top(char arr[10][20])
// {

//     int temp=0;
//     int counted[10] = {0};
//     for (int i = 0; i < 10; i++)
//     {
//         int count = 0;
//         if (counted[i] == 1)
//         {
//             continue;
//         }
//         for (int j = i; j < 10; j++)
//         {

//             if (strcmp(arr[i], arr[j]) == 0)
//             {
//                 count++;
//                 counted[j]++;
//                 temp++;

//             }

//         }

//         count = 0;
//     }
//     int max[temp];
//     int k=0;
//     for (int i = 0; i < 10; i++)
//     {
//         int count = 0;
//         if (counted[i] == 1)
//         {
//             continue;
//         }
//         for (int j = i; j < 10; j++)
//         {

//             if (strcmp(arr[i], arr[j]) == 0)
//             {
//                 count++;
//                 counted[j]++;

//             }

//         }
//         max[k]=count;
//         k++;
//         count = 0;
//     }
//     for(int i=0;i<temp;i++)
//     {
//         printf("%d ",max[i]);
//     }

// }
// int main()
// {

//     char words[10][20];
//     printf("Enter the Hashtags:");
//     for (int i = 0; i < 10; i++)
//     {
//         fgets(words[i], 100, stdin);
//     }
//     count(words);
//     top(words);
// }
// #include <stdio.h>
// void display(int arr[5][5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("[");
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("]\n");
//     }
// }
// void update(int arr[5][5])
// {
//     int temp;
//     printf("Enter the value of temp:");
//     scanf("%d", &temp);
//     int grid, element;
//     printf("Enter the grid on which u want to update:");
//     scanf("%d", &grid);
//     printf("Enter which elemnt u want to update:");
//     scanf("%d", &element);
//     arr[grid][element] = temp;
// }
// void AvgTemp(int arr[5][5])
// {
//     int sum=0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             sum += arr[i][j];
//         }
//     }
//     int avg = sum / 25;
//     printf("The Average Temperature Of Entrire Green House is %d\n", avg);
// }
// void MaxTemp(int arr[5][5])
// {
//     int max = arr[0][0];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (max < arr[i][j])
//             {
//                 max = arr[i][j];
//             }
//         }
//     }
//     printf("The Max Temp of Entire Green House is %d", max);
// }

// int main()
// {
//     int temp[5][5] =
//         {
//             {23, 76, 54, 12, 13},
//             {33, 45, 15, 2, 20},
//             {32, 44, 54, 28, 17},
//             {5, 15, 25, 35, 45},
//             {22, 34, 56, 12, 23}};
//     char ques;
//     do
//     {
//         display(temp);
//         int choice;
//         printf("To Update Temp press 1:\n");
//         printf("To Find Avg of Green House press 2:\n");
//         printf("To Find max temp press 3:\n");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             update(temp);
//             display(temp);
//             break;
//         case 2:
//             AvgTemp(temp);
//             break;
//         case 3:
//             MaxTemp(temp);
//         default:
//         printf("Invalid Choice");
//             break;
//         }
//         printf("Do u want to continue(y for yes and n for no):\n");
//         scanf(" %c",&ques);
//     } while (ques != 'n');

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char color
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char para[] = "Think 100 times before you take a decision. But once that decision is taken, stand by it as one man. With faith, discipline and selfless devotion to duty, there is nothing worthwhile that you cannot achieve.";
//     int len = strlen(para);
//     int sentence_count = 0;

//     // for (int i = 0; i < len; i++)
//     // {
//     //     if (para[i] == '.')
//     //     {
//     //         sentence_count++;
//     //     }
//     // }
//     // int index[sentence_count];
//     // int j = 0;
//     // for (int i = 0; i < len; i++)
//     // {
//     //     if (para[i] == '.')
//     //     {
//     //         index[j] = i;
//     //     }
//     // }
//     char para_copy1[len];
//     strcpy(para_copy1,para);
//     char *sentence;
//     sentence = strtok(para_copy1, ".");
//     while(sentence!=NULL){
//         sentence_count++;
//         sentence=strtok(NULL,".");
//     }
//     printf("%d\n",sentence_count);
//     // for(int i=0;i<len;i++)
//     // {
//     //     if(sentence[i+1]==' ')
//     //     {
//     //         printf("%s",sentence);
//     //     }
//     // }
//     char para_copy2[len];
//     strcpy(para_copy2,para);
//     char *words;
//     int  words_count=0;
//     words = strtok(para_copy2, " ");
//     while(words!=NULL){
//         words_count++;
//         words=strtok(NULL," ");
//     }
//     printf("%d",words_count);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char arr[]="PFMIDII";
//     int i;
//     for(i=0;arr[i]!='\0';i++)
//     {
//         arr[i]=arr[i]+i;
//         printf(" %c",arr[i]);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int i=0,j=0;
//     do
//     {
//         while(j<3)
//         {
//             printf("%d",j);
//             j++;
//         }
//         printf("%d",++i);
//     } while (++i<6);
    
    
//     return 0;
// }
// #include <stdio.h>
// int main()
// { int i=1, j=0;
//  do
//  {
//  for(j='A'; j<='E'; j+=i)
//  {
//  printf("%c",j );
//  }
//  i++;
//  printf("\n");
//  }
//  while(i< 4);
//  return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;
//     printf("Enter the number of DNA strings: ");
//     scanf("%d", &n);
//     char words[n][20];
//     printf("Enter the DNA strings:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%s", words[i]);
//     }
//     int frq[n];
//     for(int i=0;i<n;i++)
//     {
//         frq[i]=0;
//     }
//     for (int i = 0; i < n; i++) {
//         if (frq[i] == 0) {
//             int count = 1;
//             for (int j = i + 1; j < n; j++) {
//                 if (strcmp(words[i], words[j]) == 0) {
//                     count++;
//                     frq[j] = 1;
//                 }
//             }
//             printf("\n%s %d", words[i], count);
//         }
//     }
//     return 0;
// }
