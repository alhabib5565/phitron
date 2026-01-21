#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;
        cin >> num;

        int remaining = 0;
        vector<int> round_nums;
        while (true)
        {
            if (num >= 1 && num <= 9)
            {
                round_nums.push_back(num);
                break;
            }
            else if (num >= 10 && num <= 99)
            {
                remaining = num % 10;
                round_nums.push_back(num - remaining);
                num = remaining;
            }
            else if (num >= 100 && num <= 999)
            {
                remaining = num % 100;
                round_nums.push_back(num - remaining);
                num = remaining;
            }
            else if (num >= 1000 && num <= 9999)
            {
                remaining = num % 1000;
                round_nums.push_back(num - remaining);
                num = remaining;
            }
            else if (num >= 10000 && num <= 99999)
            {
                remaining = num % 10000;
                round_nums.push_back(num - remaining);
                num = remaining;
            }
            if (!remaining)
                break;
        }
        cout << round_nums.size() << endl;
        for (int x : round_nums)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}