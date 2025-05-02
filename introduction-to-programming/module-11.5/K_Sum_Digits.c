#include <stdio.h>
int main()
{
    int n, number;
    scanf("%d %d", &n, &number);
    int sum = 0;

    for (; number != 0;)
    {
        sum += number % 10;
        number = number / 10;
    }
    printf("%d", sum);
    return 0;
};