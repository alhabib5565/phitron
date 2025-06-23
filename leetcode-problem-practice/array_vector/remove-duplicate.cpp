#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int size = nums.size();
    int i = 0;

    while (i < nums.size() - 1)
    {
        if (nums[i] == nums[i + 1])
        {
            nums.erase(nums.begin() + i);
            continue;
        }
        i++;
    }

    return nums.size();
}