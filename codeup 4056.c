﻿#include <stdio.h>

int main(void)
{
	double n;
	scanf("%lf", &n);

	if (n <= 500)
	{
		printf("%.f", n * 0.7);
	}
	else if (n > 500 && n <= 1500)
	{
		printf("%d",(int)( 350 + (n -500) * 0.4));
	}
	else if (n > 1500 && n <= 4500)
	{
		printf("%d",(int) (750 + (n -1500) * 0.15));
	}
	else if (n > 4500 && n <= 10000)
	{
		printf("%d", (int)(1200 + (n - 4500) * 0.05));
	}
	else
	{
		printf("%d",(int)( 1475 + (n - 10000) * 0.02));
	}
}
