// #include<stdio.h>

// int main() {
//     int arr[]={2,4,5,6,2,9},n=6,count=0;
//     for(int i=0;i<n;i++){
//     	for(int j=0;j<n;j++){
//     		if(arr[i]==arr[j]){
//     			count++;
// 			}
// 		}
//     		printf("\n %d comes %d times",arr[i],count);
// 	}
//     return 0;
// }















// #include <stdio.h>

// int main() {
//     int n,count=0;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             count++;
//         }         
//     }
//     if(count == 0){
//         printf("%d is a prime number\n",n);
//     }
//     else{
//         printf("%d is not a prime number\n",n);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n,Original,digit,sum=0;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     Original=n;
//     while(n>0){
//         digit=n%10;
//         sum=sum+(digit*digit*digit);
//         n/=10;
//     }
//     if(sum == Original){
//         printf("%d is an Armstrong number.\n",Original);
//     }
//     else{
//         printf("%d is not an Armstrong number.\n",Original);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n,Original,digit,sum=0;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     Original=n;
//     n*=n;
//     while(n>0){
//         digit=n%10;
//         sum+=digit;
//         n/=10;
//     }
//     if(Original==sum){
//         printf("%d is Neon Number",Original);}
//     else{
//         printf("%d is Not a Neon Number",Original);}
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int lcm,num1,num2,count=1;
//     printf("Enter two numbers :");
//     scanf("\n %d %d",&num1,&num2);
//     if(num1>num2){
//         lcm=num1;
//     }
//     else lcm=num2;
//     while(count==1){
//         if(lcm%num1==0 && lcm%num2==0){
//             printf("LCM of %d and %d is %d",num1,num2,lcm);
//             count=0;
//         }
//         lcm++;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int lcm,num1,num2,count=0,hcf;
//     printf("Enter two numbers :");
//     scanf("\n %d %d",&num1,&num2);
//     if(num1>num2){
//         lcm=num1;
//     }
//     else lcm=num2;
//     while(count==0){
//         if(lcm%num1==0 && lcm%num2==0){
//             printf("LCM of %d and %d is %d",num1,num2,lcm);
//             count=1;
//         }
//         lcm++;
//     }
//     if(count==1){
//         hcf=(num1*num2)/(lcm);
//         hcf+=1;
//         printf("\nHCF of %d and %d is %d",num1,num2,hcf);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n,fact=1;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("Factorial of %d is %d",n,fact);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n,e=0,o=0;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             e++;
//         }
//         else{
//             o++;
//         }
//     }
//     printf("Even : %d \n Odd : %d",e,o);
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int n,sum=0;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }
//     printf("Sum of %d even numbers is %d",n,sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n,sum=0;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     sum=n;
//     while(sum!=0){
//         printf("%d",sum);
//         if(n%2==0){
            
//         }
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     char arr2[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     while(n>0){
//         int digit=n%10;
//         printf("%s ",arr2[digit]);
//         n/=10;
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     int sum=0,dig;
//     while(n!=0){
//         dig=n%10;
//         sum=sum*10+dig;
//         n/=10;
//     }
//     printf("%d",sum);
// }

// // #include <stdio.h>

// int main(){
//     int n,div=0;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<n;i++){
//         if(n%i==0){
//         div++;
//         // printf("%d\n",div);
//         }
//     }
//     int arr[div];
//     int j=0;
//         for(int i= 1;i<=n;i++){
//         if(n%i==0){
//             arr[j]=i;
//             j++;
//         }
//     }
//     for(int i=0;i<div;i++){
//         printf("%d ",arr[i]);
//     }
//     int sum=0;
//     for(int i=0;i<div;i++){
//         sum+=arr[i];
//     }
//     if(sum>n){
//         printf("\n%d is not a perfect number",n);

//     }
//     else if(sum==n){
//         printf("\n%d is a perfect number",n);}
//     else if(sum<n){
//         printf("\n%d is progressive number",n);
//     }
//     return 0;
// // }
// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter the three digit number :");
//     scanf("%d",&num);
//     char arr[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int digit1,digit2,digit3;
//     digit1=num/100;
//     digit2=(num/10)%10;
//     digit3=num%10;
//     printf("\nThe digits of the number are %d %d %d",digit1,digit2,digit3);
//     printf("\nThe digits of the number are %s %s %s",arr[digit1],arr[digit2],arr[digit3]);
//     int sum=digit1+digit3;
//     if(sum==digit2)   {
//         printf("\nOn");
//     }
//     return 0;
// }
    
// #include <stdio.h>

// int main() {
//     int start, end;
//     int odd_count = 0, even_count = 0;
//     int arr[1000];
//     int index = 0;

//     printf("Enter the start of the interval: ");
//     scanf("%d", &start);
//     printf("Enter the end of the interval: ");
//     scanf("%d", &end);

//     for (int i = start; i <= end; i++) {
//         if (i % 2 != 0 && odd_count < 5) {
//             arr[index++] = i;
//             odd_count++;
//         } else if (i % 2 == 0 && even_count < 1 && odd_count == 5) {
//             arr[index++] = i;
//             even_count++;
//             odd_count = 0;
//         }

//         if (even_count == 1) {
//             even_count = 0;
//         }
//     }

//     for (int i = 0; i < index; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;}


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the Total Number of Book IDs: ");
//     scanf("%d", &n);
//     int arr[n];
//     int unique[1000] = {0};

//     for (int i = 0; i < n; i++) {
//         printf("Enter Book ID %d: ", i);
//         scanf("%d", &arr[i]);
//         unique[arr[i]] = 1; 
//     }

//     printf("Original List of Book IDs: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\nUpdated List of Book IDs: ");
//     for (int i = 0; i < 1000; i++) {
//         if (unique[i]) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number :");
//     scanf("%d", &n);
//     char arr[n];
//     char arr2[n];
//     for(int i = 0; i < n; i++){
//         scanf(" %c", &arr[i]);
//         arr2[i] = arr[i];
//     }
//     int a, b;
//     for(int i = 0; i < n/2; i++){
//         a = arr2[i];
//         b = arr2[n - i - 1];
//         arr2[i] = b;
//         arr2[n - i - 1] = a;
//     }
//     for(int i = 0; i < n; i++){
//         printf("\n%c ", arr2[i]);
//     }
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == arr2[i]){
//             count++;
//         }
//     }
//     if(count == n){
//         printf("\n It's a Palindrome .");
//     }
//     else
//         printf("\n It's not a Palindrome .");
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//    int max=0;
//     for(int i=0;i<n;i++){
//         if(max > arr[i]){
//             max=arr[i];
//         }
//     }
//     // int second_max=0;
//     // for(int i=0;i<n;i++){
//     //     if(max > arr[i] && max!=arr[i] && second_max < arr[i]){
//     //         second_max=arr[i];
//     //     }
//     // } 
//     printf("max is %d",max);
//     // printf("\nSecond max is %d",second_max);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//    int min=0;
//     for(int i=0;i<n;i++){
//         if(min > arr[i]){
//             min=arr[i];
//         }
//     }
//     int second_min=0;
//     for(int i=0;i<n;i++){
//         if(min < arr[i] && min!=arr[i] && second_min > arr[i]){
//             second_min=arr[i];
//         }
//     }
//     printf("Min is %d",min);
//     printf("\nSecond min is %d",second_min);
//     return 0;
// }

//print number in words

// #include <stdio.h>

// int reverseNumber(int num){
//     int sum=0,dig;
//     while(num!=0){
//         dig=num%10;
//         sum=(sum*10)+dig;
//         num/=10;
//     }
//     return sum;
// }

// int printNumber(int number){
//     int dig;
//     char arr[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     for(int i=0;number>0;i++){
//         dig=number %10;
//         printf("\n%s ",arr[dig]);
//         number/=10;
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     int N=reverseNumber(n);
//     printf("\n%d\n",n);
//     // printf("\n%d\n",N);
//     // printNumber(n);
//     printNumber(N);
//     return 0;
// }

//largest & smallest element in Array:

// #include <stdio.h>

// int main() {
//     int arr[10]={231,32,234,453,534,123,12,123,43,431};
//     int max=arr[0];
//     int min=arr[0];
//     for(int i=0;i<10;i++)
//     {
//         if(max<arr[i])
//             max=arr[i];
//         if(min>arr[i])
//             min=arr[i];
//     }
//     printf("max is %d\n",max);
//     printf("min is %d",min);
//     return 0;
// }

//Bubble Sort

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Orignal Array is :-\n");
//     printf("[");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("]\n");

//     int a,b;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 a=arr[j];
//                 b=arr[j+1];
//                 arr[j]=b;
//                 arr[j+1]=a;
//             }
//         }
//     }
//     printf("Sorted Array is :-\n");
//     printf("[");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("]\n");
//     return 0;
// }


//linear Search 

// #include <stdio.h>

// int main() {
//     int n,target;
//     printf("Enter the number of Values :");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the Values");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter %d Value :",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the Target\n");
//     scanf("%d",&target);
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             printf("Target has been Found at %d index of the array.",i);
//         }
//     }
//     return 0;
// }

//Binary Search ;

// #include <stdio.h>

// int main() {
//     int n,target;
//     printf("Enter the number of elements of the array:");
//     scanf("%d",&n);
//     int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
//     printf("Enter target");
//     scanf("%d",&target);
//     int mid,UB=0,LB=n-1;
//     while(UB<=LB){
//         mid=(UB+LB)/2;
//         if(target==arr[mid]){
//             printf("Found at %d",mid);
//             break;
//         }
//         else if(target>arr[mid]){
//             UB=mid+1;
//         }
//         else{
//             LB=mid-1;
//         }
//     }
//     if(UB>LB){
//         printf("Array does not contain this Element");
//     }
//     return 0;
// }


// accending/decending;


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int temp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]<arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements of the array:");
//     scanf("%d",&n);
//     int arr[n],count=0;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 break;
//             }
//         }
//     }
//     printf("Number of repeating elements are %d",count);
//     return 0;
// }


// Remove Duplicates;

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements of array:");
//     scanf("%d",&n);
//     int arr[n];
//     int count=0;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     //sort the array
//     int a,b;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 a=arr[j];
//                 b=arr[j+1];
//                 arr[j]=b;
//                 arr[j+1]=a;
//             }
//         }
//     }
//     printf("\nSorted array is :-");
//      for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     //no of repeating elements
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 break;
//             }
//         }
//     }
//     printf("the repeated are %d\n",count);
//     //remove repeating
//     int newsize=n-count;
//     int temp[newsize];
//     int j=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]!=arr[i+1]){
//             temp[j]=arr[i];
//             j++;
//         }
//         temp[j]=arr[n-1];
//     }
//     printf("Fixed Array is:-\n");
//     for(int i=0;i<n-count;i++){
//         printf("%d  ",temp[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     printf("Enter the string :");
//     scanf("%s",str);
//     char temp[100];
//     strcpy(temp,str);
//     printf("Reverse of string is :");
//     strrev(str);
//     puts(str);
//     if(strcmp(temp,str)==0){
//         printf("The string is palindrome");
//     }
//     else{
//         printf("The string is not palindrome");
//     }
//     return 0;
// }

// List of string functions:
// 1. strlen() - returns the length of the string
// 2. strcpy() - copies one string to another
// 3. strcat() - concatenates two strings
// 4. strcmp() - compares two strings
// 5. strchr() - returns a pointer to the first occurrence of a character in a string
// 6. strrchr() - returns a pointer to the last occurrence of a character in a string
// 7. strstr() - returns a pointer to the first occurrence of a substring in a string
// 8. strnlen() - returns the length of a string up to a maximum length
// 9. strncpy() - copies a maximum number of characters from one string to another
// 10. strncat() - concatenates two strings up to a maximum number of characters
// 11. strncmp() - compares two strings up to a maximum number of characters
// 12. strrev() - reverses a string




// PAPER QUESTION


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the total number of book IDs: ");
//     scanf("%d",&n);
//     int arr[n];
//     int count=0;
//     for(int i=0;i<n;i++){
//         printf("Enter Book ID %d :",i+1);
//         scanf("%d",&arr[i]);
//     }
//     //sort the array
//     int a,b;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 a=arr[j];
//                 b=arr[j+1];
//                 arr[j]=b;
//                 arr[j+1]=a;
//             }
//         }
//     }
//     //no of repeating elements
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 break;
//             }
//         }
//     }
//     // remove repeating
//     int newsize=n-count;
//     int temp[newsize];
//     int j=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]!=arr[i+1]){
//             temp[j]=arr[i];
//             j++;
//         }
//         temp[j]=arr[n-1];
//     }
//     printf("Updated List of Unique IDs :");
//     for(int i=0;i<n-count;i++){
//         printf("%d  ",temp[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// int main() {
//     char str[] = "hello   world   ia   am   axarayab";
//     char *word;
//     char newstr[100] = "";
//     int space_count = 0;
    
//     word = strtok(str, " ");
//     while (word != NULL) {
//         strcat(newstr, word);
//         strcat(newstr, " ");
//         word = strtok(NULL, " ");
//         if (word != NULL) {
//             space_count++;
//         }
//     }

//     printf("%s", newstr);
//     printf("\nSpaces removed: %d\n", space_count);

//     return 0;
// }
// #include <stdio.h>
// #include<string.h>
// int main() {
//     char str[100];
//     printf("Enter the string: ");
//     gets(str);
//     char *word;
//     word=strchr(str,'a');
//     printf("%s",word);
//     return 0;
// }