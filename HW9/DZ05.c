#include <stdio.h>


int find_max_array(int size, int a[])
{
    int number = 1000;
    int count[1000]={0};

   for (int i = 0; i < number; i++) 
   {
    scanf("%d", &count[i]);  
	}

 int max = a[0];

    for (int i = 1; i < size; i++)
	{
        if (a[i] > max) 
        {
            max = a[i];
        }
	}
	return printf("%d",max);
    
    
}
