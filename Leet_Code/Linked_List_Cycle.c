/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode * x1 = head;
    struct ListNode * x2 = head;
    if (head == NULL || head->next == NULL){
        return 0;
    }
    while (x1 && x2 && x2->next){
        x1 = x1->next;
        x2 = x2->next->next;
        if (x1 == x2) return 1;
    }return 0;
}
