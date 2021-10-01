class Solution {
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode[] ans = new ListNode[k];
        ListNode mv = head, a;
        int n = len(head), i = 0;
        while (mv != null) {
            int c = n/k + ((i < n%k) ? 1 : 0);
            ans[i] = mv;
            a = mv;
            while (c-- > 1) {
                a = a.next;
            }
            mv = a.next;
            a.next = null;
            i++;
        }
        return ans;
    }
    private int len(ListNode h) {
        int n = 0;
        while (h != null) {
            n++;
            h = h.next;
        }
        return n;
    }
}
