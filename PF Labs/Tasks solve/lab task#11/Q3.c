#include <stdio.h>

struct info
{
    int id;
    char name[20];
    char gender[6];
    int quiz1_score;
    int quiz2_score;
    int mid_score;
    int final_score;
};

int main()
{
    struct info students[20];
    FILE *ptr;
    ptr = fopen("student.txt", "w");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the info of %d student:\n", i + 1);
        printf("Enter id:");
        scanf("%d", &students[i].id);
        fprintf(ptr, "%d\t", students[i].id);
        printf("Enter name:");
        scanf("%s", students[i].name);
        fprintf(ptr, "%s\t", students[i].name);
        printf("Enter gender:");
        scanf("%s", students[i].gender);
        fprintf(ptr, "%s\t", students[i].gender);
        printf("Enter quiz1 score:");
        scanf("%d", &students[i].quiz1_score);
        fprintf(ptr, "%d\t", students[i].quiz1_score);
        printf("Enter quiz2 score:");
        scanf("%d", &students[i].quiz2_score);
        fprintf(ptr, "%d\t", students[i].quiz2_score);
        printf("Enter mid score:");
        scanf("%d", &students[i].mid_score);
        fprintf(ptr, "%d\t", students[i].mid_score);
        students[i].final_score = students[i].quiz1_score + students[i].quiz2_score + students[i].mid_score;
        fprintf(ptr, "%d\n", students[i].final_score);
    }
    printf("\n\n");
    fclose(ptr);
    ptr = fopen("student.txt", "r");
    int choice;
    do
    {
        printf("which students info u want to check?\nenter 0 to exit:");
        scanf("%d", &choice);
        if(choice>20)
        {
            printf("Enter number between 1 to 20\n");
        }
        if (choice != 0)
        {
            int id;
            char name[20];
            char gender[6];
            int quiz1_score;
            int quiz2_score;
            int mid_score;
            int final_score;
            while (fscanf(ptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &id, name, gender, &quiz1_score, &quiz2_score, &mid_score, &final_score) != EOF)
            {
                if (id == students[choice - 1].id)
                {
                    printf("Id:%d\nName:%s\nGender:%s\nQuiz1:%d\nQuiz2:%d\nMid:%d\nFinal:%d\n", id, name, gender, quiz1_score, quiz2_score, mid_score, final_score);
                    break;
                }
            }
        }
        else
        {
            printf("Entered Number students score is not matched\n");
        }

    } while (choice != 0);

    fclose(ptr);
    return 0;
}
