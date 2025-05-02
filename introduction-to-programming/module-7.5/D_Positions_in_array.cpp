#include <stdio.h>
int main()
{
    int arrS;
    scanf("%d", &arrS);

    int val;
    for (int i = 0; i < arrS; i++)
    {
        scanf("%d", &val);

        if (val <= 10)
            printf("A[%d] = %d\n", i, val);
    }
}