#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[7],swap;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if (arr[i] < arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
	printf("%d\n", arr[0]);
	for (int i = 1; i < 7; i++)
	{
		if (arr[0] == arr[i] && arr[0]==arr[i+1])
		{
			printf("%d\n", arr[i]);
		}
	}
	printf("%d", arr[1]);
	
	return 0;
}
