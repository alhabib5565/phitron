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
        // constructor er vitor this ta pailam karon jokhon object create kortechi tokhon autometically Sutudent constructor ta call hocche ebong hidden perameter hisabe object er memory address ta pathai dicche. amar darona ki thik?
        cout << this << "=>" << this->cls << '\n'; // this.cls == garbage value karon akhon cls er man set kora hoinai
        this->roll = r;
        this->cls = c;
        this->gpa = g;
    }
};
int main()
{
    Student habib(1, 2, 3);
    cout << &habib << "habib\n";
    Student fahim(10, 20, 333);

    cout << habib.roll << ' ' << habib.cls << ' ' << habib.gpa;

    return 0;
}