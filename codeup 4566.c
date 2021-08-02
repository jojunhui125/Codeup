#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n;
	scanf("%d %d", &m, &n);
	int sum = 0,min=100001;
	
	for (int i = m; i <= n; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}
		if (cnt == 2)
		{
			sum += i;
			if (i < min)
			{
				min = i;
			}
		}
	}

	printf("%d\n%d", sum, min);
	return 0;
}
