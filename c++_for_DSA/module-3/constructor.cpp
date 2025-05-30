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
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    Student habib(1, 2, 3);
    // habib.roll = 10;
    // habib.cls = 12;
    // habib.gpa = 4;

    cout << habib.roll << ' ' << habib.cls << ' ' << habib.gpa;

    return 0;
}