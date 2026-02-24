#include <stdio.h>
void rec(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		rec(n-1);
			}
	printf("%d",n);
}
int main(void)
{
	rec(3);
	return 0;
	
}
