#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter a number : ");  
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==0){
        printf("%d is a prime number",n);
    }    
    else{
        printf("%d is a composite number",n);
    }
}