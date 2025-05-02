#include <stdio.h>
int main()
{
    int arrSize;
    scanf("%d", &arrSize);
    int arr[arrSize];
    int num;

    int indexOfNum = -1;

    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    for (int i = 0; i < arrSize; i++)
    {

        if (arr[i] == num)
        {
            indexOfNum = i;
            break;
        }
    }

    printf("%d", indexOfNum);
}