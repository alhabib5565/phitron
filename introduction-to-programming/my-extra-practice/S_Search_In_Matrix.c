#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, x;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);
    int isExist = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == arr[i][j])
            {
                isExist = 1;
                break;
            }
        }
    }
    if (isExist == 0)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
};