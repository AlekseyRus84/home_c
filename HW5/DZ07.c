#include <stdio.h>

int main()
 {
    int a,b=0, sum = 0;
     
    scanf("%d", &a);
       
    while (a > 0)
    {
        b=sum;
        sum = a % 10;  
        a = a/10;
        if  (b==sum)
        {
			printf("YES");
			return 0;
		}       
	}
    printf("NO");
    
    return 0;
}
