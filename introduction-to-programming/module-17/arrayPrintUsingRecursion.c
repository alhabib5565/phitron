#include <stdio.h>

void print_arr(int arr[], int i, int n)
{
    if (i == n)
        return;

    printf("%d\n", *(arr + i));
    print_arr(arr, i + 1, n);
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

    print_arr(arr, 0, n);
    return 0;
};