#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        ListNode* tmp = head;
        vector<int> vec;
        while (tmp)
        {
            vec.push_back(tmp->val);
            tmp = tmp->next;
        }
        for (int i = 0, j = vec.size() - 1; i <= j; ++i, --j)
        {
            if (vec[i] == vec[j])continue;
            else return false;
        }
        return true;
    }
};

int main()
{

}