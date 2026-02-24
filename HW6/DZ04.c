#include <stdio.h>
int function(int x) 
{
	int res =0;
	if (x>=-2 && x<2)
		res = x*x;
    else if (x>=2)
		res =x*x+4*x+5;
	else res  =4; 
	//printf("%d\n", res); 
    return res;
}

int main() {
    int x, max;
    max =0;
    x=0;
    while (scanf("%d", &x) && x != 0)
    {
    int val = function(x);
    if (val>max)
	max = val; 
    }
    printf("%d\n", max);
    return 0;
}
