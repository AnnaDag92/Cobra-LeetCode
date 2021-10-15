#include <iostream>

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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return root;
        TreeNode* tmp = root;
        TreeNode* temp = tmp->left;
        tmp->left = tmp->right;
        tmp->right = temp;
        if (tmp->left) tmp->left = invertTree(tmp->left);
        if (tmp->right) tmp->right = invertTree(tmp->right);
        return root;
    }
};

int main()
{

}