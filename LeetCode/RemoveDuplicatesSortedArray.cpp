#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();

        // we can solve this  by using 2 pointer approach
        if (n <= 1)
            return n;

        int j = 0; // this is
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] != nums[i + 1])
                nums[j++] = nums[i];
        }

        nums[j++] = nums[n - 1];
        return j;
    }
};