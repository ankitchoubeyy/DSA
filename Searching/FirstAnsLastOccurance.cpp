#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // break it into two parts
    // 1. first occureace and 2. for last occurace
    vector<int> nums = {1, 3, 6, 3, 3, 3};
    int first = -1, last = -1, mid, target = 3;
    int start = 0, end = nums.size() - 1;

    // first occurace
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    // last occurace
    start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    vector<int> a(2);
    a[0] = first;
    a[1] = last;
    return 0;
}