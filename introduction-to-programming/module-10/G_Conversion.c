#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '\,')
            printf(" ");
        else
        {
            if ('a' <= s[i] && s[i] <= 'z')
                printf("%c", s[i] - 32);
            else
                printf("%c", s[i] + 32);
        }
    }

    return 0;
};