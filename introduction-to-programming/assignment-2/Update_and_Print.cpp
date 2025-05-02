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

    int x, v;
    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
        if (n - i - 1 == x)
            printf("%d ", v);
        else
            printf("%d ", arr[n - 1 - i]);
    }
}