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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode * temp1 = &dummy, * temp2 = head;
        while(temp2) {
            if (temp2->val == val) {
                temp1->next = temp2->next;
                temp2 = temp2->next;
            } else {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return dummy.next;
    }
};