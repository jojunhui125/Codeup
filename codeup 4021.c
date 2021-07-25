#include <stdio.h> 


int main(void)
{
	int sum = 0;
	int n;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 1)
		{
			sum += n;
		}
		
	}
	if (sum == 0)
	{
		sum = -1;
		printf("%d",sum);
	}
	else
	{
		printf("%d", sum);
	}
	
}
