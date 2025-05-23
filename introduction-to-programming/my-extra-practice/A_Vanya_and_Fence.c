#include <stdio.h>
int main()
{
    int p, h;
    scanf("%d %d", &p, &h);
    int P_H_Arr[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &P_H_Arr[i]);
    }

    int width = p;

    for (int i = 0; i < p; i++)
    {
        if (P_H_Arr[i] > h)
        {
            width++;
        }
    }

    printf("%d", width);

    return 0;
};