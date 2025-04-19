#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char resolution[20];
    int playbackTime; 
    int bandwidth;   
} DevicePrefs;

typedef struct {
    char title[100];
    float rating;
    int duration;      
    char format[20];   
} Content;

typedef struct {
    double *scores;    
} Engagement;

typedef struct {
    DevicePrefs **devices; 
} UserDevices;

typedef struct {
    Content **content; 
} Category;

typedef struct {
    Engagement *engagement;
    UserDevices *devices;
} User;

int main() {
    int userCount = 2, categoryCount = 3, deviceCount = 2, contentCount = 2;

   
    User *users = (User *)malloc(userCount * sizeof(User));
    for (int i = 0; i < userCount; i++) {
        users[i].engagement = (Engagement *)malloc(sizeof(Engagement));
        users[i].engagement->scores = (double *)malloc(categoryCount * sizeof(double));

        users[i].devices = (UserDevices *)malloc(sizeof(UserDevices));
        users[i].devices->devices = (DevicePrefs **)malloc(deviceCount * sizeof(DevicePrefs *));
        for (int j = 0; j < deviceCount; j++) {
            users[i].devices->devices[j] = (DevicePrefs *)malloc(sizeof(DevicePrefs));
        }
    }

    
    Category *categories = (Category *)malloc(categoryCount * sizeof(Category));
    for (int i = 0; i < categoryCount; i++) {
        categories[i].content = (Content **)malloc(contentCount * sizeof(Content *));
        for (int j = 0; j < contentCount; j++) {
            categories[i].content[j] = (Content *)malloc(sizeof(Content));
        }
    }

    
    users[0].engagement->scores[0] = 3.5;
    users[0].engagement->scores[1] = 1.2;
    users[0].engagement->scores[2] = 0.8;

    users[1].engagement->scores[0] = 0.0;
    users[1].engagement->scores[1] = 4.0;
    users[1].engagement->scores[2] = 1.5;

    strcpy(categories[0].content[0]->title, "Action Movie");
    categories[0].content[0]->rating = 7.5;
    categories[0].content[0]->duration = 125;
    strcpy(categories[0].content[0]->format, "H.264");

    strcpy(categories[0].content[1]->title, "Historical Drama");
    categories[0].content[1]->rating = 8.0;
    categories[0].content[1]->duration = 150;
    strcpy(categories[0].content[1]->format, "H.265");

 
    strcpy(users[0].devices->devices[0]->name, "Smart TV");
    strcpy(users[0].devices->devices[0]->resolution, "1080p");
    users[0].devices->devices[0]->playbackTime = 3600;
    users[0].devices->devices[0]->bandwidth = 4500;

    strcpy(users[0].devices->devices[1]->name, "Smartphone");
    strcpy(users[0].devices->devices[1]->resolution, "720p");
    users[0].devices->devices[1]->playbackTime = 1200;
    users[0].devices->devices[1]->bandwidth = 3000;

    strcpy(users[1].devices->devices[0]->name, "Laptop");
    strcpy(users[1].devices->devices[0]->resolution, "1080p");
    users[1].devices->devices[0]->playbackTime = 2000;
    users[1].devices->devices[0]->bandwidth = 4000;

    strcpy(users[1].devices->devices[1]->name, "Tablet");
    strcpy(users[1].devices->devices[1]->resolution, "720p");
    users[1].devices->devices[1]->playbackTime = 1500;
    users[1].devices->devices[1]->bandwidth = 3500;

    
    printf("\nUser Device Preferences:\n");
    for (int i = 0; i < userCount; i++) {
        printf("User %d Devices:\n", i + 1);
        for (int j = 0; j < deviceCount; j++) {
            printf("  Device %d: %s, %s, Playback: %d s, Bandwidth: %d Kbps\n",
                   j + 1, users[i].devices->devices[j]->name,
                   users[i].devices->devices[j]->resolution,
                   users[i].devices->devices[j]->playbackTime,
                   users[i].devices->devices[j]->bandwidth);
        }
    }

   
    printf("\nContent Metadata:\n");
    for (int i = 0; i < categoryCount; i++) {
        printf("Category %d:\n", i + 1);
        for (int j = 0; j < contentCount; j++) {
            printf("  Title: %s, Rating: %.1f, Duration: %d min, Format: %s\n",
                   categories[i].content[j]->title,
                   categories[i].content[j]->rating,
                   categories[i].content[j]->duration,
                   categories[i].content[j]->format);
        }
    }

  
    printf("\nUser Engagement Scores:\n");
    for (int i = 0; i < userCount; i++) {
        printf("User %d Scores:\n", i + 1);
        for (int j = 0; j < categoryCount; j++) {
            printf("  Category %d: %.2f\n", j + 1, users[i].engagement->scores[j]);
        }
    }

  
    for (int i = 0; i < categoryCount; i++) {
        for (int j = 0; j < contentCount; j++) {
            free(categories[i].content[j]);
        }
        free(categories[i].content);
    }
    free(categories);

    for (int i = 0; i < userCount; i++) {
        for (int j = 0; j < deviceCount; j++) {
            free(users[i].devices->devices[j]);
        }
        free(users[i].devices->devices);
        free(users[i].engagement->scores);
        free(users[i].engagement);
        free(users[i].devices);
    }
    free(users);

    return 0;
}
