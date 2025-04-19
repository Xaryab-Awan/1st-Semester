// #include <stdio.h>

// int main() {
//     int num1, num2;
//     int temp;
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &num1, &num2);
//     int a=num1;
//     int b=num2;
//     while(num2!=0){
//         temp=num2;
//         num2=num1%num2;
//         num1=temp;

//     }
//     printf("%d",(a*b)/num1);
//     return 0;
// }
#include <stdio.h>
int main() {
    int num1, num2;
    int lcm,hcf,n=0;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    lcm=(num1>num2)?num1:num2;
    while(n==0){
        if(lcm%num1==0 && lcm%num2==0){
            printf("%d\n",lcm);
            n++;
        }
        lcm++;
    }
    hcf=(num1*num2)/lcm;
    printf("%d",hcf+1);
    return 0;
}