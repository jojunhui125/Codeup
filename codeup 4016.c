#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int cnt=0;
	for (int i = 1; i<=a && i<=b && i<=c; i++)
	{
		if (a % i == 0 && b % i == 0 && c % i == 0)
		{
			cnt = i;
		}
	}
	printf("%d", cnt);
	return 0;
}
