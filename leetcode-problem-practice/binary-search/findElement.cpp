#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        {230, 300, 340, 600}};
    int target = 16;

    int m = matrix.size();
    int n = matrix[0].size();
    int m_left = 0;
    int m_right = m;
    bool flag = false;

    while (m_left <= m_right)
    {
        if (flag)
            break;
        int m_mid = (m_left + m_right) / 2;
        int lastElmentOfARow = matrix[m_mid][n - 1];
        int firstElmentOfARow = matrix[m_mid][0];

        int n_left = 0;
        int n_right = n;

        if (target == lastElmentOfARow || target == firstElmentOfARow)
        {
            flag = true;
            break;
        }
        else if (target < lastElmentOfARow)
        {
            while (n_left <= n_right)
            {
                int n_mid = (n_left + n_right) / 2;
                if (target < matrix[m_mid][n_mid])
                {
                    n_right = n_mid - 1;
                }
                else if (matrix[m_mid][n_mid] < target)
                {
                    n_left = n_mid + 1;
                }
                else
                {
                    flag = true;
                    break;
                }
            }

            m_right = m_mid - 1;
        }
        else
        {
            m_left = m_mid + 1;
        }
    }
    cout << flag;
    return 0;
}