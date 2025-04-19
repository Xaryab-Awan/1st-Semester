#include <stdio.h>
void findSectionTopper(float gpas[6][6], float percentages[6][6], int sectionToppers[6]) {
    for (int i = 0; i < 6; i++) {
        int topperIndex = 0;
        for (int j = 1; j < 6; j++) {
            if (gpas[i][j] > gpas[i][topperIndex] || 
               (gpas[i][j] == gpas[i][topperIndex] && percentages[i][j] > percentages[i][topperIndex])) {
                topperIndex = j;
            }
        }
        sectionToppers[i] = topperIndex;
        printf("Section %d Topper: Student %d with GPA %.2f and Percentage %.2f\n", 
               i + 1, topperIndex + 1, gpas[i][topperIndex], percentages[i][topperIndex]);
    }
}

void findUniversityTopper(float gpas[6][6], float percentages[6][6], int sectionToppers[6]) {
    int universityTopperSection = 0;
    int universityTopperIndex = sectionToppers[0];
    
    for (int i = 1; i <6; i++) {
        int currentTopper = sectionToppers[i];
        if (gpas[i][currentTopper] > gpas[universityTopperSection][universityTopperIndex] || 
           (gpas[i][currentTopper] == gpas[universityTopperSection][universityTopperIndex] && 
            percentages[i][currentTopper] > percentages[universityTopperSection][universityTopperIndex])) {
            universityTopperSection = i;
            universityTopperIndex = currentTopper;
        }
    }

    printf("University Topper: Section %d, Student %d with GPA %.2f and Percentage %.2f\n", 
           universityTopperSection + 1, universityTopperIndex + 1, 
           gpas[universityTopperSection][universityTopperIndex], 
           percentages[universityTopperSection][universityTopperIndex]);
}

int main() {
    float gpa[6][6], perc[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Enter GPA and percentage of student %d of section %d: ", j + 1, i + 1);
            scanf("%f %f", &gpa[i][j], &perc[i][j]);
        }
    }
    int sectiontoppers[6];
    findSectionTopper(gpa, perc,sectiontoppers);
    findUniversityTopper(gpa, perc, sectiontoppers);
    return 0; 
}
