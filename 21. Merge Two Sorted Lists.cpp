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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)return l2;
        if (!l2)return l1;
        if (!l1 && !l2)return l1;
        ListNode* head1, * head2, * head, * tmp;
        head1 = l1;
        head2 = l2;
        if (head1->val <= head2->val) {
            head = head1;
            tmp = head1;
            head1 = head1->next;
        }
        else
        {
            head = head2;
            tmp = head2;
            head2 = head2->next;
        }
        while (head1 && head2) {
            if (head1->val <= head2->val) {
                tmp->next = head1;
                tmp = head1;
                head1 = head1->next;
            }
            else
            {
                tmp->next = head2;
                tmp = head2;
                head2 = head2->next;
            }
        }
        if (head1 != nullptr) tmp->next = head1;
        if (head2 != nullptr) tmp->next = head2;
        return head;
    }
};


int main()
{

}