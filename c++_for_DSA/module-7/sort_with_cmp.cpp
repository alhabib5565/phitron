#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
};

bool cmp(Student l, Student r)
{
    if (l.marks > r.marks)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].marks;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].marks << endl;
    }
    return 0;
}