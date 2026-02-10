#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,f,min,max;
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &f);
	min = a<b?a:b;
	min= c<min?c:min;
	min= d<min?d:min;
	min= f<min?f:min;
	max = a>b?a:b;
	max= c>max?c:max;
	max= d>max?d:max;
	max= f>max?f:max;
	printf ("%d", max+min);
	return 0;
}
