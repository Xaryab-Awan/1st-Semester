#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Weather {
    int temp;
    int rainfall;
    char wind[50];
} Weather;

typedef struct Crop {
    char type[50];
    char growth[50];
    int expectedYield;
    Weather *weather;
} Crop;

typedef struct Equipment {
    char operationalStatus[50];
    int fuelLevel;
    char activitySchedule[50];
} Equipment;

typedef struct Sensor {
    char nutrients[50];
    int pHLevel;
    char pestActivity[50];
} Sensor;

typedef struct Field {
    int gpsCoordinates;
    int soilHealth;
    int moistureLevel;
    Crop *crops;
    int cropCount;
    Equipment *equipment;
    int equipmentCount;
    Sensor *sensors;
    int sensorCount;
} Field;

typedef struct RegionalHub {
    Field *fields;
    int fieldCount;
    int totalYield;
    char resourceDistribution[500];
    char emergencyResponse[500];
} RegionalHub;

typedef struct central_Server {
    RegionalHub *regionalHubs;
    int hubCount;
    char aiAnalytics[1000];
} CentralHub;

void addField(Field *field) {
    printf("Enter GPS coordinates (integer): ");
    scanf("%d", &field->gpsCoordinates);

    printf("Enter soil health (0-100): ");
    scanf("%d", &field->soilHealth);

    printf("Enter moisture level (0-100): ");
    scanf("%d", &field->moistureLevel);

    printf("Enter number of crops: ");
    scanf("%d", &field->cropCount);
    field->crops = (Crop *)malloc(field->cropCount * sizeof(Crop));
    for (int i = 0; i < field->cropCount; i++) {
        printf("\nCrop %d\n", i + 1);
        printf("Enter crop type: ");
        scanf("%s", field->crops[i].type);
        printf("Enter growth stage: ");
        scanf("%s", field->crops[i].growth);
        printf("Enter expected yield: ");
        scanf("%d", &field->crops[i].expectedYield);

        field->crops[i].weather = (Weather *)malloc(sizeof(Weather));
        printf("Enter temperature: ");
        scanf("%d", &field->crops[i].weather->temp);
        printf("Enter rainfall: ");
        scanf("%d", &field->crops[i].weather->rainfall);
        printf("Enter wind description: ");
        scanf("%s", field->crops[i].weather->wind);
    }

    printf("\nEnter number of equipment: ");
    scanf("%d", &field->equipmentCount);
    field->equipment = (Equipment *)malloc(field->equipmentCount * sizeof(Equipment));
    for (int i = 0; i < field->equipmentCount; i++) {
        printf("\nEquipment %d\n", i + 1);
        printf("Enter operational status: ");
        scanf("%s", field->equipment[i].operationalStatus);
        printf("Enter fuel level: ");
        scanf("%d", &field->equipment[i].fuelLevel);
        printf("Enter activity schedule: ");
        scanf("%s", field->equipment[i].activitySchedule);
    }

    printf("\nEnter number of sensors: ");
    scanf("%d", &field->sensorCount);
    field->sensors = (Sensor *)malloc(field->sensorCount * sizeof(Sensor));
    for (int i = 0; i < field->sensorCount; i++) {
        printf("\nSensor %d\n", i + 1);
        printf("Enter nutrient data: ");
        scanf("%s", field->sensors[i].nutrients);
        printf("Enter pH level: ");
        scanf("%d", &field->sensors[i].pHLevel);
        printf("Enter pest activity description: ");
        scanf("%s", field->sensors[i].pestActivity);
    }
}

void addRegionalHub(RegionalHub *hub, int fieldCount) {
    hub->fields = (Field *)malloc(fieldCount * sizeof(Field));
    hub->fieldCount = fieldCount;
    hub->totalYield = 0;

    for (int i = 0; i < fieldCount; i++) {
        printf("\n--- Adding Field %d to Regional Hub ---\n", i + 1);
        addField(&hub->fields[i]);
        for (int j = 0; j < hub->fields[i].cropCount; j++) {
            hub->totalYield += hub->fields[i].crops[j].expectedYield;
        }
    }
    strcpy(hub->resourceDistribution, "Default resource allocation strategy");
    strcpy(hub->emergencyResponse, "Emergency response plan for this region");
}

void displayRegionalHub(RegionalHub *hub) {
    printf("\n--- Regional Hub Details ---\n");
    printf("Number of Fields: %d\n", hub->fieldCount);
    printf("Total Yield Prediction: %d\n", hub->totalYield);
    printf("Resource Distribution: %s\n", hub->resourceDistribution);
    printf("Emergency Response Plan: %s\n", hub->emergencyResponse);

    for (int i = 0; i < hub->fieldCount; i++) {
        printf("\n--- Field %d Details ---\n", i + 1);
        Field *field = &hub->fields[i];
        printf("GPS Coordinates: %d\n", field->gpsCoordinates);
        printf("Soil Health: %d\n", field->soilHealth);
        printf("Moisture Level: %d\n", field->moistureLevel);

        printf("\nCrops:\n");
        for (int j = 0; j < field->cropCount; j++) {
            printf("  Crop %d: %s, Growth Stage: %s, Yield: %d\n",
                   j + 1, field->crops[j].type, field->crops[j].growth, field->crops[j].expectedYield);
            printf("  Weather: Temp: %d, Rainfall: %d, Wind: %s\n",
                   field->crops[j].weather->temp, field->crops[j].weather->rainfall, field->crops[j].weather->wind);
        }

        printf("\nEquipment:\n");
        for (int j = 0; j < field->equipmentCount; j++) {
            printf("  Equipment %d: Status: %s, Fuel Level: %d, Activity: %s\n",
                   j + 1, field->equipment[j].operationalStatus, field->equipment[j].fuelLevel, field->equipment[j].activitySchedule);
        }

        printf("\nSensors:\n");
        for (int j = 0; j < field->sensorCount; j++) {
            printf("  Sensor %d: Nutrients: %s, pH Level: %d, Pest Activity: %s\n",
                   j + 1, field->sensors[j].nutrients, field->sensors[j].pHLevel, field->sensors[j].pestActivity);
        }
    }
}

void addCentralServer(CentralHub *central_Server, int hubCount) {
   central_Server->regionalHubs = (RegionalHub *)malloc(hubCount * sizeof(RegionalHub));
   central_Server->hubCount = hubCount;

    for (int i = 0; i < hubCount; i++) {
        printf("\n--- Adding Regional Hub %d ---\n", i + 1);
        int fieldCount;
        printf("Enter the number of fields for this hub: ");
        scanf("%d", &fieldCount);
        addRegionalHub(&central_Server->regionalHubs[i], fieldCount);
    }
    strcpy(central_Server->aiAnalytics, "Central analytics for AI-based insights");
}

void  displayCentralServer(CentralHub *central_Server) {
    printf("\n--- Central Hub Details ---\n");
    printf("Number of Regional Hubs: %d\n", central_Server->hubCount);
    printf("AI Analytics: %s\n", central_Server->aiAnalytics);

    for (int i = 0; i < central_Server->hubCount; i++) {
        printf("\n--- Regional Hub %d Details ---\n", i + 1);
        displayRegionalHub(&central_Server->regionalHubs[i]);
    }
}

int main() {
    CentralHub central_Server;
    int hubCount;

    printf("Enter the number of regional hubs: ");
    scanf("%d", &hubCount);
    addCentralServer(&central_Server, hubCount);
    displayCentralServer(&central_Server);

    return 0;
}
