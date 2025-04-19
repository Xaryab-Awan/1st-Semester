#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};
float dist(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int inside(struct Point p, struct Point tl, struct Point br) {
    if (p.x >= tl.x && p.x <= br.x && p.y >= br.y && p.y <= tl.y) {
        return 1;
    }
    return 0;
}
int main() {
    struct Point p1, p2, tl, br;
    
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("The distance between points (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", p1.x, p1.y, p2.x, p2.y, dist(p1, p2));
    printf("Enter the coordinates of the top-left corner of the rectangle (x y): ");
    scanf("%f %f", &tl.x, &tl.y);
    printf("Enter the coordinates of the bottom-right corner of the rectangle (x y): ");
    scanf("%f %f", &br.x, &br.y);
    if (inside(p1, tl, br)) {
        printf("Point (%.2f, %.2f) is inside the rectangle.\n", p1.x, p1.y);
    } else {
        printf("Point (%.2f, %.2f) is outside the rectangle.\n", p1.x, p1.y);
    }
    if (inside(p2, tl, br)) {
        printf("Point (%.2f, %.2f) is inside the rectangle.\n", p2.x, p2.y);
    } else {
        printf("Point (%.2f, %.2f) is outside the rectangle.\n", p2.x, p2.y);
    }
    return 0;
}
