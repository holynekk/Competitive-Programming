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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        
        int list_length = 1;
        ListNode *new_head, *tail;
        new_head = tail = head;
        
        while(tail->next) {
            tail = tail->next;
            list_length++;
        }
        
        tail->next = head;
        
        if (k %= list_length) {
            for(int i = 0; i < list_length - k; i++) tail = tail->next;
        }
        
        new_head = tail->next;
        tail->next = nullptr;
        return new_head;
        
    }
};

