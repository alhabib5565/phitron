#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialization
    vector<int> v1;       // 0 size er array declear korbe
    vector<int> _V2(5);   // 5 size er array declear korbe
    vector<int> v3(5, 2); //  0 size er array declear korbe ebong protita element er value hobe 2
    vector<int> v4(v3);   // v3 er element gula v4 e copy korbe
    int arr[2] = {1, 3};
    vector<int> v5(arr, arr + 2);
    for (int i = 0; i < 2; i++)
    {
        cout << _V2[i];
    }

    return 0;
}