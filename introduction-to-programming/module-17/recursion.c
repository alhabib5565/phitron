#include <stdio.h>

void print_n_to_one(int n)
{

    if (n < 1)
        return;
    printf("%d\n", n);
    print_one_to_n(n - 1);
    printf("when out from call stack %d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_n_to_one(n);
    return 0;
};