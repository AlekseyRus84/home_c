
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,chislo,max;
	scanf ("%d%", &chislo);
	a=chislo/100;
	b=(chislo%100)/10;
	c= (chislo%100)%10;
	max = a>b?a:b;
	max= c>max?c:max;
	printf ("%d", max);
	return 0;
}
