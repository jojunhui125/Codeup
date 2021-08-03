# include <stdio.h> 

int main()
{
	int arr[4] = { 0 },sum=0;
	char a[3];

	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];

			if (sum == 0)
			{
				a[i] = 'D';
			}
			else if (sum == 1)
			{
				a[i] = 'C';
			}
			else if (sum == 2)
			{
				a[i] = 'B';
			}
			else if (sum == 3)
			{
				a[i] = 'A';
			}
			else if (sum == 4)
			{
				a[i] = 'E';
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%c\n", a[i]);
	}
	return;
}
