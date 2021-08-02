#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum = 0,max=0,swap;
	int arr[10];
	int result[1000] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		result[arr[i]]++;
	}

	for (int i = 0; i < 1000; i++)
	{
		if (result[i] > max)
		{
			max = result[i];
			swap = i;
		}
	}
	printf("%d\n%d", sum / 10, swap);
	return 0;
}
