#include <iostream>
int *p;
void fun()
{
    int y = 10;
    p = &y;
    std::cout << "fun=>" << y;
}

int main()
{
    int *x = new int;
    *x = 10;
    fun();
    std::cout << "main=>" << *p;

    return 0;
}