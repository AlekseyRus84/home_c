#include <stdio.h>
int main() 
{
    FILE *fileIn, *fileOut;
    int slov[100];//первое слово
    int slov1[100];//второе слово
    int count =0;// длина 1-го слова
    int count1 =0;// длина 2-го слова
    int freq1[100] = {0};  // частота букв в первом слове
    int freq2[100] = {0};  // частота букв во втором слове
        fileIn = fopen("input.txt", "r");
        fileOut = fopen("output.txt", "w");
        // заполняем слова
          while ((slov[count] = (int)fgetc(fileIn)) != ' ')
            {
              count++;     
            }
        fseek(fileIn,count+1,SEEK_SET);
        while ((slov1[count1] = (int)fgetc(fileIn)) != EOF)
            {
              count1++;     
            } 
            // считаем частоту выхода слов 
        for (int t = 0; t < count-1; t++)
            {
                for (int y = t+1; y < count; y++)
                {
                     if (slov[t]==slov[y])
                        {
                         freq1[t]++;
                         freq1[y]++;     
                        }
                        
                }
        }
        for (int t = 0; t < count1; t++)
            {
                for (int y =t+1; y < count1; y++)
                {
                     if (slov1[t]==slov1[y])
                        {
                            freq2[t]++;
                            freq2[y]++;              
                        }
                } 
         }
         // сверяем одинаковые буквы в словах   
        for (int i = 0; i < count; i++)
           {
            for (int j = 0; j < count1; j++)
            {
                if (slov[i]==slov1[j] && freq1[i]==0 && freq2[j]==0)
                {
                    //slov1[j]=0;
                    fprintf(fileOut,"%c ",slov[i]);
                }
                
            }
            
           }
              
        fclose(fileIn);
        fclose(fileOut); 
    return 0;
}