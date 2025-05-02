#include <stdio.h>
int main()
{
    int num_count;
    scanf("%d", &num_count);
    int max = 0;

    int num_value;
    for (int i = 0; i <= num_count; i++)
    {
        scanf("%d", &num_value);

        if (num_value > max)
        {
            max = num_value;
        }
    }
    printf("%d", max);
    return 0;
};