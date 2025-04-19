#include <stdio.h>
#include <string.h>
struct info
{
    int RollNo;
    char Name[30];
    char Department[30];
    int Batch;
    char Section;
    float CGPA;
};
int main()
{
    FILE *ptr;
    ptr = fopen("users.txt", "w");
    int n;
    printf("Enter the number of students U want to enter:");
    scanf("%d", &n);
    struct info student[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of %d student:\n", i + 1);
        printf("Enter Roll number:");
        scanf("%d", &student[i].RollNo);
        fprintf(ptr, "%d\t", student[i].RollNo);
        printf("Enter Name:");
        scanf("%s", student[i].Name);
        fprintf(ptr, "%s\t", student[i].Name);
        printf("Enter Department:");
        scanf("%s", student[i].Department);
        fprintf(ptr, "%s\t", student[i].Department);
        printf("Enter Batch:");
        scanf("%d", &student[i].Batch);
        fprintf(ptr, "%d\t", student[i].Batch);
        printf("Enter Section:");
        scanf(" %c", &student[i].Section);
        fprintf(ptr, "%c\t", student[i].Section);
        printf("Enter CGPA:");
        scanf("%f", &student[i].CGPA);
        fprintf(ptr, "%f\n", student[i].CGPA);
    }
    fclose(ptr);
    ptr = fopen("users.txt", "r");
    int RollNo;
    char Name[30];
    char Department[30];
    int Batch;
    char Section;
    float CGPA;
    int flag;
    int choice;
    printf("\n\n");
    do
    {
        printf("1) Search Student\n2)Search Students of Batch 22\n 3)exit\n");
        printf("Enter Your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the Roll Number u want to search:");
            scanf("%d", &flag);
            printf("\n");
            int found = 0;
            while (fscanf(ptr, "%d\t%[^\t]\t%[^\t]\t%d\t%c\t%f", &RollNo, Name, Department, &Batch, &Section, &CGPA) != EOF)
            {
                if (flag == RollNo)
                {
                    printf("Student Found\n");
                    printf("Rollno:%d\n", RollNo);
                    printf("Name:%s\n", Name);
                    printf("Department:%s\n", Department);
                    printf("Batch:%d\n", Batch);
                    printf("Section:%c\n", Section);
                    printf("CGPA:%f\n", CGPA);
                    printf("\n");
                    found = 1;
                    break;
                }
            }
            if (found != 1)
            {
                printf("Student not found\n");
            }
            break;
        }
        case 2:
        {
            fseek(ptr,0,SEEK_SET);
            printf("THE STUDENTS OF BATCH 22 ARE:\n");
            while (fscanf(ptr, "%d\t%[^\t]\t%[^\t]\t%d\t%c\t%f", &RollNo, Name, Department, &Batch, &Section, &CGPA) != EOF)
            {
                if (Batch == 22)
                {
                    printf("Student Found\n");
                    printf("Rollno:%d\n", RollNo);
                    printf("Name:%s\n", Name);
                    printf("Department:%s\n", Department);
                    printf("Batch:%d\n", Batch);
                    printf("Section:%c\n", Section);
                    printf("CGPA:%f\n", CGPA);
                    printf("\n");
                    break;
                }
            }
            break;
        }
        default:
        {
            printf("Invalid choice\n");
        }
        }
    } while (choice != 3);

    fclose(ptr);
    return 0;
}

