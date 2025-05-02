#include <stdio.h>
int main()
{
    int arrS;
    scanf("%d", &arrS);
    int arr[arrS];
    for (int i = 0; i < arrS; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= arrS / 2; i++)
    {
        int tem = arr[i];
        arr[i] = arr[arrS - i - 1];
        arr[arrS - i - 1] = tem;
    }
    for (int i = 0; i < arrS; i++)
    {
        printf("%d ", arr[i]);
    }
}