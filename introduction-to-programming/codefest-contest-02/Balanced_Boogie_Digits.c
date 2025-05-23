#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    int already_found = 0;

    for (int i = l; i <= r; i++)
    {
        if (i < 10)
        {
            continue;
        }

        int number = i;
        int even_c = 0, odd_c = 0;

        while (number > 0)
        {
            if ((number % 10) % 2 == 0)
                even_c++;
            else
                odd_c++;

            number /= 10;
        }

        if (even_c == odd_c)
        {
            printf("%d\n", i);
            already_found = 1;
        }
    }

    if (!already_found)
        printf("-1\n");

    return 0;
}
