#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int temp;
    int rain;
    char wind[50];
} Weather;

typedef struct {
    char type[50];
    char stage[50];
    int yield;
    Weather *weather;
} Crop;

typedef struct {
    char status[50];
    int fuel;
    char schedule[50];
} Equipment;

typedef struct {
    char nutrients[50];
    int pH;
    char pestDesc[50];
} Sensor;

typedef struct {
    int gps;
    int soil;
    int moisture;
    Crop *crops;
    int cropCnt;
    Equipment *equipments;
    int equipCnt;
    Sensor *sensors;
    int sensorCnt;
} Field;

typedef struct {
    Field *fields;
    int fieldCnt;
    int totalYield;
    char resources[500];
    char emergency[500];
} Hub;

typedef struct {
    Hub *hubs;
    int hubCnt;
    char aiData[1000];
} CentralServer;


void addField(Field *field) {
    printf("Enter GPS coordinates: ");
    scanf("%d", &field->gps);

    printf("Enter soil health (0-100): ");
    scanf("%d", &field->soil);

    printf("Enter moisture level (0-100): ");
    scanf("%d", &field->moisture);

    printf("Enter number of crops: ");
    scanf("%d", &field->cropCnt);
    field->crops = (Crop *)malloc(field->cropCnt * sizeof(Crop));
    for (int i = 0; i < field->cropCnt; i++) {
        printf("\nCrop %d:\n", i + 1);
        printf("Type: ");
        scanf("%s", field->crops[i].type);
        printf("Growth Stage: ");
        scanf("%s", field->crops[i].stage);
        printf("Expected Yield: ");
        scanf("%d", &field->crops[i].yield);

        field->crops[i].weather = (Weather *)malloc(sizeof(Weather));
        printf("Temperature: ");
        scanf("%d", &field->crops[i].weather->temp);
        printf("Rainfall: ");
        scanf("%d", &field->crops[i].weather->rain);
        printf("Wind: ");
        scanf("%s", field->crops[i].weather->wind);
    }

    printf("\nEnter number of equipment: ");
    scanf("%d", &field->equipCnt);
    field->equipments = (Equipment *)malloc(field->equipCnt * sizeof(Equipment));
    for (int i = 0; i < field->equipCnt; i++) {
        printf("\nEquipment %d:\n", i + 1);
        printf("Status: ");
        scanf("%s", field->equipments[i].status);
        printf("Fuel Level: ");
        scanf("%d", &field->equipments[i].fuel);
        printf("Schedule: ");
        scanf("%s", field->equipments[i].schedule);
    }

    printf("\nEnter number of sensors: ");
    scanf("%d", &field->sensorCnt);
    field->sensors = (Sensor *)malloc(field->sensorCnt * sizeof(Sensor));
    for (int i = 0; i < field->sensorCnt; i++) {
        printf("\nSensor %d:\n", i + 1);
        printf("Nutrients: ");
        scanf("%s", field->sensors[i].nutrients);
        printf("pH Level: ");
        scanf("%d", &field->sensors[i].pH);
        printf("Pest Activity: ");
        scanf("%s", field->sensors[i].pestDesc);
    }
}

void addHub(Hub *hub, int fieldCnt) {
    hub->fields = (Field *)malloc(fieldCnt * sizeof(Field));
    hub->fieldCnt = fieldCnt;
    hub->totalYield = 0;

    for (int i = 0; i < fieldCnt; i++) {
        printf("\nAdding Field %d to Hub...\n", i + 1);
        addField(&hub->fields[i]);
        for (int j = 0; j < hub->fields[i].cropCnt; j++) {
            hub->totalYield += hub->fields[i].crops[j].yield;
        }
    }
    strcpy(hub->resources, "Default resource allocation");
    strcpy(hub->emergency, "Emergency response strategy");
}

void displayHub(Hub *hub) {
    printf("\n--- Hub Details ---\n");
    printf("Fields: %d\n", hub->fieldCnt);
    printf("Total Yield: %d\n", hub->totalYield);
    printf("Resources: %s\n", hub->resources);
    printf("Emergency: %s\n", hub->emergency);

    for (int i = 0; i < hub->fieldCnt; i++) {
        Field *field = &hub->fields[i];
        printf("\nField %d:\n", i + 1);
        printf("GPS: %d, Soil: %d, Moisture: %d\n", field->gps, field->soil, field->moisture);

        printf("\nCrops:\n");
        for (int j = 0; j < field->cropCnt; j++) {
            printf("  Crop %d: %s, Stage: %s, Yield: %d\n",
                   j + 1, field->crops[j].type, field->crops[j].stage, field->crops[j].yield);
            printf("  Weather: Temp: %d, Rain: %d, Wind: %s\n",
                   field->crops[j].weather->temp, field->crops[j].weather->rain, field->crops[j].weather->wind);
        }

        printf("\nEquipment:\n");
        for (int j = 0; j < field->equipCnt; j++) {
            printf("  Equipment %d: %s, Fuel: %d, Schedule: %s\n",
                   j + 1, field->equipments[j].status, field->equipments[j].fuel, field->equipments[j].schedule);
        }

        printf("\nSensors:\n");
        for (int j = 0; j < field->sensorCnt; j++) {
            printf("  Sensor %d: Nutrients: %s, pH: %d, Pest: %s\n",
                   j + 1, field->sensors[j].nutrients, field->sensors[j].pH, field->sensors[j].pestDesc);
        }
    }
}

void addServer(CentralServer *server, int hubCnt) {
    server->hubs = (Hub *)malloc(hubCnt * sizeof(Hub));
    server->hubCnt = hubCnt;

    for (int i = 0; i < hubCnt; i++) {
        printf("\nAdding Hub %d...\n", i + 1);
        int fieldCnt;
        printf("Enter number of fields for this hub: ");
        scanf("%d", &fieldCnt);
        addHub(&server->hubs[i], fieldCnt);
    }
    strcpy(server->aiData, "AI-based analytics for insights");
}

void displayServer(CentralServer *server) {
    printf("\n--- Central Server Details ---\n");
    printf("Hubs: %d\n", server->hubCnt);
    printf("AI Data: %s\n", server->aiData);

    for (int i = 0; i < server->hubCnt; i++) {
        printf("\nHub %d Details:\n", i + 1);
        displayHub(&server->hubs[i]);
    }
}

int main() {
    CentralServer server;
    int hubCnt;

    printf("Enter number of hubs: ");
    scanf("%d", &hubCnt);
    addServer(&server, hubCnt);
    displayServer(&server);

    return 0;
}
