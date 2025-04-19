 #include <stdio.h>
 struct movie
{
    char title[50];
    char genre[20];
    char director[50];
    int year;
    float rating;
};
 int main()
{
    struct movie m[10];
    int count = 0;
    int choice;
    do
    {
        printf("1) Add movie 2) Display movies  3) Search movies by genre \n0) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            if (count < 10)
            {
                printf("Enter movie title: ");
                scanf("%s", m[count].title);
                printf("Enter movie genre: ");
                scanf("%s", m[count].genre);
                printf("Enter movie director: ");
                scanf("%s", m[count].director);
                printf("Enter movie year: ");
                scanf("%d", &m[count].year);
                printf("Enter movie rating: ");
                scanf("%f", &m[count].rating);
                count++;
                printf("Movie Added Succesfully\n");
            }
            else
            {
                printf("The storage is full.\n");
            }
            break;
        }

        case 2:
        {
            if (count <= 0)
            {
                printf("There are no movies.\n");
            }
            for (int i = 0; i < count; i++)
            {
                printf("Movie %d:\n", i + 1);
                printf("Title: %s\n", m[i].title);
                printf("Genre: %s\n", m[i].genre);
                printf("Director: %s\n", m[i].director);
                printf("Year: %d\n", m[i].year);
                printf("Rating: %.1f\n", m[i].rating);
                printf("\n");
            }
            break;
        }

        case 3:
        {
            char genre[20];
            printf("Enter genre to search: ");
            scanf("%s", genre);
            for (int i = 0; i < count; i++)
            {
                if (strcmp(m[i].genre, genre) == 0)
                {
                    printf("Movie %d:\n", i + 1);
                    printf("Title: %s\n", m[i].title);
                    printf("Genre: %s\n", m[i].genre);
                    printf("Director: %s\n", m[i].director);
                    printf("Year: %d\n", m[i].year);
                    printf("Rating: %.1f\n", m[i].rating);
                    printf("\n");
                }
            }
            break;
        }
        default:
        {
            printf("Invalid choice.\n");
            break;
        }
        }

    } while (choice != 0);
}
