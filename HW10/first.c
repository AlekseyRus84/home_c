#include <stdio.h>
#include <string.h>
int main(void)
{
 FILE *fin;
 int sum =0;
 //int n=0;
 signed char c;
 //char word[1000];
 //FILE *fout = fopen("output.txt","r+"); 
 fin = fopen("input.txt","r");
 
 if (fin == NULL)
{
    printf("Ошибка: файл не найден\n");
    return 1;
}
while ( (c=fgetc(fin))!=EOF ) 
{
	if(c>='0' && c<='9') 
	{
		sum += c-'0';
	}
}
printf (" %d", sum);
fclose (fin);
 return 0;
}
