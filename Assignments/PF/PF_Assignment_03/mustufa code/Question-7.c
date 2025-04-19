#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct devicePreferences {
    char deviceName[50];
    char resolution[10];
    int playbackHistory;
    int bandwidthUsage;
} devicePreferences;

typedef struct contentInfo {
    char title[100];
    double rating;
    int duration;
    char encodingFormat[50];
} contentInfo;

typedef struct userProfile {
    double* userEngagement;  // engagement scores for categories
    devicePreferences** deviceSettings;  // device preferences for each user
} userProfile;

typedef struct contentCategory {
    contentInfo** categoryContent;  // content metadata in each category
} contentCategory;

int main() {
    int numUsers = 2;
    int numCategories = 3;
    int numDevices = 2;

    // Allocating memory for users' engagement data
    userProfile* users = (userProfile*)malloc(numUsers * sizeof(userProfile));
    for (int i = 0; i < numUsers; i++) {
        users[i].userEngagement = (double*)malloc(numCategories * sizeof(double));
    }

    // Allocating memory for device settings for each user
    for (int i = 0; i < numUsers; i++) {
        users[i].deviceSettings = (devicePreferences**)malloc(numDevices * sizeof(devicePreferences*));
        for (int j = 0; j < numDevices; j++) {
            users[i].deviceSettings[j] = (devicePreferences*)malloc(sizeof(devicePreferences));
        }
    }

    // Allocating memory for content categories
    contentCategory* categories = (contentCategory*)malloc(numCategories * sizeof(contentCategory));
    for (int i = 0; i < numCategories; i++) {
        categories[i].categoryContent = (contentInfo**)malloc(2 * sizeof(contentInfo*));  // Assuming 2 pieces of content per category
        for (int j = 0; j < 2; j++) {
            categories[i].categoryContent[j] = (contentInfo*)malloc(sizeof(contentInfo));
        }
    }

    // Sample Engagement Scores for 2 users across 3 categories
    users[0].userEngagement[0] = 3.5;  // User 1, Category 1
    users[0].userEngagement[1] = 1.2;  // User 1, Category 2
    users[0].userEngagement[2] = 0.8;  // User 1, Category 3

    users[1].userEngagement[0] = 0.0;  // User 2, Category 1
    users[1].userEngagement[1] = 4.0;  // User 2, Category 2
    users[1].userEngagement[2] = 1.5;  // User 2, Category 3

    // Sample Content Metadata for 3 categories (Action, Drama, Comedy)
    strcpy(categories[0].categoryContent[0]->title, "Action Movie");
    categories[0].categoryContent[0]->rating = 7.5;
    categories[0].categoryContent[0]->duration = 125;
    strcpy(categories[0].categoryContent[0]->encodingFormat, "123");

    strcpy(categories[0].categoryContent[1]->title, "Historical");
    categories[0].categoryContent[1]->rating = 8.0;
    categories[0].categoryContent[1]->duration = 150;
    strcpy(categories[0].categoryContent[1]->encodingFormat, "123");

    strcpy(categories[1].categoryContent[0]->title, "Drama");
    categories[1].categoryContent[0]->rating = 7.2;
    categories[1].categoryContent[0]->duration = 95;
    strcpy(categories[1].categoryContent[0]->encodingFormat, "456");

    strcpy(categories[1].categoryContent[1]->title, "Thriller");
    categories[1].categoryContent[1]->rating = 7.8;
    categories[1].categoryContent[1]->duration = 110;
    strcpy(categories[1].categoryContent[1]->encodingFormat, "456");

    strcpy(categories[2].categoryContent[0]->title, "Comedy");
    categories[2].categoryContent[0]->rating = 6.8;
    categories[2].categoryContent[0]->duration = 100;
    strcpy(categories[2].categoryContent[0]->encodingFormat, "789");

    strcpy(categories[2].categoryContent[1]->title, "Adventure");
    categories[2].categoryContent[1]->rating = 6.5;
    categories[2].categoryContent[1]->duration = 95;
    strcpy(categories[2].categoryContent[1]->encodingFormat, "789");

    // Sample Device Preferences for 2 devices per user
    strcpy(users[0].deviceSettings[0]->deviceName, "Smart TV");
    strcpy(users[0].deviceSettings[0]->resolution, "1080p");
    users[0].deviceSettings[0]->playbackHistory = 3600;
    users[0].deviceSettings[0]->bandwidthUsage = 4500;

    strcpy(users[0].deviceSettings[1]->deviceName, "Smartphone");
    strcpy(users[0].deviceSettings[1]->resolution, "720p");
    users[0].deviceSettings[1]->playbackHistory = 1200;
    users[0].deviceSettings[1]->bandwidthUsage = 3000;

    strcpy(users[1].deviceSettings[0]->deviceName, "Laptop");
    strcpy(users[1].deviceSettings[0]->resolution, "1080p");
    users[1].deviceSettings[0]->playbackHistory = 2000;
    users[1].deviceSettings[0]->bandwidthUsage = 4000;

    strcpy(users[1].deviceSettings[1]->deviceName, "Tablet");
    strcpy(users[1].deviceSettings[1]->resolution, "720p");
    users[1].deviceSettings[1]->playbackHistory = 1500;
    users[1].deviceSettings[1]->bandwidthUsage = 3500;

    printf("\nUser Device Preferences:\n");
    for (int i = 0; i < numUsers; i++) {
        printf("User %d's Device Preferences:\n", i + 1);
        for (int j = 0; j < numDevices; j++) {
            printf("Device %d: Name: %s, Resolution: %s, Playback History: %ds, Bandwidth: %dKbps\n",
                   j + 1,
                   users[i].deviceSettings[j]->deviceName,
                   users[i].deviceSettings[j]->resolution,
                   users[i].deviceSettings[j]->playbackHistory,
                   users[i].deviceSettings[j]->bandwidthUsage);
        }
    }

    printf("\nContent Metadata:\n");
    for (int i = 0; i < numCategories; i++) {
        printf("Category %d:\n", i + 1);
        for (int j = 0; j < 2; j++) { 
            printf("  Title: %s, Rating: %.1f, Runtime: %d min, Encoding: %s\n",
                   categories[i].categoryContent[j]->title,
                   categories[i].categoryContent[j]->rating,
                   categories[i].categoryContent[j]->duration,
                   categories[i].categoryContent[j]->encodingFormat);
        }
    }

    printf("User Engagement Scores:\n");
    for (int i = 0; i < numUsers; i++) {
        printf("User %d Engagement Scores:\n", i + 1);
        for (int j = 0; j < numCategories; j++) {
            printf("Category %d: %.2f\n", j + 1, users[i].userEngagement[j]);
        }
    }

    for (int i = 0; i < numCategories; i++) {
        for (int j = 0; j < 2; j++) {
            free(categories[i].categoryContent[j]);
        }
        free(categories[i].categoryContent);
    }

        for (int i = 0; i < numUsers; i++) {
        free(users[i].userEngagement);
        for (int j = 0; j < numDevices; j++) {
            free(users[i].deviceSettings[j]);
        }
        free(users[i].deviceSettings);
    }

    free(users);
    free(categories);

    return 0;
}
