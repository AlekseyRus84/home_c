#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "temp_functions.h"
#define SIZE 30

int ukaz = 0; // переменнаz показывающая нужно ли показывать инфу только по текущему месяцу

int main(int argc, char *argv[])
{
    struct sensor info[SIZE];
    SetConsoleOutputCP(65001); // UTF-8 для вывода
    SetConsoleCP(65001);       // UTF-8 для ввода
    time_t t = time(NULL);
    int year, month1, day, hour, min, t1;
    struct tm *tm = localtime(&t);
    int month = tm->tm_mon + 1;
    int number = 0;
    for (int i = 0; i < argc; i++)
    {
        // printf("argc = %d, argv = %s\n", i, argv[i]);
        char *str = argv[i];
        if (str[0] == '-')
        {
            switch (str[1])
            {
            case 'h':
                printf("-f входной файл csv для обработки. -m <номер месяца> \n");
                break;
            case 'f':
                int r;
                char *rez = argv[i + 1];
                FILE *f = fopen(rez, "r");
                if (f == NULL)
                {
                    printf("Файл не найден\n");
                    return 1;
                }

                while ((r = fscanf(f, "%d;%d;%d;%d;%d;%d", 
                    &year, &month1, &day, &hour, &min, &t1)) != EOF)
                {
                    if (r < 6)
                    {
                        int c;
                        while ((c = fgetc(f)) != '\n' && c != EOF);
                        printf("Ошибка в линии %d\n", number);
                        info[number].year = 0;
                        info[number].month = 0;
                        info[number].day = 0;
                        info[number].hour = 0;
                        info[number].min = 0;
                        info[number].t = 0;
                        number++;
                        //continue;
                    }
                    else
                    {
                        info[number].year = year;
                        info[number].month = month1;
                        info[number].day = day;
                        info[number].hour = hour;
                        info[number].min = min;
                        info[number].t = t1;
                        number++;
                    }
                }
                fclose(f);
                break;
            case 'm':
                char *ukazmonth = argv[i + 1];
                ukaz = atoi(ukazmonth);
            }
        }
    }

    if (number == 0)
    {
        number = AddInfo(info);
        Printinfo(info, number);
    }
    if (ukaz == 0)
    {
        Printinfo(info, number);
        float mintec = MinTecTemp(info, number, month);
        printf("mintectemp=%g\n", mintec);
        float maxtec = MaxTecTemp(info, number, month);
        printf("maxtectemp=%g\n", maxtec);
        float midlsum = MidleTemp(info, number);
        printf("midleTemp=%g\n", midlsum);
        float mintempYear = MinYearTemp(info, number);
        printf("minYearTemp =%g\n", mintempYear);
        float maxYearTemp = MaxYearTemp(info, number);
        printf("maxYearTemp=%g\n", maxYearTemp);
    }
    else
    {
        Printinfo(info, number);
    }

    return 0;
}