//Asc order
// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int temp;
//     int arr[n] = {3, 4, 1, 2, 9, 0, 8};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n ; j++)
//         {
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
//Dsc order
#include <stdio.h>
int main()
{
    int n = 7;
    int temp;
    int arr[n] = {3, 4, 1, 2, 9, 0, 8};
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}