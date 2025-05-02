#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int l = strlen(b);

    // for (int i = 0; i <= l; i++)
    // {
    //     a[i] = b[i];
    // }
    strcpy(a, b);
    printf("%s\n", a);

    return 0;
};