#include <stdio.h>



int main() 
{
    int n=12;
    float max=0;
    int arr[n];
    for (int i=0;i<n;i++)
		{
		scanf("%d", &arr[i]);
		//if (arr[i]>0)
		max =max +arr[i];
	}
	
	printf("%.2f", max/n);
    return 0;
}
