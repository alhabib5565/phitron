#include <stdio.h>
int main()
{
    int num_count;
    scanf("%d", &num_count);
    int even = 0, odd = 0, pos = 0, neg = 0;
    int num_value;

    for (int i = 1; i <= num_count; i++)
    {
        scanf("%d", &num_value);
        if (num_value % 2 == 0)
            even += 1;
        else
            odd++;

        if (num_value < 0)
            neg++;
        else if (num_value != 0)
            pos++;
    };
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
};