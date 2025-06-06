#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total;
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student s1;
        cin >> s1.id >> s1.name >> s1.section >> s1.total;
        Student s2;
        cin >> s2.id >> s2.name >> s2.section >> s2.total;
        Student s3;
        cin >> s3.id >> s3.name >> s3.section >> s3.total;
        if (s1.total >= s2.total && s1.total >= s3.total && s1.id < s2.id && s1.id < s3.id)
        {
            cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.total;
        }
        else if (s2.total >= s1.total && s2.total >= s3.total && s2.id < s3.id)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.total;
        }
        else
        {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.total;
        }
        cout << '\n';
    }

    return 0;
}