#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 5)
    {
        printf("%d", 1);
    }
    else
    {

        int stepCount = (n / 5);

        int remaining = n % 5;

        if (remaining != 0)
        {
            stepCount += 1;
        }

        printf("%d", stepCount);
    }

    return 0;
};