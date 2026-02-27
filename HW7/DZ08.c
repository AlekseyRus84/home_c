#include <stdio.h>

int print_num_plus(int n,int b, int sum)
	{
    if (n < b) 
    return 0;
    sum=n;   
	printf("%d ", sum);
    print_num_plus(n-1,b,sum);
    return 0;
}
int print_num_minus(int n,int b, int sum)
	{
    if (n > b) 
    return 0;
    sum=n;   
   
    printf("%d ", sum);
    print_num_minus(n+1,b,sum);
    return 0;
}

int main() {
    int n,b,sum;
    sum=0;
    scanf("%d%d", &n, &b);
    if (n > b) 
    print_num_plus(n,b,sum);
    else 
    print_num_minus(n,b,sum);     
    return 0;
}
