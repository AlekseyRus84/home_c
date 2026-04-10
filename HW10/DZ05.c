#include <stdio.h>
int main() 
{
    FILE *fileIn, *fileOut;
    int ch[1000]={0};
    int pos;
    int count =0;
    fileIn = fopen("input.txt", "r");
    fileOut = fopen("output.txt", "w");
    while ((ch[count] = fgetc(fileIn)) !=EOF)
        {
            count++;     
        }
    for (int i = 0; i < count-1; i++)
        {
            if (ch[i]=='a')
                {
                    ch[i]='b';
                    continue;
                }
            if (ch[i]=='b')
                {
                    ch[i]='a';
                    continue;
                }
            if (ch[i]=='A')
                {
                    ch[i]='B';
                    continue;
                }
            if (ch[i]=='B')
                {
                    ch[i]='A';
                    continue;
                }
        }
    for (int i = 0; i < count; i++) 
    {
    fprintf(fileOut, "%c", ch[i]);
    }  
        fclose(fileIn);
        fclose(fileOut); 
    return 0;
}