#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
};

main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].marks;
    }

    Student min;
    min.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min.marks > arr[i].marks)
        {
            min.name = arr[i].name;
            min.marks = arr[i].marks;
        }
    }

    cout << min.name << " " << min.marks;

    return 0;
}