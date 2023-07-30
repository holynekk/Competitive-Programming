/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        ListNode dummy = head;
        int size = 0, mid;
        while (dummy != null) {
            size++;
            dummy = dummy.next;
        }
        if (size <= 1) {
            return head.next;
        }
        size = size/2;
        dummy = new ListNode(0, head);
        while (size-- > 0) {
            dummy = dummy.next;
        }
        dummy.next = dummy.next.next;
        return head;
    }
}