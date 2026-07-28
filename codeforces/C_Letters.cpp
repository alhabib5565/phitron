#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long rooms_prefix_sum[n + 1];
    rooms_prefix_sum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        long long elm;
        cin >> elm;

        rooms_prefix_sum[i] = rooms_prefix_sum[i - 1] + elm;
    }

    long long visited_rooms = 0;
    int current_dormitory = 1;
    for (int i = 0; i < m; i++)
    {
        long long room;
        cin >> room;

        while (rooms_prefix_sum[current_dormitory] < room)
        {
            visited_rooms = rooms_prefix_sum[current_dormitory];
            current_dormitory++;
        }

        cout << current_dormitory << " " << room - visited_rooms << '\n';
    }

    return 0;
}