#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    char year[5];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", year);
        int number_year = 0;
        for (int j = 0; j < 4; j++)
        {
            int num_asci = year[j];
            int digit = num_asci - 48;
            if (j == 0)
            {
                number_year += 1000 * digit;
            }
            if (j == 1)
            {
                number_year += 100 * digit;
            }
            if (j == 2)
            {
                number_year += 10 * digit;
            }
            if (j == 3)
            {
                number_year += digit;
            }
        }
        double root = sqrt(number_year);
        int int_root = (int)root;

        if (int_root * int_root == number_year)
        {
            if (int_root > 1)
            {
                printf("%d %d", 1, int_root - 1);
            }
            else
            {
                printf("%d %d", 0, 1);
            }
        }
        else
        {
            printf("%d", -1);
        }

        printf("\n");
    }

    return 0;
};