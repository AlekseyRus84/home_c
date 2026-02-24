#include <stdio.h>


int main() {
    char c;
    while( (c=getchar())!='.')
		if (c>='a' && c<='z')
			putchar(c-32);
		else
			putchar(c);
    return 0;
}
