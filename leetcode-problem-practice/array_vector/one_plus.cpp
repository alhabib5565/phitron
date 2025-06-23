#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits = {9, 9};
    int n = digits.size();
    int carry = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        int digit = digits[i];
        if (digit + carry > 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += carry;
            carry = 0;
            break;
        }
    }
    if (carry == 1)
    {
        digits.insert(digits.begin(), 1);
    }
    for (int d : digits)
    {
        cout << d;
    }

    return 0;
}