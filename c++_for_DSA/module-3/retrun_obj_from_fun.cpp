#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    int gpa;

    Student(int r, int c, int g)
    {
        this->roll = r;
        this->cls = c;
        this->gpa = g;
    }
};
Student fun()
{
    Student habib(1, 223, 33);
    return habib;
}
int main()
{
    Student habib = fun();

    cout << habib.roll << ' ' << habib.cls << ' ' << habib.gpa;

    return 0;
}