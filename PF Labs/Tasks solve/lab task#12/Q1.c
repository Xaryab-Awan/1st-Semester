#include <stdio.h>
void swap(int *a, int *b, int *c)
{
    int temp=0;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;

}
int main() {
    int x,y,z;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&x,&y,&z);
    swap(&x,&y,&z);
    printf("The Swapped Numbers are %d %d %d",x,y,z);
    return 0;
}