#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    };

    void printName(int a)
    {
        cout << this->name << name << a;
    }
};

int main()
{
    Student habib("habib", 23);
    habib.printName(23);
    return 0;
}