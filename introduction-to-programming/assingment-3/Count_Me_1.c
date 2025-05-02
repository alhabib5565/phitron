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

    int devidedBy2 = 0, devidedBy3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            devidedBy2++;
        else if (arr[i] % 3 == 0)
            devidedBy3++;
        }
    printf("%d %d", devidedBy2, devidedBy3);
    return 0;
};