#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int f_digit = num / 1000;

    if (f_digit % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
};