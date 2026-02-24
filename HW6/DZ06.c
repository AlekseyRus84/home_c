#include <stdio.h>
unsigned long long sum(int x) 
{
	unsigned long long res =1;
	int i = 1;
	while (i<x)
	{
	res =res*2;
	//printf("%lld\n", res );
	i++;
	
	}
	if (res<0)
	res=res*-1;
	return res;
}

int main() 
{
    int x;
	scanf("%d", &x) ;
	printf("%llu\n", sum(x));
    return 0;
}
