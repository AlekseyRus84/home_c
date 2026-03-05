#include <stdio.h>



int main() 
{
    int n=10;
    int max=0;
    int arr[n];
    for (int i=0;i<n;i++)
		{
		scanf("%d", &arr[i]);
		if (arr[i]>0)
		max =max +arr[i];
	}
	
	printf("%d", max);
    return 0;
}
