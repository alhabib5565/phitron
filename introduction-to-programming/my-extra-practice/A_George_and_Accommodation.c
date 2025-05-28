#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int already_live_in, capacity;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &already_live_in, &capacity);

        if (capacity - already_live_in >= 2)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
};