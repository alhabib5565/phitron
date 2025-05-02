#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int ascii_code = ch;
    if (ascii_code >= 48 && ascii_code <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (ascii_code >= 65 && ascii_code <= 90)
            printf("IS CAPITAL");
        else
            printf("IS SMALL");
    }

    return 0;
};