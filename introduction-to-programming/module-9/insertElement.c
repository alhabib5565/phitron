#include <stdio.h>
int main()
{
    int arrS;
    scanf("%d", &arrS);
    int arr[arrS + 1];
    for (int i = 0; i < arrS; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index, val;
    scanf("%d %d", &index, &val);

    for (int i = arrS; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = val;
    for (int i = 0; i <= arrS; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
};