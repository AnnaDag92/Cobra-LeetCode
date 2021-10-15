#include <iostream>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> tmp;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) tmp.push_back(nums[i]);
            else ++count;
        }
        for (int i = 0; i < count; ++i) {
            tmp.push_back(0);
        }
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] = tmp[i];
        }
    }
};

int main()
{

}