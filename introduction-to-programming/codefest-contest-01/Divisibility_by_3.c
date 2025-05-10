#include <stdio.h>
int main()
{
    int digits_count, number;
    scanf("%d %d", &digits_count, &number);

    int total = 0;
    // 123

    for (int i = 1; i <= digits_count; i++)
    {
        total += number % 10;
        number = number / 10;
    }

    if (total % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
};