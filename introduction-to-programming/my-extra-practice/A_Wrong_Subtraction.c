#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        int last_digit = n % 10;
        if (last_digit == 0)
        {
            n = n / 10;
        }
        else
            n--;
    }

    printf("%d", n);

    return 0;
};