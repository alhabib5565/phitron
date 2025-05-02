#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c;
    int solveCount = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (1 < a + b + c)
        {
            solveCount++;
        }
    }
    printf("%d", solveCount);
    return 0;
}