#include <stdio.h>
int power(int n, int p) 
{
    int res = 1;
    
    for (int i = 0; i < p; i++) 
    {
        res =res* n;
    }
    
    return res;
}

int main() {
    int n, p;
    int y;
    
    scanf("%d %d", &n, &p);
    y=power(n,p);
    
    printf("%d\n", y);
    
    return 0;
}
