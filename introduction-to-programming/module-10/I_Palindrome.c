#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    char rs[1001];
    int l = strlen(s);
    for (int i = l - 1; i >= 0; i--)
    {
        rs[l - i - 1] = s[i];
    }
    int result;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == rs[i])
            result = 1;
        else
        {
            result = 0;
            break;
        }
    }
    if (result == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
};