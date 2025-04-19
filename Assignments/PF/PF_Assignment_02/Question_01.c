#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value:", i + 1);
        scanf("%d", &arr[i]);
        if(arr[i]>9999){
            printf("Invalid Input\n Inputted value is greater than 9999 thus will not be conisdered\n");
            continue;
    }
    }
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min >arr[i])
        {
            min = arr[i];
        }
    }
    int min2;
    
   
    for(int i=0;i<5;i++){
        if((min2>arr[i])&&(arr[i]!=min)){
            
            min2=arr[i];
        }
    }
    printf("The minimum value is %d and second minimum value is %d",min,min2);
    return 0;
}