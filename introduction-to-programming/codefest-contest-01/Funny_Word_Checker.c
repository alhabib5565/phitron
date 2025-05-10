#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int lnt = strlen(s);

    char new_s[101];
    for (int i = 0; i < lnt; i++)
    {
        if (i == 0)
        {
            new_s[i] = s[lnt - 1];
        }
        else if (i == lnt - 1)
        {
            new_s[lnt - 1] = s[0];
        }
        else
        {
            new_s[i] = s[i];
        }
    }
    new_s[lnt] = '\0';
    int result = strcmp(s, new_s);
    if (result == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
};