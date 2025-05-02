#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = t - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
};