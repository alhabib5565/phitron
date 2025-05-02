#include <stdio.h>
int main()
{
    char character;
    scanf("%c", &character);
    int char_ascii_code = character;
    if (char_ascii_code >= 65 && char_ascii_code <= 90)
    {
        char_ascii_code += 32;
        printf("%c", char_ascii_code);
    }
    else
    {
        char_ascii_code -= 32;
        printf("%c", char_ascii_code);
    }
    return 0;
};