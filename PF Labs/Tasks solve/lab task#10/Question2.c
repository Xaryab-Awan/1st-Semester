#include <stdio.h>
#include <math.h>
struct space
{
    int x1;
    int y1;
    int x2;
    int y2;
};

int main()
{
    struct space s;
    printf("Enter x1:");
    scanf("%d", &s.x1);
    printf("Enter x2:");
    scanf("%d", &s.x2);
    printf("Enter y1:");
    scanf("%d", &s.y1);
    printf("Enter y2:");
    scanf("%d", &s.y2);
    int distance = sqrt(pow(s.y2 - s.y1, 2) + pow(s.x2 - s.x1, 2));
    printf("The distance between the points (%d,%d) and (%d,%d) is %d\n", s.x1, s.y1, s.x2, s.y2, distance);
    int xmax;
    printf("Enter the maximum 'x' value:");
    scanf("%d", &xmax);
    int ymax;
    printf("Enter the maximum 'y' value:");
    scanf("%d", &ymax);
    int xmin;
    printf("Enter the minimum 'x' value:");
    scanf("%d", &xmin);
    int ymin;
    printf("Enter the minimum 'y' value:");
    scanf("%d", &ymin);
    if (s.x1 < xmax && s.x2 < xmax && s.x1> xmin && s.x2> xmin && s.y1 > ymin && s.y2 > ymin && s.y1 < ymax && s.y2 < ymax)
    {
        printf("The Points Lie between the given rectangular boundary");
    }
    else
        printf("The Points Lie between the given rectangular boundary");
    return 0;
}
