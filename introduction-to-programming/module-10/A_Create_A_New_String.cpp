#include <stdio.h>
#include <string.h>
// eita niye conseceptual sesion e jete hobe
int main()
{
    char str1[101];
    scanf("%s", &str1);
    char str2[101];
    scanf("%s", &str2);

    int str1l = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1l++;
    }
    int str2l = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str2l++;
    }
    printf("%d %d\n", str1l, str2l);

    printf("%s %s", str1, str2);
}