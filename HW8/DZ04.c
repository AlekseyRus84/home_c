#include <stdio.h>



int main() 
{
    int n=10;
    int max=-2000;
    int max1=-2000;
    int nommax;
    int arr[n];
    for (int i=0;i<n;i++)
		{
		scanf("%d", &arr[i]);
		if (max<arr[i])
		{
			max =arr[i];
			nommax = i;
		}	
	}
	for (int i=0;i<n;i++)
		{
		if (nommax != i)
			{
			if (max1<arr[i])
				max1 =arr[i];
			}		
	}
	printf("%d", max+max1);
    return 0;
}
