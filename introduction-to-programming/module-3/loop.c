#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i < num; ++i)
    {
        if (i == 2)
        {
            /* code */
            printf("%d break loop\n", i);
            break;
        };

        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }
        else
        {
            printf("%d is odd number\n", i);
        }
    };
}