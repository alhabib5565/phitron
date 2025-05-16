#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int piramid_row_count = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            piramid_row_count++;
        }
    }

    for (int i = 1; i <= piramid_row_count; i++)
    {
        for (int j = 0; j < piramid_row_count - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (i * 2) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("     ");
        for (int l = 0; l < n; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
};