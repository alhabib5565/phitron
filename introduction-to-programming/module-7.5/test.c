#include <stdio.h>
int main()
{
    int arrSize;
    int arr[arrSize];
    int num;
    int indexOfNum = -1;

    scanf("%d", &arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d", arr[i]);
    }
}