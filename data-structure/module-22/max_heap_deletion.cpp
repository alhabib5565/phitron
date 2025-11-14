#include <bits/stdc++.h>
using namespace std;

void heap_insert(vector<int> &v, int val)
{

    v.push_back(val);
    int curr_idx = v.size() - 1;

    while (curr_idx != 0)
    {
        int parent_idx = (curr_idx - 1) / 2;
        if (v[parent_idx] < v[curr_idx])
            swap(v[parent_idx], v[curr_idx]);
        else
            break;
        curr_idx = parent_idx;
    }
}
void print_heap(vector<int> v)
{
    for (int vl : v)
    {
        cout << vl << " ";
    }
    cout << endl;
}

void delete_from_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int crr_idx = 0;

    int left_val = INT_MIN, right_val = INT_MIN;
    while (true)
    {
        int left_idx = (crr_idx * 2) + 1;
        int right_idx = (crr_idx * 2) + 2;
        if (left_idx < v.size())
            left_val = v[left_idx];
        if (right_idx < v.size())
            right_val = v[right_idx];

        if (left_val > right_val && left_val > v[crr_idx])
        {
            swap(v[left_idx], v[crr_idx]);
            crr_idx = left_idx;
        }
        if (right_val > right_val && right_val > v[crr_idx])
        {
            swap(v[right_idx], v[crr_idx]);
            crr_idx = right_idx;
        }
        else
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        heap_insert(v, val);
    }

    print_heap(v);
    delete_from_heap(v);
    print_heap(v);
    return 0;
}