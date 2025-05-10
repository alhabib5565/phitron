#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int year_count = 0;
    while (b >= a)
    {
        a *= 3;
        b *= 2;
        year_count++;
    }
    printf("%d", year_count);
    return 0;
};