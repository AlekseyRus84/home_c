#include <stdio.h>

int factorial(int n, int sum)
	{
	if (n < 1)
	{ 
		//printf("%d ", n);
		return 0;
	}
	
    sum=n%10; 
    printf("%d ", sum);   
    factorial(n/10,sum);
    return 0;
}

int main() {
    int n,sum;
    sum=0;
    scanf("%d", &n);
    if (n == 0) 
    {
        printf("0");
        return 0;
    }
    factorial(n,sum);
   
    return 0;
    
}
