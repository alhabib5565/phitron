#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    arr[10] = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%dssssss", arr[i]);
    }

    return 0;
};