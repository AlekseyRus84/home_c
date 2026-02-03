


#include <stdio.h>

int main( )
{
	int a, sum;
	//double x;
	
	scanf ("%d", &a);
	
	//printf ("%d+%d+%d=%d\n",a, b, c, a+b+c);
	sum = (a/100) * ((a/10)% 10) * (a%10);
	printf ("%d\n", sum);
	return 0;
}
