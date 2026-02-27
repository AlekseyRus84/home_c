#include <stdio.h>

int factorial(int n,int sum) {
    if (n < 1) 
    {
       // return printf("%d ", n);
		printf("%d", sum);
        return 0;
    }
    sum=sum+n;
    factorial(n-1,sum);
    
    return 0;
}

int main() {
    int n, sum;
    sum=0;
    scanf("%d", &n);
    factorial(n,sum);
    
    return 0;
}
