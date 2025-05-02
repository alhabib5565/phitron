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

    int index;
    scanf("%d", &index);

    for (int i = index; i < arrS - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < arrS - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}