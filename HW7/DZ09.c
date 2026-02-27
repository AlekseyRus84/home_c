#include <stdio.h>

int print_num(int n, int sum)
	{
    if (n < 1)
    { 
    printf("%d", sum);
    return 0;
	}
    sum=sum+n%10;   
    print_num(n/10,sum);
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
    print_num(n,sum);
    
    return 0;
}
