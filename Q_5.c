#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
	{
		printf("a[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }

    printf("The largest element in the array is %d\n", max);

    return 0;
}