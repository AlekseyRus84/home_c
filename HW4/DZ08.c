


#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c, max;
	scanf ("%d%d%d", &a, &b, &c);
	max = a>b?a:b;
	max= c>max?c:max;
	printf ("%d", max);
	return 0;
}

