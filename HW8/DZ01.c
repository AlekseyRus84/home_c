#include <stdio.h>



int main() 
{
    int n=5;
    float maxsred=0;
    int arr[n];
    for (int i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    //arr[i]=n;
    maxsred = maxsred+arr[i];
   //printf("%.3f\n", maxsred);
	}
	printf("%.3f", maxsred/n);
    return 0;
}
