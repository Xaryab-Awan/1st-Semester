#include <stdio.h>
struct Employee
{
    char  employeeCode[10];
    char employeeName[20];
    struct Date
    {
        int day;
        int month;
        int year;
    }D;
};
struct Employee E[4];

void assign()
{
    for(int i=0;i<4;i++)
    {
    
        printf("Enter the %d Employee Code:",i+1);
        scanf("%s",&E[i].employeeCode);
        printf("\n");
        printf("Enter %d Employee name:",i+1);
        scanf("%s",&E[i].employeeName);
        printf("\n");
        printf("Enter the day of joining:");
        scanf("%d",&E[i].D.day);
        printf("\n");
        printf("Enter month of joining:");
        scanf("%d",&E[i].D.month);
        printf("\n");
        printf("Enter year of joining:");
        scanf("%d",&E[i].D.year);
        printf("\n");
    }
}
void check()
{
    int year;
    int day;
    int month;
    printf("\n CHECKING.....\n");
    printf("Enter today's date:");
    scanf("%d",&day);
    printf("Enter today month:");
    scanf("%d",&month);
    printf("Enter Today's Year:");
    scanf("%d",&year);
    printf("\n\n");
    int count=0;
    for(int i=0;i<4;i++)
    {
        int finalday=day-E[i].D.day;
        int finalmonth=month-E[i].D.month;
        int finalyear=year-E[i].D.year;
        if((finalyear>3)||(finalyear==3 && (finalmonth>0 || (finalmonth==0 && finalday>=0) )))
        {
            count++;
            printf("EMPLOYEE NAME: %s\n",E[i].employeeName);
            printf("EMPLOYEE CODE: %s\n",E[i].employeeCode);
            printf("Date Of joining : %d-%d-%d\n",E[i].D.day,E[i].D.month,E[i].D.year);
            printf("\n");
        }
        
        
    }
    printf("Total %d Employee Founds",count);
}
int main() {
    assign();
    check();

    return 0;
}