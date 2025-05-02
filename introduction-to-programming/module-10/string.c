#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    int sz = strlen(str);
    printf("%s \n", str);
    int c = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        c += 1;
    }

    printf("%d", sz);

    return 0;
};