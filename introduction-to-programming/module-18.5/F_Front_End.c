#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int loop_count = n / 2;
    if (n % 2 == 0)
    {
        loop_count -= 1;
    }

    for (int i = 0; i <= loop_count; i++)
    {
        printf("%d ", arr[i]);
        if (n % 2 == 0)
        {
            printf("%d ", arr[(n - 1) - i]);
        }

        else if (i < loop_count)
        {
            printf("%d ", arr[(n - 1) - i]);
        }
    }

    return 0;
};