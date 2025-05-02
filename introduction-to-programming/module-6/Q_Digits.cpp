#include <stdio.h>
int main()
{

    int test_case_count;
    scanf("%d", &test_case_count);
    for (int i = 1; i <= test_case_count; i++)
    {
        int num;
        scanf("%d", &num);

        if (num == 0)
            printf("%d", 0);
        else
        {
            while (1 <= num)
            {
                int reminder = num % 10;
                num = num / 10;
                printf("%d ", reminder);
            }
        }
        printf("\n");
    }

    return 0;
};