#include <stdio.h>



int main() 
{
    int n=5;
    int min=100;
    int arr[n];
    for (int i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    //arr[i]=n;
    min= (min<arr[i])? min : arr[i];
   //printf("%.3f\n", maxsred);
	}
	printf("%d", min);
    return 0;
}
