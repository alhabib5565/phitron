#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int sc_arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sc_arr[i]);
    }

    int k_th_score = sc_arr[k - 1];
    int next_round_p_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (k_th_score <= sc_arr[i] && sc_arr[i] > 0)
        {
            next_round_p_count++;
        }
        else
            break;
    }

    printf("%d", next_round_p_count);

    return 0;
};