#include <stdio.h>
int main() 
{
    FILE *fileIn, *fileOut;
    int ch[1000]={0};
    int pos;
    int count =0;
        fileIn = fopen("input.txt", "r");
        fseek(fileIn,-1,SEEK_END);
        pos=fgetc(fileIn);
        fclose(fileIn);
        fileIn = fopen("input.txt", "r");
        fileOut = fopen("output.txt", "a");
        
       while ((ch[count] = fgetc(fileIn)) !=EOF && ch !='\n')
            {
              count++;     
            }
        for (int i = 0; i < count-1; i++)
        {
            if (ch[i]==pos)
                {
                    fprintf(fileOut,"%d ",i);
                }
        }
            
        fclose(fileIn);
        fclose(fileOut); 
    return 0;
}