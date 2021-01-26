#ifndef _STRUCT_H
#define _STRUCT_H

#include <iostream>

using namespace std;

struct Weather{
    int day;
    char month[12];
    float temperature;
    int pressure;
};

Weather getData(Weather);
void displayData(Weather);

#endif
