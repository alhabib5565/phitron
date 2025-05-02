/*
1. take input 5*5 matrix
2. get the position of 1
3.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int one = matrix[i][j];
            if (one == 1)
            {
                int abs_i = abs(3 - (i + 1));
                int abs_j = abs(3 - (j + 1));

                printf("%d", abs_i + abs_j);
                break;
            }
        }
        printf("\n");
    }

    return 0;
};