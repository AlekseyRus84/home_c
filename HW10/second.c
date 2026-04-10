#include <stdio.h>
//#include <windows.h>
int main() 
{
    FILE *fileIn, *fileOut;
    int ch;
    int count =0;
    for (int i = 0; i < 3; i++) 
     {
        fileIn = fopen("input.txt", "r");
        fileOut = fopen("output.txt", "a"); 
        while ((ch = fgetc(fileIn)) !=EOF && ch !='\n')
            {
                fputc(ch,fileOut);
                if (i==0)
                    count++;    
            }
        if (i!=2)
        {
            fputc(',', fileOut);
        fputc(' ', fileOut);
        }
        if (i==2)
           fprintf(fileOut," %d",count); 
        fclose(fileIn);
        fclose(fileOut);
    }  
    return 0;
}