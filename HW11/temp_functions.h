#ifndef TEMP_functions_H      
#define TEMP_functions_H

#include <stdint.h>

struct sensor {
    uint8_t day;
    uint8_t month;
    uint16_t year;
    uint8_t hour;
    uint8_t min;
    int8_t t;
};

void AddRecord(struct sensor info[], int number, uint16_t year, uint8_t month,
               uint8_t day, uint8_t hour, uint8_t min, int8_t t);
int  AddInfo(struct sensor info[]);
void Printinfo(struct sensor info[], int number);
float MidleTemp(struct sensor info[], int num);
float MinTecTemp(struct sensor info[], int num, int month);
float MaxTecTemp(struct sensor info[], int num, int month);
float MinYearTemp(struct sensor info[], int num);
float MaxYearTemp(struct sensor info[], int num);

#endif