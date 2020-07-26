/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *fake = head;
    if (fake == NULL){
        return;
    }
    while (fake->next != NULL){
        if (fake->val == fake->next->val){
            fake->next = fake->next->next;
        }else{
            fake = fake->next;
        }
    }return head;
}
