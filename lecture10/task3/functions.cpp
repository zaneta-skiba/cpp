#include "header.h"

Weather getData(Weather info){
    cout << "Enter the day: ";
    cin >> info.day;
    cout << "Enter the month: ";
    cin >> info.month;
    cout << "Enter the temperature in degrees Celsius: ";
    cin >> info.temperature;
    cout << "Enter the pressure in hPa: ";
    cin >> info.pressure;

    return info;
}

void displayData(Weather *info){
    printf("Day: %d\n", info->day);
    printf("Month: %s\n", info->month);
    printf("Temperature in degrees Celsius: %.1f\n", info->temperature);
    printf("Pressure in hPa: %d\n", info->pressure);
}
