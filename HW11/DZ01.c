#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#define SIZE 30
struct sensor 
{
    uint8_t day; 
    uint8_t month; 
    uint16_t year; 
    uint8_t hour ;
    uint8_t min ;
    int8_t t ;
};
void AddRecord(struct sensor info[], int number,uint16_t year, uint8_t month,uint8_t day,uint8_t hour, uint8_t min , int8_t t)
{
   info[number].year=year;
   info[number].month=month;
   info[number].day=day;
   info[number].hour=hour;
   info[number].min=min;
   info[number].t=t;
   
};
int AddInfo(struct sensor info[])
{
    int counter =0;
    AddRecord(info,counter++,2021,9,16,6,43,15);
    AddRecord(info,counter++,2022,10,16,5,22,18);
    AddRecord(info,counter++,2026,04,21,9,42,34);
    AddRecord(info,counter++,2021,11,14,8,52,65);
    AddRecord(info,counter++,2023,12,13,3,32,-5);
    AddRecord(info,counter++,2022,01,16,9,42,21);
    AddRecord(info,counter++,2026,04,16,9,42,20);
    return counter;
};
void Printinfo(struct sensor info[],int number)
{
    for (int i=0;i<number; i++)
    {
        printf("%04d-%02d-%02d-%02d-%02d t=%3d\n", info[i].year,info[i].month,info[i].day,info[i].hour, info[i].min,info[i].t);
    }
};
void ChangeIJ(struct sensor info[], int i, int j)
{
struct sensor temp;
temp =info[i];
info[i]=info[j];
info[i]=temp;

};
//вычисление средней температуры за весь период
float MidleTemp(struct sensor info[], int num)
{
    float sum=0;
    for (size_t i = 0; i < num; i++)
    {
        sum=sum+info[i].t;
    }
    return sum/num;

}
// минимальная температура в текущем месяце
float MinTecTemp(struct sensor info[], int num, int month)
{
    float min=1000;
   
    for (size_t i = 0; i < num; i++)
    {
        if (info[i].month==month)
        {
            if (min>info[i].t)
            {
                min = info[i].t;
            }
            
           
        }
    }
    return min;   
}
// максимальная температура в текущем месяце
float MaxTecTemp(struct sensor info[], int num, int month)
{
    float max=-1000;
   
    for (size_t i = 0; i < num; i++)
    {
        if (info[i].month==month)
        {
            if (max<info[i].t)
            {
                max = info[i].t;
            }
            
           
        }
    }
    return max;   
}
// минимальная температура в году
float MinYearTemp(struct sensor info[], int num)
{
    float min=1000;
   
    for (size_t i = 0; i < num; i++)
    {
            if (min>info[i].t)
            {
                min = info[i].t;
            }
            
           
       
    }
    return min;   
}
// максимальная температура в году
float MaxYearTemp(struct sensor info[], int num)
{
    float max=-1000;
   
    for (size_t i = 0; i < num; i++)
    {
       
            if (max<info[i].t)
            {
                max = info[i].t;
            }
    }
    return max;   
}

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