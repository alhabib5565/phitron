#include <stdio.h>
int main()
{
    int t, a, b, x;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &x);
        int count = 0;
        /*
        110
        120
        130
        140
        150
        160
        170
        180
        190
        200*/
        for (int j = a + x; j <= b; j += x)
        {
            printf("%dj ", j);
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
};