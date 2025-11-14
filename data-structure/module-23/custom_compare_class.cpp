#include <bits/stdc++.h>
using namespace std;

class customComparison
{
public:
    bool operator()(string a, string b)
    {
        if (a.size() > b.size())
            return true;
        else if (a.size() == b.size())
            return a < b;
        else
            return false;
    }
};

int main()
{
    priority_queue<string, vector<string>, customComparison> pq;
    pq.push("banana");
    pq.push("kiwi");
    pq.push("apple");
    pq.push("mango");
    pq.push("watermelon");
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
