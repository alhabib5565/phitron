#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int number;
        scanf("%d", &number);
        unsigned long long int factorial = 1;
        for (int j = 1; j <= number; j++)
        {
            factorial *= j;
        }
        printf("%lld\n", factorial);
    }

    return 0;
};