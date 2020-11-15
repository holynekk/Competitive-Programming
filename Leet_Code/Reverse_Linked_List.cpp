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
    ListNode* reverseList(ListNode* head) {
        ListNode * cur = head;
        ListNode * pre = nullptr;
        ListNode * nex = nullptr;
        while(cur){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }return pre;
        
        
    }
};