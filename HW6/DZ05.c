#include <stdio.h>
int sum(int x) 
{
	int res =0;
	while (x>=1)
	{
	res =res +x;
	x=x-1;
	}
	return res;
}

int main() {
    int x;
	scanf("%d", &x) ;
    printf("%d\n", sum(x));
    return 0;
}
