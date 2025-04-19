#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct WeatherData
{
    int temperature;
    int rainfall;
    char windDescription[50];
} WeatherData;

typedef struct CropData
{
    char cropType[50];
    char growthStage[50];
    int expectedYield;
    WeatherData *weatherData;
} CropData;

typedef struct EquipmentData
{
    char operationalStatus[50];
    int fuelLevel;
    char activitySchedule[50];
} EquipmentData;

typedef struct SensorData
{
    char nutrientData[50];
    int pHLevel;
    char pestActivityDescription[50];
} SensorData;

typedef struct FieldData
{
    int gpsCoordinates;
    int soilHealth;
    int moistureLevel;
    CropData *crops;
    int cropCount;
    EquipmentData *equipment;
    int equipmentCount;
    SensorData *sensors;
    int sensorCount;
} FieldData;

typedef struct RegionalHubData
{
    FieldData *fields;
    int fieldCount;
    int totalYield;
    char resourceDistribution[500];
    char emergencyResponse[500];
} RegionalHubData;

typedef struct CentralServerData
{
    RegionalHubData *regionalHubs;
    int hubCount;
    char aiAnalytics[1000];
} CentralServerData;

void addField(FieldData *field)
{
    printf("Enter GPS coordinates (integer): ");
    scanf("%d", &field->gpsCoordinates);

    printf("Enter soil health (0-100): ");
    scanf("%d", &field->soilHealth);

    printf("Enter moisture level (0-100): ");
    scanf("%d", &field->moistureLevel);

    printf("Enter number of crops: ");
    scanf("%d", &field->cropCount);
    field->crops = (CropData *)malloc(field->cropCount * sizeof(CropData));
    for (int i = 0; i < field->cropCount; i++)
    {
        printf("\nCrop %d\n", i + 1);
        printf("Enter crop type: ");
        scanf("%s", field->crops[i].cropType);
        printf("Enter growth stage: ");
        scanf("%s", field->crops[i].growthStage);
        printf("Enter expected yield: ");
        scanf("%d", &field->crops[i].expectedYield);

        field->crops[i].weatherData = (WeatherData *)malloc(sizeof(WeatherData));
        printf("Enter temperature: ");
        scanf("%d", &field->crops[i].weatherData->temperature);
        printf("Enter rainfall: ");
        scanf("%d", &field->crops[i].weatherData->rainfall);
        printf("Enter wind description: ");
        scanf("%s", field->crops[i].weatherData->windDescription);
    }

    printf("\nEnter number of equipment: ");
    scanf("%d", &field->equipmentCount);
    field->equipment = (EquipmentData *)malloc(field->equipmentCount * sizeof(EquipmentData));
    for (int i = 0; i < field->equipmentCount; i++)
    {
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
    field->sensors = (SensorData *)malloc(field->sensorCount * sizeof(SensorData));
    for (int i = 0; i < field->sensorCount; i++)
    {
        printf("\nSensor %d\n", i + 1);
        printf("Enter nutrient data: ");
        scanf("%s", field->sensors[i].nutrientData);
        printf("Enter pH level: ");
        scanf("%d", &field->sensors[i].pHLevel);
        printf("Enter pest activity description: ");
        scanf("%s", field->sensors[i].pestActivityDescription);
    }
}

void addRegionalHub(RegionalHubData *hub, int fieldCount)
{
    hub->fields = (FieldData *)malloc(fieldCount * sizeof(FieldData));
    hub->fieldCount = fieldCount;
    hub->totalYield = 0;

    for (int i = 0; i < fieldCount; i++)
    {
        printf("\n--- Adding Field %d to Regional Hub ---\n", i + 1);
        addField(&hub->fields[i]);
        for (int j = 0; j < hub->fields[i].cropCount; j++)
        {
            hub->totalYield += hub->fields[i].crops[j].expectedYield;
        }
    }
    strcpy(hub->resourceDistribution, "Default resource allocation strategy");
    strcpy(hub->emergencyResponse, "Emergency response plan for this region");
}

void displayRegionalHub(RegionalHubData *hub)
{
    printf("\n--- Regional Hub Details ---\n");
    printf("Number of Fields: %d\n", hub->fieldCount);
    printf("Total Yield Prediction: %d\n", hub->totalYield);
    printf("Resource Distribution: %s\n", hub->resourceDistribution);
    printf("Emergency Response Plan: %s\n", hub->emergencyResponse);

    for (int i = 0; i < hub->fieldCount; i++)
    {
        printf("\n--- Field %d Details ---\n", i + 1);
        FieldData *field = &hub->fields[i];
        printf("GPS Coordinates: %d\n", field->gpsCoordinates);
        printf("Soil Health: %d\n", field->soilHealth);
        printf("Moisture Level: %d\n", field->moistureLevel);

        printf("\nCrops:\n");
        for (int j = 0; j < field->cropCount; j++)
        {
            printf("  Crop %d: %s, Growth Stage: %s, Yield: %d\n",
                   j + 1, field->crops[j].cropType, field->crops[j].growthStage, field->crops[j].expectedYield);
            printf("  Weather: Temp: %d, Rainfall: %d, Wind: %s\n",
                   field->crops[j].weatherData->temperature, field->crops[j].weatherData->rainfall, field->crops[j].weatherData->windDescription);
        }

        printf("\nEquipment:\n");
        for (int j = 0; j < field->equipmentCount; j++)
        {
            printf("  Equipment %d: Status: %s, Fuel Level: %d, Activity: %s\n",
                   j + 1, field->equipment[j].operationalStatus, field->equipment[j].fuelLevel, field->equipment[j].activitySchedule);
        }

        printf("\nSensors:\n");
        for (int j = 0; j < field->sensorCount; j++)
        {
            printf("  Sensor %d: Nutrients: %s, pH Level: %d, Pest Activity: %s\n",
                   j + 1, field->sensors[j].nutrientData, field->sensors[j].pHLevel, field->sensors[j].pestActivityDescription);
        }
    }
}

void addCentralServer(CentralServerData *central_Server, int hubCount)
{
    central_Server->regionalHubs = (RegionalHubData *)malloc(hubCount * sizeof(RegionalHubData));
    central_Server->hubCount = hubCount;

    for (int i = 0; i < hubCount; i++)
    {
        printf("\n--- Adding Regional Hub %d ---\n", i + 1);
        int fieldCount;
        printf("Enter the number of fields for this hub: ");
        scanf("%d", &fieldCount);
        addRegionalHub(&central_Server->regionalHubs[i], fieldCount);
    }
    strcpy(central_Server->aiAnalytics, "Central analytics for AI-based insights");
}

void displayCentralServer(CentralServerData *central_Server)
{
    printf("\n--- Central Hub Details ---\n");
    printf("Number of Regional Hubs: %d\n", central_Server->hubCount);
    printf("AI Analytics: %s\n", central_Server->aiAnalytics);

    for (int i = 0; i < central_Server->hubCount; i++)
    {
        printf("\n--- Regional Hub %d Details ---\n", i + 1);
        displayRegionalHub(&central_Server->regionalHubs[i]);
    }
}

int main()
{
    CentralServerData central_Server;
    int hubCount;

    printf("Enter the number of regional hubs: ");
    scanf("%d", &hubCount);
    addCentralServer(&central_Server, hubCount);
    displayCentralServer(&central_Server);

    return 0;
}