#include <iostream>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums.size() == 1 && nums[0] == 0) return 1;
        if (nums.size() == 1 && nums[0] == 1) return 0;
        sort(nums.begin(), nums.end());
        if (nums[0] != 0) return 0;
        int sum = (nums[nums.size() - 1] * (nums[nums.size() - 1] + 1)) / 2;
        int sum1 = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum1 += nums[i];
        }
        if ((sum - sum1) == 0) return nums[nums.size() - 1] + 1;
        return sum - sum1;
    }
};

int main()
{

}