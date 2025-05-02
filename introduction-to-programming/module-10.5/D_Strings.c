#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int al = strlen(a);
    int bl = strlen(b);

    printf("%d %d\n", al, bl);

    for (int i = 0; i <= bl; i++)
    {
        a[al + i] = b[i];
    }

    printf("%s\n", a);

    char a0 = a[0];
    a[0] = b[0];
    for (int i = 0; i < al; i++)
    {
        printf("%c", a[i]);
    }
    printf(" ");
    b[0] = a0;
    for (int i = 0; i < bl; i++)
    {
        printf("%c", b[i]);
    }

    return 0;
};