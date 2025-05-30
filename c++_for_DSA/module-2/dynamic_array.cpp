#include <iostream>
int main()
{
    int arr[5];
    std::cout << arr << '\n';
    int *ar = new int[5];
    std::cout << ar << '\n';

    for (int i = 0; i < 5; i++)
    {
        std::cin >> ar[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << ar[i];
    }
}