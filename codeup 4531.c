#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum = 0,swap;
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}

	printf("%d\n%d", sum / 5, arr[2]);
}
