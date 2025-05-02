#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int num;
    long long int sum = 0;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &num);

        sum += num;
    }

    if (sum < 0)
        sum = sum * (-1);

    printf("%lld", sum);
}