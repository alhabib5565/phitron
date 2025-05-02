#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    char w[1000001];
    char h[1000001];
    for (int i = 1; i <= t; i++)
    {
        scanf("%s", &w);

        scanf("%s", &h);

        int wi = 0;
        for (int i = 0; w[i] != '\0'; i++)
        {
            wi = wi * 10 + w[i] - 48;
        }

        int he = 0;
        for (int i = 0; h[i] != '\0'; i++)
        {
            he = he * 10 + h[i] - 48;
        }
        if (he == wi)
            printf("Square\n");
        else
            printf("Rectangle\n");
    }

    return 0;
};