#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int row = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int row_t = 0;
        for (int j = 0; j < m; j++)
        {
            row_t += arr[i][j];
        }
        if (row_t > max)
        {
            max = row_t;
            row = i;
        }
    }
    printf("%d", row);
    return 0;
};