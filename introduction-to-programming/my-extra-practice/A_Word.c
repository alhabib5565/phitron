#include <stdio.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int upp_count = 0;
    int low_count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int ascii_code = str[i];
        if (97 <= ascii_code && ascii_code <= 122)
            low_count++;
        else
            upp_count++;
    }

    if (upp_count > low_count)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            int ascii_code = str[i];
            if (97 <= ascii_code && ascii_code <= 122)
                printf("%c", ascii_code - 32);
            else
                printf("%c", ascii_code);
        }
    }
    else
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            int ascii_code = str[i];
            if (97 <= ascii_code && ascii_code <= 122)
                printf("%c", ascii_code);
            else
                printf("%c", ascii_code + 32);
        }
    }

    return 0;
};