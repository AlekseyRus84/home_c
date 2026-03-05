#include <stdio.h>



int main() 
{
    int n=10;
    int arr[n];
    int j=4;
    int k=9;
    for (int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		//if (arr[i]>0)
		//max =max +arr[i];
	}
	for (int i=0;i<5;i++)
	{
		printf("%d ", arr[j]);
		j=j-1;
	}
	for (int i=5;i<10;i++)
	{
		printf("%d ", arr[k]);
		k=k-1;
	}
	return 0;
}
