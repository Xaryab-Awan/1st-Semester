#include <stdio.h>

int main() {
    //loops
    //for number of iterations in known
    //while on the basis of condition
    //do while runs at least one time

    // ++a a++
    // --a a--

    // for(int i=0;i<5;i++){
    //     printf("%d \t",i);
    // }
    // int i=5;
    // while(i>10){
    //     printf("%d \t",i);
    //     i++;
    // }
    //fabonacii series
    // 0 1 1 2 3 5 8 13  
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // int a=0,b=1,result=0;
	// 		while(a<=n){
	// 		printf("%d \t",a);
	// 		result=a+b;
	// 		a=b;
	// 		b=result; }

    //prime and composite
    // int number,flag=0;
    // printf("Enter the numeber : ");//10,13
    // scanf("%d",&number);
    // for(int i=2;i<number;i++){
    //     if(number%i==0){
    //         flag++;
    //     }
    // }
    // if(flag==0){
    //     printf("%d is a prime number",number);
    // }    
    // else{
    //     printf("%d is a composite number",number);
    // }

    
    //sum of digits
    // int number;
    // printf("Enter the number : ");
    // scanf("%d",&number);
    // int flag=0,sum=0;
    // for(int i=0;number>0;i++)
    // {
    //     flag=number%10;
    //     sum=sum+flag;
    //     number=number/10;
    // }
    
    // while(number>0){
    //             flag=number%10;
    //             sum=sum+(flag);
    //             number/=10;
    //         }
    // printf("sum:%d ",sum);
    //1234/10 =123.4
    // 1234%10=4
    


    // while(){

    // }
    // int i=10;
    // do{
    //     printf("%d \t",i);
    //     i++;
    // }while(i<5);

    // for(int row=0;row<10;row++){
    //     for(int col=0;col<row;col++){
    //         if((row%2==0)){
    //             printf("*",row);
    //         }
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<5;i++){
    //     for(int j=5;j>i;j--){
    //         printf("*");
            
    //     }
    //     printf("\n");
    // }
    int choice;
    do{
        printf("1) ADD \n");
        printf("2) Subt\n");
        printf("3) Mul\n");
        printf("4) Div\n");
        printf("5) Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                int a,b;
                printf("Enter two numbers : ");
                scanf("%d %d",&a,&b);
                printf("%d",a+b);
                printf("\n");
                break;
            }
            case 2:
            {
                int a,b;
                printf("Enter two numbers : ");
                scanf("%d %d",&a,&b);
                printf("%d",a-b);
                printf("\n");
                break;
            }
            case 3:
            {
                int a,b;
                printf("Enter two numbers : ");
                scanf("%d %d",&a,&b);
                printf("%d",a*b);
                printf("\n");
                break;
            }
            case 4:
            {
                int a,b;
                printf("Enter two numbers : ");
                scanf("%d %d",&a,&b);
                printf("%d",a/b);
                printf("\n");
                break;
            }
            case 5:
            {
                printf("Exit");
                break;
        }
    }   
}while(choice!=5);

}