#include <stdio.h>
int main()
{
    int r, c, x;
    scanf("%d %d %d", &r, &c, &x);
    int arr[2][4];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = x; i == x; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
};