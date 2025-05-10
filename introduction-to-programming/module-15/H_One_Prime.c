#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int isPrime = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("NO");
    }
    else
        printf("YES");

    return 0;
};