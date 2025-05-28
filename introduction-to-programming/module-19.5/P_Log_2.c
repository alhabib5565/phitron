#include <stdio.h>
void log2fn(long long int n, int count)
{
    if (n <= 1)
    {
        printf("%d", count);
        return;
    }
    log2fn(n / 2, count + 1);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    log2fn(n, 0);
    return 0;
};