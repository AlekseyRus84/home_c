#include <stdio.h>

void print_digit(char number[])
{
    int size=sizeof(char);
     if (size>400)
		return;
    int count[10]={0};
    for (int i = 0; number[i] != '\0'; i++)
    {
        count[number[i] - '0']++;
		
	} 
//printf("%lld",sizeof(count));	  
 

//printf("%lld",sizeof(count));
  for (int i = 0; i < 10; i++)
        if (count[i] > 0)
            printf("%d %d\n", i, count[i]);
            
}

int main()
{
    char number[1000];
 

    scanf("%s", number);

  //  sort_digits(number, count);
	print_digit(number);
	
    return 0;
}


