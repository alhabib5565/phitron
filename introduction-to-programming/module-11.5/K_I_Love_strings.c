#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[51], t[51];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", &s, &t);

        int sl = strlen(s);
        int tl = strlen(t);

        if (sl == tl)
        {
            for (int i = 0; i < sl; i++)
            {
                printf("%c%c", s[i], t[i]);
            }
        }
        else if (sl < tl)
        {
            for (int i = 0; i < sl; i++)
            {
                printf("%c%c", s[i], t[i]);
            }
            for (int i = sl; i < tl; i++)
            {
                printf("%c", t[i]);
            }
        }
        else if (tl < sl)
        {
            for (int i = 0; i < tl; i++)
            {
                printf("%c%c", s[i], t[i]);
            }
            for (int i = tl; i < sl; i++)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }

    return 0;
};