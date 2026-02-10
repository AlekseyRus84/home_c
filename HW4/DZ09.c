#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,f,max;
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &f);
	max = a>b?a:b;
	max= c>max?c:max;
	max= d>max?d:max;
	max= f>max?f:max;
	printf ("%d", max);
	return 0;
}
