#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    int capacity = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        int current_p = temp - a + b;
        if (current_p > capacity)
        {
            capacity = current_p;
        }

        temp = current_p;
    }
    printf("%d", capacity);
    return 0;
};