/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * start_node = new ListNode(0);
        ListNode * current = start_node;
        ListNode * p1 = l1, * p2 = l2;
        int c = 0;
        while(p1 || p2) {
            int sum = c + (p1 ? p1->val : 0) + (p2 ? p2->val : 0);
            c = sum/10;
            current->next = new ListNode(sum%10);
            current = current->next;
            if (p1) p1 = p1->next;
            if (p2) p2 = p2->next;
        }
        if (c) current->next = new ListNode(c);
        return start_node->next;
    }
};