#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (b[j] > b[k])
                {
                    int value_of_b_j = b[j];
                    b[j] = b[k];
                    b[k] = value_of_b_j;
                }
            }
        }

        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j] = abs(a[j] - b[j]);
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[j]);
        }

        printf("\n");
    }

    return 0;
};