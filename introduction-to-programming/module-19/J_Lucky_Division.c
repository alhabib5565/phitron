#include <stdio.h>
// submit kora hoi nai
int main()
{
    int n;
    scanf("%d", &n);

    int original_n = n;
    int is_lucky = 0;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            is_lucky = 1;
            n /= 10;
        }
        else
        {
            is_lucky = 0;
            break;
        }
    }

    int lucky_numbers[14] = {
        4, 7,
        44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777};

    if (is_lucky == 0)
    {
        for (int i = 0; i < 14; i++)
        {
            if (original_n % lucky_numbers[i] == 0)
            {
                is_lucky = 1;
                break;
            }
            else
                is_lucky = 0;
        }
    }

    if (is_lucky == 1)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
};
