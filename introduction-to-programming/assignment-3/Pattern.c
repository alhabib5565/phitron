#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n * 2 - 1; i++)
    {
        int abs_i = abs(n - i);

        for (int j = 1; j <= abs_i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (n - abs_i) * 2 - 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
};