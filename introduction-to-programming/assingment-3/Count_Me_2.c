#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    int count = 0;
    for (int j = 0; s[j] != '\0'; j++)
    {
        char c = s[j];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
};