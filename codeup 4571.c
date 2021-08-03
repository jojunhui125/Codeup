#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n;
	scanf("%d %d", &m, &n);
	int sum = 0,min=10001;

	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			if (j * j == i)
			{
				sum += i;
				if (i < min)
				{
					min = i;
				}
			}
		}
	}

	if (sum == 0)
	{
		printf("%d", sum-1);
	}
	else
	{
		printf("%d\n%d", sum,min);
	}
	
		
	return 0;
}
