#include <stdio.h> 


int main(void)
{
	int n,m;
	scanf("%d %d", &n, &m);
	int a = (n + m) / 2;
	int b = (n - m) / 2;

	printf("%d\n%d", a, b);
	
}
