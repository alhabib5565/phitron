#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int opinions_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &opinions_arr[i]);
    }
    int is_easy = 0;
    for (int i = 0; i < n; i++)
    {
        if (opinions_arr[i] == 1)
        {
            is_easy++;
            printf("HARD");
            break;
        }
    }
    if (is_easy == 0)
    {
        printf("EASY");
    }

    return 0;
};