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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        if (head->next == nullptr) return head;
        ListNode* cur = head;
        ListNode* next = head->next;
        while (cur->next) {
            if (cur->val == next->val) {
                cur->next = next->next;
                delete next;
                next = cur->next;
            }
            else {
                cur = cur->next;
                next = next->next;
            }
        }
        return head;
    }
};


int main()
{

}