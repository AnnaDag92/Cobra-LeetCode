#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> vec1;
        vector<TreeNode*> vec2;
        TreeNode* tmp = root;
        while (tmp) {
            if (tmp == p) {
                vec1.push_back(tmp);
                break;
            }
            else if (tmp->val > p->val) {
                vec1.push_back(tmp);
                tmp = tmp->left;
            }
            else {
                vec1.push_back(tmp);
                tmp = tmp->right;
            }
        }
        tmp = root;
        while (tmp) {
            if (tmp == q) {
                vec2.push_back(tmp);
                break;
            }
            else if (tmp->val > q->val) {
                vec2.push_back(tmp);
                tmp = tmp->left;
            }
            else {
                vec2.push_back(tmp);
                tmp = tmp->right;
            }
        }
        TreeNode* anc;
        for (int i = 0; i < vec1.size() && i < vec2.size(); ++i) {
            if (vec1[i] == vec2[i]) anc = vec1[i];
        }
        return anc;
    }
};

int main()
{

}