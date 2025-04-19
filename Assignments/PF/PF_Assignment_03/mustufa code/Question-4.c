#include<stdio.h>
#include<stdlib.h>

struct employee{
    int* rating;
    int totalScore;
};

void inputEmployees(int** rating, int numEmployees, int numPeriods){
    int i,j;
    for(i=0; i < numEmployees; i++){
        rating[i] = (int*)malloc(numPeriods*sizeof(int));

        printf("Enter the rating for Employee %d (from 1 - 10)\n",i+1);
        for(j=0; j < numPeriods;j++){
            do{
              printf("Rating of Period %d:",j+1);
              scanf("%d",&rating[i][j]);
              if(rating[i][j] < 1 || rating[i][j] > 10){
                printf("Invalid Rating\n");
              }
            }while(rating[i][j] < 1 || rating[i][j] > 10);
        }
    }
}

void displayPerformance(int** rating, int numEmployees, int numPeriods){
    int i,j;
    for(i=0; i<numEmployees; i++){
        printf("Employee %d\n",i+1);
        for(j=0; j<numPeriods ;j++){
            printf("Rating for Period %d : %d\n",j+1,rating[i][j]);
        }
    }
}

int findEmployeeOfTheYear(int** rating, int numEmployees, int numPeriods){
    int i,j,bestEmployee = 0;
    float high_avg = 0.0;

    for(i=0; i<numEmployees; i++){
        int sum=0;
        for(j=0; j<numPeriods ;j++){
            sum += rating[i][j];
        }
        float avg= sum/numPeriods;
        if(avg > high_avg){
            high_avg = avg;
            bestEmployee;
        }
    }
    return bestEmployee+1;
}

int findHighestRatedPeriod(int** rating,int numEmployees,int numPeriods){
    int i,j,bestPeriod = 0;
    double high_avg = 0.0;

    for(i=0; i<numPeriods; i++) {
        int sum = 0;
        for(j=0; j<numEmployees; j++) {
            sum += rating[j][i];
        }
        double avg = (double)sum / numEmployees;
        if (avg > high_avg) {
            high_avg = avg;
            bestPeriod = i;
        }
    }
    return bestPeriod+1;
}

int findWorstPerformingEmployee(int** rating, int numEmployees, int numPeriods) {
    int i,j,worstemployee = 0;
    double low_avg = 10.0;

    for (int i = 0; i < numEmployees; i++) {
        int sum = 0;
        for (int j = 0; j < numPeriods; j++) {
            sum += rating[i][j];
        }
        double avg = (double)sum / numPeriods;
        if (avg < low_avg) {
            low_avg = avg;
            worstemployee = i;
        }
    }

    return worstemployee+1;
}

int main(){
  int numEmployees, numPeriods;

  printf("Enter the number of Employees:");
  scanf("%d",&numEmployees);

  printf("Enter the number of evaluation periods:");
  scanf("%d",&numPeriods);

  int** rating=(int**)malloc(numEmployees*sizeof(int*));

  inputEmployees(rating,numEmployees,numPeriods);

  displayPerformance(rating,numEmployees,numPeriods);

  int bestEmployee=findEmployeeOfTheYear(rating,numEmployees,numPeriods);
  printf("Best employee is %d\n",bestEmployee);

  int High_rated=findHighestRatedPeriod(rating,numEmployees,numPeriods);
  printf("Highest rated evaluation period is %d\n",High_rated);

  int worstEmployee = findWorstPerformingEmployee(rating,numEmployees,numPeriods);
  printf("Worst performance is shown by %d\n",worstEmployee);

  free(rating);

  return 0;
}