#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode* prev = head;
    ListNode* cur = nullptr;
    ListNode* next = nullptr;
    ListNode* tmp = head;
    head = head->next;
    while (prev != nullptr && prev->next != nullptr) {
        cur = prev->next;
        next = cur->next;
        prev->next = next;
        cur->next = prev;
        if (head != cur)
            tmp->next = cur;
        tmp = prev;
        prev = next;
    }
    return head;
}

int main() { }