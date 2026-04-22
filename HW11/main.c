#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "temp_api.h"
#define SIZE 30

int main(void)
{
    // узнаем текущий месяц
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    int month = tm->tm_mon + 1;
    //
    struct sensor info[SIZE];
    int number = AddInfo(info);
    Printinfo(info,number);
    float mintec =MinTecTemp(info, number,month);
    printf("mintectemp=%g\n", mintec);
    float maxtec =MaxTecTemp(info, number,month);
     printf("maxtectemp=%g\n", maxtec);
     float midlsum = MidleTemp(info, number);
    printf("midleTemp=%g\n", midlsum);
    float mintempYear =MinYearTemp(info, number);
    printf("minYearTemp =%g\n", mintempYear);
    float maxYearTemp =MaxYearTemp(info, number);
    printf("maxYearTemp=%g\n", maxYearTemp);
    return 0;
}