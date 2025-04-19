#include <stdio.h>
#include <stdlib.h>

struct Emp {
    int *rat;
    int totScore;
};

void input(int **rat, int empCnt, int periods) {
    for (int i = 0; i < empCnt; i++) {
        rat[i] = (int *)malloc(periods * sizeof(int));
        printf("Enter ratings for Employee %d:\n", i + 1);
        for (int j = 0; j < periods; j++) {
            do {
                printf("Period %d (1-10): ", j + 1);
                scanf("%d", &rat[i][j]);
            } while (rat[i][j] < 1 || rat[i][j] > 10);
        }
    }
}

void show(int **rat, int empCnt, int periods) {
    for (int i = 0; i < empCnt; i++) {
        printf("Employee %d Ratings: ", i + 1);
        for (int j = 0; j < periods; j++) {
            printf("%d ", rat[i][j]);
        }
        printf("\n");
    }
}

int bestEmp(int **rat, int empCnt, int periods) {
    int best = 0;
    double topAvg = 0.0;
    for (int i = 0; i < empCnt; i++) {
        int sum = 0;
        for (int j = 0; j < periods; j++) {
            sum += rat[i][j];
        }
        double avg = (double)sum / periods;
        if (avg > topAvg) {
            topAvg = avg;
            best = i;
        }
    }
    return best;
}

int topPeriod(int **rat, int empCnt, int periods) {
    int top = 0;
    double maxAvg = 0.0;
    for (int j = 0; j < periods; j++) {
        int sum = 0;
        for (int i = 0; i < empCnt; i++) {
            sum += rat[i][j];
        }
        double avg = (double)sum / empCnt;
        if (avg > maxAvg) {
            maxAvg = avg;
            top = j;
        }
    }
    return top;
}

int worstEmp(int **rat, int empCnt, int periods) {
    int worst = 0;
    double lowAvg = 10.0;
    for (int i = 0; i < empCnt; i++) {
        int sum = 0;
        for (int j = 0; j < periods; j++) {
            sum += rat[i][j];
        }
        double avg = (double)sum / periods;
        if (avg < lowAvg) {
            lowAvg = avg;
            worst = i;
        }
    }
    return worst;
}

int main() {
    int empCnt, periods;
    printf("Enter number of employees: ");
    scanf("%d", &empCnt);
    printf("Enter number of evaluation periods: ");
    scanf("%d", &periods);

    int **rat = (int **)malloc(empCnt * sizeof(int *));
    input(rat, empCnt, periods);
    show(rat, empCnt, periods);

    int topEmp = bestEmp(rat, empCnt, periods);
    printf("Employee of the Year: Employee %d\n", topEmp + 1);

    int bestPer = topPeriod(rat, empCnt, periods);
    printf("Highest Rated Period: Period %d\n", bestPer + 1);

    int lowEmp = worstEmp(rat, empCnt, periods);
    printf("Worst Performing Employee: Employee %d\n", lowEmp + 1);

    for (int i = 0; i < empCnt; i++) {
        free(rat[i]);
    }
    free(rat);

    return 0;
}
