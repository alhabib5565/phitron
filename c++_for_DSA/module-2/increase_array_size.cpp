#include <iostream>
int main()
{
    int *arr = new int[3];
    int b[4];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        b[i] = arr[i];
    }
    b[3] = 3;

    for (int i = 0; i < 4; i++)
    {
        std::cout << b[i] << '\n';
    }
    std ::cout << arr << '\n';
    delete[] arr;
    std ::cout << arr << '\n';

    return 0;
}