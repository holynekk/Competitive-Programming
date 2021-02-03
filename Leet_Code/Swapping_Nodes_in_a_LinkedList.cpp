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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * n1 = head, * n2 = head, * p = head;
        while(--k){
            p = p->next;
            n1 = n1->next;
        }
        p = p->next;
        while(p){
            n2 = n2->next;
            p = p->next;
        }
        swap(n1->val, n2->val);
        return head;
    }
};