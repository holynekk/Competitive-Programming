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
    public int pairSum(ListNode head) {
        int result = 0;
        ListNode slow = head, fast = head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }

        ListNode dummy, prev = null;
        while (slow != null) {
            dummy = slow.next;
            slow.next = prev;
            prev = slow;
            slow = dummy;
        }
        while (prev != null) {
            result = Math.max(result, head.val + prev.val);
            prev = prev.next;
            head = head.next;
        }
        return result;
    }
}