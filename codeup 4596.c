# include <stdio.h> 

int main()
{
	int arr[9][9],min=0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int row, col;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] > min)
			{
				min = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("%d\n%d %d", min, row + 1, col + 1);
	return;
}
