#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char s[10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int capital_alphabets = 0;
        int small_alphabets = 0;
        int digits = 0;
        for (int j = 0; s[j] != '\0'; j++)
        {
            char c = s[j];
            if (c >= 'a' && c <= 'z')
            {
                small_alphabets++;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                capital_alphabets++;
            }
            else if (c >= '0' && c <= '9')
            {
                digits++;
            }
        }
        printf("%d %d %d\n", capital_alphabets, small_alphabets, digits);
    }

    return 0;
};