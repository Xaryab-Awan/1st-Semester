#include <stdio.h>
float second_min(float *a,int n)
{
    float min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    float min2=a[1];
    for(int i=0;i<n;i++)
    {
        if(min2>a[i]&&a[i]!=min)
        {
            min2=a[i];
        }
    }
    return min2;

}

int main() {
    float arr[20];
    for(int i=0;i<20;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%f",&arr[i]);
    }   
    float *p=&arr;
    float result=second_min(p,20);
    printf("The second highest is %.3f",result);
    return 0;
}


