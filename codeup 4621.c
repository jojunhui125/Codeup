# include <stdio.h> 

int main()
{
	int n, k;
	int arr[10000] = { 0 };
	scanf("%d %d", &n, &k);
	int p = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			arr[p] = i;
			p++;
		}
	}
	
	if (arr[k] == 0)
	{
		printf("0");
	}
	else
	{
		printf("%d", arr[k-1]);
	}
	return;
}
