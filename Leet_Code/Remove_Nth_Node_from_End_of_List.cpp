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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy = ListNode();
        dummy.next = head;
        
        ListNode* tmp1 = &dummy;
        ListNode* tmp2 = &dummy;
        
        for(int i = 0; i <= n; i++){
            tmp1 = tmp1->next;
        }
        while(tmp1){
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        tmp2->next = tmp2->next->next;
        return dummy.next;
        
    }
};