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

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode ans = new ListNode();
        ListNode tail = ans;
        int carry = 0;
        while (true) {
            int v1 = l1 == null ? 0 : l1.val;
            int v2 = l2 == null ? 0 : l2.val;
            if (l1 != null) l1 = l1.next;
            if(l2 != null) l2 = l2.next;
            int sum = carry + v1 + v2;
            tail.val = sum % 10;
            carry = sum / 10;
            if (l1 == null && l2 == null && carry == 0) break;
            tail.next = new ListNode();
            tail = tail.next;
        }
        return ans;
    }
}
