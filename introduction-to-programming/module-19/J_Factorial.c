#include <stdio.h>
void factorial(int n, long long int total)
{
    if (n == 1)
    {
        printf("%lld", total);
        return;
    }
    factorial(n - 1, total * n);
}
int main()
{
    int n;
    scanf("%d", &n);
    factorial(n, 1);
    return 0;
};