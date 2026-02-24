#include <stdio.h>
int middle(int n, int p) 
{
    int res = (n+p)/2;
    
    
    return res;
}

int main() {
    int n, p;
    int y;
    
    scanf("%d %d", &n, &p);
    y=middle(n,p);
    
    printf("%d\n", y);
    
    return 0;
}
