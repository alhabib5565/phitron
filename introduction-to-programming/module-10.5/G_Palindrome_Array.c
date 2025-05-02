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

    int r = 0;
    for (int i = 0, j = t - 1; i < j; i++, j--)
    {
        if (arr[i] == arr[j])
            r = 1;
        else
        {
            r = 0;
            break;
        }
    }

    if (r == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
};