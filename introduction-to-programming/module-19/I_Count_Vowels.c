#include <stdio.h>
#include <string.h>
void print_vowel_count(char str[], int len, int index, int count)
{
    if (len == index)
    {
        printf("%d", count);
        return;
    }

    int c = str[index];
    if (c == 'A' || c == "E" || c == "I" || c == "O" || c == "U" || c == 'a' || c == 'e' || c == "i" || c == "o" || c == "u")
    {
        count++;
    }

    print_vowel_count(str, len, index + 1, count);
}
int main()
{
    char str[201];
    fgets(str, 201, stdin);

    int len = strlen(str);
    print_vowel_count(str, len, 0, 0);

    return 0;
};