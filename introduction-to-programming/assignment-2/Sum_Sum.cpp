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
    int neg_sum = 0;
    int pos_sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < 0)
            neg_sum += arr[i];
        else
            pos_sum += arr[i];
    }
    printf("%d %d", pos_sum, neg_sum);
}