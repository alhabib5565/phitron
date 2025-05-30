#include <iostream>
int *fun()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i];
    }
    std ::cout << '\n';
    return arr;
}
int main()
{
    int *arr = fun();
    std ::cout << arr << '\n';
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i];
    }
}