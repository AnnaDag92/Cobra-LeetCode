#include <iostream>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 0;
        int b = 1;
        if (nums.size() == 0) return 0;
        while (a < nums.size() && b < nums.size())
            (nums[a] != nums[b]) ? nums[++a] = nums[b++] : b++;
        return a + 1;
    }
};


int main()
{

}