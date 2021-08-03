#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[100][2] = { 0 };
    int sum[100][100] = { 0 };
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                sum[arr[i][0]][arr[i][1]]=1;
                arr[i][0]++;
            }
            arr[i][1]++;
            arr[i][0] -= 10;
              
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (sum[i][j] == 1)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
