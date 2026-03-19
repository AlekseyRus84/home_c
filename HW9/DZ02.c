#include <stdio.h>

void sort_digits(char number[], int count[])
{
    for (int i = 0; number[i] != '\0'; i++)
        count[number[i] - '0']++;
}

int main()
{
    char number[1000];
    int count[10]={0};

    scanf("%s", number);

    sort_digits(number, count);

    // выводим только те цифры, которые встречаются
    for (int i = 0; i < 10; i++)
        if (count[i] > 0)
            printf("%d %d\n", i, count[i]);

    return 0;
}
