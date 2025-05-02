#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char statement[4];
    int r = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &statement);
        if (strcmp(statement, "++X") == 0 || strcmp(statement, "X++") == 0)
        {
            r++;
        }
        else if (strcmp(statement, "--X") == 0 || strcmp(statement, "X--") == 0)
        {
            r--;
        }
    }
    printf("%d", r);
    return 0;
};