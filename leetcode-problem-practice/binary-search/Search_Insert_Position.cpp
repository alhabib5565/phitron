#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    int left = 0;
    int right = nums.size() - 1;
    int index;

    if (target > nums[nums.size() - 1])
        return nums.size();
    else if (target < nums[0])
        return 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] < target)
        {
            if (target < nums[mid + 1])
            {
                index = mid + 1;
                break;
            }
            left = mid + 1;
        }
        else if (target < nums[mid])
        {
            if (nums[mid - 1] < target)
            {
                index = mid;
                break;
            }
            right = mid - 1;
        }
        else
        {
            index = mid;
            break;
        }
    }
    return index;
}