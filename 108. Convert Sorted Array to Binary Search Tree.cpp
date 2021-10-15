#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* helper(std::vector<int>& nums, int left, int right) {
        int mid;
        if (left > right) return nullptr;
        TreeNode* newNode;
        if (left == right) {
            newNode = new TreeNode(nums[left]);
        }
        else {
            mid = left + (right - left) / 2;
            newNode = new TreeNode(nums[mid]);
            newNode->left = helper(nums, left, mid - 1);
            newNode->right = helper(nums, mid + 1, right);
        }
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        return helper(nums, left, right);
    }
};

int main()
{

}