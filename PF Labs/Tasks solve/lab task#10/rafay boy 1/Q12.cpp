#include<stdio.h>
#include<string.h>

struct moviedetail {
    char title[50];
    char genre[20];
    char director[50];
    int year;
    float rating;
};

main() {
    struct moviedetail arr[10];
    int i = 0;
    char ask;
    int choice;
    printf("*****WELCOME TO THE CINEMA MANAGEMENT SYSTEM*****\n\n");

    do {
        printf(" 1) Add movie\n 2) Display all movies\n 3) Search by genre\n 4) Exit\n ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (i < 10) {
                printf("Enter the movie details:\n");
                printf("Movie title: ");
                scanf(" %49[^\n]", arr[i].title);
                printf("Movie genre: ");
                scanf(" %19[^\n]", arr[i].genre);  
                printf("Movie director: ");
                scanf(" %49[^\n]", arr[i].director); 
                printf("Movie release year: ");
                scanf("%d", &arr[i].year);
                printf("Movie rating: ");
                scanf("%f", &arr[i].rating);
                i++;
            } else {
                printf("The storage is full.\n");
            }
            break;

        case 2:
            if (i <= 0) {
                printf("There are no movies.\n");
            } else {
                printf("%-30s %-15s %-30s %-5s %-10s\n", "Title", "Genre", "Director", "Year", "Rating");
                printf("---------------------------------------------------------------\n");
                for (int j = 0; j < i; j++) {
                    printf("%-30s %-15s %-30s %-5d %-10.1f\n",
                           arr[j].title, arr[j].genre, arr[j].director, arr[j].year, arr[j].rating);
                }
            }
            break;

        case 3:
            printf("Search movies by genre:\n");
            if (i <= 0) {
                printf("There are no movies.\n");
            } else {
                char genre[20];
                printf("Enter the genre of movies: ");
                scanf(" %19[^\n]", genre);
                printf("%-30s %-15s %-30s %-5s %-10s\n", "Title", "Genre", "Director", "Year", "Rating");
                printf("---------------------------------------------------------------\n");
                for (int j = 0; j < i; j++) {
                    if (strcmp(arr[j].genre, genre) == 0) {
                        printf("%-30s %-15s %-30s %-5d %-10.1f\n",
                               arr[j].title, arr[j].genre, arr[j].director, arr[j].year, arr[j].rating);
                    }
                }
            }
            break;

        case 4:
            printf("Exiting!!!\n");
            break;

        default:
            printf("Enter a valid choice.\n");
            break;
        }
    } while (choice != 4);
}
