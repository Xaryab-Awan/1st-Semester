#include<stdio.h>
const float a=0.001;
static int count=0;
float conv(int n)
{
float ans=a*n;
count++;
return ans;
}
int main()
{
int num;
printf("Enter -1 to quit\n");
while(1)
{
printf("Enter the number:");
scanf("%d",&num);
if(num==-1)
{
break;
}
float temp=conv(num);
printf("The %d m to km is %.3f\n",num,temp);
}
printf("The program coverts %d times",count);

}