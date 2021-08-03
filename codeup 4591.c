#include <stdio.h>
#include <stdlib.h>

struct class
{
	int score;
};

int main(void)
{
	struct class data[9];
	int result[9],swap;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &data[i].score);
		result[i] = data[i].score;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (result[i] < result[j])
			{
				swap = result[i];
				result[i] = result[j];
				result[j] = swap;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (result[0] == data[i].score)
		{

			printf("%d\n%d", result[0], i+1);
		}
	}

		
	return 0;
}
