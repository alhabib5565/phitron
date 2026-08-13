#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int almost_prime = 0;

    for (int k = 6; k <= n; k++)
    {
        int cnt = 0; // prime count
        int num = k;
        for (int i = 2; i * i <= num; i++)
        {
            int pwr = 0;
            while (num % i == 0)
            {
                pwr++;
                num /= i;
            }
            if (pwr > 0)
                cnt++;
        }
        if (num > 1)
            cnt++;

        if (cnt == 2)
            almost_prime++;
    }
    cout << almost_prime;
    return 0;
}