#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    char t[101];
    scanf("%s %s", s, t);

    int s_len = strlen(s);
    int t_len = strlen(t);

    if (s_len != t_len)
    {
        printf("NO");
        return 0;
    }
    int isOk = 1;
    for (int i = 0; i < t_len; i++)
    {
        if (s[i] != t[t_len - i - 1])
        {
            isOk = 0;
            break;
        }
    }

    if (isOk == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
};