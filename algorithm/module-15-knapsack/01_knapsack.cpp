#include <bits/stdc++.h>
using namespace std;
int items[100];
int weight[100];

int knapsack(int item, int remaining_cap)
{
    if (item < 0 || remaining_cap == 0)
        return 0;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> items[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    return 0;
}