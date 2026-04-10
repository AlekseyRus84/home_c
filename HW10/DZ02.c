#include <stdio.h>
int main() 
{
    FILE *fileIn, *fileOut;
    int position=1;
    char c='A';
    int chis=2;
    int count =0;
        fileIn = fopen("input.txt", "r");
        fileOut = fopen("output.txt", "a");
        fscanf(fileIn,"%d",&count) ;
       for (int i = 0; i < count; i++)
       {
            if ((position)% 2==0)
            {
                if (chis==10)
                chis=2;
                fprintf(fileOut,"%d",chis);
                chis=chis+2;
                position++;
            }
        else
        {
            fprintf(fileOut,"%c",c);
            c++;  
            position++; 
        }
       }
        fclose(fileIn);
        fclose(fileOut); 
    return 0;
}