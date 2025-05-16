#include <stdio.h>
int main()
{
    int t, a, b, c;
    unsigned long long int m;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%llu", &m);
        scanf("%d %d %d", &a, &b, &c);
        if (m == 0)
        {
            printf("%d", 0);
            continue;
        }

        long long int missing_num = m / (a * b * c);
        long long int total = missing_num * a * b * c;

        if (missing_num > 0 && total == m)
        {
            printf("%lld", missing_num);
        }
        else
        {
            printf("%d", -1);
        }
        printf("\n");
    }

    return 0;
};