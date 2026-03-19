#include <stdio.h>
 
void PrintDigist(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        if (arr[i] > 0)
            printf("%d %d\n", i, arr[i]);
}
 
void count_digits(char n[], int* res)
{
char ch;
    for (int i=0;n[i]!=0;i++)
        res[n[i] - '0']++;
}
