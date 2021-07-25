#include <stdio.h> 


int main(void)
{
	int n, cnt = 0;
	scanf("%d", &n);
	int number = n;
	int arr[1000] = { 0 };
	int sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (number % 10 == 0 && n%10==0)
		{
			
			arr[i] = -1;
			
		}
		else
		{
			arr[i] = number % 10;
			sum += arr[i];
			
		}
		if (number / 10 == 0)
		{
			cnt = i;
			break;
		}
		number = number / 10;
	}
	
	for (int i = 0; i <= cnt; i++)
	{
		if (arr[i] != -1)
		{
			printf("%d", arr[i]);
		}
		
	}
	printf("\n%d", sum);
	
}
