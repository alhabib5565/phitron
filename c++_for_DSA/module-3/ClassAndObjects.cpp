#include <bits/stdc++.h>
class Car
{
public:
    char name[100];
    int publis_y;
};
int main()
{
    Car c;
    Car d;
    std::cin.getline(c.name, 100);
    std ::cin >> c.publis_y;
    std::cin.ignore();
    std::cin.getline(d.name, 100);
    std ::cin >> d.publis_y;

    std::cout << c.name << " " << c.publis_y << '\n';
    std::cout << d.name << " " << d.publis_y;
}