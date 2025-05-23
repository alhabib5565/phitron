#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int even_total = 0, odd_total = 0;
    for (int i = 0; n > 0; i++)
    {
        int mod = n % 10;
        if (i % 2 == 0)
        {
            even_total += mod;
        }
        else
        {
            odd_total += mod;
        }

        n /= 10;
    }

    if ((odd_total - even_total) % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
};