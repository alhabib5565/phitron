#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b < c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
        printf(" %d", a);
    }
    else if (b >= a && b >= c)
    {
        if (a < c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
        printf(" %d", b);
    }
    else
    {
        if (b < a)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", a);
        }
        printf(" %d", c);
    }

    return 0;
};