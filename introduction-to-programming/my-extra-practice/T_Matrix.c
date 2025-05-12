#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum_of_primary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        sum_of_primary_diagonal += arr[i][i];
    }

    int sum_of_secondary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        sum_of_secondary_diagonal += arr[i][(n - 1) - i];
    }

    int difference = abs(sum_of_primary_diagonal - sum_of_secondary_diagonal);
    printf("%d", difference);

    return 0;
};