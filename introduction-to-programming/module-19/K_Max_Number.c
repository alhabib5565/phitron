#include <stdio.h>
// submit kora hoini
int find_max(int arr[], int n, int max)
{
    if (n < 0)
    {
        printf("%d", max);
        return;
    }

    if (arr[n] > max)
    {
        max = arr[n];
    }
    find_max(arr, n - 1, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    find_max(arr, n - 1, -2147483648);
    return 0;
};