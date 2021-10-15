#include <iostream>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target < nums[0]) return 0;
        int index;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) return i;
            if (nums[i] < target) index = i + 1;
        }
        return index;
    }
};


int main()
{

}