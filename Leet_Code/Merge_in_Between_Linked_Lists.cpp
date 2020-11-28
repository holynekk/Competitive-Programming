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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * ap = list1, * bp = list1;
        a--;
        while(a--) ap = ap->next;
        while(b--) bp = bp->next;
        ap->next = list2;
        while(list2->next){
            list2 = list2->next;
        }list2->next = bp->next;
        return list1;
    }
};