#include <stdio.h>
int ostatok(int n,int p,int res) 
{
    
    if (n>=1)
    {
    res = n%p;
    n=n/p;
    //printf("%d", res);
    if (n>0)
    ostatok(n,p,res);
    }
    
    printf("%d", res);
    return 0;
    }

int main() {
    int n,p,res;
    res=0;
   // n=25;
    //p=5;
    scanf("%d%d", &n, &p ) ;
    ostatok(n,p,res);
    return 0;
}
