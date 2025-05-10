#include <stdio.h>
int main()
{
    char s[78];
    scanf("%s", &s);

    int c[26] = {0};

    for (int i = 0; i < 77; i++)
    {
        int asci_code = s[i];

        c[asci_code - 97] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (c[i] == 2)
        {
            printf("%c", 97 + i);
            break;
        }
    }

    return 0;
};