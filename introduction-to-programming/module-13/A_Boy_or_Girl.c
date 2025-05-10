#include <stdio.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int f_arr[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        int asci_code = str[i];
        f_arr[asci_code - 97]++;
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (f_arr[i] > 0)
        {
            flag++;
        }
    }
    if (flag % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
};