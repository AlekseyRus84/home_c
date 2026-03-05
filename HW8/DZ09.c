#include <stdio.h>



int main() 
{
    int n=10;
    int arr[n];
     for (int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		//if (arr[i]>0)
		//max =max +arr[i];
	}
	printf("%d ", arr[n-1]);
	for (int i=0;i<n-1;i++)
	{
		printf("%d ", arr[i]);
	//	j=j-1;
	}
	return 0;
}
