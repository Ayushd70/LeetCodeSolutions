class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if  head is None or head.next is None: return False
        slow = fast = head
        while fast is not None and fast.next is not None:
            #slow = slow.next
            fast = fast.next.next
            slow = slow.next
            if fast == slow: return True
            
        return False
