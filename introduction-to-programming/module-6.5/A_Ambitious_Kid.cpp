#include <stdio.h>
int main()
{

    int arrSize;
    scanf("%d", &arrSize);

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minimumCount = 0;
    int minDifferenceTo0 = 100000;
    for (int i = 0; i < arrSize; i++)
    {
        int element = arr[i];

        if (element == 0)
        {
            minDifferenceTo0 = 0;
            break;
        }
        else if (
            element < 0 && element * -1 < minDifferenceTo0)
            minDifferenceTo0 = element * (-1);
        else if (element > 0 && minDifferenceTo0 > element)
            minDifferenceTo0 = element;
    }
    printf("%d", minDifferenceTo0);
    return 0;
}