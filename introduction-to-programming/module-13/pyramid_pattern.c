#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n * 2) - 1; j++)
        {
            if ((n - i) < j && n + i > j)
            {
                printf("*");
            }
            else if (n + i == j)
            {
                break;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
};