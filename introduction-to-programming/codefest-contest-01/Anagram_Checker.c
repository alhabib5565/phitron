#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101];
    char s2[101];
    scanf("%s %s", s1, s2);
    int result;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                result = 1;
                break;
            }
            else
            {
                result = 0;
            }
        }
        if (result == 0)
        {
            break;
        }
    }

    if (result == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
};