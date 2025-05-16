#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (m != n)
    {
        printf("NO");
        return 0;
    }
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int is_jadu_matrix = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i] != 1 || arr[i][m - i - 1] != 1)
        {
            is_jadu_matrix = 0;
            break;
        }
    };

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || m - j - 1 == i)
            {
                continue;
            }

            if (arr[i][j] != 0 || arr[i][m - j - 1] != 0)
            {
                is_jadu_matrix = 0;
                break;
            }
        }
    }

    if (is_jadu_matrix == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}