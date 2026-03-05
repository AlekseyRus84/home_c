#include <stdio.h>



int main() 
{
    int n=10;
    int min=2000;
    int max=-2000;
    int nommin,nommax;
    int arr[n];
    for (int i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    //arr[i]=n;
    if (min>arr[i])
    {
    min =arr[i];
	nommin = i+1;
	}
	if (max<arr[i])
    {
    max =arr[i];
	nommax = i+1;
	}	
   	}
	printf("%d %d %d %d", nommax, max, nommin, min);
    return 0;
}
