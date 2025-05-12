#include <stdio.h>
void recursive(int number)
{
    // 125
    if (number < 10)
    {
        printf("%d ", number);
        return;
    }

    recursive(number / 10);
    printf("%d ", number % 10);
}

int main()
{
    int t, number;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &number);
        recursive(number);
        printf("\n");
    }

    return 0;
};