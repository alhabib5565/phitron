#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++)
    {
        int arrS;
        scanf("%d", &arrS);
        int arr[arrS];

        for (int i = 0; i < arrS; i++)
        {
            scanf("%d", &arr[i]);
        }

        int smallestPair = 1000000000;
        for (int i = 0; i < arrS - 1; i++)
        {
            for (int j = i + 1; j < arrS; j++)
            {
                if (arr[i] + arr[j] + j - i < smallestPair)
                    smallestPair = arr[i] + arr[j] + j - i;
            }
        }
        printf("%d\n", smallestPair);
    }
}
