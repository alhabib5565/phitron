#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int freq[1001] = {0};
    int f[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }

    int count = 0;
    int a = 0, b = 0;
    int max = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int sum = f[i] + f[j];
            if (sum > max && sum <= k)
            {
                max = sum;
                a = f[i];
                b = f[j];
            }
            printf("%d=> %d %d =f %d\n", max, a, b, f[j]);
        }
        if (freq[a] == 0 && freq[b] == 0)
        {
            printf("%d %d", a, b);
            count++;
            freq[a] = 1, freq[b] = 1;
            a = 0;
            b = 0;
            max = 0;
        }
        printf("\n");
    }
    // printf("%d", count);
    return 0;
};