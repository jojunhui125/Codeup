#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum = 0,min=99;
	int arr[7];
	

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1)
		{
			sum += arr[i];

			if (arr[i] < min)
			{
				min = arr[i];
			}

		}
		
	}
	if (sum == 0)
	{
		printf("%d\n%d", sum - 1, min);
	}
	else
	{
		printf("%d\n%d", sum, min);
	}

	

	return 0;
}
