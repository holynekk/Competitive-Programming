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
    ListNode * tmp;
    
    bool isPalindrome(ListNode* head) {
        tmp = head;
        return check(head);
    }
    
    bool check(ListNode* p) {
        if(!p){
            return true;
        }
        bool isPal = check(p->next) && (tmp->val == p->val);
        tmp = tmp->next;
        return isPal;
    }
};