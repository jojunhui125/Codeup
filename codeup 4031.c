#include <stdio.h> 


int main(void)
{
	int n;
	int odd = 0, even = 0;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			if (odd < n)
			{
				odd = n;
			}
		}
		else
		{
			if (even < n)
			{
				even = n;
			}
		}
	}

	printf("%d", odd + even);
	
}
