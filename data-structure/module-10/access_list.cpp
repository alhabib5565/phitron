#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> cars = {"BMW", "Volvo", "Ford"};

    // change the value of the first or the last element with the .front() and .back() functions
    cars.front() = "Mazda";
    cars.back() = "test";

    // access first or the last element with the .front() and .back() functions
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    return 0;
}