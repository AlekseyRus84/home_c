#include <stdio.h>



int main() 
{
    int n=12;
    int arr[n];
    int j=3;
    int k=7;
    int l=11;
    for (int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		//if (arr[i]>0)
		//max =max +arr[i];
	}
	for (int i=0;i<4;i++)
	{
		printf("%d ", arr[j]);
		j=j-1;
	}
	for (int i=4;i<8;i++)
	{
		printf("%d ", arr[k]);
		k=k-1;
	}
	for (int i=8;i<12;i++)
	{
		printf("%d ", arr[l]);
		l=l-1;
	}
	return 0;
}
