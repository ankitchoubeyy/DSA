#include <iostream>
#include <vector>

using namespace std;

// search insert position
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        int start = 0, end = nums.size() - 1, index = nums.size();

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                index = mid;
                break;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                index = mid;
                end = mid - 1;
            }
        }
        return index;
    }
};

int main()
{

    return 0;
}