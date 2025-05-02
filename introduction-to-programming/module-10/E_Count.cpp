#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];
    scanf("%s", &str);
    int count = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        count += str[i] - 48;
    }

    printf("%d", count);
}