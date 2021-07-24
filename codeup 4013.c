#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, twonumber, i = 0;
	scanf("%d", &n);
	twonumber = n;
	int two[20] = { 0 };

	while (twonumber > 0)
	{
		two[i] = twonumber % 2;
		twonumber = twonumber / 2;
		i++;
	}
	printf("2 ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", two[j]);
	}
	printf("\n");

	printf("8 %o\n", n);
	printf("16 %X\n", n);

	return 0;
}
