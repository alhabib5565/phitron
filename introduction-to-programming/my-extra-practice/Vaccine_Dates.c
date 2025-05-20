#include <stdio.h>
int main()
{
    int t, d, l, r;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &d, &l, &r);

        if (l <= d && d <= r)
        {
            printf("Take second dose now\n");
        }
        else if (l < d && d > r)
        {
            printf("Too Late\n");
        }
        else if (l > d && d < r)
        {
            printf("Too Early\n");
        }
    }

    return 0;
};