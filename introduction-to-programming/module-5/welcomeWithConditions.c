#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
        printf("YES");
    else
        printf("NO");

    return 0;
}