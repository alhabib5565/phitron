#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", &s);
    int str_len = strlen(s);

    int count[26] = {0};

    for (int i = 0; i < str_len; i++)
    {
        count[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            continue;
        printf("%c - %d\n", 97 + i, count[i]);
    }

    return 0;
};