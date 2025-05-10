/*
4, 2, 3, 1
2, 4, 3, 1 => i0, j1
2, 4, 3, 1 => i0, j2
1, 4, 3, 2 => i0, j3
1, 3, 4, 2 => i1, j2
1, 2, 4, 3 => i1, j3
1, 2, 3, 4 => i3, j4
2, 3
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number_arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (number_arr[i] < number_arr[j])
            {
                int num_of_i = number_arr[i];
                number_arr[i] = number_arr[j];
                number_arr[j] = num_of_i;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", number_arr[i]);
    }
    return 0;
};