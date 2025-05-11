#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int str_len = strlen(str);
    char reversed_str[str_len];
    for (int i = 0; i < str_len; i++)
    {
        reversed_str[i] = str[str_len - i - 1];
    }
    reversed_str[str_len] = '\0';
    return strcmp(str, reversed_str);
}

int main()
{
    int str[1001];
    scanf("%s", str);

    int result = is_palindrome(str);
    if (result == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
};