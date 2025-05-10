#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
};