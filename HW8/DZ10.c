#include <stdio.h>



int main() 
{
    int n=12;
    int arr[n];
     for (int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i=8;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	for (int i=0;i<8;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
