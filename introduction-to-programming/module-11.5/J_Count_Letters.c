#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];
    scanf("%s", &str);
    int str_len = strlen(str);

    int count[26] = {0};

    for (int i = 0; i < str_len; i++)
    {
        count[str[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            continue;

        printf("%c : %d\n", 97 + i, count[i]);
    }

    return 0;
};